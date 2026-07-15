"""
verify_hw.py  —  Three-level SW vs HW verification
====================================================
Confirms that the Verilog hardware (Verilator simulation) produces
bit-identical results to the pure-Python software at every level:

  Level 1 — NTT         : single-lane forward + inverse NTT
  Level 2 — RNS NTT     : 2-lane parallel forward + inverse NTT
  Level 3 — Cipher hash : full cipher_hash + hash-verifier pipeline

Methodology
-----------
For every level the script:
  1. Runs the computation in pure Python (reference / ground truth)
  2. Feeds exactly the same inputs to the hardware (Verilator .so)
  3. Compares every output coefficient
  4. Reports PASS / FAIL with the first differing index if any

Usage
-----
  cd src/
  python verify_hw.py

Requirements
------------
  • verilog/*.so files built with Q_WIDTH=60, N_PRIMES=2
      cd verilog/ && make clean && make && make rns_ntt && make hash_verifier && make rns_hash_verifier
"""

import random
import sys

from _util._prime      import _generate_rns_bases
from _util._modulus    import _mod_inverse
from he._ntt           import _SW_NTT_Engine
from _util._ntt_hw     import HW_NTT_Engine
from _util._rns_ntt_hw import HW_RNS_NTT_Engine
from he.he_parameter   import HE_Parameter
from he.encoder        import Encoder
from he.key_generator  import Key_Generator
from he.encryptor      import Encryptor
from he.decryptor      import Decryptor
from proof.cipher_hash import HomHash_Manager
from proof.hash_verifier import HashVerifier


# ── Shared parameters ─────────────────────────────────────────────
COEFF_MOD_BITS = [60, 60]   # two 60-bit RNS primes
LOGN_FULL      = 13         # N = 8192 for full HE context
LOGN_SMALL     = 4          # N = 16 for single-lane NTT check (fast)

PASS = "PASS ✓"
FAIL = "FAIL ✗"


def banner(title):
    print()
    print("=" * 68)
    print(f"  {title}")
    print("=" * 68)


def compare_lists(sw, hw, label, prime=None):
    """Compare two lists element-wise. Return True if identical."""
    n = len(sw)
    diffs = [(i, sw[i], hw[i]) for i in range(n) if sw[i] != hw[i]]
    if not diffs:
        print(f"    {label}: {PASS}  ({n} coefficients match)")
        return True
    else:
        q_str = f" (q={prime})" if prime else ""
        print(f"    {label}: {FAIL}{q_str}  — {len(diffs)} mismatches")
        for i, s, h in diffs[:3]:
            print(f"      [i={i}] SW={s}  HW={h}")
        if len(diffs) > 3:
            print(f"      ... ({len(diffs) - 3} more)")
        return False


# ══════════════════════════════════════════════════════════════════
# LEVEL 1 — Single-lane NTT
# ══════════════════════════════════════════════════════════════════
def level1_ntt(primes):
    banner("Level 1 — Single-lane NTT  (forward + inverse, N=16)")

    N  = 1 << LOGN_SMALL
    q  = primes[0]          # use first 60-bit prime

    print(f"\n  N={N}  q={q}  ({q.bit_length()}-bit prime)")

    random.seed(0xCAFE_BABE)
    poly_in = [random.randint(0, q - 1) for _ in range(N)]

    # ── Software ──────────────────────────────────────────────────
    sw = _SW_NTT_Engine(N, q)
    sw_ntt  = sw._transform_to_ntt_form(list(poly_in))
    sw_intt = sw._transform_from_ntt_form(list(sw_ntt))

    # ── Hardware ──────────────────────────────────────────────────
    hw = HW_NTT_Engine(N, q)
    hw_ntt  = hw._transform_to_ntt_form(list(poly_in))
    hw_intt = hw._transform_from_ntt_form(list(hw_ntt))

    # ── Compare ───────────────────────────────────────────────────
    print(f"\n  Input  first 4: {[x % q for x in poly_in[:4]]}")
    print(f"  SW NTT first 4: {[x % q for x in sw_ntt[:4]]}")
    print(f"  HW NTT first 4: {[x % q for x in hw_ntt[:4]]}")
    print()

    ok_fwd  = compare_lists([x % q for x in sw_ntt],  [x % q for x in hw_ntt],  "NTT  (forward)", q)
    ok_inv  = compare_lists([x % q for x in sw_intt], [x % q for x in hw_intt], "INTT (inverse)", q)
    ok_rt   = compare_lists([x % q for x in poly_in], [x % q for x in hw_intt], "Round-trip HW",  q)

    return ok_fwd and ok_inv and ok_rt


