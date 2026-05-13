#!/usr/bin/env python3
"""
Generate hex test vector files for Vivado testbenches.
Run from the src/ directory:  python ../verilog/gen_test_vectors.py
"""
import sys
import os

# Add src/ to path
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src'))

from he.he_parameter import HE_Parameter
from he.encoder import Encoder
from he.key_generator import Key_Generator
from he.encryptor import Encryptor
from he.decryptor import Decryptor
from proof.cipher_hash import HomHash_Manager
from _util._modulus import _mod_inverse

OUTPUT_DIR = os.path.dirname(__file__)


def to_unsigned(val, q):
    """Convert centered representation to unsigned [0, q)."""
    return val % q


def write_hex_file(filename, values, q_width=40):
    """Write list of integers as hex file (one value per line, zero-padded)."""
    hex_digits = (q_width + 3) // 4  # number of hex digits needed
    filepath = os.path.join(OUTPUT_DIR, filename)
    with open(filepath, 'w') as f:
        for v in values:
            f.write(f"{v:0{hex_digits}x}\n")
    print(f"  Written: {filename} ({len(values)} values)")


def poly_to_unsigned_list(poly, q, n):
    """Extract Poly data as unsigned list, padded to length n."""
    data = poly._data if poly._data else []
    result = []
    for i in range(n):
        v = data[i] if i < len(data) else 0
        result.append(to_unsigned(v, q))
    return result


