`timescale 1ns/1ps
// ================================================================
// poly_mul.v  —  NTT-based negacyclic polynomial multiplication
//
// Computes:  out = a * b  mod (X^N + 1, q)
//
// Pipeline:
//   1. NTT(a)              — forward NTT on operand A
//   2. NTT(b)              — forward NTT on operand B
//   3. Pointwise multiply  — out_ntt[i] = a_ntt[i] * b_ntt[i] mod q
//   4. INTT(out_ntt)       — inverse NTT to recover result
//
// Steps 1 and 2 run sequentially (single shared NTT unit).
// Step 3 runs immediately after step 2 completes.
// Step 4 runs after step 3 completes.
//
// Interface:
//   - Load a[], b[], twiddle tables, q, n_inv before asserting start.
//   - done pulses for one cycle when result is ready.
//   - Read result coefficients via rd_addr / rd_data (1-cycle latency).
//
// Parameters
//   LOGN    : log2(N)  (default 13)
//   Q_WIDTH : modulus bit-width (default 40)
// ================================================================
module poly_mul #(
    parameter LOGN    = 13,
    parameter Q_WIDTH = 40
)(
    input  wire                clk,
    input  wire                rst_n,

    // ── Runtime modulus ─────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]  q,
    input  wire [Q_WIDTH-1:0]  n_inv,      // N^{-1} mod q for INTT
    input  wire [2*Q_WIDTH-1:0] barrett_m,  // floor(2^(2·Q_WIDTH) / q)

    // ── Operand A write port ─────────────────────────────────────
    input  wire                a_wr_en,
    input  wire [LOGN-1:0]     a_wr_addr,
    input  wire [Q_WIDTH-1:0]  a_wr_data,

    // ── Operand B write port ─────────────────────────────────────
    input  wire                b_wr_en,
    input  wire [LOGN-1:0]     b_wr_addr,
    input  wire [Q_WIDTH-1:0]  b_wr_data,

    // ── Twiddle table write port (shared fwd + inv) ──────────────
    //   addr ∈ [0,   N) → forward twiddles
    //   addr ∈ [N, 2*N) → inverse twiddles
    input  wire                tw_wr_en,
    input  wire [LOGN:0]       tw_wr_addr,
    input  wire [Q_WIDTH-1:0]  tw_wr_data,

    // ── Control ──────────────────────────────────────────────────
    input  wire                start,

    // ── Result read port ─────────────────────────────────────────
    input  wire [LOGN-1:0]     rd_addr,
    output wire [Q_WIDTH-1:0]  rd_data,

    output reg                 done
);
    localparam integer N = 1 << LOGN;

    // ── Internal coefficient RAMs ────────────────────────────────
    reg [Q_WIDTH-1:0] mem_a   [0:N-1];   // original a
    reg [Q_WIDTH-1:0] mem_b   [0:N-1];   // original b
    reg [Q_WIDTH-1:0] mem_ntt [0:N-1];   // NTT working buffer

    // ── Twiddle RAM (forwarded directly to ntt instance) ────────
    // We let the ntt module own it; we just wire the write port.

    // ── FSM states (declared before NTT instance — Vivado requires it) ──
    localparam [2:0]
        ST_IDLE    = 3'd0,
        ST_NTT_A   = 3'd1,   // run NTT on operand A
        ST_COPY_B  = 3'd2,   // reload operand B into ntt coeff RAM
        ST_NTT_B   = 3'd3,   // run NTT on operand B
        ST_PMUL    = 3'd4,   // wait for NTT(B); then pointwise multiply
        ST_PROD    = 3'd5,   // pointwise multiply A_ntt*B_ntt → mem_b buffer
        ST_LOADP   = 3'd6,   // load products from mem_b into ntt RAM, launch INTT
        ST_DONE    = 3'd7;

    reg [2:0]      state;
    reg [LOGN:0]   idx;       // needs LOGN+1 bits to count up to N

    // ── NTT instance ─────────────────────────────────────────────
    reg                ntt_coeff_wr_en;
    reg  [LOGN-1:0]    ntt_coeff_wr_addr;
    reg  [Q_WIDTH-1:0] ntt_coeff_wr_data;
    reg                ntt_start;
    reg                ntt_inverse;
    wire               ntt_done;
    reg  [LOGN-1:0]    int_rd_addr;    // FSM-internal read address
    wire [Q_WIDTH-1:0] ntt_rd_data;

    ntt #(
        .LOGN    (LOGN),
        .Q_WIDTH (Q_WIDTH)
    ) u_ntt (
        .clk           (clk),
        .rst_n         (rst_n),
        .q             (q),
        .n_inv         (n_inv),
        .barrett_m     (barrett_m),
        .coeff_wr_en   (ntt_coeff_wr_en   | a_wr_en | b_wr_en),
        .coeff_wr_addr (ntt_coeff_wr_en ? ntt_coeff_wr_addr :
                        a_wr_en         ? a_wr_addr          :
                                          b_wr_addr),
        .coeff_wr_data (ntt_coeff_wr_en ? ntt_coeff_wr_data :
                        a_wr_en         ? a_wr_data          :
                                          b_wr_data),
        .tw_wr_en      (tw_wr_en),
        .tw_wr_addr    (tw_wr_addr),
        .tw_wr_data    (tw_wr_data),
        .start         (ntt_start),
        .inverse       (ntt_inverse),
        // Mux: FSM owns rd_addr during COPY_B/PROD; external rd_addr otherwise.
        .rd_addr       ((state == ST_COPY_B || state == ST_PROD)
                        ? int_rd_addr : rd_addr),
        .rd_data       (ntt_rd_data),
        .done          (ntt_done)
    );

    // Expose NTT result RAM to the outside world.
    assign rd_data = ntt_rd_data;

    // ── Modular multiply — Barrett reduction (synthesizable) ─────
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

    // ── FSM ──────────────────────────────────────────────────────
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state             <= ST_IDLE;
            done              <= 1'b0;
            idx               <= 0;
            ntt_start         <= 1'b0;
            ntt_inverse       <= 1'b0;
            ntt_coeff_wr_en   <= 1'b0;
            ntt_coeff_wr_addr <= 0;
            ntt_coeff_wr_data <= 0;
        end else begin
            // Shadow writes to local RAMs for later use
            if (a_wr_en) mem_a[a_wr_addr] <= a_wr_data;
            if (b_wr_en) mem_b[b_wr_addr] <= b_wr_data;

            // Default: deassert pulse signals
            ntt_start       <= 1'b0;
            ntt_coeff_wr_en <= 1'b0;
            done            <= 1'b0;

            case (state)

                // ── Wait ─────────────────────────────────────────
                ST_IDLE: begin
                    if (start) begin
                        // ntt coeff RAM already has A (loaded via a_wr_en)
                        ntt_inverse <= 1'b0;
                        ntt_start   <= 1'b1;
                        state       <= ST_NTT_A;
                    end
                end

                // ── NTT(A) running ───────────────────────────────
                ST_NTT_A: begin
                    if (ntt_done) begin
                        // Save NTT(A) from ntt RAM into mem_ntt
                        // Use a read-back loop via ntt_rd_addr
                        idx   <= 0;
                        state <= ST_COPY_B;
                    end
                end

                // ── Save NTT(A), reload B into ntt coeff RAM ─────
                // 2-cycle read latency: set int_rd_addr at idx,
                // ntt_rd_data for that address available at idx+2.
                // Write B[idx] for idx < N.
                // Save NTT(A)[idx-2] for idx >= 2.
                // Loop runs 0..N+1.
                ST_COPY_B: begin
                    // Write B[idx] into ntt coeff RAM
                    if (idx < N) begin
                        ntt_coeff_wr_en   <= 1'b1;
                        ntt_coeff_wr_addr <= idx[LOGN-1:0];
                        ntt_coeff_wr_data <= mem_b[idx];
                    end

                    // Set read address for NTT(A) pipeline
                    if (idx < N)
                        int_rd_addr <= idx[LOGN-1:0];

                    // Save NTT(A) data (2-cycle pipeline delay)
                    if (idx >= 2)
                        mem_ntt[idx[LOGN-1:0] - 2'd2] <= ntt_rd_data;

                    if (idx == N + 1) begin
                        idx   <= 0;
                        state <= ST_NTT_B;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── NTT(B): launch NTT on operand B ────────────
                ST_NTT_B: begin
                    ntt_inverse <= 1'b0;
                    ntt_start   <= 1'b1;
                    state       <= ST_PMUL;
                end

                // ── Wait for NTT(B), then pointwise multiply ─────
                ST_PMUL: begin
                    if (ntt_done) begin
                        // NTT(B) now lives in the ntt RAM; NTT(A) in mem_ntt.
                        idx   <= 0;
                        state <= ST_PROD;
                    end
                end

                // ── Pointwise multiply → mem_b buffer ─────────────
                // READ-ONLY on the ntt RAM (no concurrent writes), so the
                // 2-cycle read pipeline of NTT(B) is hazard-free:
                //   set int_rd_addr at idx; ntt_rd_data valid at idx+2.
                // idx=0,1: prime pipeline.
                // idx>=2: mem_b[idx-2] = NTT(A)[idx-2] * NTT(B)[idx-2].
                // We stash products in mem_b (original B no longer needed).
                ST_PROD: begin
                    if (idx < N)
                        int_rd_addr <= idx[LOGN-1:0];

                    if (idx >= 2)
                        mem_b[idx[LOGN-1:0] - 2'd2] <=
                            mod_mul(mem_ntt[idx - 2], ntt_rd_data, q);

                    if (idx == N + 1) begin
                        idx   <= 0;
                        state <= ST_LOADP;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── Load products from mem_b into ntt RAM, launch INTT ──
                // Write-only on the ntt RAM (no concurrent reads).
                ST_LOADP: begin
                    if (idx < N) begin
                        ntt_coeff_wr_en   <= 1'b1;
                        ntt_coeff_wr_addr <= idx[LOGN-1:0];
                        ntt_coeff_wr_data <= mem_b[idx[LOGN-1:0]];
                    end

                    if (idx == N) begin
                        // Extra cycle lets the idx=N-1 write commit before INTT.
                        ntt_inverse <= 1'b1;
                        ntt_start   <= 1'b1;
                        state       <= ST_DONE;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── Wait for INTT done ───────────────────────────
                ST_DONE: begin
                    if (ntt_done) begin
                        done  <= 1'b1;
                        state <= ST_IDLE;
                    end
                end

                default: state <= ST_IDLE;

            endcase
        end
    end

endmodule
