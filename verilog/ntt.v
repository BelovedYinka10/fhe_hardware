`timescale 1ns/1ps
// ================================================================
// ntt.v  —  Iterative NTT / INTT engine
//
// Forward : Cooley–Tukey   (Normal-order  → Bit-reversed)
// Inverse : Gentleman–Sande (Bit-reversed → Normal-order)
//
// Architecture: one butterfly per 2-clock micro-cycle (READ→WRITE)
//
// Modular multiply uses Montgomery reduction (R=2^64, synthesizable).
// q_neg_inv = -q^{-1} mod 2^64 supplied as a runtime input port.
// Twiddle factors must be loaded in Montgomery form (tw * R mod q);
// n_inv must be loaded in Montgomery form (N^{-1} * R mod q).
//
// Memory architecture (BRAM-friendly):
//   coeff[]   — simple dual-port BRAM, N entries × Q_WIDTH bits.
//   tw_fwd[]  — simple dual-port BRAM, N entries × Q_WIDTH bits.
//   tw_inv[]  — simple dual-port BRAM, N entries × Q_WIDTH bits.
// Splitting the twiddle table into two N-entry arrays (instead of one
// 2*N-entry array) ensures each maps cleanly to 16 RAMB36E2 blocks at
// N=8192, Q_WIDTH=60, giving 48 BRAMs total — matching the paper.
//
// All memory access flows through exactly these ports; there is no
// asynchronous read-modify-write, which is what previously blocked
// Block-RAM inference and forced a ~1M-FF (unroutable) fallback.
//
// Parameters
//   LOGN    : log2(N)  — polynomial degree N = 2^LOGN  (default 13)
//   Q_WIDTH : bit-width of prime modulus q             (default 60)
// ================================================================
module ntt #(
    parameter  LOGN    = 13,
    parameter  Q_WIDTH = 60
)(
    input  wire                  clk,
    input  wire                  rst_n,

    // ── Runtime modulus ──────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]    q,
    input  wire [Q_WIDTH-1:0]    n_inv,    // N^{-1} mod q · R  (Montgomery form, INTT only)
    input  wire [63:0]           q_neg_inv, // -q^{-1} mod 2^64  (Montgomery constant)

    // ── Coefficient write port (load input polynomial) ───────────
    input  wire                  coeff_wr_en,
    input  wire [LOGN-1:0]       coeff_wr_addr,
    input  wire [Q_WIDTH-1:0]    coeff_wr_data,

    // ── Twiddle table write port (load precomputed values) ───────
    //   addr ∈ [0, N)   → forward table  (tables[0..N-1])
    //   addr ∈ [N, 2N)  → inverse table  (inv_tables[0..N-1])
    input  wire                  tw_wr_en,
    input  wire [LOGN:0]         tw_wr_addr,
    input  wire [Q_WIDTH-1:0]    tw_wr_data,

    // ── Control ───────────────────────────────────────────────────
    input  wire                  start,
    input  wire                  inverse,   // 0 = NTT, 1 = INTT

    // ── Coefficient read port (poll result after done) ───────────
    input  wire [LOGN-1:0]       rd_addr,
    output wire [Q_WIDTH-1:0]    rd_data,

    output reg                   done
);

    // ── Constants ─────────────────────────────────────────────────
    localparam integer N     = 1 << LOGN;
    localparam integer K_MAX = N/2 - 1;   // max butterfly index per stage
    localparam integer S_MAX = LOGN - 1;  // max stage index

    // ── Memories ──────────────────────────────────────────────────
    // Split into three N-entry BRAMs so each infers cleanly (16 BRAMs each
    // at N=8192, Q_WIDTH=60) rather than one 2*N-entry array that partially
    // falls back to LUT-RAM when Vivado struggles to cascade 32 BRAMs.
    // coeff[] replaced by XPM instantiation below — no inference needed
    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] tw_fwd  [0:N-1];   // forward twiddle table
    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] tw_inv  [0:N-1];   // inverse twiddle table

    // ── FSM states ────────────────────────────────────────────────
    // The coefficient RAM is a single read-port + single write-port
    // (simple dual-port) Block RAM, so each butterfly serialises its two
    // reads and two writes across separate cycles.
    localparam [3:0]
        ST_IDLE       = 4'd0,
        ST_RD_U       = 4'd1,   // issue read of coeff[ua] (+ tw[tw_idx])
        ST_RD_V       = 4'd2,   // latch u,w; issue read of coeff[va]
        ST_CALC       = 4'd3,   // latch v; butterfly result valid after this
        ST_PIPE       = 4'd9,   // register butterfly results (breaks DSP cone)
        ST_WR_U       = 4'd4,   // write coeff[ua] = u'
        ST_WR_V       = 4'd5,   // write coeff[va] = v'; advance counters
        ST_SCALE_RD   = 4'd6,   // INTT: issue read of coeff[sc_idx]
        ST_SCALE_PIPE = 4'd10,  // register scale result (breaks DSP cone)
        ST_SCALE_WR   = 4'd7,   // INTT: write coeff[sc_idx] * n_inv
        ST_DONE       = 4'd8;

    reg [3:0]        state;
    reg [LOGN-1:0]   stage;     // current stage 0..LOGN-1
    reg [LOGN-1:0]   k;         // butterfly index within stage 0..N/2-1
    reg              inv_r;     // latched inverse flag
    reg [LOGN:0]     sc_idx;    // scale counter 0..N

    // ── Pipeline registers — break the DSP→BRAM write-data cone ──────
    // Vivado's BRAM inference aborts when the write-data cone passes
    // through cascaded DSP multiplications.  Registering the butterfly
    // and scale outputs one cycle before the write reduces the cone to
    // a single FF output, which the inference engine accepts trivially.
    reg [Q_WIDTH-1:0] mon_result_r;  // registered output of shared Montgomery multiply

    // ── Address generation (combinational) ────────────────────────
    //
    // NTT  (CT):  ts = LOGN-1-stage  →  t = 2^ts shrinks each stage
    //             ms = stage         →  m = 2^ms grows  each stage
    //
    // INTT (GS):  ts = stage         →  t = 2^ts grows  each stage
    //             ms = LOGN-1-stage  →  m = 2^ms shrinks each stage
    //
    // For butterfly index k ∈ [0, N/2):
    //   group   = k >> ts           (which pair group)
    //   offset  = k  & (t-1)        (offset within group)
    //   u_addr  = (group << ts+1) | offset
    //   v_addr  = u_addr | t
    //   tw_idx  = fwd/inv_base + m + group

    // Use a same-width constant to avoid 32-bit vs LOGN-bit mismatches
    localparam [LOGN-1:0] LOGN_1 = LOGN - 1;
    wire [LOGN-1:0] ts    = inv_r ? stage            : (LOGN_1 - stage);
    wire [LOGN-1:0] ms    = inv_r ? (LOGN_1 - stage) : stage;

    wire [LOGN-1:0] t_val = {{(LOGN-1){1'b0}}, 1'b1} << ts;
    wire [LOGN-1:0] m_val = {{(LOGN-1){1'b0}}, 1'b1} << ms;

    wire [LOGN-1:0] grp   = k >> ts;
    wire [LOGN-1:0] off   = k & (t_val - 1'b1);

    wire [LOGN-1:0] ua    = (grp << (ts + 1'b1)) | off;
    wire [LOGN-1:0] va    = ua | t_val;

    // Twiddle index: same for both tables — table selected by inv_r at read time
    wire [LOGN-1:0] tw_addr = m_val + grp;

    // ── Behavioural modular arithmetic ────────────────────────────
    // mod_add : (a + b) mod q
    function automatic [Q_WIDTH-1:0] mod_add;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [Q_WIDTH:0] s;
        begin
            s = {1'b0, a} + {1'b0, b};
            mod_add = (s >= {1'b0, qq}) ? s[Q_WIDTH-1:0] - qq
                                        : s[Q_WIDTH-1:0];
        end
    endfunction

    // mod_sub : (a - b + q) mod q
    function automatic [Q_WIDTH-1:0] mod_sub;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [Q_WIDTH:0] d;
        begin
            d = {1'b0, a} + {1'b0, qq} - {1'b0, b};
            mod_sub = (d >= {1'b0, qq}) ? d[Q_WIDTH-1:0] - qq
                                        : d[Q_WIDTH-1:0];
        end
    endfunction

    // ── Registered memory outputs (1-cycle read latency) ──────────
    wire [Q_WIDTH-1:0] cdo;             // coeff read data (driven by XPM)
    reg [Q_WIDTH-1:0] tdo_fwd, tdo_inv; // split twiddle read data

    // Latched butterfly operands
    reg [Q_WIDTH-1:0] u_r, v_r, w_r;
    wire [Q_WIDTH-1:0] tdo = inv_r ? tdo_inv : tdo_fwd;

    // ── Shared Montgomery multiply (MonPro) ────────────────────────
    // CT_MM, GS_MM, and SCALE are mutually exclusive — only one runs
    // per FSM state — so a single shared datapath replaces three,
    // cutting DSPs from 96 → 32 and logic LUTs by ~⅔.
    //
    // Input mux (combinational):
    //   butterfly (ST_PIPE):       mon_a = v_r (CT) or u_r−v_r (GS),  mon_b = w_r
    //   scale     (ST_SCALE_PIPE): mon_a = cdo,                         mon_b = n_inv
    wire is_scale = (state == ST_SCALE_PIPE);
    wire [Q_WIDTH-1:0] gs_dif  = mod_sub(u_r, v_r, q);
    wire [Q_WIDTH-1:0] mon_a   = is_scale ? cdo   : (inv_r ? gs_dif : v_r);
    wire [Q_WIDTH-1:0] mon_b   = is_scale ? n_inv : w_r;

    // MonPro(mon_a, mon_b) = mon_a·mon_b·R⁻¹ mod q,  R = 2^64
    (* use_dsp = "yes" *) wire [2*Q_WIDTH-1:0] mon_t  = mon_a * mon_b;
    (* use_dsp = "yes" *) wire [63:0]          mon_m  = mon_t[63:0] * q_neg_inv;
    (* use_dsp = "yes" *) wire [Q_WIDTH+63:0]  mon_mq = mon_m * q;
    wire [Q_WIDTH:0]   mon_r  = {1'b0, mon_t[2*Q_WIDTH-1:64]}
                               + {1'b0, mon_mq[Q_WIDTH+63:64]}
                               + {{Q_WIDTH{1'b0}}, |mon_t[63:0]};
    wire [Q_WIDTH-1:0] mon_result = (mon_r[Q_WIDTH:0] >= {1'b0, q})
                                    ? mon_r[Q_WIDTH-1:0] - q
                                    : mon_r[Q_WIDTH-1:0];

    // ── Coefficient memory port control (combinational mux) ───────
    // One read port (craddr → cdo) and one write port (cwaddr/cwdata/cwe).
    reg [LOGN-1:0]    craddr, cwaddr;
    reg               cwe;
    reg [Q_WIDTH-1:0] cwdata;

    always @* begin
        craddr = ua;
        cwaddr = ua;
        cwe    = 1'b0;
        // default: mon_result_r safe while cwe=0
        cwdata = mon_result_r;

        case (state)
            ST_IDLE: begin
                craddr = rd_addr;
                if (coeff_wr_en) begin
                    cwe    = 1'b1;
                    cwaddr = coeff_wr_addr;
                    cwdata = coeff_wr_data;
                end
            end
            ST_RD_U: craddr = ua;
            ST_RD_V: craddr = va;
            // CT: u'= u+vw,  v'= u-vw   (vw = mon_result_r)
            // GS: u'= u+v,   v'= (u-v)w (gs_v = mon_result_r)
            ST_WR_U: begin
                cwe    = 1'b1;
                cwaddr = ua;
                cwdata = inv_r ? mod_add(u_r, v_r, q) : mod_add(u_r, mon_result_r, q);
                craddr = va;
            end
            ST_WR_V: begin
                cwe    = 1'b1;
                cwaddr = va;
                cwdata = inv_r ? mon_result_r : mod_sub(u_r, mon_result_r, q);
                craddr = ua;
            end
            ST_SCALE_RD: craddr = sc_idx[LOGN-1:0];
            ST_SCALE_WR: begin
                cwe    = 1'b1;
                cwaddr = sc_idx[LOGN-1:0];
                cwdata = mon_result_r;
                craddr = sc_idx[LOGN-1:0];
            end
            default: ;
        endcase
    end

    // ── Coefficient RAM: XPM SDP block RAM ───────────────────────────
    // xpm_memory_sdpram guarantees RAMB36E2 placement — no inference
    // uncertainty, no LUTRAM fallback regardless of write-data cone depth.
    // WRITE_MODE_B = no_change: doutb held during writes (matches FSM).
    // READ_LATENCY_B = 1: one registered clock from addrb to doutb.
    xpm_memory_sdpram #(
        .ADDR_WIDTH_A       (LOGN),
        .ADDR_WIDTH_B       (LOGN),
        .BYTE_WRITE_WIDTH_A (Q_WIDTH),
        .CLOCKING_MODE      ("common_clock"),
        .MEMORY_PRIMITIVE   ("block"),
        .MEMORY_SIZE        (N * Q_WIDTH),
        .READ_DATA_WIDTH_B  (Q_WIDTH),
        .READ_LATENCY_B     (1),
        .WRITE_DATA_WIDTH_A (Q_WIDTH),
        .WRITE_MODE_B       ("no_change"),
        .ECC_MODE           ("no_ecc"),
        .USE_MEM_INIT       (0),
        .AUTO_SLEEP_TIME    (0),
        .MESSAGE_CONTROL    (0),
        .SIM_ASSERT_CHK     (0),
        .RST_MODE_A         ("SYNC"),
        .RST_MODE_B         ("SYNC"),
        .WAKEUP_TIME        ("disable_sleep")
    ) u_coeff_mem (
        .clka           (clk),
        .ena            (cwe),
        .wea            (1'b1),
        .addra          (cwaddr),
        .dina           (cwdata),
        .clkb           (clk),
        .enb            (!cwe),
        .addrb          (craddr),
        .doutb          (cdo),
        .injectsbiterra (1'b0),
        .injectdbiterra (1'b0),
        .regceb         (1'b0),
        .rstb           (1'b0),
        .sleep          (1'b0),
        .sbiterrb       (),
        .dbiterrb       ()
    );

    // ── Twiddle RAMs: separate write and read always blocks ───────────
    // Four always blocks (write + read for each of tw_fwd and tw_inv)
    // gives Vivado the clearest possible SDP-BRAM inference signal.
    always @(posedge clk) begin
        if (tw_wr_en && !tw_wr_addr[LOGN])
            tw_fwd[tw_wr_addr[LOGN-1:0]] <= tw_wr_data;
    end
    always @(posedge clk) begin
        tdo_fwd <= tw_fwd[tw_addr];
    end

    always @(posedge clk) begin
        if (tw_wr_en && tw_wr_addr[LOGN])
            tw_inv[tw_wr_addr[LOGN-1:0]] <= tw_wr_data;
    end
    always @(posedge clk) begin
        tdo_inv <= tw_inv[tw_addr];
    end

    // Result read-back: coeff read output (1-cycle latency)
    assign rd_data = cdo;

    // ── Control FSM ───────────────────────────────────────────────
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state  <= ST_IDLE;
            done   <= 1'b0;
            stage  <= 0;
            k      <= 0;
            sc_idx <= 0;
            inv_r  <= 1'b0;
        end else begin
            case (state)

                // ── Wait for start pulse ──────────────────────────
                ST_IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        stage <= 0;
                        k     <= 0;
                        inv_r <= inverse;
                        state <= ST_RD_U;
                    end
                end

                // ── Issue read of coeff[ua] (and tw[tw_idx]) ──────
                ST_RD_U: state <= ST_RD_V;

                // ── Latch u, w; issue read of coeff[va] ───────────
                ST_RD_V: begin
                    u_r   <= cdo;     // cdo = coeff[ua]
                    w_r   <= tdo;     // tdo = tw[tw_idx]
                    state <= ST_CALC;
                end

                // ── Latch v; go to pipeline stage ────────────────
                ST_CALC: begin
                    v_r   <= cdo;     // cdo = coeff[va]
                    state <= ST_PIPE;
                end

                // ── Run shared Montgomery multiply, latch result ──────
                // mon_a/mon_b are combinational from settled u_r/v_r/w_r.
                ST_PIPE: begin
                    mon_result_r <= mon_result;
                    state        <= ST_WR_U;
                end

                // ── Write coeff[ua] = u' ──────────────────────────
                ST_WR_U: state <= ST_WR_V;

                // ── Write coeff[va] = v'; advance counters ────────
                ST_WR_V: begin
                    if (k == K_MAX[LOGN-1:0]) begin
                        k <= 0;
                        if (stage == S_MAX[LOGN-1:0]) begin
                            // All LOGN stages complete
                            sc_idx <= 0;
                            state  <= inv_r ? ST_SCALE_RD : ST_DONE;
                        end else begin
                            stage <= stage + 1'b1;
                            state <= ST_RD_U;
                        end
                    end else begin
                        k     <= k + 1'b1;
                        state <= ST_RD_U;
                    end
                end

                // ── INTT final scale: issue read of coeff[sc_idx] ─
                ST_SCALE_RD: state <= ST_SCALE_PIPE;

                // ── Run shared Montgomery multiply for scale, latch ───
                ST_SCALE_PIPE: begin
                    mon_result_r <= mon_result;
                    state        <= ST_SCALE_WR;
                end

                // ── INTT final scale: write coeff[sc_idx]*n_inv ───
                ST_SCALE_WR: begin
                    if (sc_idx == N[LOGN:0] - 1'b1) begin
                        state <= ST_DONE;
                    end else begin
                        sc_idx <= sc_idx + 1'b1;
                        state  <= ST_SCALE_RD;
                    end
                end

                // ── Assert done for one cycle, return to IDLE ─────
                ST_DONE: begin
                    done  <= 1'b1;
                    state <= ST_IDLE;
                end

                default: state <= ST_IDLE;

            endcase
        end
    end

endmodule