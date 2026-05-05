"""
test_ntt_hw_vs_sw.py
Compare the Python (software) NTT and the Verilog (hardware) NTT:
  1. Correctness — both produce identical outputs on the same input
  2. Speed       — wall-clock time per NTT call for each backend

Run from src/:
    python test_ntt_hw_vs_sw.py
"""

import time
from he.galois_ring._util._ntt    import _NTT_Engine   # software
from he.galois_ring._util._ntt_hw import HW_NTT_Engine  # hardware (Verilog)

# ── Parameters ────────────────────────────────────────────────
N_CORRECT  = 8       # degree used for correctness check (small, readable)
Q          = 12289   # NTT-friendly prime

N_SPEED    = 8       # degree used for speed test
REPEATS    = 5       # number of timed repetitions per backend

POLY_8     = [1, 2, 3, 4, 5, 6, 7, 8]

# ─────────────────────────────────────────────────────────────
def time_ntt(engine, poly, repeats):
    """Return (fwd_result, inv_result, avg_fwd_ms, avg_inv_ms)."""
    # warm-up
    engine._transform_to_ntt_form(poly[:])

    # time forward NTT
    t0 = time.perf_counter()
    for _ in range(repeats):
        fwd = engine._transform_to_ntt_form(poly[:])
    fwd_ms = (time.perf_counter() - t0) / repeats * 1000

    # time inverse NTT
    t0 = time.perf_counter()
    for _ in range(repeats):
        inv = engine._transform_from_ntt_form(fwd[:])
    inv_ms = (time.perf_counter() - t0) / repeats * 1000

    return fwd, inv, fwd_ms, inv_ms

# ══════════════════════════════════════════════════════════════
# 1. CORRECTNESS CHECK
# ══════════════════════════════════════════════════════════════
print("=" * 65)
print(" CORRECTNESS CHECK")
print(f" N={N_CORRECT}  Q={Q}  input={POLY_8}")
print("=" * 65)

sw_c = _NTT_Engine(N_CORRECT, Q)
hw_c = HW_NTT_Engine(N_CORRECT, Q)

sw_fwd = sw_c._transform_to_ntt_form(POLY_8[:])
hw_fwd = hw_c._transform_to_ntt_form(POLY_8[:])

sw_inv = sw_c._transform_from_ntt_form(sw_fwd[:])
hw_inv = hw_c._transform_from_ntt_form(hw_fwd[:])

def check(label, sw_val, hw_val):
    match = "✓ PASS" if sw_val == hw_val else "✗ FAIL"
    print(f" {label:10} SW={sw_val}")
    print(f" {'':10} HW={hw_val}  [{match}]")

check("NTT fwd :", sw_fwd, hw_fwd)
check("INTT inv:", sw_inv, hw_inv)

rt_sw = (sw_inv == POLY_8)
rt_hw = (hw_inv == POLY_8)
print(f" Round-trip SW: {'✓ PASS' if rt_sw else '✗ FAIL'}")
print(f" Round-trip HW: {'✓ PASS' if rt_hw else '✗ FAIL'}")

# ══════════════════════════════════════════════════════════════
# 2. SPEED TEST
# ══════════════════════════════════════════════════════════════
print()
print("=" * 65)
print(f" SPEED TEST  (N={N_SPEED}, Q={Q}, {REPEATS} runs each)")
print("=" * 65)

poly_speed = list(range(1, N_SPEED + 1))

sw_s = _NTT_Engine(N_SPEED, Q)
hw_s = HW_NTT_Engine(N_SPEED, Q)

print(" Timing Software (Python)...")
_, _, sw_fwd_ms, sw_inv_ms = time_ntt(sw_s, poly_speed, REPEATS)

print(" Timing Hardware (Verilog / Verilator)...")
_, _, hw_fwd_ms, hw_inv_ms = time_ntt(hw_s, poly_speed, REPEATS)

print()
print(f" {'':25} {'Software':>12} {'Hardware':>12} {'Ratio':>10}")
print(f" {'-'*62}")
print(f" {'NTT  (forward)':25} {sw_fwd_ms:>10.3f}ms {hw_fwd_ms:>10.3f}ms"
      f" {hw_fwd_ms/sw_fwd_ms:>8.1f}x")
print(f" {'INTT (inverse)':25} {sw_inv_ms:>10.3f}ms {hw_inv_ms:>10.3f}ms"
      f" {hw_inv_ms/sw_inv_ms:>8.1f}x")
print()

faster = "Software" if sw_fwd_ms < hw_fwd_ms else "Hardware"
print(f" NOTE: {faster} is faster for N={N_SPEED}.")
print(f"       Verilator simulates every clock cycle in software,")
print(f"       so it is slower than native Python at small N.")
print(f"       On real FPGA hardware the Verilog NTT would be much faster.")

# ══════════════════════════════════════════════════════════════
print()
if sw_fwd == hw_fwd and sw_inv == hw_inv and rt_sw and rt_hw:
    print("=== ALL CORRECTNESS TESTS PASSED ===")
else:
    print("=== SOME CORRECTNESS TESTS FAILED ===")
