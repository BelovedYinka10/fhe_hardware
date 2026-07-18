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
//   Q_WIDTH : bit-width of prime modulus q             (default 60)
// ================================================================
module poly_add #(
    parameter LOGN    = 13,
    parameter Q_WIDTH = 60
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

    // ── Coefficient RAMs (Block-RAM friendly) ───────────────────
    (* ram_style = "block" *) (* rw_addr_collision = "no" *) reg [Q_WIDTH-1:0] mem_a [0:N-1];
    (* ram_style = "block" *) (* rw_addr_collision = "no" *) reg [Q_WIDTH-1:0] mem_b [0:N-1];
    (* ram_style = "block" *) (* rw_addr_collision = "no" *) reg [Q_WIDTH-1:0] mem_r [0:N-1];   // result

    // ── FSM ──────────────────────────────────────────────────────
    localparam [1:0]
        ST_IDLE  = 2'd0,
        ST_EXEC  = 2'd1,
        ST_DRAIN = 2'd2,   // drain the read→compute→write pipeline
        ST_DONE  = 2'd3;

    reg [1:0]      state;
    reg [LOGN:0]   cnt;        // 0..N (read pointer)

    // ── Read/compute/write pipeline registers ───────────────────
    reg [LOGN-1:0]    widx;       // write address (read addr, delayed 1 cycle)
    reg               wvalid;     // a result is ready to be written this cycle
    reg [Q_WIDTH-1:0] a_rd, b_rd; // registered RAM read data

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

    // Combinational RAM read address: stream coefficients during ST_EXEC.
    wire [LOGN-1:0] radr = (state == ST_EXEC) ? cnt[LOGN-1:0] : {LOGN{1'b0}};

    // ── mem_a: write port + registered read port (simple dual-port) ──
    always @(posedge clk) begin
        if (a_wr_en) mem_a[a_wr_addr] <= a_wr_data;
    end
    always @(posedge clk) begin
        if (!a_wr_en) a_rd <= mem_a[radr];
    end

    // ── mem_b: write port + registered read port ─────────────────
    always @(posedge clk) begin
        if (b_wr_en) mem_b[b_wr_addr] <= b_wr_data;
    end
    always @(posedge clk) begin
        if (!b_wr_en) b_rd <= mem_b[radr];
    end

    // ── mem_r: result write port + registered read (output) port ──
    always @(posedge clk) begin
        if (wvalid)
            mem_r[widx] <= sub_r ? mod_sub(a_rd, b_rd, q)
                                 : mod_add(a_rd, b_rd, q);
    end
    always @(posedge clk) begin
        if (!wvalid) rd_data <= mem_r[rd_addr];
    end

    // ── Control FSM (synchronous reset so the RAMs infer Block RAM) ──
    always @(posedge clk) begin
        if (!rst_n) begin
            state  <= ST_IDLE;
            done   <= 1'b0;
            cnt    <= 0;
            sub_r  <= 1'b0;
            widx   <= 0;
            wvalid <= 1'b0;
        end else begin
            // Pipeline: the value read at address 'cnt' (latched into
            // a_rd/b_rd next cycle) is written to mem_r[cnt] one cycle later.
            wvalid <= 1'b0;
            done   <= 1'b0;

            case (state)

                ST_IDLE: begin
                    if (start) begin
                        cnt   <= 0;
                        sub_r <= subtract;
                        state <= ST_EXEC;
                    end
                end

                // Issue one read per cycle; the matching write is staged.
                ST_EXEC: begin
                    widx   <= cnt[LOGN-1:0];
                    wvalid <= 1'b1;
                    if (cnt == N-1) state <= ST_DRAIN;
                    else            cnt   <= cnt + 1'b1;
                end

                // One extra cycle for the final read→compute→write to commit.
                ST_DRAIN: begin
                    state <= ST_DONE;
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