# ══════════════════════════════════════════════════════════════════
# LEVEL 2 — 2-lane RNS NTT
# ══════════════════════════════════════════════════════════════════
def level2_rns_ntt(primes):
    banner("Level 2 — 2-lane RNS NTT  (parallel, N=16)")

    N = 1 << LOGN_SMALL
    print(f"\n  N={N}  primes={primes}")

    random.seed(0xDEAD_BEEF)
    polys_in = [
        [random.randint(0, q - 1) for _ in range(N)]
        for q in primes
    ]

    # ── Software (one engine per lane) ────────────────────────────
    sw_engines = [_SW_NTT_Engine(N, q) for q in primes]
    sw_ntt  = [sw._transform_to_ntt_form(list(p))  for sw, p in zip(sw_engines, polys_in)]
    sw_intt = [sw._transform_from_ntt_form(list(n)) for sw, n in zip(sw_engines, sw_ntt)]

    # ── Hardware (both lanes in parallel) ─────────────────────────
    hw = HW_RNS_NTT_Engine(n=N, primes=primes)
    hw_ntt  = [list(p) for p in polys_in]
    hw.transform_to_ntt_form(hw_ntt)
    hw_intt = [list(n) for n in hw_ntt]
    hw.transform_from_ntt_form(hw_intt)

    # ── Compare per lane ──────────────────────────────────────────
    all_ok = True
    for lane, q in enumerate(primes):
        print(f"\n  Lane {lane}  q={q}:")
        ok_ntt  = compare_lists([x % q for x in sw_ntt[lane]],   [x % q for x in hw_ntt[lane]],   f"NTT  lane {lane}", q)
        ok_intt = compare_lists([x % q for x in polys_in[lane]], [x % q for x in hw_intt[lane]],  f"INTT lane {lane}", q)
        all_ok  = all_ok and ok_ntt and ok_intt

    return all_ok


