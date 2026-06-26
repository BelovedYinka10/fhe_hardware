`timescale 1ns/1ps
// ================================================================
// tb_poly_mul_schoolbook.v
//
// Tests poly_mul_schoolbook with:
//   a = [1, 2, 3, 4, 0, 0, ...]
//   b = [5, 6, 7, 8, 0, 0, ...]
// Expected result (same as NTT poly_mul test):
//   out[0..6] = 5, 16, 34, 60, 61, 52, 32
//
// Also reports total cycle count and time at 100 MHz
// so it can be compared directly against the NTT core.
// ================================================================
module tb_poly_mul_schoolbook;
    localparam LOGN    = 13;
    localparam Q_WIDTH = 40;
    localparam integer N = 1 << LOGN;
    localparam [Q_WIDTH-1:0] Q = 40'd883949569;

    reg clk = 0;
    reg rst_n;
    always #5 clk = ~clk;  // 100 MHz

    reg                 a_wr_en, b_wr_en, start;
    reg  [LOGN-1:0]     a_wr_addr, b_wr_addr, rd_addr;
    reg  [Q_WIDTH-1:0]  a_wr_data, b_wr_data;
    wire [Q_WIDTH-1:0]  rd_data;
    wire                done;

    poly_mul_schoolbook #(
        .LOGN(LOGN), .Q_WIDTH(Q_WIDTH)
    ) dut (
        .clk(clk), .rst_n(rst_n), .q(Q),
        .a_wr_en(a_wr_en), .a_wr_addr(a_wr_addr), .a_wr_data(a_wr_data),
        .b_wr_en(b_wr_en), .b_wr_addr(b_wr_addr), .b_wr_data(b_wr_data),
        .start(start), .done(done),
        .rd_addr(rd_addr), .rd_data(rd_data)
    );

    integer i;
    integer cycle_count;
    real    time_ms;

    initial begin
        $display("================================================================");
        $display("  Schoolbook Poly Mul — N=%0d, Q=%0d", N, Q);
        $display("================================================================");

        // Reset
        rst_n = 0; start = 0; a_wr_en = 0; b_wr_en = 0;
        repeat(10) @(posedge clk);
        rst_n = 1; @(posedge clk);

        // Load operands
        // a = [1, 2, 3, 4, 0, 0, ...]
        // b = [5, 6, 7, 8, 0, 0, ...]
        $display("  Loading operands...");
        for (i = 0; i < N; i = i+1) begin
            a_wr_en   = 1;
            a_wr_addr = i[LOGN-1:0];
            a_wr_data = (i==0) ? 1 :
                        (i==1) ? 2 :
                        (i==2) ? 3 :
                        (i==3) ? 4 : 0;
            b_wr_en   = 1;
            b_wr_addr = i[LOGN-1:0];
            b_wr_data = (i==0) ? 5 :
                        (i==1) ? 6 :
                        (i==2) ? 7 :
                        (i==3) ? 8 : 0;
            @(posedge clk);
        end
        a_wr_en = 0; b_wr_en = 0;
        @(posedge clk);

        // Start and count cycles
        $display("  Starting multiplication...");
        $display("  (This will take ~268 million cycles at N=8192)");
        cycle_count = 0;
        start = 1; @(posedge clk); start = 0;

        while (!done) begin
            @(posedge clk);
            cycle_count = cycle_count + 1;
            // Progress report every 10M cycles
            if (cycle_count % 10_000_000 == 0)
                $display("  ... %0d M cycles", cycle_count/1_000_000);
        end

        time_ms = (cycle_count * 10.0) / 1_000_000.0;

        $display("");
        $display("================================================================");
        $display("  DONE");
        $display("  Cycles      : %0d", cycle_count);
        $display("  Time@100MHz : %.2f ms", time_ms);
        $display("================================================================");
        $display("");

        // Read first 8 results
        $display("  Result (first 8 coefficients):");
        for (i = 0; i < 8; i = i+1) begin
            rd_addr = i[LOGN-1:0];
            @(posedge clk);
            @(posedge clk);  // 1-cycle BRAM read latency
            $display("    out[%0d] = %0d", i, rd_data);
        end
        $display("  Expected: 5 16 34 60 61 52 32 0");
        $display("");
        $display("  NTT core comparison:");
        $display("    NTT  cycles : ~266,240     (~2.66 ms @ 100MHz)");
        $display("    SB   cycles : %0d  (~%.2f ms @ 100MHz)",
                 cycle_count, time_ms);
        $display("    Slowdown    : ~%.0fx", time_ms / 2.66);
        $display("================================================================");

        $finish;
    end

endmodule
