`timescale 1ns/1ps
// ================================================================
// rns_ntt.v  —  Multi-lane RNS NTT engine
//
// Instantiates N_PRIMES independent ntt units running in PARALLEL,
// one per RNS prime.  All lanes start together when start is pulsed;
// done asserts when every lane has finished.
//
// This replaces the host calling ntt.v N_PRIMES times sequentially.
// Latency = single-lane NTT latency regardless of N_PRIMES.
//
// Port layout — packed arrays, lane i at bit offset i*W:
//   q_all         [N_PRIMES * Q_WIDTH   - 1 : 0]  one q per lane
//   n_inv_all     [N_PRIMES * Q_WIDTH   - 1 : 0]  N^{-1} mod q_i
//   barrett_m_all [N_PRIMES * 2*Q_WIDTH - 1 : 0]  Barrett constants
//
// Coefficient I/O:
//   lane_sel      selects which prime lane to write a coefficient to
//   coeff_wr_*    loads one coefficient into that lane's RAM
//   Load all N_PRIMES lanes BEFORE asserting start.
//
// Twiddle I/O:
//   tw_lane_sel   selects which prime lane to write twiddle to
//   tw_wr_*       loads one twiddle entry into that lane's ROM
//
// Control:
//   start         pulse to begin all lanes simultaneously
//   inverse       0 = NTT, 1 = INTT
//
// Result:
//   rd_lane       selects which prime lane to read from
//   rd_addr       coefficient address (1-cycle registered read latency)
//   rd_data       result coefficient from the selected lane
//   lane_done     per-lane done bits
//   done          1 when ALL lanes have finished
//
// Parameters
//   LOGN     : log2(N)                         (default 13)
//   Q_WIDTH  : prime modulus bit-width         (default 40)
//   N_PRIMES : number of RNS prime lanes       (default 2)
//   SEL_W    : ceil(log2(N_PRIMES)), minimum 1 (default 1)
//              Must be set to ceil(log2(N_PRIMES)) when overriding N_PRIMES.
// ================================================================
module rns_ntt #(
    parameter LOGN     = 13,
    parameter Q_WIDTH  = 40,
    parameter N_PRIMES = 2,
    parameter SEL_W    = 1      // ceil(log2(N_PRIMES)), min 1
)(
    input  wire                               clk,
    input  wire                               rst_n,

    // ── Per-lane moduli (packed, lane i at bit i*W) ───────────────
    input  wire [N_PRIMES*Q_WIDTH-1:0]        q_all,
    input  wire [N_PRIMES*Q_WIDTH-1:0]        n_inv_all,
    input  wire [N_PRIMES*2*Q_WIDTH-1:0]      barrett_m_all,

    // ── Coefficient write port ────────────────────────────────────
    input  wire [SEL_W-1:0]                   lane_sel,
    input  wire                               coeff_wr_en,
    input  wire [LOGN-1:0]                    coeff_wr_addr,
    input  wire [Q_WIDTH-1:0]                 coeff_wr_data,

    // ── Twiddle write port ────────────────────────────────────────
    input  wire [SEL_W-1:0]                   tw_lane_sel,
    input  wire                               tw_wr_en,
    input  wire [LOGN:0]                      tw_wr_addr,
    input  wire [Q_WIDTH-1:0]                 tw_wr_data,

    // ── Control — all lanes start simultaneously ──────────────────
    input  wire                               start,
    input  wire                               inverse,

    // ── Result read port ─────────────────────────────────────────
    input  wire [SEL_W-1:0]                   rd_lane,
    input  wire [LOGN-1:0]                    rd_addr,
    output wire [Q_WIDTH-1:0]                 rd_data,

    // ── Status ────────────────────────────────────────────────────
    output wire [N_PRIMES-1:0]                lane_done,
    output wire                               done
);

    // done only when every lane is done
    assign done = &lane_done;

    // Per-lane read data bus (N_PRIMES × Q_WIDTH, packed)
    wire [N_PRIMES*Q_WIDTH-1:0] rd_data_all;

    // Mux result from the selected lane
    assign rd_data = rd_data_all[rd_lane * Q_WIDTH +: Q_WIDTH];

    // ── Generate N_PRIMES parallel NTT instances ──────────────────
    genvar i;
    generate
        for (i = 0; i < N_PRIMES; i = i + 1) begin : lane
            ntt #(
                .LOGN    (LOGN),
                .Q_WIDTH (Q_WIDTH)
            ) u_ntt (
                .clk           (clk),
                .rst_n         (rst_n),

                // extract this lane's slice from the packed arrays
                .q             (q_all        [i * Q_WIDTH     +: Q_WIDTH    ]),
                .n_inv         (n_inv_all    [i * Q_WIDTH     +: Q_WIDTH    ]),
                .barrett_m     (barrett_m_all[i * 2*Q_WIDTH   +: 2*Q_WIDTH  ]),

                // gate coefficient write on lane_sel
                .coeff_wr_en   (coeff_wr_en & (lane_sel == i[SEL_W-1:0])),
                .coeff_wr_addr (coeff_wr_addr),
                .coeff_wr_data (coeff_wr_data),

                // gate twiddle write on tw_lane_sel
                .tw_wr_en      (tw_wr_en & (tw_lane_sel == i[SEL_W-1:0])),
                .tw_wr_addr    (tw_wr_addr),
                .tw_wr_data    (tw_wr_data),

                // all lanes share the same start / inverse pulse
                .start         (start),
                .inverse       (inverse),

                // read port (all lanes share the same rd_addr; mux selects output)
                .rd_addr       (rd_addr),
                .rd_data       (rd_data_all[i * Q_WIDTH +: Q_WIDTH]),
                .done          (lane_done[i])
            );
        end
    endgenerate

endmodule