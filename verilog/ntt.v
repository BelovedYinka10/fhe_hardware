`timescale 1ns/1ps
// ================================================================
// ntt.v  —  Iterative NTT / INTT engine
//
// Forward : Cooley–Tukey   (Normal-order  → Bit-reversed)
// Inverse : Gentleman–Sande (Bit-reversed → Normal-order)
//
// Architecture: one butterfly per 2-clock micro-cycle (READ→WRITE)
//
// IMPORTANT – modular multiply uses Verilog % operator.
// This is BEHAVIOURAL and works in Verilator simulation.
// For FPGA/ASIC synthesis, replace mod_mul with a Barrett or
// Montgomery multiplier.
//
// Parameters
//   LOGN    : log2(N)  — polynomial degree N = 2^LOGN  (default 13)
//   Q_WIDTH : bit-width of prime modulus q             (default 40)
// ================================================================
module ntt #(
    parameter  LOGN    = 13,
    parameter  Q_WIDTH = 40
)(
    input  wire                  clk,
    input  wire                  rst_n,

    // ── Runtime modulus ──────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]    q,
    input  wire [Q_WIDTH-1:0]    n_inv,    // N^{-1} mod q (INTT only)

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
    output reg  [Q_WIDTH-1:0]    rd_data,

    output reg                   done
);

    // ── Constants ─────────────────────────────────────────────────
    localparam integer N       = 1 << LOGN;
    localparam integer K_MAX   = N/2 - 1;   // max butterfly index per stage
    localparam integer S_MAX   = LOGN - 1;  // max stage index

    // ── Memories ──────────────────────────────────────────────────
    reg [Q_WIDTH-1:0] coeff [0:N-1];        // coefficient RAM
    reg [Q_WIDTH-1:0] tw    [0:2*N-1];      // twiddle ROM (fwd + inv)

    // ── FSM states ────────────────────────────────────────────────
    localparam [2:0]
        ST_IDLE  = 3'd0,
        ST_READ  = 3'd1,
        ST_WRITE = 3'd2,
        ST_SCALE = 3'd3,   // INTT: multiply all coeffs by n_inv
        ST_DONE  = 3'd4;

    reg [2:0]        state;
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

    wire [LOGN:0] tw_base = inv_r ? N[LOGN:0] : {(LOGN+1){1'b0}};
    wire [LOGN:0] tw_idx  = tw_base + {1'b0, m_val} + {1'b0, grp};

    // ── Latched butterfly operands ────────────────────────────────
    reg [Q_WIDTH-1:0] u_r, v_r, w_r;

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

    // mod_mul : (a * b) mod q  [BEHAVIOURAL — Verilator only]
    function automatic [Q_WIDTH-1:0] mod_mul;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [2*Q_WIDTH-1:0] p, r;
        begin
            p = {{Q_WIDTH{1'b0}}, a} * {{Q_WIDTH{1'b0}}, b};
            r = p % {{Q_WIDTH{1'b0}}, qq};
            mod_mul = r[Q_WIDTH-1:0];   // explicit truncate: result < qq < 2^Q_WIDTH
        end
    endfunction

    // ── Butterfly results (combinational from latched operands) ───
    //
    // Cooley–Tukey (NTT):     u' = u + v·w,   v' = u - v·w
    // Gentleman–Sande (INTT): u' = u + v,      v' = (u - v)·w

    wire [Q_WIDTH-1:0] vw     = mod_mul(v_r, w_r, q);
    wire [Q_WIDTH-1:0] ct_u   = mod_add(u_r, vw,  q);
    wire [Q_WIDTH-1:0] ct_v   = mod_sub(u_r, vw,  q);

    wire [Q_WIDTH-1:0] gs_u   = mod_add(u_r, v_r, q);
    wire [Q_WIDTH-1:0] gs_dif = mod_sub(u_r, v_r, q);
    wire [Q_WIDTH-1:0] gs_v   = mod_mul(gs_dif, w_r, q);

    // ── FSM ───────────────────────────────────────────────────────
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state  <= ST_IDLE;
            done   <= 1'b0;
            stage  <= 0;
            k      <= 0;
            sc_idx <= 0;
        end else begin
            // Write ports — always active (load before start)
            if (tw_wr_en)    tw[tw_wr_addr]       <= tw_wr_data;
            if (coeff_wr_en) coeff[coeff_wr_addr] <= coeff_wr_data;

            // Read port — registered, 1-cycle latency
            rd_data <= coeff[rd_addr];

            case (state)

                // ── Wait for start pulse ──────────────────────────
                ST_IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        stage <= 0;
                        k     <= 0;
                        inv_r <= inverse;
                        state <= ST_READ;
                    end
                end

                // ── Latch operands from memory ────────────────────
                ST_READ: begin
                    u_r   <= coeff[ua];
                    v_r   <= coeff[va];
                    w_r   <= tw[tw_idx];
                    state <= ST_WRITE;
                end

                // ── Write butterfly result, advance counters ──────
                ST_WRITE: begin
                    coeff[ua] <= inv_r ? gs_u : ct_u;
                    coeff[va] <= inv_r ? gs_v : ct_v;

                    if (k == K_MAX[LOGN-1:0]) begin
                        k <= 0;
                        if (stage == S_MAX[LOGN-1:0]) begin
                            // All LOGN stages complete
                            sc_idx <= 0;
                            state  <= inv_r ? ST_SCALE : ST_DONE;
                        end else begin
                            stage <= stage + 1'b1;
                            state <= ST_READ;
                        end
                    end else begin
                        k     <= k + 1'b1;
                        state <= ST_READ;
                    end
                end

                // ── INTT final: coeff[i] *= n_inv mod q ──────────
                ST_SCALE: begin
                    if (sc_idx < N[LOGN:0]) begin
                        coeff[sc_idx[LOGN-1:0]] <=
                            mod_mul(coeff[sc_idx[LOGN-1:0]], n_inv, q);
                        sc_idx <= sc_idx + 1'b1;
                    end else begin
                        state <= ST_DONE;
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
