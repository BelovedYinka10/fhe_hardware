"""
hash_verifier.py  —  Unified SW/HW homomorphic hash verifier.

Verifies the circuit  c3 = c1 * c2 + c2  without decryption by checking:

    cipher_hash(c3, r)  ==  cipher_hash(c1, r) * cipher_hash(c2, r)
                                               + cipher_hash(c2, r)

Set USE_HW_VERIFIER = True after building the Verilog library:
    cd verilog/ && make hash_verifier
"""

from he.ciphertext import Ciphertext
from he.he_parameter import HE_Parameter
from proof.cipher_hash import HomHash_Manager

# ── Toggle here (or pass use_hw= to HashVerifier) ────────────────
USE_HW_VERIFIER = False


class HasoshVerifier:
    """
    Verifies:  cipher_hash(c3) == cipher_hash(c1) * cipher_hash(c2)
                                                  + cipher_hash(c2)

    Parameters
    ----------
    parms  : HE_Parameter — fully initialised context
    use_hw : bool | None  — True = HW, False = SW, None = use module flag
    """

    def __init__(self, parms: HE_Parameter, use_hw: bool = None):
        self._parms   = parms
        self._hasher  = HomHash_Manager(parms)
        self._backend = None

        use = USE_HW_VERIFIER if use_hw is None else use_hw
        if use:
            try:
                from proof._hash_verifier_hw import HW_HashVerifier
                self._backend = HW_HashVerifier(parms)
                print("[HashVerifier] Using Verilog hardware backend (Verilator)")
            except ImportError as e:
                print(f"[HashVerifier] HW library not available ({e}) "
                      "— falling back to Python")
        else:
            print("[HashVerifier] Using Python software backend")

    # ── Public API ───────────────────────────────────────────────

    def verify(self,
               c1: Ciphertext,
               c2: Ciphertext,
               c3: Ciphertext) -> bool:
        """
        Return True if  c3 == c1 * c2 + c2  (verified via hash).

        All ciphertexts must be in coefficient (non-NTT) form.
        """
        if self._backend is not None:
            # HW Verilog expects coefficient-form ciphertexts (it does NTT internally).
            # Copy and convert to coefficient form if needed.
            hw_c1 = c1.copy()
            hw_c2 = c2.copy()
            hw_c3 = c3.copy()
            if hw_c1.is_ntt_form():
                hw_c1.transform_from_ntt_form()
            if hw_c2.is_ntt_form():
                hw_c2.transform_from_ntt_form()
            if hw_c3.is_ntt_form():
                hw_c3.transform_from_ntt_form()

            # HW Verilog does full polynomial Horner hash (NTT-based poly mul).
            # SW cipher_hash uses scalar multiplication by r_poly._data[0].
            # To match: pass r as a constant polynomial [scalar, 0, 0, ...]
            # in coefficient form so poly_mul(x, r) == scalar_mul(x, scalar).
            from he.galois_ring.poly import Poly
            scalar = self._hasher.r_poly._data[0]
            n = self._parms.poly_modulus
            r_coeff = [int(scalar)] + [0] * (n - 1)
            r_poly = Poly(self._parms.plain_modulus, n, r_coeff, False)
            return self._backend.verify(hw_c1, hw_c2, hw_c3, r_poly)
        return self._sw_verify(c1, c2, c3)

    # ── Software path ────────────────────────────────────────────

    def _sw_verify(self,
                   c1: Ciphertext,
                   c2: Ciphertext,
                   c3: Ciphertext) -> bool:
        h1 = self._hasher.cipher_hash(c1.copy())
        h2 = self._hasher.cipher_hash(c2.copy())
        h3 = self._hasher.cipher_hash(c3.copy())
        expected = h1 * h2 + h2
        return h3.equal(expected)
