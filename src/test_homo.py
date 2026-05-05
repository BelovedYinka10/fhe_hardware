from he.galois_ring.poly import Poly
from he.he_parameter import HE_Parameter
from he.encoder import Encoder
from he.evaluator import Evaluator
from he.key_generator import Key_Generator
from he.encryptor import Encryptor
from he.decryptor import Decryptor
from proof.cipher_hash import HomHash_Manager
from proof.circuit import parse_circuit
from proof.hash_verifier import HashVerifier

if __name__ == "__main__":
    parms = HE_Parameter("bv").set_poly_modulus(13).set_coeff_modulus([30, 30, 40]).set_plain_modulus(18).set_bound(1, 2)
    parms.generate_context()
    print(parms.toString())

    encoder    = Encoder(parms)
    keygen     = Key_Generator(parms)
    secret_key = keygen.generate_secret_key()
    public_key = keygen.generate_public_key(secret_key)

    encryptor  = Encryptor(parms, public_key)
    decryptor  = Decryptor(parms, secret_key)

    #############################################
    #           Homomorphic Hash Test           #
    #############################################
    print("\n── Homomorphic Hash Test ──────────────────")

    hasher = HomHash_Manager(parms)
    plain1 = encoder.coeff_encode([1, 2])
    plain2 = encoder.coeff_encode([1, 1, 0, 0, 0, 0, 0, 0, 0, 0])

    c1 = encryptor.encrypt(plain1)
    c2 = encryptor.encrypt(plain2)
    c3 = c1 * c2 + c2

    # Direct cipher_hash comparison
    c3_hash  = hasher.cipher_hash(c3.copy())
    c1_hash  = hasher.cipher_hash(c1.copy())
    c2_hash  = hasher.cipher_hash(c2.copy())
    c3_hash2 = c1_hash * c2_hash + c2_hash

    print("c3_hash  (first 5 coeffs):\n" + c3_hash.toString(5, False))
    print("c3_hash2 (first 5 coeffs):\n" + c3_hash2.toString(5, False))
    print(f"Hashes equal (direct): {c3_hash.equal(c3_hash2)}")

    #############################################
    #         HashVerifier (SW backend)         #
    #############################################
    print("\n── HashVerifier SW backend ────────────────")
    verifier_sw = HashVerifier(parms, use_hw=False)
    result_sw   = verifier_sw.verify(c1, c2, c3)
    print(f"SW verify result: {result_sw}")

    #############################################
    #         HashVerifier (HW backend)         #
    #   Build first:  cd verilog/ && make hash_verifier
    #############################################
    print("\n── HashVerifier HW backend ────────────────")
    verifier_hw = HashVerifier(parms, use_hw=True)
    if verifier_hw._backend is not None:
        result_hw = verifier_hw.verify(c1, c2, c3)
        print(f"HW verify result: {result_hw}")
        print(f"SW == HW: {result_sw == result_hw}")
    else:
        print("(HW library not built — skipping HW verification)")

    #############################################
    #                Circuit Test               #
    #############################################
    print("\n── Circuit Test ────────────────────────────")
    plain1 = encoder.coeff_encode([1, 1])
    plain2 = encoder.coeff_encode([1, 2, 0, 0, 0, 0, 0, 0, 0, 0])

    c1 = encryptor.encrypt(plain1)
    c2 = encryptor.encrypt(plain2)
    c3 = c1 * c2 + c2

    d3 = decryptor.decrypt(c3)
    print("d3 (manual c1*c2+c2):\n" + d3.toString(10, False))

    c = parse_circuit("0*1+2")
    print(f"Circuit: {c.toString()}")

    ret  = c.compute_poly([c1, c2, c2])[0]
    d4   = decryptor.decrypt(ret)
    print("d4 (circuit result):\n" + d4.toString(10, False))
    print(f"d3 == d4: {d3._data == d4._data}")
