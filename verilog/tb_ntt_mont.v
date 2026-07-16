`timescale 1ns/1ps
// ================================================================
// tb_ntt_mont.v — Testbench for ntt_mont (Montgomery-reduction NTT)
//
// Loads vectors from gen_ntt_mont_vectors.py and checks the core
// against the SW reference:
//   1. NTT :  HW_NTT(input)    == tv_mont_ntt.hex
//   2. INTT:  HW_INTT(NTT_out) == tv_mont_intt.hex  (== input)
//
// The expected values are the *unmodified* _SW_NTT_Engine outputs —
// identical to what the Barrett core (ntt.v) produces. Montgomery is
// an implementation change, not a numerical one, so exact equality is
// the correct bar.
//
// The twiddle tables and n_inv in the .hex are pre-scaled by R=2^Q_WIDTH;
// the coefficients are plain. See gen_ntt_mont_vectors.py.
//
// Usage:
//   iverilog -o tb_ntt_mont tb_ntt_mont.v ntt_mont.v && vvp tb_ntt_mont
//   vivado -mode batch -source run_sim.tcl -tclargs tb_ntt_mont
//
// Parameters must match the .hex vectors in verilog/. Regenerate with:
//   python gen_ntt_mont_vectors.py 13
// ================================================================
module tb_ntt_mont;

    parameter integer LOGN    = 13;   // matches ntt_mont.v default
    parameter integer Q_WIDTH = 60;
    parameter integer N       = 1 << LOGN;

    // ── Clock & reset ─────────────────────────────────────────────
    reg clk;
    reg rst_n;
    always #5 clk = ~clk;    // 100 MHz

    // ── DUT ports ─────────────────────────────────────────────────
    reg  [Q_WIDTH-1:0] q;
    reg  [Q_WIDTH-1:0] n_inv;
    reg  [Q_WIDTH-1:0] q_inv;
    reg                coeff_wr_en;
    reg  [LOGN-1:0]    coeff_wr_addr;
    reg  [Q_WIDTH-1:0] coeff_wr_data;
    reg                tw_wr_en;
    reg  [LOGN:0]      tw_wr_addr;
    reg  [Q_WIDTH-1:0] tw_wr_data;
    reg                start;
    reg                inverse;
    reg  [LOGN-1:0]    rd_addr;
    wire [Q_WIDTH-1:0] rd_data;
    wire               done;

    ntt_mont #(
        .LOGN    (LOGN),
        .Q_WIDTH (Q_WIDTH)
    ) dut (
        .clk           (clk),
        .rst_n         (rst_n),
        .q             (q),
        .n_inv         (n_inv),
        .q_inv         (q_inv),
        .coeff_wr_en   (coeff_wr_en),
        .coeff_wr_addr (coeff_wr_addr),
        .coeff_wr_data (coeff_wr_data),
        .tw_wr_en      (tw_wr_en),
        .tw_wr_addr    (tw_wr_addr),
        .tw_wr_data    (tw_wr_data),
        .start         (start),
        .inverse       (inverse),
        .rd_addr       (rd_addr),
        .rd_data       (rd_data),
        .done          (done)
    );

    // ── Test vector memories ──────────────────────────────────────
    // params: [0]=q, [1]=n_inv_mont, [2]=q_inv
    reg [Q_WIDTH-1:0] params   [0:2];
    reg [Q_WIDTH-1:0] tw_fwd   [0:N-1];
    reg [Q_WIDTH-1:0] tw_inv   [0:N-1];
    reg [Q_WIDTH-1:0] inp      [0:N-1];
    reg [Q_WIDTH-1:0] ntt_exp  [0:N-1];
    reg [Q_WIDTH-1:0] intt_exp [0:N-1];

    reg [Q_WIDTH-1:0] hw_ntt   [0:N-1];
    reg [Q_WIDTH-1:0] hw_intt  [0:N-1];

    // ── Wait for done ─────────────────────────────────────────────
    integer guard_max;
    integer gi;
    task wait_done;
        begin
            guard_max = 4 * N * LOGN + 2 * N + 200;
            for (gi = 0; gi < guard_max; gi = gi + 1) begin
                @(posedge clk);
                if (done) gi = guard_max;   // exit loop
            end
            if (!done)
                $display("  ERROR: timeout after %0d cycles", guard_max);
        end
    endtask

    integer i;
    integer fail_count;
    integer total_fail;

    initial begin
        $readmemh("tv_mont_params.hex",       params);
        $readmemh("tv_mont_twiddles_fwd.hex", tw_fwd);
        $readmemh("tv_mont_twiddles_inv.hex", tw_inv);
        $readmemh("tv_mont_input.hex",        inp);
        $readmemh("tv_mont_ntt.hex",          ntt_exp);
        $readmemh("tv_mont_intt.hex",         intt_exp);

        clk = 0; rst_n = 0;
        coeff_wr_en = 0; tw_wr_en = 0; start = 0; inverse = 0; rd_addr = 0;
        repeat(8) @(posedge clk);
        rst_n = 1;
        @(posedge clk);

        q     = params[0];
        n_inv = params[1];
        q_inv = params[2];

        // Guard against an unloaded/misplaced .hex (see CLAUDE.md: xsim
        // resolves $readmemh against its own run dir, not the Tcl cwd).
        if (^q === 1'bx) begin
            $display("FATAL: tv_mont_params.hex did not load (q is X).");
            $finish;
        end

        $display("LOGN=%0d  N=%0d  q=%0d", LOGN, N, q);
        $display("n_inv_mont=%0d  q_inv=%0d\n", n_inv, q_inv);

        // ── Load twiddles: [0,N) forward, [N,2N) inverse ──────────
        tw_wr_en = 1;
        for (i = 0; i < N; i = i + 1) begin
            tw_wr_addr = i;   tw_wr_data = tw_fwd[i]; @(posedge clk);
        end
        for (i = 0; i < N; i = i + 1) begin
            tw_wr_addr = N+i; tw_wr_data = tw_inv[i]; @(posedge clk);
        end
        tw_wr_en = 0;
        @(posedge clk);

        // ── Load input coefficients ───────────────────────────────
        coeff_wr_en = 1;
        for (i = 0; i < N; i = i + 1) begin
            coeff_wr_addr = i; coeff_wr_data = inp[i]; @(posedge clk);
        end
        coeff_wr_en = 0;
        @(posedge clk);

        // ── Forward NTT ───────────────────────────────────────────
        $display("[NTT] start...");
        inverse = 0; start = 1; @(posedge clk); start = 0;
        wait_done;
        $display("[NTT] done.");

        for (i = 0; i < N; i = i + 1) begin
            rd_addr = i;
            @(posedge clk);     // cdo <= coeff[i]
            @(negedge clk);     // rd_data stable
            hw_ntt[i] = rd_data;
        end

        fail_count = 0;
        for (i = 0; i < N; i = i + 1)
            if (hw_ntt[i] !== ntt_exp[i]) begin
                if (fail_count < 8)
                    $display("  FAIL NTT  i=%0d  got=%0d  exp=%0d",
                             i, hw_ntt[i], ntt_exp[i]);
                fail_count = fail_count + 1;
            end
        if (fail_count == 0) $display("[NTT] PASS — matches SW reference");
        else                 $display("[NTT] FAIL — %0d/%0d mismatches", fail_count, N);
        total_fail = fail_count;

        // ── Reload NTT output as INTT input ───────────────────────
        coeff_wr_en = 1;
        for (i = 0; i < N; i = i + 1) begin
            coeff_wr_addr = i; coeff_wr_data = hw_ntt[i]; @(posedge clk);
        end
        coeff_wr_en = 0;
        @(posedge clk);

        // ── Inverse NTT ───────────────────────────────────────────
        $display("\n[INTT] start...");
        inverse = 1; start = 1; @(posedge clk); start = 0;
        wait_done;
        $display("[INTT] done.");

        for (i = 0; i < N; i = i + 1) begin
            rd_addr = i;
            @(posedge clk);
            @(negedge clk);
            hw_intt[i] = rd_data;
        end

        fail_count = 0;
        for (i = 0; i < N; i = i + 1)
            if (hw_intt[i] !== intt_exp[i]) begin
                if (fail_count < 8)
                    $display("  FAIL INTT i=%0d  got=%0d  exp=%0d",
                             i, hw_intt[i], intt_exp[i]);
                fail_count = fail_count + 1;
            end
        if (fail_count == 0) $display("[INTT] PASS — recovered original input");
        else                 $display("[INTT] FAIL — %0d/%0d mismatches", fail_count, N);
        total_fail = total_fail + fail_count;

        $display("\n==== %s ====", (total_fail == 0) ? "ALL PASS" : "FAILURES PRESENT");
        $finish;
    end

endmodule
