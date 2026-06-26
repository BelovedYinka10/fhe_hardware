"""
benchmark_poly_mul.py — Compare schoolbook vs NTT polynomial multiplication.

Benchmarks both a single Poly (one prime lane) and a full RNS_Poly
(all primes simultaneously) to show the real cost in the HE scheme.

Run from src/:
    python benchmark_poly_mul.py
"""
import time
from he.he_parameter import HE_Parameter
from he.galois_ring.poly_config import PolyConfig
from he.galois_ring.poly import Poly
from he.galois_ring.rns_poly import RNS_Poly
from _util._random import _random_int

# ── Setup ──────────────────────────────────────────────────────────────────
parms = (HE_Parameter("bv")
         .set_poly_modulus(13)          # N = 8192
         .set_coeff_modulus([30, 30, 40])
         .set_plain_modulus(18)
         .set_bound(1, 2))
parms.generate_context()

N      = parms.poly_modulus
primes = parms.coeff_modulus

def random_rns_poly():
    """Random RNS_Poly — one random Poly per prime lane."""
    rp = RNS_Poly(primes, N)
    rp._set_ntt_engines(parms.ntt_engines)
    for q in primes:
        rp._rns_poly[q]._data = [_random_int(q) for _ in range(N)]
        rp._rns_poly[q]._set_ntt_engine(parms.ntt_engines[q])
    return rp

REPEATS = 3

print(f"Polynomial degree  N      = {N}")
print(f"RNS primes         q      = {primes}  ({len(primes)} lanes)")
print(f"Repeats per mode         = {REPEATS}")
print()

results = {}

for mode in ("schoolbook", "ntt"):
    PolyConfig.set_mul_mode(mode)
    times_poly = []    # single prime lane
    times_rns  = []    # all prime lanes (RNS_Poly)

    q0 = primes[0]
    eng0 = parms.ntt_engines[q0]

    for _ in range(REPEATS):
        # ── Single Poly (one prime) ───────────────────────────────
        a = Poly(q0, N, [_random_int(q0) for _ in range(N)])._set_ntt_engine(eng0)
        b = Poly(q0, N, [_random_int(q0) for _ in range(N)])._set_ntt_engine(eng0)
        t0 = time.perf_counter()
        _ = a * b
        times_poly.append(time.perf_counter() - t0)

        # ── RNS_Poly (all primes) ─────────────────────────────────
        ra = random_rns_poly()
        rb = random_rns_poly()
        t0 = time.perf_counter()
        _ = ra * rb
        times_rns.append(time.perf_counter() - t0)

    avg_p = sum(times_poly) / REPEATS
    avg_r = sum(times_rns)  / REPEATS
    results[mode] = {"poly": avg_p, "rns": avg_r}

    print(f"── {mode.upper()} ─────────────────────────────────────")
    print(f"  Single Poly  (1 prime)   : {avg_p*1000:8.1f} ms")
    print(f"  RNS_Poly     ({len(primes)} primes)  : {avg_r*1000:8.1f} ms"
          f"  (~{avg_r/avg_p:.1f}× single)")
    print()

# ── Speedup summary ────────────────────────────────────────────────────────
print("── Speedup (schoolbook → NTT) ──────────────────────")
for label, key in [("Single Poly (1 prime)", "poly"),
                   (f"RNS_Poly   ({len(primes)} primes)", "rns")]:
    sb  = results["schoolbook"][key]
    ntt = results["ntt"][key]
    print(f"  {label}: {sb/ntt:5.1f}×")

# ── Correctness check ──────────────────────────────────────────────────────
print("\nCorrectness check RNS_Poly (schoolbook == ntt)...")
ra = random_rns_poly()
rb = random_rns_poly()
PolyConfig.set_mul_mode("schoolbook"); r_sb  = ra * rb
PolyConfig.set_mul_mode("ntt");        r_ntt = ra * rb
for q in primes:
    r_sb._rns_poly[q]._compress()
    r_ntt._rns_poly[q]._compress()
match = all(r_sb._rns_poly[q].equal(r_ntt._rns_poly[q]) for q in primes)
print(f"  Results match: {match}")

PolyConfig.set_mul_mode("ntt")
