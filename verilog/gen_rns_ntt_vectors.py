#!/usr/bin/env python3
"""
Generate RNS NTT test vector hex files for both prime lanes.

Run from the verilog/ directory:
    python gen_rns_ntt_vectors.py [LOGN]   (default LOGN=4)

Output files (one per lane, per vector type):
    tv_rns_params_lane{i}.hex   — q, n_inv, barrett_m
    tv_rns_twiddles_fwd_lane{i}.hex
    tv_rns_twiddles_inv_lane{i}.hex
    tv_rns_input_lane{i}.hex    — random input polynomial
    tv_rns_ntt_lane{i}.hex      — expected NTT output  (SW reference)
    tv_rns_intt_lane{i}.hex     — expected INTT output (should equal input)

These files are loaded by tb_rns_ntt.v for cycle-accurate comparison.
"""
import sys
import os
import random

sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src'))

from _util._prime import _generate_rns_bases
from _util._modulus import _mod_inverse
from he._ntt import _SW_NTT_Engine

OUTPUT_DIR = os.path.dirname(os.path.abspath(__file__))
Q_WIDTH    = 60   # must match Verilog compile-time Q_WIDTH
N_PRIMES   = 2


def write_hex(filename, values, width_bits=Q_WIDTH):
    digits = (width_bits + 3) // 4
    path   = os.path.join(OUTPUT_DIR, filename)
    with open(path, 'w') as f:
        for v in values:
            f.write(f"{int(v) & ((1 << width_bits) - 1):0{digits}x}\n")
    print(f"  {filename}  ({len(values)} entries)")


def main():
    logn = int(sys.argv[1]) if len(sys.argv) > 1 else 4
    N    = 1 << logn
    print(f"LOGN={logn}  N={N}  N_PRIMES={N_PRIMES}  Q_WIDTH={Q_WIDTH}")


    # ── Generate NTT-friendly primes ──────────────────────────────
    primes = _generate_rns_bases([60, 60], N)
    print(f"Primes: {primes}\n")

    # ── Random input polynomials (reproducible) ───────────────────
    random.seed(0xDEADBEEF)

    for lane, q in enumerate(primes):
        print(f"Lane {lane}  q={q}")

        # Per-lane NTT parameters
        eng       = _SW_NTT_Engine(N, q)
        n_inv     = _mod_inverse(N, q)
        barrett_m = (1 << (2 * Q_WIDTH)) // q

        # Random input in [0, q)
        inp = [random.randint(0, q - 1) for _ in range(N)]

        # SW reference NTT and INTT
        ntt_out  = list(inp)
        eng._transform_to_ntt_form(ntt_out)

        intt_out = list(ntt_out)
        eng._transform_from_ntt_form(intt_out)

        # Sanity check
        for i in range(N):
            assert inp[i] == intt_out[i] % q, \
                f"Lane {lane} INTT round-trip failed at i={i}"

        # Write hex files
        write_hex(f"tv_rns_params_lane{lane}.hex",
                  [q, n_inv, barrett_m],
                  width_bits=2*Q_WIDTH)   # barrett_m needs 2*Q_WIDTH bits

        write_hex(f"tv_rns_twiddles_fwd_lane{lane}.hex", eng._tables)
        write_hex(f"tv_rns_twiddles_inv_lane{lane}.hex", eng._inv_tables)
        write_hex(f"tv_rns_input_lane{lane}.hex",  inp)
        write_hex(f"tv_rns_ntt_lane{lane}.hex",   ntt_out)
        write_hex(f"tv_rns_intt_lane{lane}.hex",  intt_out)

        print(f"  Input  first 4: {inp[:4]}")
        print(f"  NTT    first 4: {ntt_out[:4]}")
        print(f"  INTT   first 4: {intt_out[:4]}")
        print()

    print("Done.")


if __name__ == "__main__":
    main()
