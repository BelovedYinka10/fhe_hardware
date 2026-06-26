`timescale 1ns/1ps
// ================================================================
// poly_mul_schoolbook.v — Schoolbook negacyclic polynomial multiply
//
// Drop-in replacement for poly_mul.v — identical port list so
// cipher_hash.v and hash_verifier.v can instantiate either one
// without any wiring changes.
//
// Ports n_inv, barrett_m, tw_wr_* are accepted but unused —
// schoolbook does not need twiddle tables or Barrett constants.
//
// Computes: out = a * b mod (X^N + 1, q)   O(N^2)
//   Step 1: full convolution  res[i+j] += a[i]*b[j]  mod q
//   Step 2: negacyclic fold   res[k]   -= res[k+N]   mod q
// ================================================================
module poly_mul_schoolbook #(
    parameter LOGN    = 13,
    parameter Q_WIDTH = 40
)(
    input  wire                  clk,
    input  wire                  rst_n,

    // ── Runtime modulus ──────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]    q,
    input  wire [Q_WIDTH-1:0]    n_inv,       // unused (NTT only)
    input  wire [2*Q_WIDTH-1:0]  barrett_m,   // unused (NTT only)

    // ── Operand A write port ─────────────────────────────────────
    input  wire                  a_wr_en,
    input  wire [LOGN-1:0]       a_wr_addr,
    input  wire [Q_WIDTH-1:0]    a_wr_data,

    // ── Operand B write port ─────────────────────────────────────
    input  wire                  b_wr_en,
    input  wire [LOGN-1:0]       b_wr_addr,
    input  wire [Q_WIDTH-1:0]    b_wr_data,

    // ── Twiddle table write port (unused — accepted for compatibility) ──
    input  wire                  tw_wr_en,
    input  wire [LOGN:0]         tw_wr_addr,
    input  wire [Q_WIDTH-1:0]    tw_wr_data,

    // ── Control ──────────────────────────────────────────────────
    input  wire                  start,

    // ── Result read port ─────────────────────────────────────────
    input  wire [LOGN-1:0]       rd_addr,
    output wire [Q_WIDTH-1:0]    rd_data,

    output reg                   done
);
    localparam integer N = 1 << LOGN;

    // ── Coefficient RAMs ─────────────────────────────────────────
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] mem_a   [0:N-1];
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] mem_b   [0:N-1];
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] mem_res [0:2*N-1];

    // ── FSM states ────────────────────────────────────────────────
    localparam [2:0]
        ST_IDLE = 3'd0,
        ST_RD_A = 3'd1,   // read a[i]         (1 cycle latency)
        ST_RD_B = 3'd2,   // read b[j]+res[i+j] (1 cycle latency)
        ST_MUL  = 3'd3,   // compute a[i]*b[j]
        ST_ACC  = 3'd4,   // write res[i+j] += product
        ST_FOLD = 3'd5,   // negacyclic fold
        ST_DONE = 3'd6;

    reg [2:0]        state;
    reg [LOGN-1:0]   i_idx;
    reg [LOGN-1:0]   j_idx;
    reg [LOGN:0]     fold_idx;
    reg [Q_WIDTH-1:0] product;

    // ── RAM control ───────────────────────────────────────────────
    reg [LOGN-1:0]    a_raddr;
    reg [LOGN-1:0]    b_raddr;
    reg [LOGN:0]      res_raddr;
    reg               res_we;
    reg [LOGN:0]      res_waddr;
    reg [Q_WIDTH-1:0] res_wdata;

    // ── Registered RAM read outputs ───────────────────────────────
    reg [Q_WIDTH-1:0] a_rd, b_rd, res_rd;

    // ── Modular arithmetic ────────────────────────────────────────
    function automatic [Q_WIDTH-1:0] mod_add;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [Q_WIDTH:0] s;
        begin
            s = {1'b0,a} + {1'b0,b};
            mod_add = (s >= {1'b0,qq}) ? s[Q_WIDTH-1:0] - qq
                                       : s[Q_WIDTH-1:0];
        end
    endfunction

    function automatic [Q_WIDTH-1:0] mod_sub;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [Q_WIDTH:0] d;
        begin
            d = {1'b0,a} + {1'b0,qq} - {1'b0,b};
            mod_sub = (d >= {1'b0,qq}) ? d[Q_WIDTH-1:0] - qq
                                       : d[Q_WIDTH-1:0];
        end
    endfunction

    function [Q_WIDTH-1:0] mod_mul;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [2*Q_WIDTH-1:0] p;
        begin
            p = a * b;
            mod_mul = p % qq;
        end
    endfunction

    // ── mem_a: dedicated RAM process ──────────────────────────────
    always @(posedge clk) begin
        if (a_wr_en) mem_a[a_wr_addr] <= a_wr_data;
        a_rd <= mem_a[a_raddr];
    end

    // ── mem_b: dedicated RAM process ──────────────────────────────
    always @(posedge clk) begin
        if (b_wr_en) mem_b[b_wr_addr] <= b_wr_data;
        b_rd <= mem_b[b_raddr];
    end

    // ── mem_res: dedicated RAM process ────────────────────────────
    always @(posedge clk) begin
        if (res_we) mem_res[res_waddr] <= res_wdata;
        res_rd <= mem_res[res_raddr];
    end

    // Result read port — registered read of mem_res
    reg [Q_WIDTH-1:0] rd_data_r;
    always @(posedge clk) begin
        rd_data_r <= mem_res[{1'b0, rd_addr}];
    end
    assign rd_data = rd_data_r;

    // ── FSM ───────────────────────────────────────────────────────
    always @(posedge clk) begin
        if (!rst_n) begin
            state     <= ST_IDLE;
            done      <= 0;
            i_idx     <= 0;
            j_idx     <= 0;
            fold_idx  <= 0;
            res_we    <= 0;
            a_raddr   <= 0;
            b_raddr   <= 0;
            res_raddr <= 0;
            res_waddr <= 0;
            res_wdata <= 0;
            product   <= 0;
        end else begin
            res_we <= 0;
            done   <= 0;

            case (state)

                // ── Wait for start ────────────────────────────
                ST_IDLE: begin
                    if (start) begin
                        i_idx <= 0;
                        j_idx <= 0;
                        state <= ST_RD_A;
                    end
                end

                // ── Issue read of a[i] ────────────────────────
                ST_RD_A: begin
                    a_raddr <= i_idx;
                    state   <= ST_RD_B;
                end

                // ── Issue read of b[j] and res[i+j] ──────────
                // a_rd now holds a[i]
                ST_RD_B: begin
                    b_raddr   <= j_idx;
                    res_raddr <= {1'b0, i_idx} + {1'b0, j_idx};
                    state     <= ST_MUL;
                end

                // ── Multiply a[i]*b[j] ────────────────────────
                // b_rd now holds b[j], res_rd holds res[i+j]
                ST_MUL: begin
                    product <= mod_mul(a_rd, b_rd, q);
                    state   <= ST_ACC;
                end

                // ── Accumulate res[i+j] += product ────────────
                ST_ACC: begin
                    res_we    <= 1;
                    res_waddr <= {1'b0, i_idx} + {1'b0, j_idx};
                    res_wdata <= mod_add(res_rd, product, q);

                    // Advance inner loop then outer loop
                    if (j_idx == N[LOGN-1:0] - 1'b1) begin
                        j_idx <= 0;
                        if (i_idx == N[LOGN-1:0] - 1'b1) begin
                            // Full convolution done → negacyclic fold
                            fold_idx <= 0;
                            state    <= ST_FOLD;
                        end else begin
                            i_idx <= i_idx + 1'b1;
                            state <= ST_RD_A;
                        end
                    end else begin
                        j_idx <= j_idx + 1'b1;
                        state <= ST_RD_B;
                    end
                end

                // ── Negacyclic fold: res[k] -= res[k+N] ───────
                // X^N ≡ -1 in Z_q[X]/(X^N+1)
                ST_FOLD: begin
                    if (fold_idx < N[LOGN:0]) begin
                        res_we    <= 1;
                        res_waddr <= {1'b0, fold_idx[LOGN-1:0]};
                        res_wdata <= mod_sub(
                            mem_res[{1'b0, fold_idx[LOGN-1:0]}],
                            mem_res[N[LOGN:0] + {1'b0, fold_idx[LOGN-1:0]}],
                            q);
                        fold_idx <= fold_idx + 1'b1;
                    end else begin
                        state <= ST_DONE;
                    end
                end

                // ── Assert done ───────────────────────────────
                ST_DONE: begin
                    done  <= 1;
                    state <= ST_IDLE;
                end

                default: state <= ST_IDLE;

            endcase
        end
    end

endmodule
