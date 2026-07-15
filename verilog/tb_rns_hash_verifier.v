`timescale 1ns/1ps
// ================================================================
// tb_rns_hash_verifier.v  —  Vivado testbench for rns_hash_verifier
//
// Loads test vectors from hex files produced by gen_rns_hv_vectors.py
// and verifies that all 3 RNS prime lanes report valid=1
// (H(c3) == H(c1)*H(c2) + H(c2) in every prime ring).
//
// Usage in Vivado:
//   1. Run from src/:  python ../verilog/gen_rns_hv_vectors.py
//   2. Add design sources:
//        rns_hash_verifier.v  hash_verifier.v  cipher_hash.v
//        poly_mul.v  poly_add.v  ntt.v
//   3. Add simulation source: tb_rns_hash_verifier.v
//   4. Set simulation working dir to verilog/ (where .hex files live)
//   5. Run Behavioral Simulation — expect PASS and valid=1
//
// Parameters must match gen_rns_hv_vectors.py:
//   LOGN=13, Q_WIDTH=60, CT_SIZE=3, N_PRIMES=2, SEL_W=1
// ================================================================
module tb_rns_hash_verifier;

    // ── Compiled parameters ──────────────────────────────────────
    localparam integer LOGN     = 13;
    localparam integer Q_WIDTH  = 60;
    localparam integer CT_SIZE  = 3;
    localparam integer N_PRIMES = 2;
    localparam integer SEL_W    = 1;
    localparam integer N        = 1 << LOGN;   // 8192

    // Each hash_verifier lane runs ~7 poly_muls in sequence.
    // With 3 parallel lanes the wall-clock latency equals one lane.
    // poly_mul ≈ 3·N·LOGN cycles ≈ 320 k cycles; 7 muls ≈ 2.2 M.
    // Set conservatively.
    localparam integer MAX_CYCLES = 20_000_000;

    // ── Clock and reset ──────────────────────────────────────────
    reg clk;
    reg rst_n;
    initial clk = 0;
    always #5 clk = ~clk;   // 100 MHz

    // ── DUT ports ────────────────────────────────────────────────
    reg  [N_PRIMES*Q_WIDTH-1:0]     q_all;
    reg  [N_PRIMES*Q_WIDTH-1:0]     n_inv_all;
    reg  [N_PRIMES*2*Q_WIDTH-1:0]   barrett_m_all;
    reg  [SEL_W-1:0]                lane_sel;
    reg  [1:0]                      ct_id;
    reg  [1:0]                      ct_sel;
    reg                             ct_wr_en;
    reg  [LOGN-1:0]                 ct_wr_addr;
    reg  [Q_WIDTH-1:0]              ct_wr_data;
    reg                             r_wr_en;
    reg  [LOGN-1:0]                 r_wr_addr;
    reg  [Q_WIDTH-1:0]              r_wr_data;
    reg  [SEL_W-1:0]                tw_lane_sel;
    reg                             tw_wr_en;
    reg  [LOGN:0]                   tw_wr_addr;
    reg  [Q_WIDTH-1:0]              tw_wr_data;
    reg  [1:0]                      c1_count;
    reg  [1:0]                      c2_count;
    reg  [1:0]                      c3_count;
    reg                             start;
    wire                            done;
    wire                            valid;

    // ── DUT instantiation ────────────────────────────────────────
    rns_hash_verifier #(
        .LOGN     (LOGN),
        .Q_WIDTH  (Q_WIDTH),
        .CT_SIZE  (CT_SIZE),
        .N_PRIMES (N_PRIMES),
        .SEL_W    (SEL_W)
    ) dut (
        .clk          (clk),
        .rst_n        (rst_n),
        .q_all        (q_all),
        .n_inv_all    (n_inv_all),
        .barrett_m_all(barrett_m_all),
        .lane_sel     (lane_sel),
        .ct_id        (ct_id),
        .ct_sel       (ct_sel),
        .ct_wr_en     (ct_wr_en),
        .ct_wr_addr   (ct_wr_addr),
        .ct_wr_data   (ct_wr_data),
        .r_wr_en      (r_wr_en),
        .r_wr_addr    (r_wr_addr),
        .r_wr_data    (r_wr_data),
        .tw_lane_sel  (tw_lane_sel),
        .tw_wr_en     (tw_wr_en),
        .tw_wr_addr   (tw_wr_addr),
        .tw_wr_data   (tw_wr_data),
        .c1_count     (c1_count),
        .c2_count     (c2_count),
        .c3_count     (c3_count),
        .start        (start),
        .done         (done),
        .valid        (valid)
    );

    // ── Test vector memories ─────────────────────────────────────
    // params: [0]=q, [1]=n_inv, [2]=c1_count, [3]=c2_count,
    //         [4]=c3_count, [5]=barrett_m  (all at 2*Q_WIDTH wide)
    reg [2*Q_WIDTH-1:0] params0 [0:5];
    reg [2*Q_WIDTH-1:0] params1 [0:5];

    reg [Q_WIDTH-1:0] tw_fwd0 [0:N-1];
    reg [Q_WIDTH-1:0] tw_inv0 [0:N-1];
    reg [Q_WIDTH-1:0] tw_fwd1 [0:N-1];
    reg [Q_WIDTH-1:0] tw_inv1 [0:N-1];

    reg [Q_WIDTH-1:0] r0 [0:N-1];
    reg [Q_WIDTH-1:0] r1 [0:N-1];

    // c1 (2 components × 2 lanes)
    reg [Q_WIDTH-1:0] c1_0_L0 [0:N-1];
    reg [Q_WIDTH-1:0] c1_1_L0 [0:N-1];
    reg [Q_WIDTH-1:0] c1_0_L1 [0:N-1];
    reg [Q_WIDTH-1:0] c1_1_L1 [0:N-1];

    // c2 (2 components × 2 lanes)
    reg [Q_WIDTH-1:0] c2_0_L0 [0:N-1];
    reg [Q_WIDTH-1:0] c2_1_L0 [0:N-1];
    reg [Q_WIDTH-1:0] c2_0_L1 [0:N-1];
    reg [Q_WIDTH-1:0] c2_1_L1 [0:N-1];

    // c3 (3 components × 2 lanes)
    reg [Q_WIDTH-1:0] c3_0_L0 [0:N-1];
    reg [Q_WIDTH-1:0] c3_1_L0 [0:N-1];
    reg [Q_WIDTH-1:0] c3_2_L0 [0:N-1];
    reg [Q_WIDTH-1:0] c3_0_L1 [0:N-1];
    reg [Q_WIDTH-1:0] c3_1_L1 [0:N-1];
    reg [Q_WIDTH-1:0] c3_2_L1 [0:N-1];

    integer i;
    integer cycle_count;

    // ── Main test sequence ───────────────────────────────────────
    initial begin
        $display("================================================================");
        $display("  tb_rns_hash_verifier — Vivado Behavioral Simulation");
        $display("  N=%0d  N_PRIMES=%0d  Q_WIDTH=%0d", N, N_PRIMES, Q_WIDTH);
        $display("================================================================");

        // ── Load hex files ───────────────────────────────────────
        $readmemh("tv_rns_hv_params_lane0.hex",       params0);
        $readmemh("tv_rns_hv_params_lane1.hex",       params1);
        $readmemh("tv_rns_hv_twiddles_fwd_lane0.hex", tw_fwd0);
        $readmemh("tv_rns_hv_twiddles_inv_lane0.hex", tw_inv0);
        $readmemh("tv_rns_hv_twiddles_fwd_lane1.hex", tw_fwd1);
        $readmemh("tv_rns_hv_twiddles_inv_lane1.hex", tw_inv1);
        $readmemh("tv_rns_hv_r_lane0.hex",            r0);
        $readmemh("tv_rns_hv_r_lane1.hex",            r1);
        $readmemh("tv_rns_hv_c1_0_lane0.hex",         c1_0_L0);
        $readmemh("tv_rns_hv_c1_1_lane0.hex",         c1_1_L0);
        $readmemh("tv_rns_hv_c1_0_lane1.hex",         c1_0_L1);
        $readmemh("tv_rns_hv_c1_1_lane1.hex",         c1_1_L1);
        $readmemh("tv_rns_hv_c2_0_lane0.hex",         c2_0_L0);
        $readmemh("tv_rns_hv_c2_1_lane0.hex",         c2_1_L0);
        $readmemh("tv_rns_hv_c2_0_lane1.hex",         c2_0_L1);
        $readmemh("tv_rns_hv_c2_1_lane1.hex",         c2_1_L1);
        $readmemh("tv_rns_hv_c3_0_lane0.hex",         c3_0_L0);
        $readmemh("tv_rns_hv_c3_1_lane0.hex",         c3_1_L0);
        $readmemh("tv_rns_hv_c3_2_lane0.hex",         c3_2_L0);
        $readmemh("tv_rns_hv_c3_0_lane1.hex",         c3_0_L1);
        $readmemh("tv_rns_hv_c3_1_lane1.hex",         c3_1_L1);
        $readmemh("tv_rns_hv_c3_2_lane1.hex",         c3_2_L1);

        // ── Reset ────────────────────────────────────────────────
        rst_n    = 0; start   = 0;
        ct_wr_en = 0; r_wr_en = 0; tw_wr_en = 0;
        repeat (10) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        // ── Pack moduli buses ────────────────────────────────────
        // Lane i occupies bits [i*W +: W] (lane 0 at LSB)
        q_all         = { params1[0][Q_WIDTH-1:0],
                          params0[0][Q_WIDTH-1:0] };
        n_inv_all     = { params1[1][Q_WIDTH-1:0],
                          params0[1][Q_WIDTH-1:0] };
        barrett_m_all = { params1[5][2*Q_WIDTH-1:0],
                          params0[5][2*Q_WIDTH-1:0] };

        c1_count = params0[2][1:0];
        c2_count = params0[3][1:0];
        c3_count = params0[4][1:0];

        $display("  Lane 0: q=%0d (%0d-bit)", params0[0][Q_WIDTH-1:0],
                 $clog2(params0[0][Q_WIDTH-1:0]));
        $display("  Lane 1: q=%0d (%0d-bit)", params1[0][Q_WIDTH-1:0],
                 $clog2(params1[0][Q_WIDTH-1:0]));
        $display("  c1_count=%0d  c2_count=%0d  c3_count=%0d",
                 c1_count, c2_count, c3_count);
        $display("");

        // ── Load twiddle tables (lane by lane via tw_lane_sel) ───
        $display("  [%0t] Loading twiddles (lane 0)...", $time);
        tw_lane_sel = 0;
        for (i = 0; i < N; i = i + 1) begin
            tw_wr_en = 1; tw_wr_addr = i[LOGN:0]; tw_wr_data = tw_fwd0[i];
            @(posedge clk);
        end
        for (i = 0; i < N; i = i + 1) begin
            tw_wr_addr = N[LOGN:0] + i[LOGN:0]; tw_wr_data = tw_inv0[i];
            @(posedge clk);
        end

        $display("  [%0t] Loading twiddles (lane 1)...", $time);
        tw_lane_sel = 1;
        for (i = 0; i < N; i = i + 1) begin
            tw_wr_addr = i[LOGN:0]; tw_wr_data = tw_fwd1[i];
            @(posedge clk);
        end
        for (i = 0; i < N; i = i + 1) begin
            tw_wr_addr = N[LOGN:0] + i[LOGN:0]; tw_wr_data = tw_inv1[i];
            @(posedge clk);
        end

        $display("  [%0t] Loading twiddles (lane 2)...", $time);
        tw_lane_sel = 2;
        for (i = 0; i < N; i = i + 1) begin
            tw_wr_addr = i[LOGN:0]; tw_wr_data = tw_fwd2[i];
            @(posedge clk);
        end
        for (i = 0; i < N; i = i + 1) begin
            tw_wr_addr = N[LOGN:0] + i[LOGN:0]; tw_wr_data = tw_inv2[i];
            @(posedge clk);
        end
        tw_wr_en = 0;
        @(posedge clk);

        // ── Load r (lane by lane via lane_sel) ───────────────────
        $display("  [%0t] Loading r (lane 0)...", $time);
        lane_sel = 0; r_wr_en = 1;
        for (i = 0; i < N; i = i + 1) begin
            r_wr_addr = i[LOGN-1:0]; r_wr_data = r0[i]; @(posedge clk);
        end
        $display("  [%0t] Loading r (lane 1)...", $time);
        lane_sel = 1;
        for (i = 0; i < N; i = i + 1) begin
            r_wr_addr = i[LOGN-1:0]; r_wr_data = r1[i]; @(posedge clk);
        end
        r_wr_en = 0;
        @(posedge clk);

        // ── Load ciphertexts (all lanes, all components) ─────────
        // Lane 0 — c1
        $display("  [%0t] Loading c1 (lane 0)...", $time);
        lane_sel = 0; ct_wr_en = 1; ct_id = 0;
        ct_sel = 0;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c1_0_L0[i]; @(posedge clk); end
        ct_sel = 1;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c1_1_L0[i]; @(posedge clk); end

        // Lane 1 — c1
        $display("  [%0t] Loading c1 (lane 1)...", $time);
        lane_sel = 1;
        ct_sel = 0;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c1_0_L1[i]; @(posedge clk); end
        ct_sel = 1;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c1_1_L1[i]; @(posedge clk); end

        // Lane 0 — c2
        $display("  [%0t] Loading c2 (lane 0)...", $time);
        lane_sel = 0; ct_id = 1;
        ct_sel = 0;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c2_0_L0[i]; @(posedge clk); end
        ct_sel = 1;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c2_1_L0[i]; @(posedge clk); end

        // Lane 1 — c2
        $display("  [%0t] Loading c2 (lane 1)...", $time);
        lane_sel = 1;
        ct_sel = 0;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c2_0_L1[i]; @(posedge clk); end
        ct_sel = 1;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c2_1_L1[i]; @(posedge clk); end

        // Lane 0 — c3
        $display("  [%0t] Loading c3 (lane 0)...", $time);
        lane_sel = 0; ct_id = 2;
        ct_sel = 0;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c3_0_L0[i]; @(posedge clk); end
        ct_sel = 1;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c3_1_L0[i]; @(posedge clk); end
        ct_sel = 2;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c3_2_L0[i]; @(posedge clk); end

        // Lane 1 — c3
        $display("  [%0t] Loading c3 (lane 1)...", $time);
        lane_sel = 1;
        ct_sel = 0;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c3_0_L1[i]; @(posedge clk); end
        ct_sel = 1;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c3_1_L1[i]; @(posedge clk); end
        ct_sel = 2;
        for (i=0;i<N;i=i+1) begin ct_wr_addr=i[LOGN-1:0]; ct_wr_data=c3_2_L1[i]; @(posedge clk); end

        ct_wr_en = 0;
        @(posedge clk);

        // ── Start — both lanes fire simultaneously ────────────────
        $display("");
        $display("  [%0t] Starting RNS hash verification (both lanes)...", $time);
        start = 1;
        @(posedge clk);
        start = 0;

        // ── Wait for done ────────────────────────────────────────
        cycle_count = 0;
        while (!done && cycle_count < MAX_CYCLES) begin
            @(posedge clk);
            cycle_count = cycle_count + 1;
        end

        if (!done) begin
            $display("  ERROR: Timeout after %0d cycles!", MAX_CYCLES);
            $display("================================================================");
            $finish;
        end

        $display("  [%0t] Done after %0d cycles.", $time, cycle_count);
        $display("");

        // ── Result ───────────────────────────────────────────────
        $display("================================================================");
        if (valid) begin
            $display("  PASS — valid = 1");
            $display("  Both RNS lanes confirmed:");
            $display("    H(c3) == H(c1)*H(c2) + H(c2)  in every prime ring");
        end else begin
            $display("  FAIL — valid = 0");
            $display("  Hash mismatch in at least one RNS lane.");
        end
        $display("  Total simulation cycles: %0d", cycle_count);
        $display("================================================================");

        $finish;
    end

    // ── Hard timeout watchdog ────────────────────────────────────
    initial begin
        #(MAX_CYCLES * 10 * 2);
        $display("  FATAL: Hard simulation timeout!");
        $finish;
    end

endmodule
