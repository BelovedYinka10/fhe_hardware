#!/usr/bin/env python3
"""
Generate test vectors for ntt_mont.v (Montgomery-reduction NTT core).

Run from the verilog/ directory:
    python gen_ntt_mont_vectors.py [LOGN]   (default LOGN=4)

Output files:
    tv_mont_params.hex        — q, n_inv_mont, q_inv
    tv_mont_twiddles_fwd.hex  — forward twiddles, pre-scaled by R
    tv_mont_twiddles_inv.hex  — inverse twiddles, pre-scaled by R
    tv_mont_input.hex         — random input polynomial
    tv_mont_ntt.hex           — expected NTT output  (SW reference)
    tv_mont_intt.hex          — expected INTT output (should equal input)

Montgomery background
---------------------
R = 2^Q_WIDTH.  The core computes  mont(a, b) = a·b·R^-1 mod q  using
q_inv = -q^-1 mod R.  Every mod_mul call site in ntt.v has the *constant*
(a twiddle, or n_inv) as its second operand, so pre-scaling only those
constants into Montgomery form (b' = b·R mod q) makes

    mont(a, b') = a·b·R·R^-1 = a·b mod q

i.e. the core returns plain products and the coefficients never leave the
normal domain.  Consequently the expected NTT/INTT outputs here are the
*unmodified* _SW_NTT_Engine reference — bit-identical to what the Barrett
core produces.  That equality is the whole point of the test.
"""
import sys
import os
import random

sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src'))

from _util._prime import _generate_prime
from _util._modulus import _mod_inverse
from he._ntt import _SW_NTT_Engine

OUTPUT_DIR = os.path.dirname(os.path.abspath(__file__))
Q_WIDTH    = 60   # must match Verilog compile-time Q_WIDTH
R          = 1 << Q_WIDTH


def write_hex(filename, values, width_bits=Q_WIDTH):
    digits = (width_bits + 3) // 4
    path   = os.path.join(OUTPUT_DIR, filename)
    with open(path, 'w') as f:
        for v in values:
            f.write(f"{int(v) & ((1 << width_bits) - 1):0{digits}x}\n")
    print(f"  {filename}  ({len(values)} entries)")


def mont_mul(a, b, q, q_inv):
    """Reference model of the Verilog mod_mul in ntt_mont.v."""
    T = a * b
    m = (T & (R - 1)) * q_inv & (R - 1)
    s = T + m * q
    assert s & (R - 1) == 0, "REDC: T + m*q must be divisible by R"
    t = s >> Q_WIDTH
    if t >= q:
        t -= q
    return t


def main():
    logn = int(sys.argv[1]) if len(sys.argv) > 1 else 4
    N    = 1 << logn
    print(f"LOGN={logn}  N={N}  Q_WIDTH={Q_WIDTH}  R=2^{Q_WIDTH}")

    q = _generate_prime(60, N)
    print(f"q = {q}  ({q.bit_length()}-bit)\n")

    # ── Montgomery constants ──────────────────────────────────────
    # q_inv = -q^-1 mod R   =>   q * q_inv ≡ -1 (mod R)
    q_inv = (-pow(q, -1, R)) % R
    assert (q * q_inv) % R == R - 1, "q_inv does not satisfy q*q_inv = -1 mod R"

    n_inv      = _mod_inverse(N, q)
    n_inv_mont = (n_inv * R) % q

    print(f"q_inv      = {q_inv}")
    print(f"n_inv      = {n_inv}")
    print(f"n_inv_mont = {n_inv_mont}\n")

    # ── Verify the drop-in identity before touching the RTL ───────
    random.seed(0xC0FFEE)
    for _ in range(1000):
        a = random.randrange(q)
        b = random.randrange(q)
        b_mont = (b * R) % q
        assert mont_mul(a, b_mont, q, q_inv) == (a * b) % q, \
            "mont(a, b*R) != a*b mod q"
    print("Montgomery identity mont(a, b·R) == a·b mod q verified (1000 trials)\n")

    # ── SW reference engine (golden, unchanged) ───────────────────
    eng = _SW_NTT_Engine(N, q)

    random.seed(0xDEADBEEF)
    inp = [random.randrange(q) for _ in range(N)]

    ntt_out = list(inp)
    eng._transform_to_ntt_form(ntt_out)

    intt_out = list(ntt_out)
    eng._transform_from_ntt_form(intt_out)

    for i in range(N):
        assert inp[i] == intt_out[i] % q, f"INTT round-trip failed at i={i}"

    # ── Pre-scale the constants into Montgomery form ──────────────
    tw_fwd_mont = [(w * R) % q for w in eng._tables]
    tw_inv_mont = [(w * R) % q for w in eng._inv_tables]

    # ── Write vectors ─────────────────────────────────────────────
    write_hex("tv_mont_params.hex",       [q, n_inv_mont, q_inv])
    write_hex("tv_mont_twiddles_fwd.hex", tw_fwd_mont)
    write_hex("tv_mont_twiddles_inv.hex", tw_inv_mont)
    write_hex("tv_mont_input.hex",        inp)
    write_hex("tv_mont_ntt.hex",          ntt_out)
    write_hex("tv_mont_intt.hex",         intt_out)

    print(f"\n  Input first 4: {inp[:4]}")
    print(f"  NTT   first 4: {ntt_out[:4]}")
    print(f"  INTT  first 4: {intt_out[:4]}")
    print("\nDone.")


if __name__ == "__main__":
    main()
