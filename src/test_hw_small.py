"""Quick HW hash verifier test with small parameters (N=256)."""
from he.galois_ring.poly import Poly
from he.he_parameter import HE_Parameter
from he.encoder import Encoder
from he.key_generator import Key_Generator
from he.encryptor import Encryptor
from he.decryptor import Decryptor
from proof.cipher_hash import sampling_r, cipher_hash
from proof.hash_verifier import HashVerifier

if __name__ == "__main__":
    # Small parameters for fast testing: N=2^8=256
    parms = HE_Parameter("bv") \
        .set_poly_modulus(8) \
        .set_coeff_modulus([20, 20]) \
        .set_plain_modulus(10) \
        .set_bound(1, 2)
    parms.generate_context()
    print(parms.toString())

    encoder    = Encoder(parms)
    keygen     = Key_Generator(parms)
    secret_key = keygen.generate_secret_key()
    public_key = keygen.generate_public_key(secret_key)

    encryptor = Encryptor(parms, public_key)
    decryptor = Decryptor(parms, secret_key)

    r_poly, min_coeff = sampling_r(parms)
    plain1 = encoder.coeff_encode([1, 2])
    plain2 = encoder.coeff_encode([1, 1])

    c1 = encryptor.encrypt(plain1)
    c2 = encryptor.encrypt(plain2)
    c3 = c1 * c2 + c2

    # SW verify
    print("\n── SW verify ──")
    v_sw = HashVerifier(parms, use_hw=False)
    result_sw = v_sw.verify(c1, c2, c3, r_poly)
    print(f"SW result: {result_sw}")

    # HW verify
    print("\n── HW verify ──")
    v_hw = HashVerifier(parms, use_hw=True)
    if v_hw._backend is not None:
        result_hw = v_hw.verify(c1, c2, c3, r_poly)
        print(f"HW result: {result_hw}")
        print(f"SW == HW: {result_sw == result_hw}")
    else:
        print("HW library not available")
