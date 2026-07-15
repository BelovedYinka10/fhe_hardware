"""
_rns_ntt_hw.py  —  Python ctypes wrapper for the RNS NTT simulation library.

All N_PRIMES lanes run in PARALLEL in hardware (one ntt core per prime).
Latency = single-lane NTT regardless of number of primes.

The C API (rns_ntt_hw.so):
    void* rns_ntt_engine_new(n_primes, qs, n_invs, barrett_ms,
                              fwd_tables, inv_tables, table_size)
    void  rns_ntt_engine_free(void* eng)
    void  rns_ntt_run(void* eng, uint64_t* coeffs, n_primes, N, inverse)

coeffs layout: coeffs[i*N + j] = lane i, coefficient j

Build with:
    cd verilog/
    make rns_ntt          # N_PRIMES=2 (default)
    make rns_ntt N_PRIMES=3
"""

import ctypes
import pathlib
import sys as _sys

_HERE     = pathlib.Path(__file__).resolve().parent     # src/_util/
_LIB_PATH = _HERE.parents[1] / "src" / "rns_ntt_hw.so"             # ../src/rns_ntt_hw.so


def _load_lib() -> ctypes.CDLL:
    if not _LIB_PATH.exists():
        raise ImportError(
            f"RNS NTT hardware library not found at {_LIB_PATH}.\n"
            "Build it with:  cd verilog/ && make rns_ntt"
        )
    lib = ctypes.CDLL(str(_LIB_PATH))

    U64P = ctypes.POINTER(ctypes.c_uint64)

    lib.rns_ntt_engine_new.restype  = ctypes.c_void_p
    lib.rns_ntt_engine_new.argtypes = [
        ctypes.c_int,   # n_primes
        U64P,           # qs[n_primes]
        U64P,           # n_invs[n_primes]
        U64P,           # barrett_ms[n_primes]
        U64P,           # fwd_tables[n_primes * N]
        U64P,           # inv_tables[n_primes * N]
        ctypes.c_int,   # table_size = N
    ]

    lib.rns_ntt_engine_free.restype  = None
    lib.rns_ntt_engine_free.argtypes = [ctypes.c_void_p]

    lib.rns_ntt_run.restype  = None
    lib.rns_ntt_run.argtypes = [
        ctypes.c_void_p,  # engine handle
        U64P,             # coeffs[n_primes * N]  (in-place)
        ctypes.c_int,     # n_primes
        ctypes.c_int,     # N
        ctypes.c_int,     # inverse (0=NTT, 1=INTT)
    ]

    return lib


class HW_RNS_NTT_Engine:
    """
    Wraps the Verilator-compiled RNS NTT model.

    All prime lanes run in parallel — call transform_to_ntt_form() once
    and all N_PRIMES lanes complete simultaneously.

    Usage:
        engine = HW_RNS_NTT_Engine(n=8192, primes=[q0, q1])
        engine.transform_to_ntt_form(lane_coeffs)   # list of lists, one per prime
        engine.transform_from_ntt_form(lane_coeffs)
    """

    _lib: "ctypes.CDLL | None" = None

    @classmethod
    def _get_lib(cls) -> ctypes.CDLL:
        if cls._lib is None:
            cls._lib = _load_lib()
        return cls._lib

    def __init__(self, n: int, primes: list[int]):
        self._n       = n
        self._primes  = primes
        self._n_lanes = len(primes)

        _Q_WIDTH = 60

        # Per-lane Barrett constants and twiddle tables
        n_invs      = []
        barrett_ms  = []
        fwd_tables  = []
        inv_tables  = []

        for q in primes:
            g       = self._find_primitive_root(q)
            psi     = pow(g, (q - 1) // (2 * n), q)
            psi_inv = pow(psi, q - 2, q)
            n_inv   = pow(n, q - 2, q)

            fwd = [0] * n
            inv = [0] * n
            for i in range(n):
                rev_i  = self._bit_rev(i, n.bit_length() - 1)
                fwd[i] = pow(psi,     rev_i, q)
                inv[i] = pow(psi_inv, rev_i, q)

            n_invs.append(n_inv)
            barrett_ms.append((1 << (2 * _Q_WIDTH)) // q)
            fwd_tables.extend(fwd)
            inv_tables.extend(inv)

        U64  = ctypes.c_uint64
        n_p  = self._n_lanes

        c_qs        = (U64 * n_p)(*primes)
        c_n_invs    = (U64 * n_p)(*n_invs)
        c_barrett   = (U64 * n_p)(*barrett_ms)
        c_fwd       = (U64 * (n_p * n))(*fwd_tables)
        c_inv       = (U64 * (n_p * n))(*inv_tables)

        lib = self._get_lib()
        self._handle = lib.rns_ntt_engine_new(
            n_p,
            ctypes.cast(c_qs,      ctypes.POINTER(U64)),
            ctypes.cast(c_n_invs,  ctypes.POINTER(U64)),
            ctypes.cast(c_barrett, ctypes.POINTER(U64)),
            ctypes.cast(c_fwd,     ctypes.POINTER(U64)),
            ctypes.cast(c_inv,     ctypes.POINTER(U64)),
            n,
        )
        if not self._handle:
            raise RuntimeError(
                f"rns_ntt_engine_new returned NULL — "
                f"n_primes={n_p} must match compiled N_PRIMES in rns_ntt_hw.so"
            )

    def __del__(self):
        if not _sys or not _sys.meta_path:
            return
        if hasattr(self, "_handle") and self._handle and self._lib is not None:
            self._lib.rns_ntt_engine_free(self._handle)

    # ── Public interface ───────────────────────────────────────────

    def transform_to_ntt_form(self, lane_coeffs: list[list]) -> None:
        """Forward NTT on all lanes in parallel, in-place."""
        self._run(lane_coeffs, inverse=0)

    def transform_from_ntt_form(self, lane_coeffs: list[list]) -> None:
        """Inverse NTT on all lanes in parallel, in-place."""
        self._run(lane_coeffs, inverse=1)

    # ── Internal ───────────────────────────────────────────────────

    def _run(self, lane_coeffs: list[list], inverse: int) -> None:
        n    = self._n
        n_p  = self._n_lanes
        U64  = ctypes.c_uint64

        # Flatten: coeffs[lane * N + coeff_idx]
        flat = []
        for lane_idx, (q, coeffs) in enumerate(zip(self._primes, lane_coeffs)):
            flat.extend(int(x) % q for x in coeffs)

        buf = (U64 * (n_p * n))(*flat)
        self._get_lib().rns_ntt_run(
            self._handle,
            ctypes.cast(buf, ctypes.POINTER(U64)),
            n_p,
            n,
            inverse,
        )

        # Write results back in-place, converting to centered representation
        for lane_idx, (q, coeffs) in enumerate(zip(self._primes, lane_coeffs)):
            half = q // 2
            for i in range(n):
                v = int(buf[lane_idx * n + i])
                coeffs[i] = v - q if v > half else v

    @staticmethod
    def _find_primitive_root(q: int) -> int:
        phi     = q - 1
        factors = [2]
        d, temp = 3, phi // 2
        while d * d <= temp:
            if temp % d == 0:
                factors.append(d)
                while temp % d == 0:
                    temp //= d
            d += 2
        if temp > 1:
            factors.append(temp)
        for res in range(2, q):
            if all(pow(res, phi // f, q) != 1 for f in factors):
                return res
        raise ValueError(f"No primitive root found for q={q}")

    @staticmethod
    def _bit_rev(i: int, bits: int) -> int:
        res = 0
        for _ in range(bits):
            res = (res << 1) | (i & 1)
            i >>= 1
        return res
