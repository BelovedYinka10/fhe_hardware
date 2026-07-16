"""
_hash_verifier_hw.py  —  ctypes wrapper for the Verilator rns_hash_verifier .so

All N_PRIMES RNS prime lanes run in parallel inside a single Verilog
simulation (rns_hash_verifier.v), replacing the old per-prime loop.

Build with:
    cd verilog/ && make rns_hash_verifier
"""
from __future__ import annotations

import ctypes
import pathlib
import sys as _sys

from he.he_parameter import HE_Parameter
from he.ciphertext import Ciphertext
from he.galois_ring.poly import Poly

_HERE     = pathlib.Path(__file__).resolve().parent          # proof/
_LIB_PATH = _HERE.parents[1] / "src" / "rns_hash_verifier_hw.so"

# Montgomery reduction: R = 2^64, q_neg_inv = -q^{-1} mod R


def _load_lib() -> ctypes.CDLL:
    if not _LIB_PATH.exists():
        raise ImportError(
            f"RNS hash verifier library not found at {_LIB_PATH}.\n"
            "Build it with:  cd verilog/ && make rns_hash_verifier"
        )
    lib  = ctypes.CDLL(str(_LIB_PATH))
    U64P = ctypes.POINTER(ctypes.c_uint64)

    # void* rns_hv_new(int n_primes,
    #                  const uint64_t* qs, n_invs_mont, q_neg_invs,
    #                  const uint64_t* fwd_tables, inv_tables,
    #                  int n)
    lib.rns_hv_new.restype  = ctypes.c_void_p
    lib.rns_hv_new.argtypes = [
        ctypes.c_int,
        U64P, U64P, U64P,
        U64P, U64P,
        ctypes.c_int,
    ]

    # void rns_hv_free(void*)
    lib.rns_hv_free.restype  = None
    lib.rns_hv_free.argtypes = [ctypes.c_void_p]

    # void rns_hv_load_ct(void*, int lane, int ct_id, int comp_id,
    #                      const uint64_t* coeffs, int n)
    lib.rns_hv_load_ct.restype  = None
    lib.rns_hv_load_ct.argtypes = [
        ctypes.c_void_p,
        ctypes.c_int, ctypes.c_int, ctypes.c_int,
        U64P, ctypes.c_int,
    ]

    # void rns_hv_load_r(void*, int lane, const uint64_t* coeffs, int n)
    lib.rns_hv_load_r.restype  = None
    lib.rns_hv_load_r.argtypes = [
        ctypes.c_void_p,
        ctypes.c_int, U64P, ctypes.c_int,
    ]

    # int rns_hv_run(void*, int c1_count, int c2_count, int c3_count)
    lib.rns_hv_run.restype  = ctypes.c_int
    lib.rns_hv_run.argtypes = [
        ctypes.c_void_p,
        ctypes.c_int, ctypes.c_int, ctypes.c_int,
    ]

    return lib


class HW_HashVerifier:
    """
    Hardware hash verifier backed by rns_hash_verifier.v (Verilator).
    One engine — all RNS prime lanes run in parallel.
    """

    _lib: "ctypes.CDLL | None" = None

    @classmethod
    def _get_lib(cls) -> ctypes.CDLL:
        if cls._lib is None:
            cls._lib = _load_lib()
        return cls._lib

    def __init__(self, parms: HE_Parameter):
        self._parms  = parms
        self._handle = None

        lib    = self._get_lib()
        primes = list(parms.coeff_modulus)
        n      = parms.poly_modulus
        np_    = len(primes)
        U64    = ctypes.c_uint64

        # Per-lane Montgomery constants — engines already have Montgomery tables
        # (HW_NTT_Engine stores twiddles as tw*R mod q and n_inv as n_inv*R mod q)
        R = 1 << 64
        qs          = (U64 * np_)(*primes)
        n_invs_mont = (U64 * np_)(*[int(parms.ntt_engines[p]._n_inv_mont) for p in primes])
        q_neg_invs  = (U64 * np_)(*[((-pow(p, -1, R)) % R) for p in primes])

        # Twiddle tables in Montgomery form (already stored that way in HW_NTT_Engine)
        fwd_flat: list[int] = []
        inv_flat: list[int] = []
        for p in primes:
            eng = parms.ntt_engines[p]
            fwd_flat.extend(int(x) % p for x in eng._tables)
            inv_flat.extend(int(x) % p for x in eng._inv_tables)

        total = np_ * n
        fwd_arr = (U64 * total)(*fwd_flat)
        inv_arr = (U64 * total)(*inv_flat)

        handle = lib.rns_hv_new(
            np_,
            ctypes.cast(qs,          ctypes.POINTER(U64)),
            ctypes.cast(n_invs_mont, ctypes.POINTER(U64)),
            ctypes.cast(q_neg_invs,  ctypes.POINTER(U64)),
            ctypes.cast(fwd_arr,     ctypes.POINTER(U64)),
            ctypes.cast(inv_arr,     ctypes.POINTER(U64)),
            n,
        )
        if not handle:
            raise RuntimeError("rns_hv_new returned NULL — "
                               "check N_PRIMES and N match compile-time values")
        self._handle = handle

    def __del__(self):
        if not _sys or not _sys.meta_path:
            return
        if hasattr(self, "_handle") and self._handle and self._lib is not None:
            self._lib.rns_hv_free(self._handle)

    # ── Public API ────────────────────────────────────────────────

    def verify(self,
               c1: Ciphertext,
               c2: Ciphertext,
               c3: Ciphertext,
               r) -> bool:
        """
        Return True if  c3 == c1 * c2 + c2  (verified via RNS hash).
        All lanes run in parallel; returns True only if all lanes agree.
        """
        lib    = self._get_lib()
        primes = list(self._parms.coeff_modulus)
        n      = self._parms.poly_modulus
        U64    = ctypes.c_uint64

        def _to_u64ptr(data, q):
            padded = (list(data) + [0] * n)[:n]
            arr = (U64 * n)(*[int(x) % q for x in padded])
            return ctypes.cast(arr, ctypes.POINTER(U64)), arr

        for lane, prime in enumerate(primes):
            for comp_i, rns_poly in enumerate(c1._data):
                ptr, arr = _to_u64ptr(rns_poly._rns_poly[prime]._data, prime)
                lib.rns_hv_load_ct(self._handle, lane, 0, comp_i, ptr, n)

            for comp_i, rns_poly in enumerate(c2._data):
                ptr, arr = _to_u64ptr(rns_poly._rns_poly[prime]._data, prime)
                lib.rns_hv_load_ct(self._handle, lane, 1, comp_i, ptr, n)

            for comp_i, rns_poly in enumerate(c3._data):
                ptr, arr = _to_u64ptr(rns_poly._rns_poly[prime]._data, prime)
                lib.rns_hv_load_ct(self._handle, lane, 2, comp_i, ptr, n)

            if isinstance(r, Poly):
                r_data = r._data
            else:
                r_data = r._rns_poly[prime]._data
            ptr, arr = _to_u64ptr(r_data, prime)
            lib.rns_hv_load_r(self._handle, lane, ptr, n)

        valid = lib.rns_hv_run(self._handle, c1.size(), c2.size(), c3.size())
        return bool(valid)
