// ================================================================
// rns_ntt_sim.cpp  —  Verilator C wrapper for the RNS NTT model
//
// Compiled for N_PRIMES=3, Q_WIDTH=40 (matches project [30,30,40] RNS base).
//
// Exposes a plain C API so Python ctypes can call it:
//
//   void* rns_ntt_engine_new(n_primes, qs, n_invs, barrett_ms,
//                             fwd_tables, inv_tables, table_size)
//   void  rns_ntt_engine_free(void* eng)
//   void  rns_ntt_run(void* eng, uint64_t* coeffs, n_primes, N, inverse)
//
// coeffs layout: coeffs[i*N + j] = lane i, coefficient j
//
// Packed Verilog bus layout (little-endian, lane i at bit i*W):
//   q_all         [N_PRIMES*Q_WIDTH-1:0]       = 120 bits → VlWide<4>
//   n_inv_all     [N_PRIMES*Q_WIDTH-1:0]       = 120 bits → VlWide<4>
//   barrett_m_all [N_PRIMES*2*Q_WIDTH-1:0]     = 240 bits → VlWide<8>
//
// Build with:   make rns_ntt  (see Makefile)
// ================================================================

#include "Vrns_ntt.h"
#include "verilated.h"
#include <cstdint>
#include <cstdlib>
#include <cstring>

double sc_time_stamp() { return 0; }

// Compiled-in lane count — must match Makefile -GN_PRIMES
static constexpr int COMPILED_N_PRIMES = 3;
static constexpr int Q_W    = 40;
// Number of 32-bit words needed for each packed bus
static constexpr int QN_WORDS = (COMPILED_N_PRIMES * Q_W     + 31) / 32; // 4
static constexpr int BM_WORDS = (COMPILED_N_PRIMES * 2 * Q_W + 31) / 32; // 8

// ── Per-engine context ─────────────────────────────────────────
struct RnsNttEngine {
    VerilatedContext* ctx;
    Vrns_ntt*         model;
    int               n_primes;
    int               logn;
};

// ── Clock helpers ──────────────────────────────────────────────
static void tick(RnsNttEngine* e) {
    e->model->clk = 0; e->model->eval();
    e->model->clk = 1; e->model->eval();
}

static void do_reset(RnsNttEngine* e) {
    e->model->rst_n      = 0;
    e->model->start      = 0;
    e->model->coeff_wr_en = 0;
    e->model->tw_wr_en   = 0;
    for (int i = 0; i < 8; i++) tick(e);
    e->model->rst_n = 1;
    tick(e);
}

// ── Packed bus helpers ─────────────────────────────────────────
//
// Pack n_vals uint64_t values (each occupying bits_per_val bits) into
// a Verilator VlWide word array (32-bit words, little-endian bit order).
// Lane i starts at bit (i * bits_per_val).
//
static void vlwide_pack(uint32_t* dst, int n_words,
                         const uint64_t* values, int n_vals, int bits_per_val)
{
    memset(dst, 0, (size_t)n_words * 4);
    for (int i = 0; i < n_vals; i++) {
        uint64_t val  = values[i];
        int      bit0 = i * bits_per_val;
        int      w    = bit0 / 32;
        int      b    = bit0 % 32;

        // Place val (up to 64 bits) at bit position bit0 within dst[]
        dst[w] |= (uint32_t)(val << b);
        if (b > 0) {
            dst[w + 1] |= (uint32_t)(val >> (32 - b));
            if (b + 64 > 64)
                dst[w + 2] |= (uint32_t)(val >> (64 - b));
        } else {
            // b == 0: full 64-bit value needs 2 or 3 words
            dst[w + 1] |= (uint32_t)(val >> 32);
            // val >> 64 is 0 for uint64_t, no third word needed
        }
    }
}

