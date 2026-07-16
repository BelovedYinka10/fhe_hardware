// ================================================================
// hash_verifier_sim.cpp  —  Verilator C wrapper for hash_verifier.v
//
// Exposes a plain-C API consumed by _hash_verifier_hw.py:
//
//   hv_new(q, n_inv, fwd[N], inv[N], N)  → opaque handle
//   hv_free(handle)
//   hv_load_ct(handle, ct_id, comp_id, coeffs[N], N)
//   hv_load_r (handle, coeffs[N], N)
//   hv_run    (handle, c1_count, c2_count, c3_count)  → 1/0
//   hv_read_hash(handle, hash_id, out[N], N)  — read h1/h2/h3
//
// One engine handles ONE RNS prime.  The Python layer creates three
// engines (one per prime) and ANDs the valid outputs together.
//
// Build via:  cd verilog/ && make hash_verifier
// ================================================================

#include "Vhash_verifier.h"
#include "Vhash_verifier___024root.h"   // internal signal access (h1, h2, h3)
#include "verilated.h"

#include <memory>
#include <cstdint>
#include <cstring>
#include <cassert>

// Required by verilated.cpp when building a shared library (not an executable).
double sc_time_stamp() { return 0; }

// ── Constants ────────────────────────────────────────────────────
static constexpr int LOGN    = 13;
static constexpr int N       = 1 << LOGN;   // 8192
static constexpr int CT_SIZE = 3;           // max components per ciphertext

// Safety limit: if done hasn't pulsed after this many cycles, abort.
static constexpr uint64_t MAX_CYCLES = 10'000'000ULL;

// ── Engine struct ─────────────────────────────────────────────────
struct HV_Engine {
    std::unique_ptr<VerilatedContext> ctx;
    std::unique_ptr<Vhash_verifier>   dut;

    uint64_t q;
    uint64_t n_inv;
    uint64_t q_neg_inv;
    uint64_t fwd[N];
    uint64_t inv_tw[N];

    // Staged data (loaded before hv_run)
    uint64_t ct_mem[3][CT_SIZE][N];  // [ct_id][comp][coeff]
    uint64_t r_mem[N];

    // ── Clock helpers ────────────────────────────────────────────
    void tick() {
        dut->clk = 0; dut->eval();
        dut->clk = 1; dut->eval();
        ctx->timeInc(1);
    }

    void reset() {
        dut->rst_n = 0;
        dut->start = 0;
        dut->ct_wr_en = 0;
        dut->r_wr_en  = 0;
        dut->tw_wr_en = 0;
        for (int i = 0; i < 4; i++) tick();
        dut->rst_n = 1;
        tick();
    }

    // ── Twiddle load ─────────────────────────────────────────────
    void load_twiddles() {
        for (int i = 0; i < N; i++) {
            // Forward twiddles: addr = i
            dut->tw_wr_en   = 1;
            dut->tw_wr_addr = (uint32_t)i;
            dut->tw_wr_data = fwd[i];
            tick();
            // Inverse twiddles: addr = N + i
            dut->tw_wr_addr = (uint32_t)(N + i);
            dut->tw_wr_data = inv_tw[i];
            tick();
        }
        dut->tw_wr_en = 0;
        tick();
    }

    // ── CT coefficient load ───────────────────────────────────────
    // ct_id  : 0=c1, 1=c2, 2=c3
    // comp_id: component index
    void load_ct_to_hw(int ct_id, int comp_id) {
        for (int i = 0; i < N; i++) {
            dut->ct_wr_en   = 1;
            dut->ct_id      = (uint8_t)ct_id;
            dut->ct_sel     = (uint8_t)comp_id;
            dut->ct_wr_addr = (uint32_t)i;
            dut->ct_wr_data = ct_mem[ct_id][comp_id][i];
            tick();
        }
        dut->ct_wr_en = 0;
        tick();
    }

    // ── r load ───────────────────────────────────────────────────
    void load_r_to_hw() {
        for (int i = 0; i < N; i++) {
            dut->r_wr_en   = 1;
            dut->r_wr_addr = (uint32_t)i;
            dut->r_wr_data = r_mem[i];
            tick();
        }
        dut->r_wr_en = 0;
        tick();
    }
};