def main():
    print("=" * 60)
    print("  Generating Vivado Test Vectors")
    print("=" * 60)

    # Setup HE context (same as test_homo.py)
    parms = HE_Parameter("bv") \
        .set_poly_modulus(13) \
        .set_coeff_modulus([30, 30, 40]) \
        .set_plain_modulus(18) \
        .set_bound(1, 2)
    parms.generate_context()

    n = parms.poly_modulus  # 8192
    primes = parms.coeff_modulus

    # Use the FIRST prime for the testbench
    q = primes[0]
    print(f"\n  N = {n}")
    print(f"  Using prime q = {q} ({q.bit_length()} bits)")

    # Compute n_inv = N^-1 mod q
    n_inv = _mod_inverse(n, q)
    print(f"  n_inv = {n_inv}")

    # Barrett constant: M = floor(2^(2*Q_WIDTH) / q)
    # Q_WIDTH=40 matches the Verilog compile-time parameter
    Q_WIDTH = 40
    barrett_m = (1 << (2 * Q_WIDTH)) // q
    print(f"  barrett_m = {barrett_m} ({barrett_m.bit_length()} bits)")

    # Get NTT engine and twiddle tables
    ntt_engine = parms.ntt_engines[q]
    fwd_twiddles = list(ntt_engine._tables)
    inv_twiddles = list(ntt_engine._inv_tables)
    print(f"  Twiddle tables: {len(fwd_twiddles)} forward, {len(inv_twiddles)} inverse")

    # Encrypt
    encoder = Encoder(parms)
    keygen = Key_Generator(parms)
    secret_key = keygen.generate_secret_key()
    public_key = keygen.generate_public_key(secret_key)
    encryptor = Encryptor(parms, public_key)
    decryptor = Decryptor(parms, secret_key)

    plain1 = encoder.coeff_encode([1, 2])
    plain2 = encoder.coeff_encode([1, 1])
    c1 = encryptor.encrypt(plain1)
    c2 = encryptor.encrypt(plain2)
    c3 = c1 * c2 + c2

    # Verify decryption
    d3 = decryptor.decrypt(c3)
    print(f"  Decrypted c3: {d3.toString(10, False)}")
    print(f"  c1 components: {len(c1._data)}")
    print(f"  c2 components: {len(c2._data)}")
    print(f"  c3 components: {len(c3._data)}")

    # Compute cipher_hash in SW
    hasher = HomHash_Manager(parms)
    r_scalar = hasher.r_poly._data[0]
    print(f"  r scalar = {r_scalar}")

    # Compute hashes (SW)
    c1_copy = c1.copy()
    c2_copy = c2.copy()
    c3_copy = c3.copy()
    sw_h1 = hasher.cipher_hash(c1_copy)
    sw_h2 = hasher.cipher_hash(c2_copy)
    sw_h3 = hasher.cipher_hash(c3_copy)

    # Verify hash homomorphism in NTT form (before converting)
    sw_expected = sw_h1 * sw_h2 + sw_h2
    hash_match = sw_h3.equal(sw_expected)

    # Convert hashes to coefficient form
    sw_h1.transform_from_ntt_form()
    sw_h2.transform_from_ntt_form()
    sw_h3.transform_from_ntt_form()

    # Convert ciphertexts to coefficient form for HW
    c1_coeff = c1.copy()
    c2_coeff = c2.copy()
    c3_coeff = c3.copy()
    if c1_coeff.is_ntt_form():
        c1_coeff.transform_from_ntt_form()
    if c2_coeff.is_ntt_form():
        c2_coeff.transform_from_ntt_form()
    if c3_coeff.is_ntt_form():
        c3_coeff.transform_from_ntt_form()

    # ── Write test vector files ──────────────────────────────────
    print(f"\n  Writing test vectors to: {OUTPUT_DIR}/")

    # Parameters (6 values: q, n_inv, c1_count, c2_count, c3_count, barrett_m)
    # Use 2*Q_WIDTH bits for params to accommodate barrett_m (up to 2*Q_WIDTH bits)
    write_hex_file("tv_params.hex", [q, n_inv, len(c1._data), len(c2._data), len(c3._data), barrett_m], q_width=2*Q_WIDTH)

    # Twiddle tables (already unsigned)
    write_hex_file("tv_twiddles_fwd.hex", fwd_twiddles)
    write_hex_file("tv_twiddles_inv.hex", inv_twiddles)

    # r polynomial (constant poly: [r_scalar, 0, 0, ...])
    r_poly_data = [to_unsigned(r_scalar, q)] + [0] * (n - 1)
    write_hex_file("tv_r.hex", r_poly_data)

    # Ciphertext components (convert centered → unsigned)
    for comp_idx, rns_poly in enumerate(c1_coeff._data):
        poly = rns_poly._rns_poly[q]
        data = poly_to_unsigned_list(poly, q, n)
        write_hex_file(f"tv_c1_{comp_idx}.hex", data)

    for comp_idx, rns_poly in enumerate(c2_coeff._data):
        poly = rns_poly._rns_poly[q]
        data = poly_to_unsigned_list(poly, q, n)
        write_hex_file(f"tv_c2_{comp_idx}.hex", data)

    for comp_idx, rns_poly in enumerate(c3_coeff._data):
        poly = rns_poly._rns_poly[q]
        data = poly_to_unsigned_list(poly, q, n)
        write_hex_file(f"tv_c3_{comp_idx}.hex", data)

    # Expected hash outputs (unsigned)
    h1_data = poly_to_unsigned_list(sw_h1._rns_poly[q], q, n)
    h2_data = poly_to_unsigned_list(sw_h2._rns_poly[q], q, n)
    h3_data = poly_to_unsigned_list(sw_h3._rns_poly[q], q, n)
    write_hex_file("tv_h1.hex", h1_data)
    write_hex_file("tv_h2.hex", h2_data)
    write_hex_file("tv_h3.hex", h3_data)

    print(f"\n  SW hash verification: H(c3) == H(c1)*H(c2)+H(c2) = {hash_match}")

    print(f"\n  h1 first 4 (unsigned): {h1_data[:4]}")
    print(f"  h2 first 4 (unsigned): {h2_data[:4]}")
    print(f"  h3 first 4 (unsigned): {h3_data[:4]}")

    print("\n" + "=" * 60)
    print("  Done! Test vectors written successfully.")
    print("=" * 60)


if __name__ == "__main__":
    main()
