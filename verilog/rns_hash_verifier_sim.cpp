// ================================================================
// rns_hash_verifier_sim.cpp  —  Verilator C wrapper for rns_hash_verifier.v
//
// All N_PRIMES RNS lanes run in parallel inside a single simulation.
// One engine replaces the old pattern of one hv_new() per prime.
//
// C API:
//   void* rns_hv_new(n_primes, qs, n_invs, barrett_ms,
//                    fwd_tables, inv_tables, n)  → handle
//   void  rns_hv_free(void*)
//   void  rns_hv_load_ct(void*, int lane, int ct_id, int comp_id,
//                         uint64_t* coeffs, int n)
//   void  rns_hv_load_r (void*, int lane, uint64_t* coeffs, int n)
//   int   rns_hv_run    (void*, int c1_count, int c2_count, int c3_count)
//
// Table layout for fwd_tables / inv_tables:
//   tables[lane * n + coeff_idx]   (lane-major)
//
// Build via:  cd verilog/ && make rns_hash_verifier
// ================================================================

#include "Vrns_hash_verifier.h"
#include "verilated.h"

#include <memory>
#include <cstdint>
#include <cstring>
#include <cassert>
#include <cstdio>

double sc_time_stamp() { return 0; }

// ── Compiled-in constants (must match Makefile -G flags) ────────────
static constexpr int COMPILED_N_PRIMES = 2;
static constexpr int LOGN    = 13;
static constexpr int N       = 1 << LOGN;    // 8192
static constexpr int CT_SIZE = 3;
static constexpr int Q_W     = 60;

// 32-bit words for packed Verilog buses at N_PRIMES=2, Q_WIDTH=60
//   q_all / n_inv_all : 2 × 60  = 120 bits → 4 words
//   barrett_m_all     : 2 × 120 = 240 bits → 8 words
static constexpr int QN_WORDS = (COMPILED_N_PRIMES * Q_W     + 31) / 32; // 4
static constexpr int BM_WORDS = (COMPILED_N_PRIMES * 2 * Q_W + 31) / 32; // 8

static constexpr uint64_t MAX_CYCLES = 10'000'000ULL;

// ── Engine struct ────────────────────────────────────────────────────
struct RnsHvEngine {
    std::unique_ptr<VerilatedContext>   ctx;
    std::unique_ptr<Vrns_hash_verifier> dut;

    int      n_primes;
    uint64_t fwd[COMPILED_N_PRIMES][N];
    uint64_t inv_tw[COMPILED_N_PRIMES][N];

    // Staged data (memcpy'd in rns_hv_load_ct/r, pushed to HW in rns_hv_run)
    uint64_t ct_mem[COMPILED_N_PRIMES][3][CT_SIZE][N]; // [lane][ct_id][comp][coeff]
    uint64_t r_mem [COMPILED_N_PRIMES][N];

    // ── Clock ─────────────────────────────────────────────────────
    void tick() {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
        ctx->timeInc(1);
    }

    void reset() {
        dut->rst_n     = 0;
        dut->start     = 0;
        dut->ct_wr_en  = 0;
        dut->r_wr_en   = 0;
        dut->tw_wr_en  = 0;
        for (int i = 0; i < 4; i++) tick();
        dut->rst_n = 1;
        tick();
    }

    // ── Twiddle load (all lanes, sequential) ─────────────────────
    void load_twiddles() {
        for (int lane = 0; lane < n_primes; lane++) {
            dut->tw_lane_sel = (uint8_t)lane;
            for (int i = 0; i < N; i++) {
                dut->tw_wr_en   = 1;
                dut->tw_wr_addr = (uint32_t)i;
                dut->tw_wr_data = fwd[lane][i];
                tick();
                dut->tw_wr_addr = (uint32_t)(N + i);
                dut->tw_wr_data = inv_tw[lane][i];
                tick();
            }
        }
        dut->tw_wr_en = 0;
        tick();
    }

    // ── CT load for one (lane, ct_id, comp) ──────────────────────
    void load_ct_to_hw(int lane, int ct_id, int comp_id) {
        dut->lane_sel = (uint8_t)lane;
        for (int i = 0; i < N; i++) {
            dut->ct_wr_en   = 1;
            dut->ct_id      = (uint8_t)ct_id;
            dut->ct_sel     = (uint8_t)comp_id;
            dut->ct_wr_addr = (uint32_t)i;
            dut->ct_wr_data = ct_mem[lane][ct_id][comp_id][i];
            tick();
        }
        dut->ct_wr_en = 0;
        tick();
    }

    // ── r load for one lane ───────────────────────────────────────
    void load_r_to_hw(int lane) {
        dut->lane_sel = (uint8_t)lane;
        for (int i = 0; i < N; i++) {
            dut->r_wr_en   = 1;
            dut->r_wr_addr = (uint32_t)i;
            dut->r_wr_data = r_mem[lane][i];
            tick();
        }
        dut->r_wr_en = 0;
        tick();
    }
};

// ── Pack uint64_t values into a Verilator VlWide word array ─────────
// Lane i occupies bits [i*bits_per_val +: bits_per_val].
static void vlwide_pack(uint32_t* dst, int n_words,
                         const uint64_t* values, int n_vals, int bits_per_val)
{
    memset(dst, 0, (size_t)n_words * 4);
    for (int i = 0; i < n_vals; i++) {
        uint64_t val  = values[i];
        int      bit0 = i * bits_per_val;
        int      w    = bit0 / 32;
        int      b    = bit0 % 32;
        dst[w] |= (uint32_t)(val << b);
        if (b > 0) {
            dst[w + 1] |= (uint32_t)(val >> (32 - b));
            if (b + 64 > 64)
                dst[w + 2] |= (uint32_t)(val >> (64 - b));
        } else {
            dst[w + 1] |= (uint32_t)(val >> 32);
        }
    }
}