// ── C API ─────────────────────────────────────────────────────────
extern "C" {

void* hv_new(uint64_t q, uint64_t n_inv,
             uint64_t q_neg_inv,
             uint64_t* fwd, uint64_t* inv,
             int n)
{
    assert(n == N && "hv_new: n must equal compile-time N");

    auto eng = new HV_Engine();
    eng->ctx = std::make_unique<VerilatedContext>();
    eng->dut = std::make_unique<Vhash_verifier>(eng->ctx.get());

    eng->q         = q;
    eng->n_inv     = n_inv;
    eng->q_neg_inv = q_neg_inv;
    std::memcpy(eng->fwd,   fwd, N * sizeof(uint64_t));
    std::memcpy(eng->inv_tw, inv, N * sizeof(uint64_t));

    // Zero CT and r storage
    std::memset(eng->ct_mem, 0, sizeof(eng->ct_mem));
    std::memset(eng->r_mem,  0, sizeof(eng->r_mem));

    // Wire constant ports
    eng->dut->q     = q;
    eng->dut->n_inv = n_inv;
    // q_neg_inv is [63:0] = 64 bits → plain uint64_t in Verilator
    eng->dut->q_neg_inv = q_neg_inv;
    
    
    

    eng->reset();
    eng->load_twiddles();

    return static_cast<void*>(eng);
}

void hv_free(void* handle)
{
    if (!handle) return;
    auto eng = static_cast<HV_Engine*>(handle);
    eng->dut->final();
    delete eng;
}

// Stage ciphertext coefficients (does NOT drive clock yet).
void hv_load_ct(void* handle,
                int ct_id, int comp_id,
                uint64_t* coeffs, int n)
{
    assert(n == N);
    auto eng = static_cast<HV_Engine*>(handle);
    std::memcpy(eng->ct_mem[ct_id][comp_id], coeffs, N * sizeof(uint64_t));
}

// Stage r coefficients (does NOT drive clock yet).
void hv_load_r(void* handle, uint64_t* coeffs, int n)
{
    assert(n == N);
    auto eng = static_cast<HV_Engine*>(handle);
    std::memcpy(eng->r_mem, coeffs, N * sizeof(uint64_t));
}

// Drive the full simulation: load staged data, assert start, wait for done.
// Returns 1 if valid, 0 if not (or timeout).
int hv_run(void* handle,
           int c1_count, int c2_count, int c3_count)
{
    auto eng = static_cast<HV_Engine*>(handle);
    auto dut = eng->dut.get();

    // Re-reset so we start clean
    eng->reset();
    eng->load_twiddles();

    // Load all ciphertext components
    for (int comp = 0; comp < c1_count; comp++) eng->load_ct_to_hw(0, comp);
    for (int comp = 0; comp < c2_count; comp++) eng->load_ct_to_hw(1, comp);
    for (int comp = 0; comp < c3_count; comp++) eng->load_ct_to_hw(2, comp);

    // Load r
    eng->load_r_to_hw();

    // Set counts and assert start for one cycle
    dut->c1_count = (uint8_t)c1_count;
    dut->c2_count = (uint8_t)c2_count;
    dut->c3_count = (uint8_t)c3_count;
    dut->start    = 1;
    eng->tick();
    dut->start = 0;

    // Clock until done or timeout
    uint64_t cycles = 0;
    while (!dut->done && cycles < MAX_CYCLES) {
        eng->tick();
        cycles++;
    }

    if (cycles >= MAX_CYCLES) {
        // Timeout — treat as invalid
        fprintf(stderr, "[HV] TIMEOUT after %llu cycles\n", (unsigned long long)cycles);
        return 0;
    }

    return (int)dut->valid;
}

// Read back internal hash arrays after hv_run completes.
// hash_id: 0=h1, 1=h2, 2=h3
void hv_read_hash(void* handle, int hash_id, uint64_t* out, int n)
{
    assert(n == N);
    auto eng = static_cast<HV_Engine*>(handle);
    auto root = eng->dut->rootp;
    for (int i = 0; i < N; i++) {
        if      (hash_id == 0) out[i] = (uint64_t)root->hash_verifier__DOT__h1[i];
        else if (hash_id == 1) out[i] = (uint64_t)root->hash_verifier__DOT__h2[i];
        else                   out[i] = (uint64_t)root->hash_verifier__DOT__h3[i];
    }
}

} // extern "C"
