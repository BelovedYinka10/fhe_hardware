"""
_hash_verifier_hw.py  —  ctypes wrapper for the Verilator hash_verifier .so

Drop-in hardware backend for HashVerifier.
One HV_Engine is created per RNS prime; each engine runs the full
Verilog simulation for that prime's coefficient ring.

Build with:
    cd verilog/ && make hash_verifier
"""

import ctypes
import pathlib
import sys as _sys

from he.he_parameter import HE_Parameter
from he.ciphertext import Ciphertext
from he.galois_ring.rns_poly import RNS_Poly
from he.galois_ring.poly import Poly

# ── Locate shared library ─────────────────────────────────────────
_HERE     = pathlib.Path(__file__).resolve().parent          # proof/
_LIB_PATH = _HERE.parents[1] / "src" / "hash_verifier_hw.so"


def _load_lib() -> ctypes.CDLL:
    if not _LIB_PATH.exists():
        raise ImportError(
            f"Hardware hash verifier library not found at {_LIB_PATH}.\n"
            "Build it with:  cd verilog/ && make hash_verifier"
        )
    lib = ctypes.CDLL(str(_LIB_PATH))
    U64P = ctypes.POINTER(ctypes.c_uint64)

    # void* hv_new(uint64_t q, uint64_t n_inv,
    #              uint64_t* fwd, uint64_t* inv, int n)
    lib.hv_new.restype  = ctypes.c_void_p
    lib.hv_new.argtypes = [
        ctypes.c_uint64,   # q
        ctypes.c_uint64,   # n_inv
        ctypes.c_uint64,   # barrett_m = floor(2^(2*Q_WIDTH) / q)
        U64P, U64P,        # fwd, inv twiddle tables
        ctypes.c_int,      # n
    ]

    # void hv_free(void*)
    lib.hv_free.restype  = None
    lib.hv_free.argtypes = [ctypes.c_void_p]

    # void hv_load_ct(void*, int ct_id, int comp_id,
    #                 uint64_t* coeffs, int n)
    # ct_id  : 0=c1, 1=c2, 2=c3
    # comp_id: ciphertext component index
    lib.hv_load_ct.restype  = None
    lib.hv_load_ct.argtypes = [
        ctypes.c_void_p,
        ctypes.c_int, ctypes.c_int,
        U64P, ctypes.c_int,
    ]

    # void hv_load_r(void*, uint64_t* coeffs, int n)
    lib.hv_load_r.restype  = None
    lib.hv_load_r.argtypes = [ctypes.c_void_p, U64P, ctypes.c_int]

    # int hv_run(void*, int c1_count, int c2_count, int c3_count)
    # Returns 1 if valid, 0 if not.
    lib.hv_run.restype  = ctypes.c_int
    lib.hv_run.argtypes = [
        ctypes.c_void_p,
        ctypes.c_int, ctypes.c_int, ctypes.c_int,
    ]

    return lib


# ── Hardware backend ──────────────────────────────────────────────

class HW_HashVerifier:
    """
    Runs hash verification on the Verilator-simulated Verilog module.
    One simulation engine per RNS prime.
    """

    _lib: ctypes.CDLL | None = None

    @classmethod
    def _get_lib(cls) -> ctypes.CDLL:
        if cls._lib is None:
            cls._lib = _load_lib()
        return cls._lib

    def __init__(self, parms: HE_Parameter):
        self._parms   = parms
        self._handles: dict[int, ctypes.c_void_p] = {}

        lib  = self._get_lib()
        U64  = ctypes.c_uint64

        for prime in parms.coeff_modulus:
            eng  = parms.ntt_engines[prime]
            n    = parms.poly_modulus
            U64A = U64 * n

            # Convert twiddle tables to unsigned [0, prime)
            c_fwd = U64A(*[int(x) % prime for x in eng._tables])
            c_inv = U64A(*[int(x) % prime for x in eng._inv_tables])

            # Barrett constant: M = floor(2^(2*Q_WIDTH) / prime)
            # Q_WIDTH must match the Verilog compile-time parameter (40 in Makefile).
            _Q_WIDTH = 40
            barrett_m = (1 << (2 * _Q_WIDTH)) // prime

            handle = lib.hv_new(
                prime,
                int(eng._n_inv),
                barrett_m,
                ctypes.cast(c_fwd, ctypes.POINTER(U64)),
                ctypes.cast(c_inv, ctypes.POINTER(U64)),
                n,
            )
            if not handle:
                raise RuntimeError(f"hv_new returned NULL for prime={prime}")
            self._handles[prime] = handle

    def __del__(self):
        # Skip cleanup during interpreter shutdown to avoid segfaults
        if not _sys or not _sys.meta_path:
            return
        if hasattr(self, "_handles") and self._handles and self._lib is not None:
            for h in self._handles.values():
                if h:
                    self._lib.hv_free(h)

    # ── Public ───────────────────────────────────────────────────

    def verify(self,
               c1: Ciphertext,
               c2: Ciphertext,
               c3: Ciphertext,
               r:  RNS_Poly) -> bool:
        """
        Run hardware hash verification for every RNS prime.
        Returns True only if all primes agree (valid).
        """
        lib = self._get_lib()
        n   = self._parms.poly_modulus
        U64 = ctypes.c_uint64

        for prime in self._parms.coeff_modulus:
            handle = self._handles[prime]
            U64A   = U64 * n

            def _to_u64(data: list, q: int) -> ctypes.Array:
                """Convert centered-representation list to unsigned uint64 array."""
                padded = (data + [0] * n)[:n]
                return U64A(*[int(x) % q for x in padded])

            # Load c1 components
            for comp_i, rns_poly in enumerate(c1._data):
                d = rns_poly._rns_poly[prime]._data
                lib.hv_load_ct(
                    handle, 0, comp_i,
                    ctypes.cast(_to_u64(d, prime), ctypes.POINTER(U64)),
                    n,
                )

            # Load c2 components
            for comp_i, rns_poly in enumerate(c2._data):
                d = rns_poly._rns_poly[prime]._data
                lib.hv_load_ct(
                    handle, 1, comp_i,
                    ctypes.cast(_to_u64(d, prime), ctypes.POINTER(U64)),
                    n,
                )

            # Load c3 components
            for comp_i, rns_poly in enumerate(c3._data):
                d = rns_poly._rns_poly[prime]._data
                lib.hv_load_ct(
                    handle, 2, comp_i,
                    ctypes.cast(_to_u64(d, prime), ctypes.POINTER(U64)),
                    n,
                )

            # Load r (accepts both Poly and RNS_Poly)
            if isinstance(r, Poly):
                r_data = r._data
            else:
                r_data = r._rns_poly[prime]._data
            lib.hv_load_r(
                handle,
                ctypes.cast(_to_u64(r_data, prime), ctypes.POINTER(U64)),
                n,
            )

            # Run simulation for this prime
            valid = lib.hv_run(handle, c1.size(), c2.size(), c3.size())
            if not valid:
                return False

        return True