// ── C API ────────────────────────────────────────────────────────────
extern "C" {

// Create one RNS hash-verifier engine for all primes.
//   n_primes   : must equal COMPILED_N_PRIMES
//   qs         : qs[n_primes]          — one prime per lane
//   n_invs     : n_invs[n_primes]      — N^{-1} mod q_i per lane
//   barrett_ms : barrett_ms[n_primes]  — floor(2^(2*Q_WIDTH)/q_i) per lane
//   fwd_tables : fwd_tables[n_primes * n] — forward twiddles (lane-major)
//   inv_tables : inv_tables[n_primes * n] — inverse twiddles (lane-major)
//   n          : polynomial degree (must equal compile-time N)
void* rns_hv_new(int             n_primes,
                  const uint64_t* qs,
                  const uint64_t* n_invs,
                  const uint64_t* barrett_ms,
                  const uint64_t* fwd_tables,
                  const uint64_t* inv_tables,
                  int             n)
{
    if (n_primes != COMPILED_N_PRIMES || n != N) {
        fprintf(stderr, "[RNS_HV] rns_hv_new: n_primes=%d (need %d), n=%d (need %d)\n",
                n_primes, COMPILED_N_PRIMES, n, N);
        return nullptr;
    }

    auto* eng    = new RnsHvEngine();
    eng->ctx     = std::make_unique<VerilatedContext>();
    eng->dut     = std::make_unique<Vrns_hash_verifier>(eng->ctx.get());
    eng->n_primes = n_primes;

    for (int i = 0; i < n_primes; i++) {
        memcpy(eng->fwd[i],    &fwd_tables[i * n], (size_t)n * sizeof(uint64_t));
        memcpy(eng->inv_tw[i], &inv_tables[i * n], (size_t)n * sizeof(uint64_t));
    }

    memset(eng->ct_mem, 0, sizeof(eng->ct_mem));
    memset(eng->r_mem,  0, sizeof(eng->r_mem));

    // Pack moduli into Verilog packed buses
    vlwide_pack(eng->dut->q_all,         QN_WORDS, qs,         n_primes, Q_W);
    vlwide_pack(eng->dut->n_inv_all,     QN_WORDS, n_invs,     n_primes, Q_W);
    vlwide_pack(eng->dut->barrett_m_all, BM_WORDS, barrett_ms, n_primes, 2 * Q_W);

    eng->reset();
    eng->load_twiddles();

    return static_cast<void*>(eng);
}

void rns_hv_free(void* handle)
{
    if (!handle) return;
    auto* eng = static_cast<RnsHvEngine*>(handle);
    eng->dut->final();
    delete eng;
}

// Stage ciphertext coefficients for one (lane, ct_id, comp_id).
void rns_hv_load_ct(void*           handle,
                     int             lane,
                     int             ct_id,
                     int             comp_id,
                     const uint64_t* coeffs,
                     int             n)
{
    assert(n == N && lane >= 0 && lane < COMPILED_N_PRIMES);
    assert(ct_id >= 0 && ct_id < 3 && comp_id >= 0 && comp_id < CT_SIZE);
    auto* eng = static_cast<RnsHvEngine*>(handle);
    memcpy(eng->ct_mem[lane][ct_id][comp_id], coeffs, (size_t)N * sizeof(uint64_t));
}

// Stage r coefficients for one lane.
void rns_hv_load_r(void*           handle,
                    int             lane,
                    const uint64_t* coeffs,
                    int             n)
{
    assert(n == N && lane >= 0 && lane < COMPILED_N_PRIMES);
    auto* eng = static_cast<RnsHvEngine*>(handle);
    memcpy(eng->r_mem[lane], coeffs, (size_t)N * sizeof(uint64_t));
}

// Run the full simulation: all lanes hash in parallel.
// Returns 1 if all lanes report valid, 0 otherwise.
int rns_hv_run(void* handle,
                int   c1_count,
                int   c2_count,
                int   c3_count)
{
    auto* eng = static_cast<RnsHvEngine*>(handle);
    auto* dut = eng->dut.get();

    eng->reset();
    eng->load_twiddles();

    // Load staged CT and r into HW — lane by lane (each lane's data differs)
    for (int lane = 0; lane < eng->n_primes; lane++) {
        for (int comp = 0; comp < c1_count; comp++) eng->load_ct_to_hw(lane, 0, comp);
        for (int comp = 0; comp < c2_count; comp++) eng->load_ct_to_hw(lane, 1, comp);
        for (int comp = 0; comp < c3_count; comp++) eng->load_ct_to_hw(lane, 2, comp);
        eng->load_r_to_hw(lane);
    }

    // Assert start — all N_PRIMES lanes fire simultaneously
    dut->c1_count = (uint8_t)c1_count;
    dut->c2_count = (uint8_t)c2_count;
    dut->c3_count = (uint8_t)c3_count;
    dut->start    = 1;
    eng->tick();
    dut->start = 0;

    // Clock until every lane is done
    uint64_t cycles = 0;
    while (!dut->done && cycles < MAX_CYCLES) {
        eng->tick();
        cycles++;
    }

    if (cycles >= MAX_CYCLES) {
        fprintf(stderr, "[RNS_HV] TIMEOUT after %llu cycles\n",
                (unsigned long long)cycles);
        return 0;
    }

    return (int)dut->valid;
}

} // extern "C"
