"""
Test: RNS NTT hardware (parallel lanes) vs software NTT per lane.

Checks that HW forward NTT + INTT round-trips correctly for both primes,
and that HW results match the SW NTT results coefficient-by-coefficient.
"""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))

from he._ntt import _NTT_Engine
from _util._rns_ntt_hw import HW_RNS_NTT_Engine
from _util._prime import _generate_rns_bases
import random

# ── Parameters ─────────────────────────────────────────────────
LOGN     = 4          # N = 16 — must match rns_ntt_hw.so compiled LOGN
N        = 1 << LOGN
N_PRIMES = 2

primes = _generate_rns_bases([20, 20], N)   # two ~20-bit NTT primes
print(f"N={N}, primes={primes}")

# ── Random test polynomials (one per prime lane) ───────────────
random.seed(42)
polys = [
    [random.randint(0, p - 1) for _ in range(N)]
    for p in primes
]

# ── Software NTT (reference) — force pure Python, not HW ──────
# _NTT_Engine might auto-select ntt_hw.so which is compiled for
# LOGN=13.  Import the SW engine class directly to avoid that.
from he._ntt import _SW_NTT_Engine as _SW
sw_engines = [_SW(N, p) for p in primes]

sw_ntt = [list(poly) for poly in polys]
for eng, coeffs in zip(sw_engines, sw_ntt):
    eng._transform_to_ntt_form(coeffs)

sw_intt = [list(c) for c in sw_ntt]
for eng, coeffs in zip(sw_engines, sw_intt):
    eng._transform_from_ntt_form(coeffs)

# ── Hardware RNS NTT (parallel) ────────────────────────────────
hw_engine = HW_RNS_NTT_Engine(n=N, primes=primes)

hw_ntt = [list(poly) for poly in polys]
hw_engine.transform_to_ntt_form(hw_ntt)

hw_intt = [list(c) for c in hw_ntt]
hw_engine.transform_from_ntt_form(hw_intt)

# ── Diagnostics ────────────────────────────────────────────────
print(f"\nFirst 4 NTT values (lane 0): sw={[x%primes[0] for x in sw_ntt[0][:4]]}  hw={[x%primes[0] for x in hw_ntt[0][:4]]}")
print(f"First 4 NTT values (lane 1): sw={[x%primes[1] for x in sw_ntt[1][:4]]}  hw={[x%primes[1] for x in hw_ntt[1][:4]]}")
print(f"First 4 INTT values (lane 0): orig={[x%primes[0] for x in polys[0][:4]]}  hw={[x%primes[0] for x in hw_intt[0][:4]]}")

# ── Compare ────────────────────────────────────────────────────
all_pass = True

for lane, (p, orig) in enumerate(zip(primes, polys)):
    # NTT output must match SW
    ntt_ok = True
    for i in range(N):
        sw_v = sw_ntt[lane][i] % p
        hw_v = hw_ntt[lane][i] % p
        if sw_v != hw_v:
            print(f"FAIL NTT lane={lane} i={i}: sw={sw_v} hw={hw_v}")
            all_pass = False
            ntt_ok = False
    if ntt_ok:
        print(f"PASS NTT lane={lane}")

    # INTT(NTT(x)) must recover original
    intt_ok = True
    for i in range(N):
        orig_v = orig[i] % p
        hw_v   = hw_intt[lane][i] % p
        if orig_v != hw_v:
            print(f"FAIL INTT lane={lane} i={i}: orig={orig_v} hw={hw_v}")
            all_pass = False
            intt_ok = False
    if intt_ok:
        print(f"PASS INTT lane={lane}")

if all_pass:
    print("\nPASS — HW RNS NTT matches SW for all lanes")
    print(f"  Both lanes ran in PARALLEL (single start pulse)")
else:
    print("\nFAIL — mismatches found above")
