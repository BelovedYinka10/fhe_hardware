"""
benchmark_hom_hash.py — Benchmark homomorphic hash verification
                         under schoolbook vs NTT polynomial multiplication.

The full workflow:
  1. Encrypt two plaintexts → c1, c2
  2. Compute c3 = c1 * c2 + c2  (ciphertext multiply uses poly mul)
  3. Compute H(c1), H(c2), H(c3) via cipher_hash
  4. Verify H(c3) == H(c1) * H(c2) + H(c2)  (hash poly mul)

Run from src/:
    python benchmark_hom_hash.py
"""
import time
from he.he_parameter import HE_Parameter
from he.encoder import Encoder
from he.key_generator import Key_Generator
from he.encryptor import Encryptor
from he.decryptor import Decryptor
from he.galois_ring.poly_config import PolyConfig
from proof.cipher_hash import HomHash_Manager

# ── HE context setup ───────────────────────────────────────────────────────
parms = (HE_Parameter("bv")
         .set_poly_modulus(13)
         .set_coeff_modulus([30, 30, 40])
         .set_plain_modulus(18)
         .set_bound(1, 2))
parms.generate_context()

encoder  = Encoder(parms)
keygen   = Key_Generator(parms)
sk       = keygen.generate_secret_key()
pk       = keygen.generate_public_key(sk)
enc      = Encryptor(parms, pk)
dec      = Decryptor(parms, sk)
hasher   = HomHash_Manager(parms)

plain1 = encoder.coeff_encode([1, 2])
plain2 = encoder.coeff_encode([1, 1])

REPEATS = 3

print(f"N = {parms.poly_modulus},  primes = {parms.coeff_modulus}")
print(f"Repeats per mode = {REPEATS}")
print()

results = {}

for mode in ("ntt", "schoolbook"):
    PolyConfig.set_mul_mode(mode)
    t_enc_total = t_ct_mul_total = t_hash_total = t_verify_total = 0.0

    for _ in range(REPEATS):

        # ── Step 1: Encrypt ───────────────────────────────────────
        t0 = time.perf_counter()
        c1 = enc.encrypt(plain1)
        c2 = enc.encrypt(plain2)
        t_enc_total += time.perf_counter() - t0

        # ── Step 2: Ciphertext multiply c3 = c1*c2 + c2 ──────────
        t0 = time.perf_counter()
        c3 = c1 * c2 + c2
        t_ct_mul_total += time.perf_counter() - t0

        # ── Step 3: Cipher hash H(c1), H(c2), H(c3) ──────────────
        t0 = time.perf_counter()
        h1 = hasher.cipher_hash(c1.copy())
        h2 = hasher.cipher_hash(c2.copy())
        h3 = hasher.cipher_hash(c3.copy())
        t_hash_total += time.perf_counter() - t0

        # ── Step 4: Verify H(c3) == H(c1)*H(c2) + H(c2) ─────────
        t0 = time.perf_counter()
        expected = h1 * h2 + h2
        valid = h3.equal(expected)
        t_verify_total += time.perf_counter() - t0

    n = REPEATS
    r = {
        "encrypt"   : t_enc_total    / n,
        "ct_mul"    : t_ct_mul_total / n,
        "hash"      : t_hash_total   / n,
        "verify_mul": t_verify_total  / n,
        "total"     : (t_enc_total + t_ct_mul_total +
                       t_hash_total + t_verify_total) / n,
        "valid"     : valid,
    }
    results[mode] = r

    print(f"── {mode.upper()} ──────────────────────────────")
    print(f"  Encrypt (c1, c2)       : {r['encrypt']*1000:8.1f} ms")
    print(f"  Ciphertext mul c1*c2+c2: {r['ct_mul']*1000:8.1f} ms")
    print(f"  Cipher hash H(c1,c2,c3): {r['hash']*1000:8.1f} ms")
    print(f"  Verify H(c3)==H1*H2+H2 : {r['verify_mul']*1000:8.1f} ms")
    print(f"  ── Total               : {r['total']*1000:8.1f} ms")
    print(f"  Hash valid             : {r['valid']}")
    print()

# ── Summary ────────────────────────────────────────────────────────────────
print("══ Speedup (schoolbook → NTT) ══════════════════════")
for step in ("encrypt", "ct_mul", "hash", "verify_mul", "total"):
    sb  = results["schoolbook"][step]
    ntt = results["ntt"][step]
    if ntt > 0:
        print(f"  {step:<24}: {sb/ntt:5.1f}×")

PolyConfig.set_mul_mode("ntt")
