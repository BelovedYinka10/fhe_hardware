"""
test_sw_vs_hw.py  —  Side-by-side SW vs HW cipher_hash comparison.

Demonstrates that the same ciphertext data fed into both the Python
software cipher_hash and the Verilog hardware cipher_hash produces
identical hash polynomials, coefficient by coefficient.

Usage:
    cd src/
    python test_sw_vs_hw.py
"""

import ctypes
import pathlib

from he.he_parameter import HE_Parameter
from he.encoder import Encoder
from he.key_generator import Key_Generator
from he.encryptor import Encryptor
from he.decryptor import Decryptor
from he.galois_ring.poly import Poly
from he.galois_ring.rns_poly import RNS_Poly
from he.ciphertext import Ciphertext
from proof.cipher_hash import HomHash_Manager
from proof._hash_verifier_hw import HW_HashVerifier

# ── Helpers ──────────────────────────────────────────────────────

def centered_to_unsigned(val, q):
    """Convert centered representation to unsigned [0, q)."""
    return int(val) % q

def unsigned_to_centered(val, q):
    """Convert unsigned [0, q) to centered (-q/2, q/2]."""
    v = int(val)
    return v - q if v > q // 2 else v


def read_hw_hash(lib, handle, hash_id, n, q):
    """Read back h1/h2/h3 from HW and convert to centered list."""
    U64 = ctypes.c_uint64
    buf = (U64 * n)()
    lib.hv_read_hash(handle, hash_id, ctypes.cast(buf, ctypes.POINTER(U64)), n)
    return [unsigned_to_centered(buf[i], q) for i in range(n)]


def format_poly(coeffs, num=10):
    """Format first `num` coefficients for display."""
    shown = coeffs[:num]
    tail = ", ..." if len(coeffs) > num else ""
    return "[" + ", ".join(str(c) for c in shown) + tail + "]"


def count_nonzero(coeffs):
    return sum(1 for c in coeffs if c != 0)


# ── Setup ────────────────────────────────────────────────────────

