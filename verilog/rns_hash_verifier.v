`timescale 1ns/1ps
// ================================================================
// rns_hash_verifier.v  —  Multi-lane RNS homomorphic hash verifier
//
// Instantiates N_PRIMES independent hash_verifier units running in
// PARALLEL, one per RNS prime.  All lanes start together; done
// asserts when every lane has finished.  valid is asserted only if
// ALL lanes report a match (i.e. the circuit holds under every prime).
//
// This mirrors the rns_ntt.v pattern: a thin wrapper that replicates
// the single-prime module N_PRIMES times and gates writes by lane_sel.
//
// Port layout:
//   q_all / n_inv_all / q_neg_inv_all  — packed, lane i at bit i*W
//   lane_sel      — selects which prime lane receives CT / r writes
//   tw_lane_sel   — selects which prime lane receives twiddle writes
//   All other ports are identical to hash_verifier.v
//
// Parameters
//   LOGN     : log2(N)                         (default 13)
//   Q_WIDTH  : prime modulus bit-width         (default 60)
//   CT_SIZE  : max ct components per ciphertext (default 3)
//   N_PRIMES : number of RNS prime lanes       (default 2)
//   SEL_W    : ceil(log2(N_PRIMES)), min 1     (default 1)
// ================================================================
module rns_hash_verifier #(
    parameter LOGN     = 13,
    parameter Q_WIDTH  = 60,
    parameter CT_SIZE  = 3,
    parameter N_PRIMES = 2,
    parameter SEL_W    = 1      // ceil(log2(N_PRIMES)), min 1
)(
    input  wire                               clk,
    input  wire                               rst_n,

    // ── Per-lane moduli (packed, lane i at bit i*W) ───────────────
    input  wire [N_PRIMES*Q_WIDTH-1:0]        q_all,
    input  wire [N_PRIMES*Q_WIDTH-1:0]        n_inv_all,
    input  wire [N_PRIMES*64-1:0]           q_neg_inv_all,

    // ── Lane select for CT and r writes ──────────────────────────
    input  wire [SEL_W-1:0]                   lane_sel,

    // ── Ciphertext write port ─────────────────────────────────────
    input  wire [1:0]                         ct_id,
    input  wire [1:0]                         ct_sel,
    input  wire                               ct_wr_en,
    input  wire [LOGN-1:0]                    ct_wr_addr,
    input  wire [Q_WIDTH-1:0]                 ct_wr_data,

    // ── Random polynomial r write port ────────────────────────────
    input  wire                               r_wr_en,
    input  wire [LOGN-1:0]                    r_wr_addr,
    input  wire [Q_WIDTH-1:0]                 r_wr_data,

    // ── Twiddle table write port (per-lane select) ────────────────
    input  wire [SEL_W-1:0]                   tw_lane_sel,
    input  wire                               tw_wr_en,
    input  wire [LOGN:0]                      tw_wr_addr,
    input  wire [Q_WIDTH-1:0]                 tw_wr_data,

    // ── Component counts (same for all lanes) ─────────────────────
    input  wire [1:0]                         c1_count,
    input  wire [1:0]                         c2_count,
    input  wire [1:0]                         c3_count,

    // ── Control — all lanes start simultaneously ──────────────────
    input  wire                               start,

    // ── Output ───────────────────────────────────────────────────
    output wire                               done,   // 1 when ALL lanes done
    output wire                               valid   // 1 when ALL lanes match
);

    // done / valid only when every lane agrees
    wire [N_PRIMES-1:0] lane_done;
    wire [N_PRIMES-1:0] lane_valid;

    assign done  = &lane_done;
    assign valid = &lane_valid;

    // ── Generate N_PRIMES parallel hash_verifier instances ───────
    genvar i;
    generate
        for (i = 0; i < N_PRIMES; i = i + 1) begin : lane
            hash_verifier #(
                .LOGN    (LOGN),
                .Q_WIDTH (Q_WIDTH),
                .CT_SIZE (CT_SIZE)
            ) u_hv (
                .clk       (clk),
                .rst_n     (rst_n),

                // Extract this lane's moduli slice from packed buses
                .q         (q_all        [i * Q_WIDTH   +: Q_WIDTH  ]),
                .n_inv     (n_inv_all    [i * Q_WIDTH   +: Q_WIDTH  ]),
                .q_neg_inv (q_neg_inv_all[i * 64 +: 64]),

                // Gate CT write on lane_sel == i
                .ct_id      (ct_id),
                .ct_sel     (ct_sel),
                .ct_wr_en   (ct_wr_en  & (lane_sel    == i[SEL_W-1:0])),
                .ct_wr_addr (ct_wr_addr),
                .ct_wr_data (ct_wr_data),

                // Gate r write on lane_sel == i
                .r_wr_en   (r_wr_en   & (lane_sel    == i[SEL_W-1:0])),
                .r_wr_addr (r_wr_addr),
                .r_wr_data (r_wr_data),

                // Gate twiddle write on tw_lane_sel == i
                .tw_wr_en   (tw_wr_en  & (tw_lane_sel == i[SEL_W-1:0])),
                .tw_wr_addr (tw_wr_addr),
                .tw_wr_data (tw_wr_data),

                .c1_count  (c1_count),
                .c2_count  (c2_count),
                .c3_count  (c3_count),

                .start     (start),

                .done      (lane_done [i]),
                .valid     (lane_valid[i])
            );
        end
    endgenerate

endmodule
