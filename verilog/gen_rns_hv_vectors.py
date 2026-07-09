#!/usr/bin/env python3
"""
gen_rns_hv_vectors.py — Generate hex test vectors for tb_rns_hash_verifier.v

Produces one set of files per RNS prime lane (3 lanes total).

Run from the verilog/ directory:
    python gen_rns_hv_vectors.py

Output files (written to verilog/):
    tv_rns_hv_params_lane{i}.hex        — q, n_inv, c1_count, c2_count, c3_count, barrett_m
    tv_rns_hv_twiddles_fwd_lane{i}.hex  — forward NTT twiddle factors
    tv_rns_hv_twiddles_inv_lane{i}.hex  — inverse NTT twiddle factors
    tv_rns_hv_r_lane{i}.hex             — hash key r (constant polynomial [scalar, 0, ...])
    tv_rns_hv_c1_0_lane{i}.hex          — c1 component 0
    tv_rns_hv_c1_1_lane{i}.hex          — c1 component 1
    tv_rns_hv_c2_0_lane{i}.hex          — c2 component 0
    tv_rns_hv_c2_1_lane{i}.hex          — c2 component 1
    tv_rns_hv_c3_0_lane{i}.hex          — c3 component 0
    tv_rns_hv_c3_1_lane{i}.hex          — c3 component 1
    tv_rns_hv_c3_2_lane{i}.hex          — c3 component 2

The SW hash check (H(c3) == H(c1)*H(c2) + H(c2)) is confirmed before
writing so the testbench should always see valid=1.
"""
import sys
import os

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..', 'src'))

from he.he_parameter import HE_Parameter
from he.encoder import Encoder
from he.key_generator import Key_Generator
from he.encryptor import Encryptor
from he.decryptor import Decryptor
from proof.cipher_hash import HomHash_Manager
from _util._modulus import _mod_inverse

OUTPUT_DIR = os.path.dirname(os.path.abspath(__file__))
Q_WIDTH    = 40   # must match Verilog compile-time Q_WIDTH


def write_hex(filename, values, width_bits=Q_WIDTH):
    digits = (width_bits + 3) // 4
    mask   = (1 << width_bits) - 1
    path   = os.path.join(OUTPUT_DIR, filename)
    with open(path, 'w') as f:
        for v in values:
            f.write(f"{int(v) & mask:0{digits}x}\n")
    print(f"  {filename}  ({len(values)} entries)")


def poly_to_unsigned(poly, q, n):
    data = poly._data if poly._data else []
    return [(data[i] if i < len(data) else 0) % q for i in range(n)]


def main():
    print("=" * 64)
    print("  Generating RNS Hash Verifier Test Vectors")
    print("=" * 64)

    # ── HE setup (matches test_homo.py) ──────────────────────────
    parms = (HE_Parameter("bv")
             .set_poly_modulus(13)
             .set_coeff_modulus([30, 30, 40])
             .set_plain_modulus(18)
             .set_bound(1, 2))
    parms.generate_context()

    n      = parms.poly_modulus          # 8192
    primes = parms.coeff_modulus         # list of 3 primes

    print(f"\n  N       = {n}")
    print(f"  primes  = {primes}")

    # ── Encrypt c1, c2, c3 = c1*c2 + c2 ─────────────────────────
    encoder   = Encoder(parms)
    keygen    = Key_Generator(parms)
    sk        = keygen.generate_secret_key()
    pk        = keygen.generate_public_key(sk)
    encryptor = Encryptor(parms, pk)
    decryptor = Decryptor(parms, sk)

    plain1 = encoder.coeff_encode([1, 2])
    plain2 = encoder.coeff_encode([1, 1])
    c1     = encryptor.encrypt(plain1)
    c2     = encryptor.encrypt(plain2)
    c3     = c1 * c2 + c2

    d3 = decryptor.decrypt(c3)
    print(f"\n  Decrypted c3 : {d3.toString(10, False)}")
    print(f"  c1 components: {len(c1._data)}")
    print(f"  c2 components: {len(c2._data)}")
    print(f"  c3 components: {len(c3._data)}")

    # ── SW hash verification ──────────────────────────────────────
    hasher   = HomHash_Manager(parms)
    r_scalar = int(hasher.r_poly._data[0])
    print(f"  r scalar     : {r_scalar}")

    sw_h1 = hasher.cipher_hash(c1.copy())
    sw_h2 = hasher.cipher_hash(c2.copy())
    sw_h3 = hasher.cipher_hash(c3.copy())
    sw_ok = sw_h3.equal(sw_h1 * sw_h2 + sw_h2)
    print(f"\n  SW H(c3)==H(c1)*H(c2)+H(c2): {sw_ok}")
    assert sw_ok, "SW hash check failed — aborting"

    # ── Convert ciphertexts to coefficient form for HW ───────────
    def to_coeff(ct):
        ct2 = ct.copy()
        if ct2.is_ntt_form():
            ct2.transform_from_ntt_form()
        return ct2

    c1c = to_coeff(c1)
    c2c = to_coeff(c2)
    c3c = to_coeff(c3)

    # ── Write per-lane files ──────────────────────────────────────
    print(f"\n  Writing files to: {OUTPUT_DIR}/\n")

    for lane, q in enumerate(primes):
        print(f"  ── Lane {lane}  q={q} ({q.bit_length()} bits) ──────────")

        eng       = parms.ntt_engines[q]
        n_inv     = _mod_inverse(n, q)
        barrett_m = (1 << (2 * Q_WIDTH)) // q

        # params: q, n_inv, c1_count, c2_count, c3_count, barrett_m
        write_hex(f"tv_rns_hv_params_lane{lane}.hex",
                  [q, n_inv, len(c1._data), len(c2._data), len(c3._data), barrett_m],
                  width_bits=2 * Q_WIDTH)

        # Twiddle tables (already in [0, q))
        write_hex(f"tv_rns_hv_twiddles_fwd_lane{lane}.hex", eng._tables)
        write_hex(f"tv_rns_hv_twiddles_inv_lane{lane}.hex", eng._inv_tables)

        # r polynomial: constant poly [r_scalar % q, 0, 0, ...]
        r_data = [r_scalar % q] + [0] * (n - 1)
        write_hex(f"tv_rns_hv_r_lane{lane}.hex", r_data)

        # c1 components
        for ci, rp in enumerate(c1c._data):
            write_hex(f"tv_rns_hv_c1_{ci}_lane{lane}.hex",
                      poly_to_unsigned(rp._rns_poly[q], q, n))

        # c2 components
        for ci, rp in enumerate(c2c._data):
            write_hex(f"tv_rns_hv_c2_{ci}_lane{lane}.hex",
                      poly_to_unsigned(rp._rns_poly[q], q, n))

        # c3 components
        for ci, rp in enumerate(c3c._data):
            write_hex(f"tv_rns_hv_c3_{ci}_lane{lane}.hex",
                      poly_to_unsigned(rp._rns_poly[q], q, n))

        print()

    print("=" * 64)
    print("  Done — expected valid = 1 in simulation.")
    print("=" * 64)


if __name__ == "__main__":
    main()