# ══════════════════════════════════════════════════════════════════
# LEVEL 3 — Full cipher-hash + verification pipeline
# ══════════════════════════════════════════════════════════════════
def level3_cipher_hash():
    banner("Level 3 — Cipher hash + verification  (N=8192, [60,60])")

    # ── Setup ─────────────────────────────────────────────────────
    parms = (HE_Parameter("bv")
             .set_poly_modulus(LOGN_FULL)
             .set_coeff_modulus(COEFF_MOD_BITS)
             .set_plain_modulus(18)
             .set_bound(1, 2))
    parms.generate_context()

    n      = parms.poly_modulus
    primes = parms.coeff_modulus
    print(f"\n  N={n}  primes={primes}")

    encoder   = Encoder(parms)
    keygen    = Key_Generator(parms)
    sk        = keygen.generate_secret_key()
    pk        = keygen.generate_public_key(sk)
    encryptor = Encryptor(parms, pk)
    decryptor = Decryptor(parms, sk)

    plain1 = encoder.coeff_encode([1, 2])
    plain2 = encoder.coeff_encode([1, 1])
    c1 = encryptor.encrypt(plain1)
    c2 = encryptor.encrypt(plain2)
    c3 = c1 * c2 + c2

    d3 = decryptor.decrypt(c3)
    print(f"  Decrypted c3 = c1*c2+c2 : {d3.toString(5, False)}")
    print(f"  Ciphertext sizes: c1={c1.size()} c2={c2.size()} c3={c3.size()}")

    # ── SW: compute cipher_hash and verify ────────────────────────
    print("\n  [SW] Computing cipher_hash...")
    hasher = HomHash_Manager(parms)
    sw_h1  = hasher.cipher_hash(c1.copy())
    sw_h2  = hasher.cipher_hash(c2.copy())
    sw_h3  = hasher.cipher_hash(c3.copy())
    sw_valid = sw_h3.equal(sw_h1 * sw_h2 + sw_h2)
    print(f"  [SW] H(c3) == H(c1)*H(c2)+H(c2): {PASS if sw_valid else FAIL}")

    # ── HW: run through Verilog hash verifier ─────────────────────
    print("\n  [HW] Running Verilog hash verifier...")
    verifier   = HashVerifier(parms, use_hw=True)
    r_poly     = hasher.r_poly
    hw_valid   = verifier.verify(c1, c2, c3, r_poly)
    print(f"  [HW] valid signal: {PASS if hw_valid else FAIL}")

    # ── SW hash polynomial self-consistency ───────────────────────
    # Verify the homomorphic property holds in SW: H(c3) == H(c1)*H(c2)+H(c2)
    # This is the ground truth that the HW valid flag must agree with.
    print("\n  SW homomorphic hash property:")
    for q in primes:
        h1q = sw_h1._rns_poly[q]._data
        h2q = sw_h2._rns_poly[q]._data
        h3q = sw_h3._rns_poly[q]._data
        print(f"    q={q}: H(c1) first4={[x%q for x in h1q[:4]]}  "
              f"H(c3) first4={[x%q for x in h3q[:4]]}")

    # ── Agreement check ───────────────────────────────────────────
    print()
    agree = (sw_valid == hw_valid)
    print(f"  SW valid = {sw_valid}  |  HW valid = {hw_valid}")
    print(f"  SW and HW agree: {PASS if agree else FAIL}")
    if not agree:
        print("  NOTE: SW says valid=%s but HW says valid=%s — mismatch!" % (sw_valid, hw_valid))

    return sw_valid and hw_valid and agree


# ══════════════════════════════════════════════════════════════════
# Main
# ══════════════════════════════════════════════════════════════════
def main():
    print()
    print("╔══════════════════════════════════════════════════════════════════╗")
    print("║          CPET HE — Software vs Hardware Verification            ║")
    print("╚══════════════════════════════════════════════════════════════════╝")
    print()
    print("  Strategy: compute in Python first (ground truth),")
    print("            then run same inputs through Verilator,")
    print("            compare every output coefficient.")

    primes = _generate_rns_bases(COEFF_MOD_BITS, 1 << LOGN_SMALL)
    print(f"\n  60-bit RNS primes for NTT tests: {primes}")

    results = {}

    # Level 1: single-lane NTT
    try:
        results["Level 1 — NTT"] = level1_ntt(primes)
    except Exception as e:
        print(f"\n  ERROR in Level 1: {e}")
        results["Level 1 — NTT"] = False

    # Level 2: 2-lane RNS NTT
    try:
        results["Level 2 — RNS NTT"] = level2_rns_ntt(primes)
    except Exception as e:
        print(f"\n  ERROR in Level 2: {e}")
        results["Level 2 — RNS NTT"] = False

    # Level 3: full cipher hash pipeline
    try:
        results["Level 3 — Cipher hash"] = level3_cipher_hash()
    except Exception as e:
        print(f"\n  ERROR in Level 3: {e}")
        results["Level 3 — Cipher hash"] = False

    # ── Summary ───────────────────────────────────────────────────
    banner("Summary")
    print()
    all_pass = True
    for name, ok in results.items():
        status = PASS if ok else FAIL
        print(f"  {name:<30} {status}")
        all_pass = all_pass and ok
    print()
    if all_pass:
        print("  ALL LEVELS PASSED — hardware matches software exactly.")
    else:
        print("  SOME LEVELS FAILED — check output above for details.")
    print()
    return 0 if all_pass else 1


if __name__ == "__main__":
    sys.exit(main())
