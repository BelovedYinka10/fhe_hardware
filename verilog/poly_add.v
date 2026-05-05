`timescale 1ns/1ps
// ================================================================
// poly_add.v  —  Pointwise modular addition / subtraction
//
// Computes:  out[i] = (a[i] +/- b[i]) mod q   for i in [0, N)
//
// Interface:
//   - Load coefficients via write ports before asserting start.
//   - Assert start for one cycle; done pulses one cycle after
//     the last coefficient is written to the output RAM.
//   - Read results via rd_addr / rd_data (1-cycle read latency).
//
// Parameters
//   LOGN    : log2(N)   polynomial degree N = 2^LOGN  (default 13)
//   Q_WIDTH : bit-width of prime modulus q             (default 40)
// ================================================================
module poly_add #(
    parameter LOGN    = 13,
    parameter Q_WIDTH = 40
)(
    input  wire                clk,
    input  wire                rst_n,

    // ── Runtime modulus ─────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]  q,

    // ── Operand A write port ─────────────────────────────────────
    input  wire                a_wr_en,
    input  wire [LOGN-1:0]     a_wr_addr,
    input  wire [Q_WIDTH-1:0]  a_wr_data,

    // ── Operand B write port ─────────────────────────────────────
    input  wire                b_wr_en,
    input  wire [LOGN-1:0]     b_wr_addr,
    input  wire [Q_WIDTH-1:0]  b_wr_data,

    // ── Control ──────────────────────────────────────────────────
    input  wire                start,
    input  wire                subtract,   // 0 = add, 1 = sub

    // ── Result read port ─────────────────────────────────────────
    input  wire [LOGN-1:0]     rd_addr,
    output reg  [Q_WIDTH-1:0]  rd_data,

    output reg                 done
);
    localparam integer N = 1 << LOGN;

    // ── Coefficient RAMs ─────────────────────────────────────────
    reg [Q_WIDTH-1:0] mem_a [0:N-1];
    reg [Q_WIDTH-1:0] mem_b [0:N-1];
    reg [Q_WIDTH-1:0] mem_r [0:N-1];   // result

    // ── FSM ──────────────────────────────────────────────────────
    localparam [1:0]
        ST_IDLE = 2'd0,
        ST_EXEC = 2'd1,
        ST_DONE = 2'd2;

    reg [1:0]      state;
    reg [LOGN-1:0] idx;

    // ── Modular arithmetic (behavioural) ─────────────────────────
    function automatic [Q_WIDTH-1:0] mod_add;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [Q_WIDTH:0] s;
        begin
            s = {1'b0, a} + {1'b0, b};
            mod_add = (s >= {1'b0, qq}) ? s[Q_WIDTH-1:0] - qq
                                        : s[Q_WIDTH-1:0];
        end
    endfunction

    function automatic [Q_WIDTH-1:0] mod_sub;
        input [Q_WIDTH-1:0] a, b, qq;
        reg [Q_WIDTH:0] d;
        begin
            d = {1'b0, a} + {1'b0, qq} - {1'b0, b};
            mod_sub = (d >= {1'b0, qq}) ? d[Q_WIDTH-1:0] - qq
                                        : d[Q_WIDTH-1:0];
        end
    endfunction

    // ── Latch subtract flag at start ─────────────────────────────
    reg sub_r;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state   <= ST_IDLE;
            done    <= 1'b0;
            idx     <= 0;
            sub_r   <= 1'b0;
            rd_data <= 0;
        end else begin
            // Write ports — always active
            if (a_wr_en) mem_a[a_wr_addr] <= a_wr_data;
            if (b_wr_en) mem_b[b_wr_addr] <= b_wr_data;

            // Read port — 1-cycle latency
            rd_data <= mem_r[rd_addr];

            case (state)

                ST_IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        idx   <= 0;
                        sub_r <= subtract;
                        state <= ST_EXEC;
                    end
                end

                // Process one coefficient per cycle
                ST_EXEC: begin
                    mem_r[idx] <= sub_r
                        ? mod_sub(mem_a[idx], mem_b[idx], q)
                        : mod_add(mem_a[idx], mem_b[idx], q);

                    if (idx == (N-1)) begin
                        state <= ST_DONE;
                    end else begin
                        idx <= idx + 1'b1;
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