def main():
    print("=" * 70)
    print("  SW vs HW Cipher Hash — Coefficient-Level Comparison")
    print("=" * 70)

    # Build HE context
    parms = (HE_Parameter("bv")
             .set_poly_modulus(13)
             .set_coeff_modulus([60, 60])
             .set_plain_modulus(18)
             .set_bound(1, 2))
    parms.generate_context()
    n = parms.poly_modulus  # 8192

    print(f"\nPoly modulus N = {n}")
    print(f"Coeff modulus primes = {parms.coeff_modulus}")
    print(f"Plain modulus = {parms.plain_modulus}")

    # Keys & encryption
    encoder = Encoder(parms)
    keygen = Key_Generator(parms)
    sk = keygen.generate_secret_key()
    pk = keygen.generate_public_key(sk)
    encryptor = Encryptor(parms, pk)
    decryptor = Decryptor(parms, sk)

    # Encrypt two plaintexts
    plain1 = encoder.coeff_encode([1, 2])
    plain2 = encoder.coeff_encode([1, 1, 0, 0, 0, 0, 0, 0, 0, 0])
    c1 = encryptor.encrypt(plain1)
    c2 = encryptor.encrypt(plain2)
    c3 = c1 * c2 + c2

    print(f"\nPlaintext 1: [1, 2]")
    print(f"Plaintext 2: [1, 1]")
    print(f"c1 size = {c1.size()}, c2 size = {c2.size()}, c3 size = {c3.size()}")
    print(f"Decrypted c3 = c1*c2+c2: {decryptor.decrypt(c3).toString(5, False)}")

    # ── SW: compute cipher_hash ──────────────────────────────────

    print("\n" + "─" * 70)
    print("  PHASE 1: Software Cipher Hash (Python)")
    print("─" * 70)

    hasher = HomHash_Manager(parms)
    r_scalar = hasher.r_poly._data[0]
    print(f"\nRandom scalar r = {r_scalar}")

    sw_h1 = hasher.cipher_hash(c1.copy())
    sw_h2 = hasher.cipher_hash(c2.copy())
    sw_h3 = hasher.cipher_hash(c3.copy())
    sw_expected = sw_h1 * sw_h2 + sw_h2

    for label, h in [("H(c1)", sw_h1), ("H(c2)", sw_h2), ("H(c3)", sw_h3),
                      ("H(c1)*H(c2)+H(c2)", sw_expected)]:
        print(f"\n  SW {label} (NTT form):")
        for prime in parms.coeff_modulus:
            coeffs = h._rns_poly[prime]._data
            print(f"    q={prime}: {format_poly(coeffs)} ({count_nonzero(coeffs)} nonzero)")

    sw_match = sw_h3.equal(sw_expected)
    print(f"\n  SW H(c3) == H(c1)*H(c2)+H(c2): {sw_match}")

    # Convert SW hashes to coefficient form for comparison with HW
    # (SW cipher_hash returns NTT-form; HW returns coefficient-form)
    sw_h1_coeff = sw_h1.copy()
    sw_h2_coeff = sw_h2.copy()
    sw_h3_coeff = sw_h3.copy()
    sw_h1_coeff.transform_from_ntt_form()
    sw_h2_coeff.transform_from_ntt_form()
    sw_h3_coeff.transform_from_ntt_form()

    print(f"\n  SW hashes converted to coefficient form for HW comparison:")
    for label, h in [("H(c1)", sw_h1_coeff), ("H(c2)", sw_h2_coeff), ("H(c3)", sw_h3_coeff)]:
        print(f"  {label}:")
        for prime in parms.coeff_modulus:
            coeffs = h._rns_poly[prime]._data
            print(f"    q={prime}: {format_poly(coeffs)} ({count_nonzero(coeffs)} nonzero)")

    # ── HW: compute cipher_hash via Verilog ──────────────────────

    print("\n" + "─" * 70)
    print("  PHASE 2: Hardware Cipher Hash (Verilog / Verilator)")
    print("─" * 70)

    # Convert ciphertexts to coefficient form for HW
    hw_c1 = c1.copy()
    hw_c2 = c2.copy()
    hw_c3 = c3.copy()
    if hw_c1.is_ntt_form():
        hw_c1.transform_from_ntt_form()
    if hw_c2.is_ntt_form():
        hw_c2.transform_from_ntt_form()
    if hw_c3.is_ntt_form():
        hw_c3.transform_from_ntt_form()

    # Build r as constant polynomial [scalar, 0, ..., 0]
    r_coeff = [int(r_scalar)] + [0] * (n - 1)
    r_poly = Poly(parms.plain_modulus, n, r_coeff, False)

    print(f"\n  r polynomial (coeff form): [{r_scalar}, 0, 0, ...]")
    print(f"  Ciphertexts converted to coefficient form for HW")

    # Create HW backend and wire up the readback
    hw_verifier = HW_HashVerifier(parms)
    lib = hw_verifier._get_lib()

    # Register hv_read_hash
    U64P = ctypes.POINTER(ctypes.c_uint64)
    lib.hv_read_hash.restype = None
    lib.hv_read_hash.argtypes = [ctypes.c_void_p, ctypes.c_int, U64P, ctypes.c_int]

    U64 = ctypes.c_uint64

    # ── Per-prime comparison ─────────────────────────────────────

    print("\n" + "─" * 70)
    print("  PHASE 3: Coefficient-by-Coefficient Comparison")
    print("─" * 70)

    all_match = True

    for prime in parms.coeff_modulus:
        print(f"\n  ┌── Prime q = {prime} " + "─" * (50 - len(str(prime))))
        handle = hw_verifier._handles[prime]
        U64A = U64 * n

        def _to_u64(data, q):
            padded = (data + [0] * n)[:n]
            return U64A(*[int(x) % q for x in padded])

        # Show input data being loaded
        print(f"  │")
        print(f"  │  Loading ciphertext data into HW...")
        for ct_label, ct_obj, ct_id in [("c1", hw_c1, 0), ("c2", hw_c2, 1), ("c3", hw_c3, 2)]:
            for comp_i, rns_poly in enumerate(ct_obj._data):
                d = rns_poly._rns_poly[prime]._data
                lib.hv_load_ct(
                    handle, ct_id, comp_i,
                    ctypes.cast(_to_u64(d, prime), U64P), n)
                nz = count_nonzero(d)
                print(f"  │    {ct_label}[{comp_i}]: {len(d)} coeffs, {nz} nonzero, first4={d[:4]}")

        # Load r
        r_data = r_poly._data
        lib.hv_load_r(handle, ctypes.cast(_to_u64(r_data, prime), U64P), n)
        print(f"  │    r:     first4={[int(x) % prime for x in r_data[:4]]}")

        # Run HW simulation
        print(f"  │")
        print(f"  │  Running Verilog simulation...")
        valid = lib.hv_run(handle, hw_c1.size(), hw_c2.size(), hw_c3.size())
        print(f"  │  HW valid = {valid}")

        # Read back HW hashes
        hw_h1 = read_hw_hash(lib, handle, 0, n, prime)
        hw_h2 = read_hw_hash(lib, handle, 1, n, prime)
        hw_h3 = read_hw_hash(lib, handle, 2, n, prime)

        # Get SW hashes for this prime (already converted to coefficient form)
        sw_h1_coeffs = sw_h1_coeff._rns_poly[prime]._data + [0] * (n - len(sw_h1_coeff._rns_poly[prime]._data))
        sw_h2_coeffs = sw_h2_coeff._rns_poly[prime]._data + [0] * (n - len(sw_h2_coeff._rns_poly[prime]._data))
        sw_h3_coeffs = sw_h3_coeff._rns_poly[prime]._data + [0] * (n - len(sw_h3_coeff._rns_poly[prime]._data))
        sw_h1_coeffs = sw_h1_coeffs[:n]
        sw_h2_coeffs = sw_h2_coeffs[:n]
        sw_h3_coeffs = sw_h3_coeffs[:n]

        # Compare H1
        print(f"  │")
        h1_match = (hw_h1 == sw_h1_coeffs)
        h1_diffs = sum(1 for a, b in zip(hw_h1, sw_h1_coeffs) if a != b)
        print(f"  │  H(c1) — SW: {format_poly(sw_h1_coeffs, 5)}")
        print(f"  │          HW: {format_poly(hw_h1, 5)}")
        print(f"  │          Match: {'✓' if h1_match else '✗ (' + str(h1_diffs) + ' diffs)'}")

        # Compare H2
        h2_match = (hw_h2 == sw_h2_coeffs)
        h2_diffs = sum(1 for a, b in zip(hw_h2, sw_h2_coeffs) if a != b)
        print(f"  │  H(c2) — SW: {format_poly(sw_h2_coeffs, 5)}")
        print(f"  │          HW: {format_poly(hw_h2, 5)}")
        print(f"  │          Match: {'✓' if h2_match else '✗ (' + str(h2_diffs) + ' diffs)'}")

        # Compare H3
        h3_match = (hw_h3 == sw_h3_coeffs)
        h3_diffs = sum(1 for a, b in zip(hw_h3, sw_h3_coeffs) if a != b)
        print(f"  │  H(c3) — SW: {format_poly(sw_h3_coeffs, 5)}")
        print(f"  │          HW: {format_poly(hw_h3, 5)}")
        print(f"  │          Match: {'✓' if h3_match else '✗ (' + str(h3_diffs) + ' diffs)'}")

        prime_ok = h1_match and h2_match and h3_match and (valid == 1)
        all_match = all_match and prime_ok
        print(f"  │")
        print(f"  └── Prime result: {'ALL MATCH ✓' if prime_ok else 'MISMATCH ✗'}")

    # ── Final summary ────────────────────────────────────────────

    print("\n" + "=" * 70)
    print("  FINAL RESULT")
    print("=" * 70)
    print(f"\n  SW verification:  {sw_match}")
    print(f"  HW verification:  {all_match}")
    print(f"  SW == HW (all primes, all coefficients): {all_match and sw_match}")
    print()

    if all_match and sw_match:
        print("  PROVEN: Same input → Same hash output in both SW and HW")
        print("          H(c3) == H(c1)*H(c2) + H(c2) holds in both backends")
    else:
        print("  FAILED: Mismatch detected between SW and HW")

    print()


if __name__ == "__main__":
    main()
