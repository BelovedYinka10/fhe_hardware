from he.galois_ring.poly import Poly
from he.galois_ring.rns_poly import RNS_Poly
from he.galois_ring._util._ntt import _NTT_Engine
from he.galois_ring._util._modulus import _mod_inverse, _centered_modulus

if __name__ == "__main__":

    # Polynomial degree
    n = 8

    # RNS primes (must support NTT for n=8)
    rns_base = [17, 97, 12289]

    # Create NTT engines
    ntt_engines = {}
    for q in rns_base:
        ntt_engines[q] = _NTT_Engine(n, q)

    # Two polynomials
    p1 = Poly(12289, n, [1, 2, 0, 0, 0, 0, 0, 0])





    p2 = Poly(12289, n, [3, 1, 0, 0, 0, 0, 0, 0])

    print("Polynomial 1:")
    print(p1.toString())

    print("\nPolynomial 2:")
    print(p2.toString())

    # Convert to RNS
    rp1 = RNS_Poly(rns_base, n)
    rp2 = RNS_Poly(rns_base, n)

    rp1._eval_rns(p1)
    rp2._eval_rns(p2)

    # Attach NTT engines
    rp1._set_ntt_engines(ntt_engines)
    rp2._set_ntt_engines(ntt_engines)

    print("\nRNS form:")
    print(rp1.toString())

    # Convert to NTT
    rp1.transform_to_ntt_form()
    rp2.transform_to_ntt_form()

    print("\nNTT form:")
    print(rp1.toString())

    # Multiply in NTT domain
    rp3 = rp1 * rp2

    print("\nAfter pointwise multiplication (NTT domain):")
    print(rp3.toString())

    # Convert back
    rp3.transform_from_ntt_form()

    print("\nResult polynomial (after INTT):")
    print(rp3.toString())

    # CRT reconstruction
    Q = 1
    for b in rns_base:
        Q *= b

    basis = {}
    for b in rns_base:
        M_i = Q // b
        y_i = _mod_inverse(M_i, b)
        basis[b] = M_i * y_i

    result_coeffs = []

    for deg in range(n):

        acc = 0

        for b in rns_base:
            lane_data = rp3._rns_poly[b]._data
            residue = lane_data[deg] if deg < len(lane_data) else 0
            acc += residue * basis[b]

        result_coeffs.append(_centered_modulus(acc, Q))

    result_poly = Poly(Q, n, result_coeffs)

    print("\nCRT recovered polynomial:")
    print(result_poly.toString())