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
// barrett_m = floor(2^(2·Q_WIDTH) / q) must be precomputed and
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
    input  wire [2*Q_WIDTH-1:0]  barrett_m, // floor(2^(2·Q_WIDTH) / q)

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
    localparam integer N         = 1 << LOGN;
    localparam integer K_MAX     = N/2 - 1;   // max butterfly index per stage
    localparam integer S_MAX     = LOGN - 1;  // max stage index
    localparam integer BARRETT_K = 2 * Q_WIDTH;   // shift amount for Barrett

    // ── Memories ──────────────────────────────────────────────────
    reg [Q_WIDTH-1:0] coeff [0:N-1];        // coefficient RAM (true dual-port)
    reg [Q_WIDTH-1:0] tw    [0:2*N-1];      // twiddle ROM (simple dual-port)

    // ── FSM states ────────────────────────────────────────────────
    localparam [2:0]
        ST_IDLE     = 3'd0,
        ST_READ     = 3'd1,
        ST_WRITE    = 3'd2,
        ST_SCALE_RD = 3'd3,   // INTT: issue read of coeff[sc_idx]
        ST_SCALE_WR = 3'd4,   // INTT: write coeff[sc_idx] * n_inv
        ST_DONE     = 3'd5;

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

    // mod_mul : (a * b) mod q  — Barrett reduction (synthesizable)
    //   barrett_m [2·Q_WIDTH-1:0] is read from the module input port.
    //   K  = 2·Q_WIDTH (shift amount)
    //   M  = floor(2^K / q) (precomputed constant)
    //
    //   p  [2·Q_WIDTH-1 : 0]  — product a·b           (< q^2 < 2^(2·Q_WIDTH))
    //   pm [4·Q_WIDTH-1 : 0]  — p · M                 (< 2^(4·Q_WIDTH))
    //   t  [2·Q_WIDTH-1 : 0]  — quotient est = pm>>K  (< q < 2^Q_WIDTH)
    //   tq [2·Q_WIDTH-1 : 0]  — t · q
    //   r  [2·Q_WIDTH-1 : 0]  — remainder ∈ [0, 2q), one correction
    function [Q_WIDTH-1:0] mod_mul;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [2*Q_WIDTH-1:0] p;
        reg [4*Q_WIDTH-1:0] pm;
        reg [Q_WIDTH:0]     t;
        reg [2*Q_WIDTH-1:0] tq;
        reg [2*Q_WIDTH-1:0] r;
        begin
            p  = a * b;
            pm = {{(2*Q_WIDTH){1'b0}}, p} * {{(2*Q_WIDTH){1'b0}}, barrett_m};
            t  = pm[4*Q_WIDTH-1 : 2*Q_WIDTH];
            tq = t * {1'b0, qq};
            r  = p - tq;
            if (r >= {{Q_WIDTH{1'b0}}, qq})
                r = r - {{Q_WIDTH{1'b0}}, qq};
            mod_mul = r[Q_WIDTH-1:0];
        end
    endfunction

    // ── Registered memory outputs (1-cycle read latency) ──────────
    reg [Q_WIDTH-1:0] cdo_a, cdo_b;   // coeff port A / port B read data
    reg [Q_WIDTH-1:0] tdo;            // twiddle read data

    // Operand aliases: by the time the FSM is in ST_WRITE these hold
    // coeff[ua], coeff[va], tw[tw_idx] that were addressed in ST_READ.
    wire [Q_WIDTH-1:0] u_w = cdo_a;
    wire [Q_WIDTH-1:0] v_w = cdo_b;
    wire [Q_WIDTH-1:0] w_w = tdo;

    // ── Butterfly results (combinational from registered operands) ─
    //
    // Cooley–Tukey (NTT):     u' = u + v·w,   v' = u - v·w
    // Gentleman–Sande (INTT): u' = u + v,      v' = (u - v)·w

    wire [Q_WIDTH-1:0] vw     = mod_mul(v_w, w_w, q);
    wire [Q_WIDTH-1:0] ct_u   = mod_add(u_w, vw,  q);
    wire [Q_WIDTH-1:0] ct_v   = mod_sub(u_w, vw,  q);

    wire [Q_WIDTH-1:0] gs_u   = mod_add(u_w, v_w, q);
    wire [Q_WIDTH-1:0] gs_dif = mod_sub(u_w, v_w, q);
    wire [Q_WIDTH-1:0] gs_v   = mod_mul(gs_dif, w_w, q);

    // INTT final scale: coeff[i] * n_inv mod q
    wire [Q_WIDTH-1:0] scaled = mod_mul(u_w, n_inv, q);

    // ── Coefficient memory port control (combinational mux) ───────
    reg [LOGN-1:0]    caddr_a, caddr_b;
    reg               cwe_a, cwe_b;
    reg [Q_WIDTH-1:0] cdi_a, cdi_b;

    always @* begin
        // Defaults: read butterfly operands, no writes
        caddr_a = ua;
        caddr_b = va;
        cwe_a   = 1'b0;
        cwe_b   = 1'b0;
        cdi_a   = inv_r ? gs_u : ct_u;
        cdi_b   = inv_r ? gs_v : ct_v;

        case (state)
            ST_IDLE: begin
                // Host loads coefficients here; otherwise drive the
                // result-poll address (rd_addr) onto port A.
                if (coeff_wr_en) begin
                    caddr_a = coeff_wr_addr;
                    cwe_a   = 1'b1;
                    cdi_a   = coeff_wr_data;
                end else begin
                    caddr_a = rd_addr;
                end
            end

            ST_READ: begin
                // Issue reads of u (port A) and v (port B)
                caddr_a = ua;
                caddr_b = va;
            end

            ST_WRITE: begin
                // Write butterfly results back to the same addresses
                caddr_a = ua;
                caddr_b = va;
                cwe_a   = 1'b1;
                cwe_b   = 1'b1;
            end

            ST_SCALE_RD: begin
                caddr_a = sc_idx[LOGN-1:0];
            end

            ST_SCALE_WR: begin
                caddr_a = sc_idx[LOGN-1:0];
                cwe_a   = 1'b1;
                cdi_a   = scaled;
            end

            default: ;
        endcase
    end

    // ── Coefficient RAM: true dual-port, registered reads ─────────
    always @(posedge clk) begin
        if (cwe_a) coeff[caddr_a] <= cdi_a;
        cdo_a <= coeff[caddr_a];

        if (cwe_b) coeff[caddr_b] <= cdi_b;
        cdo_b <= coeff[caddr_b];
    end

    // ── Twiddle RAM: simple dual-port (1 write, 1 registered read) ─
    always @(posedge clk) begin
        if (tw_wr_en) tw[tw_wr_addr] <= tw_wr_data;
        tdo <= tw[tw_idx];
    end

    // Result read-back: port A registered output (1-cycle latency)
    assign rd_data = cdo_a;

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
                        state <= ST_READ;
                    end
                end

                // ── Operands addressed; latched next cycle ────────
                ST_READ: state <= ST_WRITE;

                // ── Write butterfly result, advance counters ──────
                ST_WRITE: begin
                    if (k == K_MAX[LOGN-1:0]) begin
                        k <= 0;
                        if (stage == S_MAX[LOGN-1:0]) begin
                            // All LOGN stages complete
                            sc_idx <= 0;
                            state  <= inv_r ? ST_SCALE_RD : ST_DONE;
                        end else begin
                            stage <= stage + 1'b1;
                            state <= ST_READ;
                        end
                    end else begin
                        k     <= k + 1'b1;
                        state <= ST_READ;
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