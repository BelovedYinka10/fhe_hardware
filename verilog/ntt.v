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
    (* ram_style = "block" *) (* rw_addr_collision = "no" *)
    reg [Q_WIDTH-1:0] coeff   [0:N-1];   // coefficient RAM
    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] tw_fwd  [0:N-1];   // forward twiddle table
    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] tw_inv  [0:N-1];   // inverse twiddle table

    // ── FSM states ────────────────────────────────────────────────
    // The coefficient RAM is a single read-port + single write-port
    // (simple dual-port) Block RAM, so each butterfly serialises its two
    // reads and two writes across separate cycles.
    localparam [3:0]
        ST_IDLE     = 4'd0,
        ST_RD_U     = 4'd1,   // issue read of coeff[ua] (+ tw[tw_idx])
        ST_RD_V     = 4'd2,   // latch u,w; issue read of coeff[va]
        ST_CALC     = 4'd3,   // latch v; butterfly result now valid
        ST_WR_U     = 4'd4,   // write coeff[ua] = u'
        ST_WR_V     = 4'd5,   // write coeff[va] = v'; advance counters
        ST_SCALE_RD = 4'd6,   // INTT: issue read of coeff[sc_idx]
        ST_SCALE_WR = 4'd7,   // INTT: write coeff[sc_idx] * n_inv
        ST_DONE     = 4'd8;

    reg [3:0]        state;
    reg [LOGN-1:0]   stage;     // current stage 0..LOGN-1
    reg [LOGN-1:0]   k;         // butterfly index within stage 0..N/2-1
    reg              inv_r;     // latched inverse flag
    reg [LOGN:0]     sc_idx;    // scale counter 0..N

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
    reg [Q_WIDTH-1:0] cdo;              // coeff read data
    reg [Q_WIDTH-1:0] tdo_fwd, tdo_inv; // split twiddle read data

    // Latched butterfly operands
    reg [Q_WIDTH-1:0] u_r, v_r, w_r;
    wire [Q_WIDTH-1:0] u_w = u_r;
    wire [Q_WIDTH-1:0] v_w = v_r;
    wire [Q_WIDTH-1:0] w_w = w_r;
    wire [Q_WIDTH-1:0] tdo = inv_r ? tdo_inv : tdo_fwd;

    // ── Three dedicated Montgomery multiply paths (paper Sec. 3.2) ──
    //
    // MonPro(a,b) = a·b·R⁻¹ mod q, R = 2^64
    // t = a·b → m = t[63:0]·q_neg_inv mod 2^64 → r = (t+m·q)>>64 → correct
    // carry: by Montgomery t[63:0]+mq[63:0] ≡ 0 (mod 2^64)
    //        so carry = 1 iff t[63:0] ≠ 0 (OR-reduction)
    // Operands at true widths (Q_WIDTH×Q_WIDTH, 64×64, 64×Q_WIDTH)
    // so Vivado maps multiplications to DSPs directly.

    // CT_MM — twiddle multiply for CT butterfly: MonPro(v, w)
    (* use_dsp = "yes" *) wire [2*Q_WIDTH-1:0] ct_t  = v_w * w_w;
    (* use_dsp = "yes" *) wire [63:0]          ct_m  = ct_t[63:0] * q_neg_inv;
    (* use_dsp = "yes" *) wire [Q_WIDTH+63:0]  ct_mq = ct_m * q;
    wire [Q_WIDTH:0] ct_r = {1'b0, ct_t[2*Q_WIDTH-1:64]}
                          + {1'b0, ct_mq[Q_WIDTH+63:64]}
                          + {{Q_WIDTH{1'b0}}, |ct_t[63:0]};

    // GS_MM — twiddle multiply for GS butterfly: MonPro(u-v, w)
    wire [Q_WIDTH-1:0] gs_dif = mod_sub(u_w, v_w, q);
    (* use_dsp = "yes" *) wire [2*Q_WIDTH-1:0] gs_t  = gs_dif * w_w;
    (* use_dsp = "yes" *) wire [63:0]          gs_m  = gs_t[63:0] * q_neg_inv;
    (* use_dsp = "yes" *) wire [Q_WIDTH+63:0]  gs_mq = gs_m * q;
    wire [Q_WIDTH:0] gs_r = {1'b0, gs_t[2*Q_WIDTH-1:64]}
                          + {1'b0, gs_mq[Q_WIDTH+63:64]}
                          + {{Q_WIDTH{1'b0}}, |gs_t[63:0]};

    // SCALE — INTT final N⁻¹ scaling: MonPro(cdo, n_inv)
    (* use_dsp = "yes" *) wire [2*Q_WIDTH-1:0] sc_t  = cdo * n_inv;
    (* use_dsp = "yes" *) wire [63:0]          sc_m  = sc_t[63:0] * q_neg_inv;
    (* use_dsp = "yes" *) wire [Q_WIDTH+63:0]  sc_mq = sc_m * q;
    wire [Q_WIDTH:0] sc_r = {1'b0, sc_t[2*Q_WIDTH-1:64]}
                          + {1'b0, sc_mq[Q_WIDTH+63:64]}
                          + {{Q_WIDTH{1'b0}}, |sc_t[63:0]};

    // ── Butterfly results (FSM references these names) ────────────
    // Cooley–Tukey:      u' = u + v·w,  v' = u - v·w
    // Gentleman–Sande:   u' = u + v,    v' = (u-v)·w
    wire [Q_WIDTH-1:0] vw     = ct_r[Q_WIDTH:0] >= {1'b0, q} ? ct_r[Q_WIDTH-1:0] - q
                                                               : ct_r[Q_WIDTH-1:0];
    wire [Q_WIDTH-1:0] ct_u   = mod_add(u_w, vw,  q);
    wire [Q_WIDTH-1:0] ct_v   = mod_sub(u_w, vw,  q);
    wire [Q_WIDTH-1:0] gs_u   = mod_add(u_w, v_w, q);
    wire [Q_WIDTH-1:0] gs_v   = gs_r[Q_WIDTH:0] >= {1'b0, q} ? gs_r[Q_WIDTH-1:0] - q
                                                               : gs_r[Q_WIDTH-1:0];
    wire [Q_WIDTH-1:0] scaled = sc_r[Q_WIDTH:0] >= {1'b0, q} ? sc_r[Q_WIDTH-1:0] - q
                                                               : sc_r[Q_WIDTH-1:0];

    // ── Coefficient memory port control (combinational mux) ───────
    // One read port (craddr → cdo) and one write port (cwaddr/cwdata/cwe).
    reg [LOGN-1:0]    craddr, cwaddr;
    reg               cwe;
    reg [Q_WIDTH-1:0] cwdata;

    always @* begin
        craddr = ua;
        cwaddr = ua;
        cwe    = 1'b0;
        cwdata = inv_r ? gs_u : ct_u;

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
            ST_WR_U: begin cwe = 1'b1; cwaddr = ua; cwdata = inv_r ? gs_u : ct_u; craddr = va; end
            ST_WR_V: begin cwe = 1'b1; cwaddr = va; cwdata = inv_r ? gs_v : ct_v; craddr = ua; end
            ST_SCALE_RD: craddr = sc_idx[LOGN-1:0];
            ST_SCALE_WR: begin cwe = 1'b1; cwaddr = sc_idx[LOGN-1:0]; cwdata = scaled; craddr = sc_idx[LOGN-1:0]; end
            default: ;
        endcase
    end

    // ── Coefficient RAM: separate write and read always blocks ────────
    // Vivado BRAM inference is most reliable when write and read are in
    // separate processes. Read is ungated — cdo is only consumed in states
    // that issued a read the previous cycle, so stale reads are harmless.
    always @(posedge clk) begin
        if (cwe) coeff[cwaddr] <= cwdata;
    end
    always @(posedge clk) begin
        if (!cwe) cdo <= coeff[craddr];
    end

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

                // ── Latch v; butterfly result valid next cycle ────
                ST_CALC: begin
                    v_r   <= cdo;     // cdo = coeff[va]
                    state <= ST_WR_U;
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
                ST_SCALE_RD: state <= ST_SCALE_WR;

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