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
    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] coeff [0:N-1];        // coefficient RAM (true dual-port)
    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] tw    [0:2*N-1];      // twiddle ROM (simple dual-port)

    // ── FSM states ────────────────────────────────────────────────
    // mod_mul is pipelined across 3 register stages so each stage fits
    // in ~13ns → closes timing at 100 MHz (10ns period).
    //
    // Pipeline stages for vw = v * w mod q (Barrett):
    //   MUL1: p  = v * w                (40×40 → 80-bit multiply)
    //   MUL2: pm = p * barrett_m        (80×80 → 160-bit multiply)
    //   MUL3: t  = pm>>80; tq = t*q; vw = p-tq  (final reduction)
    //
    // Same pipeline used for INTT scale: scaled = cdo * n_inv mod q
    localparam [3:0]
        ST_IDLE     = 4'd0,
        ST_RD_U     = 4'd1,   // issue read of coeff[ua] (+ tw[tw_idx])
        ST_RD_V     = 4'd2,   // latch u,w; issue read of coeff[va]
        ST_CALC     = 4'd3,   // latch v; launch MUL pipeline stage 1
        ST_MUL1     = 4'd4,   // pipeline stage 1: p = v*w
        ST_MUL2     = 4'd5,   // pipeline stage 2: pm = p*barrett_m
        ST_MUL3     = 4'd6,   // pipeline stage 3: vw = p - (pm>>80)*q
        ST_WR_U     = 4'd7,   // write coeff[ua] = u'
        ST_WR_V     = 4'd8,   // write coeff[va] = v'; advance counters
        ST_SCALE_RD = 4'd9,   // INTT: issue read of coeff[sc_idx]
        ST_SCALE_P1 = 4'd10,  // INTT scale pipeline stage 1
        ST_SCALE_P2 = 4'd11,  // INTT scale pipeline stage 2
        ST_SCALE_WR = 4'd12,  // INTT: write coeff[sc_idx] * n_inv
        ST_DONE     = 4'd13;

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

    // ── Next-butterfly address generation (prefetch, k+1) ─────────
    wire [LOGN-1:0] k_p1      = k + 1'b1;
    wire [LOGN-1:0] grp_p1    = k_p1 >> ts;
    wire [LOGN-1:0] off_p1    = k_p1 & (t_val - 1'b1);
    wire [LOGN-1:0] ua_p1     = (grp_p1 << (ts + 1'b1)) | off_p1;
    wire [LOGN-1:0] va_p1     = ua_p1 | t_val;
    wire [LOGN:0]   tw_idx_p1 = tw_base + {1'b0, m_val} + {1'b0, grp_p1};
    wire            do_pref   = (k != K_MAX[LOGN-1:0]); // false on last butterfly

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
    reg [Q_WIDTH-1:0] cdo;   // coeff read data
    reg [Q_WIDTH-1:0] tdo;   // twiddle read data

    // Latched butterfly operands
    reg [Q_WIDTH-1:0] u_r, v_r, w_r, v_orig; // v_orig holds original v for GS gs_u

    // Prefetched operands for next butterfly (loaded during MUL1/MUL2/MUL3)
    reg [Q_WIDTH-1:0] u_nxt, v_nxt, w_nxt;

    // ── Pipelined Barrett mod_mul ─────────────────────────────────
    // Stage 1: p = a * b  (registered)
    // Stage 2: pm = p * barrett_m  (registered)
    // Stage 3: vw = p - ((pm >> 2*Q_WIDTH) * q)  (registered)
    //
    // One pipeline instance for vw = v*w (butterfly)
    // One pipeline instance for scaled = cdo*n_inv (INTT scale)
    // Both share the same 3-stage structure.

    // ── Pipeline for butterfly: vw = v_r * w_r mod q ─────────────
    (* use_dsp = "yes" *) reg [2*Q_WIDTH-1:0]   bfly_p;   // stage 1: v*w
    (* use_dsp = "yes" *) reg [4*Q_WIDTH-1:0]   bfly_pm;  // stage 2: p*barrett_m
    reg [Q_WIDTH-1:0]     vw;           // stage 3 output: final vw mod q
    reg [Q_WIDTH-1:0]     u_r2, u_r3;  // u delayed to match pipeline
    reg [Q_WIDTH-1:0]     vo_r2, vo_r3; // v_orig delayed to match pipeline

    always @(posedge clk) begin
        // Stage 1: multiply v*w
        bfly_p <= v_r * w_r;
        u_r2   <= u_r;
        vo_r2  <= v_orig;

        // Stage 2: multiply p*barrett_m
        bfly_pm <= {{(2*Q_WIDTH){1'b0}}, bfly_p} *
                   {{(2*Q_WIDTH){1'b0}}, barrett_m};
        u_r3   <= u_r2;
        vo_r3  <= vo_r2;

        // Stage 3: Barrett reduction
        begin : bfly_barrett
            reg [2*Q_WIDTH-1:0] bfly_tq;
            reg [2*Q_WIDTH-1:0] bfly_r;
            bfly_tq = bfly_pm[4*Q_WIDTH-1:2*Q_WIDTH] * {1'b0, q};
            bfly_r  = bfly_p - bfly_tq;
            if (bfly_r >= {{Q_WIDTH{1'b0}}, q})
                bfly_r = bfly_r - {{Q_WIDTH{1'b0}}, q};
            vw <= bfly_r[Q_WIDTH-1:0];
        end
    end

    // ── Pipeline for INTT scale: scaled = cdo * n_inv mod q ───────
    (* use_dsp = "yes" *) reg [2*Q_WIDTH-1:0]   sc_p;
    (* use_dsp = "yes" *) reg [4*Q_WIDTH-1:0]   sc_pm;
    reg [Q_WIDTH-1:0]     scaled;

    always @(posedge clk) begin
        sc_p  <= cdo * n_inv;
        sc_pm <= {{(2*Q_WIDTH){1'b0}}, sc_p} *
                 {{(2*Q_WIDTH){1'b0}}, barrett_m};
        begin : sc_barrett
            reg [2*Q_WIDTH-1:0] sc_tq;
            reg [2*Q_WIDTH-1:0] sc_r;
            sc_tq = sc_pm[4*Q_WIDTH-1:2*Q_WIDTH] * {1'b0, q};
            sc_r  = sc_p - sc_tq;
            if (sc_r >= {{Q_WIDTH{1'b0}}, q})
                sc_r = sc_r - {{Q_WIDTH{1'b0}}, q};
            scaled <= sc_r[Q_WIDTH-1:0];
        end
    end

    // ── Butterfly results (using pipelined vw, delayed u) ─────────
    // Cooley–Tukey (NTT):     u' = u + vw,        v' = u - vw
    // Gentleman–Sande (INTT): u' = u + v,          v' = (u - v)*w
    // For GS, vw pipeline carries (u_r - v_r)*w_r — loaded in ST_CALC
    // as gs_dif*w_r via a separate feed into v_r.

    // u_r3 = u delayed 3 cycles through pipeline to align with vw
    // CT: u' = u + vw,   v' = u - vw
    // GS: u' = u + v,    v' = (u-v)*w = vw  (pipeline was fed gs_dif*w)
    wire [Q_WIDTH-1:0] ct_u  = mod_add(u_r3, vw, q);
    wire [Q_WIDTH-1:0] ct_v  = mod_sub(u_r3, vw, q);
    wire [Q_WIDTH-1:0] gs_u  = mod_add(u_r3, vo_r3, q);  // u + original_v (delayed)
    wire [Q_WIDTH-1:0] gs_v  = vw;                        // (u-v)*w from pipeline

    // ── Coefficient memory port control (combinational mux) ───────
    // One read port (craddr → cdo) and one write port (cwaddr/cwdata/cwe).
    reg [LOGN-1:0]    craddr, cwaddr;
    reg               cwe;
    reg [Q_WIDTH-1:0] cwdata;

    always @* begin
        // Defaults: no write; read the u operand address.
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

            ST_RD_U: craddr = ua;   // read u
            ST_RD_V: craddr = va;   // read v (also feeds into ST_CALC)
            ST_CALC: craddr = va;   // read v (captured in ST_CALC)

            // During MUL pipeline, prefetch next butterfly's coefficients.
            // MUL1: read coeff[ua_p1]  → arrives at cdo on MUL2
            // MUL2: read coeff[va_p1]  → arrives at cdo on MUL3
            ST_MUL1: craddr = do_pref ? ua_p1 : ua;
            ST_MUL2: craddr = do_pref ? va_p1 : ua;
            ST_MUL3: ;

            ST_WR_U: begin          // write u'
                cwe    = 1'b1;
                cwaddr = ua;
                cwdata = inv_r ? gs_u : ct_u;
            end
            ST_WR_V: begin          // write v'
                cwe    = 1'b1;
                cwaddr = va;
                cwdata = inv_r ? gs_v : ct_v;
            end

            ST_SCALE_RD: craddr = sc_idx[LOGN-1:0];
            ST_SCALE_P1: ;   // pipeline stage — no memory
            ST_SCALE_P2: ;   // pipeline stage — no memory
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
        cdo <= coeff[craddr];
    end

    // ── Twiddle RAM: simple dual-port (1 write, 1 registered read) ─
    // During MUL1 we redirect the read to tw_idx_p1 so the next
    // butterfly's twiddle factor arrives at MUL2 (1-cycle BRAM latency).
    wire [LOGN:0] tw_rd_idx = (state == ST_MUL1 && do_pref) ? tw_idx_p1 : tw_idx;
    always @(posedge clk) begin
        if (tw_wr_en) tw[tw_wr_addr] <= tw_wr_data;
        tdo <= tw[tw_rd_idx];
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

                // ── Latch v; launch pipeline stage 1 ─────────────
                // For CT: feed v_r*w_r into pipeline
                // For GS: feed (u_r - v_r)*w_r into pipeline
                //         (use v_r slot to carry gs_dif)
                ST_CALC: begin
                    if (inv_r) begin
                        // GS butterfly: v' = (u-v)*w, u' = u+v
                        // Feed (u-v) into pipeline as v_r (multiplied by w_r)
                        // Keep original v in v_orig for gs_u = u+v
                        v_orig <= cdo;                       // save original v
                        v_r    <= mod_sub(u_r, cdo, q);     // gs_dif = u-v
                    end else begin
                        // CT butterfly: v' = u - v*w, u' = u + v*w
                        v_r <= cdo;  // v_r = coeff[va]
                    end
                    state <= ST_MUL1;
                end

                // ── Pipeline stage 1: p = v*w registered ──────────
                ST_MUL1: state <= ST_MUL2;

                // ── Pipeline stage 2: pm = p*barrett_m registered ─
                // cdo = coeff[ua_p1], tdo = tw[tw_idx_p1] now ready.
                ST_MUL2: begin
                    if (do_pref) begin
                        u_nxt <= cdo;   // coeff[ua_p1]
                        w_nxt <= tdo;   // tw[tw_idx_p1]
                    end
                    state <= ST_MUL3;
                end

                // ── Pipeline stage 3: vw result registered ────────
                // cdo = coeff[va_p1] now ready.
                ST_MUL3: begin
                    if (do_pref) v_nxt <= cdo;  // coeff[va_p1]
                    state <= ST_WR_U;
                end

                // ── Write coeff[ua] = u' ──────────────────────────
                ST_WR_U: state <= ST_WR_V;

                // ── Write coeff[va] = v'; advance counters ────────
                ST_WR_V: begin
                    if (k == K_MAX[LOGN-1:0]) begin
                        // Last butterfly in stage — normal path for next stage
                        k <= 0;
                        if (stage == S_MAX[LOGN-1:0]) begin
                            sc_idx <= 0;
                            state  <= inv_r ? ST_SCALE_RD : ST_DONE;
                        end else begin
                            stage <= stage + 1'b1;
                            state <= ST_RD_U;
                        end
                    end else begin
                        // Fast path: prefetch already done during MUL stages.
                        // Skip RD_U → RD_V → CALC and jump straight to MUL1.
                        k  <= k + 1'b1;
                        u_r <= u_nxt;
                        w_r <= w_nxt;
                        if (inv_r) begin
                            v_orig <= v_nxt;
                            v_r    <= mod_sub(u_nxt, v_nxt, q); // GS: (u-v)*w
                        end else begin
                            v_r <= v_nxt;                        // CT: v*w
                        end
                        state <= ST_MUL1;
                    end
                end

                // ── INTT scale: read coeff[sc_idx], launch pipeline ─
                ST_SCALE_RD: state <= ST_SCALE_P1;

                // ── INTT scale pipeline stage 1 ───────────────────
                ST_SCALE_P1: state <= ST_SCALE_P2;

                // ── INTT scale pipeline stage 2 ───────────────────
                ST_SCALE_P2: state <= ST_SCALE_WR;

                // ── INTT scale: write coeff[sc_idx]*n_inv ─────────
                // 'scaled' is now valid (3 cycles after ST_SCALE_RD)
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