// ──────────────────────────────────────────────────────────────
// PUBLIC API
// ──────────────────────────────────────────────────────────────
extern "C" {

// Create a new RNS NTT engine.
//   n_primes    : must equal COMPILED_N_PRIMES (2)
//   qs          : qs[n_primes] — one prime per lane
//   n_invs      : N^{-1} mod q_i per lane
//   barrett_ms  : Barrett constants per lane (floor(2^(2*Q_WIDTH) / q_i))
//   fwd_tables  : fwd_tables[n_primes * table_size] — forward twiddles
//   inv_tables  : inv_tables[n_primes * table_size] — inverse twiddles
//   table_size  : N (polynomial degree)
void* rns_ntt_engine_new(int             n_primes,
                          const uint64_t* qs,
                          const uint64_t* n_invs,
                          const uint64_t* barrett_ms,
                          const uint64_t* fwd_tables,
                          const uint64_t* inv_tables,
                          int             table_size)
{
    if (n_primes != COMPILED_N_PRIMES) return nullptr;

    RnsNttEngine* e = new RnsNttEngine();
    e->ctx      = new VerilatedContext();
    e->model    = new Vrns_ntt(e->ctx, "rns_ntt");
    e->n_primes = n_primes;

    // compute logn
    e->logn = 0;
    for (int tmp = table_size; tmp > 1; tmp >>= 1) e->logn++;

    // ── Pack per-lane moduli into Verilog buses ────────────────
    // q_all         [N_PRIMES*Q_WIDTH-1:0]   = 120 bits → VlWide<4>
    vlwide_pack(e->model->q_all,         QN_WORDS, qs,         n_primes, Q_W);
    // n_inv_all     [N_PRIMES*Q_WIDTH-1:0]   = 120 bits → VlWide<4>
    vlwide_pack(e->model->n_inv_all,     QN_WORDS, n_invs,     n_primes, Q_W);
    // barrett_m_all [N_PRIMES*2*Q_WIDTH-1:0] = 240 bits → VlWide<8>
    vlwide_pack(e->model->barrett_m_all, BM_WORDS, barrett_ms, n_primes, 2*Q_W);

    do_reset(e);

    // ── Load twiddle tables per lane ───────────────────────────
    // Forward table: addresses [0, N)
    // Inverse table: addresses [N, 2N)
    for (int lane = 0; lane < n_primes; lane++) {
        e->model->tw_lane_sel = (uint8_t)lane;

        for (int i = 0; i < table_size; i++) {
            e->model->tw_wr_en   = 1;
            e->model->tw_wr_addr = (uint32_t)i;
            e->model->tw_wr_data = fwd_tables[lane * table_size + i];
            tick(e);
        }
        for (int i = 0; i < table_size; i++) {
            e->model->tw_wr_en   = 1;
            e->model->tw_wr_addr = (uint32_t)(table_size + i);
            e->model->tw_wr_data = inv_tables[lane * table_size + i];
            tick(e);
        }
    }
    e->model->tw_wr_en = 0;
    tick(e);

    return (void*)e;
}

// Free engine resources
void rns_ntt_engine_free(void* handle) {
    RnsNttEngine* e = (RnsNttEngine*)handle;
    e->model->final();
    delete e->model;
    delete e->ctx;
    delete e;
}

// Run NTT / INTT on ALL lanes simultaneously.
//   coeffs   : coeffs[n_primes * N] — lane i at coeffs[i*N .. i*N+N-1]
//   n_primes : must equal COMPILED_N_PRIMES
//   N        : polynomial degree
//   inverse  : 0 = NTT, 1 = INTT
void rns_ntt_run(void* handle, uint64_t* coeffs,
                  int n_primes, int N, int inverse)
{
    RnsNttEngine* e = (RnsNttEngine*)handle;
    if (n_primes != e->n_primes) return;

    // ── Load coefficients into each lane ──────────────────────
    for (int lane = 0; lane < n_primes; lane++) {
        e->model->lane_sel    = (uint8_t)lane;
        e->model->coeff_wr_en = 1;
        for (int i = 0; i < N; i++) {
            e->model->coeff_wr_addr = (uint32_t)i;
            e->model->coeff_wr_data = coeffs[lane * N + i];
            tick(e);
        }
    }
    e->model->coeff_wr_en = 0;
    tick(e);

    // ── Pulse start — all lanes fire simultaneously ────────────
    e->model->inverse = inverse ? 1 : 0;
    e->model->start   = 1;
    tick(e);
    e->model->start   = 0;

    // ── Wait for all lanes done ────────────────────────────────
    int guard = 4 * N * e->logn + 2 * N + 100;
    for (int i = 0; i < guard; i++) {
        tick(e);
        if (e->model->done) break;
    }

    // ── Read back coefficients from each lane ──────────────────
    // rd_data has 1-cycle registered read latency
    for (int lane = 0; lane < n_primes; lane++) {
        e->model->rd_lane = (uint8_t)lane;
        for (int i = 0; i < N; i++) {
            e->model->rd_addr = (uint32_t)i;
            tick(e);
            coeffs[lane * N + i] = e->model->rd_data;
        }
    }
}

} // extern "C"
