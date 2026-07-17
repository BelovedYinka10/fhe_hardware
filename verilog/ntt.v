`timescale 1ns/1ps
// ================================================================
// ntt.v  —  Iterative NTT / INTT engine
//
// Forward : Cooley–Tukey   (Normal-order  → Bit-reversed)
// Inverse : Gentleman–Sande (Bit-reversed → Normal-order)
//
// Architecture: one butterfly per 2-clock micro-cycle (READ→WRITE)
//
// Modular multiply uses Barrett reduction (synthesizable).
// q_neg_inv = -q^{-1} mod 2^64 must be precomputed and
// supplied as a runtime input port.
//
// Memory architecture (BRAM-friendly):
//   coeff[]  — true dual-port BRAM.
//       Port A: coefficient load, butterfly operand u, INTT scale,
//               and the result read-back (rd_addr) port.
//       Port B: butterfly operand v.
//     Both ports use a registered read (1-cycle latency) and never
//     read/write the same address in the same cycle, so the array
//     infers cleanly as Block RAM (2 ports max).
//   tw[]     — simple dual-port BRAM (1 write port, 1 registered
//              read port).
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
    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] coeff [0:N-1];        // coefficient RAM (true dual-port)
    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] tw    [0:2*N-1];      // twiddle ROM (simple dual-port)

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

    wire [LOGN:0] tw_base = inv_r ? N[LOGN:0] : {(LOGN+1){1'b0}};
    wire [LOGN:0] tw_idx  = tw_base + {1'b0, m_val} + {1'b0, grp};

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

    // mod_mul : Montgomery modular multiply — MonPro(a, b) = a·b·R⁻¹ mod q
    //   R = 2^64 (fixed for all Q_WIDTH ≤ 64)
    //   q_neg_inv = -q⁻¹ mod 2^64  (precomputed, supplied as port)
    //
    // Usage contract (three dedicated paths — see paper Sec. 3.2):
    //   CT butterfly  : MonPro(v,  tw)      tw  stored as tw·R mod q
    //   GS butterfly  : MonPro(Δ,  tw)      same twiddle convention
    //   INTT scaling  : MonPro(c,  n_inv)   n_inv stored as N⁻¹·R mod q
    //   → coefficients remain in normal form [0,q) throughout.
    //
    //   t   [127:0]  — a·b zero-extended to 128 bits
    //   m   [ 63:0]  — (t mod 2^64)·q_neg_inv mod 2^64
    //   mq  [127:0]  — m·q zero-extended
    //   s   [128:0]  — t + mq  (≤ 2^125 < 2^129)
    //   u   [Q:0]    — s >> 64  (< 2q, one correction needed)
    function [Q_WIDTH-1:0] mod_mul;
        input [Q_WIDTH-1:0] a, b;
        reg [127:0]     t;
        reg [63:0]      m;
        reg [127:0]     mq;
        reg [128:0]     s;
        reg [Q_WIDTH:0] u;
        begin
            t  = {{(128-Q_WIDTH){1'b0}}, a} * {{(128-Q_WIDTH){1'b0}}, b};
            m  = t[63:0] * q_neg_inv;            // lower 64-bit (Verilog truncates)
            mq = {64'b0, m} * {{(128-Q_WIDTH){1'b0}}, q};
            s  = {1'b0, t} + {1'b0, mq};
            u  = s[128:64];
            mod_mul = (u[Q_WIDTH:0] >= {1'b0, q}) ? u[Q_WIDTH-1:0] - q
                                                   : u[Q_WIDTH-1:0];
        end
    endfunction

    // ── Registered memory outputs (1-cycle read latency) ──────────
    reg [Q_WIDTH-1:0] cdo;            // coeff read data (single read port)
    reg [Q_WIDTH-1:0] tdo;            // twiddle read data

    // Latched butterfly operands: u = coeff[ua], v = coeff[va], w = tw[tw_idx]
    reg [Q_WIDTH-1:0] u_r, v_r, w_r;
    wire [Q_WIDTH-1:0] u_w = u_r;
    wire [Q_WIDTH-1:0] v_w = v_r;
    wire [Q_WIDTH-1:0] w_w = w_r;

    // ── Butterfly results (combinational from registered operands) ─
    //
    // Cooley–Tukey (NTT):     u' = u + v·w,   v' = u - v·w
    // Gentleman–Sande (INTT): u' = u + v,      v' = (u - v)·w

    // Three dedicated multiplier paths (paper Sec. 3.2):
    //   CT_MM  — CT butterfly twiddle multiply (FNTT)
    //   GS_MM  — GS butterfly twiddle multiply (INTT)
    //   SCALE  — INTT final N⁻¹ scaling
    wire [Q_WIDTH-1:0] vw     = mod_mul(v_w, w_w);       // CT_MM
    wire [Q_WIDTH-1:0] ct_u   = mod_add(u_w, vw,  q);
    wire [Q_WIDTH-1:0] ct_v   = mod_sub(u_w, vw,  q);

    wire [Q_WIDTH-1:0] gs_u   = mod_add(u_w, v_w, q);
    wire [Q_WIDTH-1:0] gs_dif = mod_sub(u_w, v_w, q);
    wire [Q_WIDTH-1:0] gs_v   = mod_mul(gs_dif, w_w);    // GS_MM

    // INTT final scale: coeff[sc_idx] · N⁻¹·R mod q → coeff·N⁻¹ mod q
    wire [Q_WIDTH-1:0] scaled = mod_mul(cdo, n_inv);      // SCALE

    // ── Coefficient memory port control (combinational mux) ───────
    // One read port (craddr → cdo) and one write port (cwaddr/cwdata/cwe).
    reg [LOGN-1:0]    craddr, cwaddr;
    reg               cwe, cre;
    reg [Q_WIDTH-1:0] cwdata;

    // cre gates the read port. It is asserted only in the states that issue a
    // read, which keeps the write states from reading coeff[ua] while writing
    // it — a same-address read-during-write that blocks Block RAM inference.
    always @* begin
        // Defaults: no write, no read; read the u operand address.
        craddr = ua;
        cwaddr = ua;
        cwe    = 1'b0;
        cre    = 1'b0;
        cwdata = inv_r ? gs_u : ct_u;

        case (state)
            ST_IDLE: begin
                // Result-poll read; host coefficient load uses write port.
                craddr = rd_addr;
                cre    = 1'b1;
                if (coeff_wr_en) begin
                    cwe    = 1'b1;
                    cwaddr = coeff_wr_addr;
                    cwdata = coeff_wr_data;
                end
            end

            ST_RD_U: begin craddr = ua; cre = 1'b1; end   // read u
            ST_RD_V: begin craddr = va; cre = 1'b1; end   // read v

            ST_WR_U: begin                           // write u'
                cwe    = 1'b1;
                cwaddr = ua;
                cwdata = inv_r ? gs_u : ct_u;
            end
            ST_WR_V: begin                           // write v'
                cwe    = 1'b1;
                cwaddr = va;
                cwdata = inv_r ? gs_v : ct_v;
            end

            ST_SCALE_RD: begin craddr = sc_idx[LOGN-1:0]; cre = 1'b1; end
            ST_SCALE_WR: begin
                cwe    = 1'b1;
                cwaddr = sc_idx[LOGN-1:0];
                cwdata = scaled;
            end

            default: ;
        endcase
    end

    // ── Coefficient RAM: simple dual-port (1 write, 1 registered read) ─
    // Same template as the twiddle RAM below — infers Block RAM cleanly.
    always @(posedge clk) begin
        if (cwe) coeff[cwaddr] <= cwdata;
        if (cre) cdo <= coeff[craddr];
    end

    // ── Twiddle RAM: simple dual-port (1 write, 1 registered read) ─
    always @(posedge clk) begin
        if (tw_wr_en) tw[tw_wr_addr] <= tw_wr_data;
        tdo <= tw[tw_idx];
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