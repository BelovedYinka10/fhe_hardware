`timescale 1ns/1ps

// ================================================================
// ntt_online.v  —  Self-contained NTT/INTT demo for online sims
//
// Paste both modules into EDA Playground (Icarus Verilog),
// set top module to "ntt_tb", and hit Run.
//
// Parameters chosen for clarity:
//   LOGN    = 3  →  N = 8  (degree-8 negacyclic polynomial)
//   Q_WIDTH = 5  →  5-bit datapath  (q fits in 5 bits)
//   q       = 17 (NTT-friendly: 17 ≡ 1 mod 2·8 = 16)
//   psi     = 3  (primitive 16th root of unity mod 17)
//   psi_inv = 6  (3·6 = 18 ≡ 1 mod 17)
//   n_inv   = 15 (8⁻¹ mod 17)
//
// Modular multiplication uses Barrett reduction (no % or integer):
//
//   K = 2·Q_WIDTH,  M = floor(2^K / q)   ← precomputed constant
//   For q=17, Q_WIDTH=5:  K=10, M=60
//
//   Signal widths (all explicit regs, no integer):
//     p  = a·b          → 2·Q:



_WIDTH bits  (≤ (q−1)²  < 2^(2·Q_WIDTH))
//     pm = p·M          → 3·Q_WIDTH+1 bits (≤ 256·60 = 15360 < 2^14)
//     t  = pm >> K      → Q_WIDTH+1 bits  (quotient estimate ≤ q−2)
//     tq = t·q          → 2·Q_WIDTH bits  (≤ (q−2)·q < 2^(2·Q_WIDTH))
//     r  = p − tq       → 2·Q_WIDTH bits  (remainder ∈ [0, 2q))
//     if r ≥ q: r -= q  → one conditional subtract, result ∈ [0, q)
//
// Forward (NTT)  : Cooley–Tukey   — normal order → bit-reversed
// Inverse (INTT) : Gentleman–Sande — bit-reversed → normal order
// ================================================================


// ================================================================
// NTT / INTT engine
// ================================================================
module ntt #(
    parameter  LOGN    = 3,
    parameter  Q_WIDTH = 5
)(
    input  wire                  clk,
    input  wire                  rst_n,

    // ── Runtime modulus ──────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]    q,
    input  wire [Q_WIDTH-1:0]    n_inv,       // N^{-1} mod q (INTT only)
    input  wire [Q_WIDTH:0]      barrett_m,   // floor(2^(2·Q_WIDTH) / q)

    // ── Coefficient write port ────────────────────────────────────
    input  wire                  coeff_wr_en,
    input  wire [LOGN-1:0]       coeff_wr_addr,
    input  wire [Q_WIDTH-1:0]    coeff_wr_data,

    // ── Twiddle table write port ──────────────────────────────────
    //   addr ∈ [0, N)   → forward twiddles
    //   addr ∈ [N, 2N)  → inverse twiddles
    input  wire                  tw_wr_en,
    input  wire [LOGN:0]         tw_wr_addr,
    input  wire [Q_WIDTH-1:0]    tw_wr_data,

    // ── Control ───────────────────────────────────────────────────
    input  wire                  start,
    input  wire                  inverse,     // 0 = NTT, 1 = INTT

    // ── Coefficient read port ─────────────────────────────────────
    input  wire [LOGN-1:0]       rd_addr,
    output reg  [Q_WIDTH-1:0]    rd_data,

    output reg                   done
);

    localparam integer N         = 1 << LOGN;
    localparam integer K_MAX     = N/2 - 1;
    localparam integer S_MAX     = LOGN - 1;
    localparam integer BARRETT_K = 2 * Q_WIDTH;   // shift amount

    // ── Memories ──────────────────────────────────────────────────
    reg [Q_WIDTH-1:0] coeff [0:N-1];
    reg [Q_WIDTH-1:0] tw    [0:2*N-1];

    // ── FSM states ────────────────────────────────────────────────
    localparam [2:0]
        ST_IDLE  = 3'd0,
        ST_READ  = 3'd1,
        ST_WRITE = 3'd2,
        ST_SCALE = 3'd3,
        ST_DONE  = 3'd4;

    reg [2:0]      state;
    reg [LOGN-1:0] stage;
    reg [LOGN-1:0] k;
    reg            inv_r;
    reg [LOGN:0]   sc_idx;

    // ── Address generation ────────────────────────────────────────
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

    // ── Latched operands ──────────────────────────────────────────
    reg [Q_WIDTH-1:0] u_r, v_r, w_r;

    // ── Modular arithmetic ────────────────────────────────────────

    // mod_add : (a + b) mod q  — one conditional subtract
    function [Q_WIDTH-1:0] mod_add;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [Q_WIDTH:0] s;
        begin
            s = {1'b0, a} + {1'b0, b};
            mod_add = (s >= {1'b0, qq}) ? s[Q_WIDTH-1:0] - qq
                                        : s[Q_WIDTH-1:0];
        end
    endfunction

    // mod_sub : (a - b) mod q  — one conditional add
    function [Q_WIDTH-1:0] mod_sub;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [Q_WIDTH:0] d;
        begin
            d = {1'b0, a} + {1'b0, qq} - {1'b0, b};
            mod_sub = (d >= {1'b0, qq}) ? d[Q_WIDTH-1:0] - qq
                                        : d[Q_WIDTH-1:0];
        end
    endfunction

    // mod_mul : (a * b) mod q  — Barrett reduction
    //   All intermediates are explicitly sized regs (synthesizable).
    //   barrett_m is read from the module input port.
    //
    //   p  [2·Q_WIDTH-1 : 0]  — product a·b
    //   pm [3·Q_WIDTH   : 0]  — p · barrett_m  (3·Q_WIDTH+1 bits)
    //   t  [Q_WIDTH     : 0]  — quotient estimate = pm >> BARRETT_K
    //   tq [2·Q_WIDTH-1 : 0]  — t · q
    //   r  [2·Q_WIDTH-1 : 0]  — remainder = p − tq  (in [0, 2q))
    function [Q_WIDTH-1:0] mod_mul;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [2*Q_WIDTH-1:0] p;
        reg [3*Q_WIDTH:0]   pm;
        reg [Q_WIDTH:0]     t;
        reg [2*Q_WIDTH-1:0] tq;
        reg [2*Q_WIDTH-1:0] r;
        begin
            p  = a * b;
            pm = p * {{Q_WIDTH{1'b0}}, barrett_m};         // widen barrett_m to match context
            t  = pm[3*Q_WIDTH : 2*Q_WIDTH];                // >> BARRETT_K (upper bits)
            tq = t * {1'b0, qq};
            r  = p - tq;
            if (r >= {{Q_WIDTH{1'b0}}, qq})                // at most one correction
                r = r - {{Q_WIDTH{1'b0}}, qq};
            mod_mul = r[Q_WIDTH-1:0];
        end
    endfunction

    // ── Butterfly outputs ─────────────────────────────────────────
    //   Cooley–Tukey  (NTT):  u' = u + v·w,   v' = u − v·w
    //   Gentleman–Sande(INTT):u' = u + v,      v' = (u − v)·w
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
            if (tw_wr_en)    tw[tw_wr_addr]       <= tw_wr_data;
            if (coeff_wr_en) coeff[coeff_wr_addr] <= coeff_wr_data;

            rd_data <= coeff[rd_addr];   // registered read, 1-cycle latency

            case (state)

                ST_IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        stage <= 0;
                        k     <= 0;
                        inv_r <= inverse;
                        state <= ST_READ;
                    end
                end

                ST_READ: begin
                    u_r   <= coeff[ua];
                    v_r   <= coeff[va];
                    w_r   <= tw[tw_idx];
                    state <= ST_WRITE;
                end

                ST_WRITE: begin
                    coeff[ua] <= inv_r ? gs_u : ct_u;
                    coeff[va] <= inv_r ? gs_v : ct_v;

                    if (k == K_MAX[LOGN-1:0]) begin
                        k <= 0;
                        if (stage == S_MAX[LOGN-1:0]) begin
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

                ST_SCALE: begin
                    if (sc_idx < N[LOGN:0]) begin
                        coeff[sc_idx[LOGN-1:0]] <=
                            mod_mul(coeff[sc_idx[LOGN-1:0]], n_inv, q);
                        sc_idx <= sc_idx + 1'b1;
                    end else begin
                        state <= ST_DONE;
                    end
                end

                ST_DONE: begin
                    done  <= 1'b1;
                    state <= ST_IDLE;
                end

                default: state <= ST_IDLE;

            endcase
        end
    end

endmodule


// ================================================================
// Testbench
// ================================================================
// Precomputed constants for q=17, N=8, psi=3, psi_inv=6:
//
//   bit_rev(0..7, 3) = [0, 4, 2, 6, 1, 5, 3, 7]
//   fwd[i] = 3^bit_rev(i,3) mod 17 = [1, 13,  9, 15,  3,  5, 10, 11]
//   inv[i] = 6^bit_rev(i,3) mod 17 = [1,  4,  2,  8,  6,  7, 12, 14]
//
//   Barrett:  K=10, M=floor(1024/17)=60
//   Check: p=256 → t=(256·60)>>10=15 → r=256−255=1  (=16·16 mod 17 ✓)
// ================================================================
module ntt_tb;

    localparam LOGN    = 3;
    localparam Q_WIDTH = 5;
    localparam N       = 1 << LOGN;   // 8

    localparam [Q_WIDTH-1:0] Q_VAL = 5'd17;
    localparam [Q_WIDTH-1:0] N_INV = 5'd15;   // 8⁻¹ mod 17

    // Barrett: K = 2·Q_WIDTH = 10,  M = floor(1024/17) = 60
    localparam integer BARRETT_K = 2 * Q_WIDTH;
    localparam integer BARRETT_M = (1 << BARRETT_K) / Q_VAL;   // 60

    reg                clk, rst_n;
    reg [Q_WIDTH-1:0]  q_sig, ninv_sig;
    reg [Q_WIDTH:0]    bm_sig;             // Barrett constant → DUT
    reg                coeff_wr_en;
    reg [LOGN-1:0]     coeff_wr_addr;
    reg [Q_WIDTH-1:0]  coeff_wr_data;
    reg                tw_wr_en;
    reg [LOGN:0]       tw_wr_addr;
    reg [Q_WIDTH-1:0]  tw_wr_data;
    reg                start, inverse;
    reg [LOGN-1:0]     rd_addr;
    wire [Q_WIDTH-1:0] rd_data;
    wire               done;

    // Arrays used by tasks (Verilog-2001 cannot declare arrays inside blocks)
    reg [Q_WIDTH-1:0] fwd_tw [0:7];
    reg [Q_WIDTH-1:0] inv_tw [0:7];
    reg [Q_WIDTH-1:0] ntt_a  [0:7];   // saved NTT(a) for Test 3
    reg [Q_WIDTH-1:0] result [0:7];

    // Explicit-width regs for software Barrett multiply in Test 3
    // (same bit plan as mod_mul in the RTL — no integer)
    reg [2*Q_WIDTH-1:0] pw_p;    // product
    reg [3*Q_WIDTH:0]   pw_pm;   // p * M
    reg [Q_WIDTH:0]     pw_t;    // quotient estimate
    reg [2*Q_WIDTH-1:0] pw_tq;   // t * q
    reg [2*Q_WIDTH-1:0] pw_r;    // remainder

    ntt #(.LOGN(LOGN), .Q_WIDTH(Q_WIDTH)) dut (
        .clk          (clk),
        .rst_n        (rst_n),
        .q            (q_sig),
        .n_inv        (ninv_sig),
        .barrett_m    (bm_sig),
        .coeff_wr_en  (coeff_wr_en),
        .coeff_wr_addr(coeff_wr_addr),
        .coeff_wr_data(coeff_wr_data),
        .tw_wr_en     (tw_wr_en),
        .tw_wr_addr   (tw_wr_addr),
        .tw_wr_data   (tw_wr_data),
        .start        (start),
        .inverse      (inverse),
        .rd_addr      (rd_addr),
        .rd_data      (rd_data),
        .done         (done)
    );

    always #5 clk = ~clk;

    integer i;

    // ── Load both twiddle tables ──────────────────────────────────
    task load_twiddles;
        integer j;
        begin
            for (j = 0; j < N; j = j + 1) begin
                @(posedge clk);
                tw_wr_en   = 1;
                tw_wr_addr = j[LOGN:0];
                tw_wr_data = fwd_tw[j];
            end
            for (j = 0; j < N; j = j + 1) begin
                @(posedge clk);
                tw_wr_en   = 1;
                tw_wr_addr = j[LOGN:0] | N[LOGN:0];
                tw_wr_data = inv_tw[j];
            end
            @(posedge clk);
            tw_wr_en = 0;
        end
    endtask

    // ── Load result[] into coefficient RAM ───────────────────────
    task load_coeffs;
        integer j;
        begin
            for (j = 0; j < N; j = j + 1) begin
                @(posedge clk);
                coeff_wr_en   = 1;
                coeff_wr_addr = j[LOGN-1:0];
                coeff_wr_data = result[j];
            end
            @(posedge clk);
            coeff_wr_en = 0;
        end
    endtask

    // ── Pulse start, wait for done ────────────────────────────────
    task run_transform;
        input inv_flag;
        begin
            @(posedge clk);
            start   = 1;
            inverse = inv_flag;
            @(posedge clk);
            start = 0;
            wait (done);
            @(posedge clk);
        end
    endtask

    // ── Read all coefficients into result[] ───────────────────────
    task read_all;
        integer j;
        begin
            for (j = 0; j < N; j = j + 1) begin
                rd_addr = j[LOGN-1:0];
                @(posedge clk);
                @(posedge clk);
                result[j] = rd_data;
            end
        end
    endtask

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, ntt_tb);

        clk         = 0;
        rst_n       = 0;
        coeff_wr_en = 0;
        tw_wr_en    = 0;
        start       = 0;
        inverse     = 0;
        rd_addr     = 0;
        q_sig       = Q_VAL;
        ninv_sig    = N_INV;
        bm_sig      = BARRETT_M[Q_WIDTH:0];   // 6-bit: 60

        fwd_tw[0]=1;  fwd_tw[1]=13; fwd_tw[2]=9;  fwd_tw[3]=15;
        fwd_tw[4]=3;  fwd_tw[5]=5;  fwd_tw[6]=10; fwd_tw[7]=11;

        inv_tw[0]=1;  inv_tw[1]=4;  inv_tw[2]=2;  inv_tw[3]=8;
        inv_tw[4]=6;  inv_tw[5]=7;  inv_tw[6]=12; inv_tw[7]=14;

        repeat (4) @(posedge clk);
        rst_n = 1;
        repeat (2) @(posedge clk);

        load_twiddles;

        // ══════════════════════════════════════════════════════════
        // Test 1: Forward NTT of [1,1,1,1,0,0,0,0] mod 17
        // ══════════════════════════════════════════════════════════
        $display("--- Test 1: NTT([1,1,1,1,0,0,0,0]) mod 17 ---");

        result[0]=1; result[1]=1; result[2]=1; result[3]=1;
        result[4]=0; result[5]=0; result[6]=0; result[7]=0;
        load_coeffs;
        run_transform(0);
        read_all;

        $display("NTT output (bit-reversed order):");
        for (i = 0; i < N; i = i + 1)
            $display("  a_hat[%0d] = %2d", i, result[i]);

        // ══════════════════════════════════════════════════════════
        // Test 2: INTT to recover [1,1,1,1,0,0,0,0]
        // ══════════════════════════════════════════════════════════
        $display("--- Test 2: INTT (should recover [1,1,1,1,0,0,0,0]) ---");

        load_coeffs;
        run_transform(1);
        read_all;

        $display("INTT output:");
        for (i = 0; i < N; i = i + 1)
            $display("  a[%0d] = %2d", i, result[i]);

        if (result[0]==1 && result[1]==1 && result[2]==1 && result[3]==1 &&
            result[4]==0 && result[5]==0 && result[6]==0 && result[7]==0)
            $display("PASS: NTT -> INTT round-trip correct.");
        else
            $display("FAIL: round-trip mismatch!");

        // ══════════════════════════════════════════════════════════
        // Test 3: Negacyclic polynomial multiplication
        //   a = 1 + 2X,  b = 3 + 4X
        //   a·b = 3 + 10X + 8X²  mod (X⁸+1, 17)  → [3,10,8,0,0,0,0,0]
        // ══════════════════════════════════════════════════════════
        $display("--- Test 3: (1+2X)*(3+4X) mod (X^8+1, 17) ---");

        // NTT(a)
        result[0]=1; result[1]=2; result[2]=0; result[3]=0;
        result[4]=0; result[5]=0; result[6]=0; result[7]=0;
        load_coeffs;
        run_transform(0);
        read_all;
        for (i = 0; i < N; i = i + 1) ntt_a[i] = result[i];

        // NTT(b)
        result[0]=3; result[1]=4; result[2]=0; result[3]=0;
        result[4]=0; result[5]=0; result[6]=0; result[7]=0;
        load_coeffs;
        run_transform(0);
        read_all;

        // Pointwise multiply NTT(a)·NTT(b) mod q
        // Same Barrett steps as mod_mul in RTL — explicit-width regs, no integer
        for (i = 0; i < N; i = i + 1) begin
            pw_p    = ntt_a[i] * result[i];
            pw_pm   = pw_p * {{Q_WIDTH{1'b0}}, bm_sig};
            pw_t    = pw_pm[3*Q_WIDTH : 2*Q_WIDTH];
            pw_tq   = pw_t * {1'b0, Q_VAL};
            pw_r    = pw_p - pw_tq;
            if (pw_r >= {{Q_WIDTH{1'b0}}, Q_VAL})
                pw_r = pw_r - {{Q_WIDTH{1'b0}}, Q_VAL};
            result[i] = pw_r[Q_WIDTH-1:0];
        end

        // INTT of product
        load_coeffs;
        run_transform(1);
        read_all;

        $display("(1+2X)*(3+4X) mod (X^8+1, 17):");
        for (i = 0; i < N; i = i + 1)
            $display("  coeff[%0d] = %2d", i, result[i]);

        if (result[0]==3  && result[1]==10 && result[2]==8 &&
            result[3]==0  && result[4]==0  && result[5]==0 &&
            result[6]==0  && result[7]==0)
            $display("PASS: polynomial multiplication correct.");
        else
            $display("FAIL: polynomial multiplication mismatch!");

        $display("--- Simulation complete ---");
        $finish;
    end

    initial begin
        #200000;
        $display("ERROR: simulation timeout.");
        $finish;
    end

endmodule
