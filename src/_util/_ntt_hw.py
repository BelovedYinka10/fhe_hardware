"""
_ntt_hw.py  —  Python ctypes wrapper for the Verilog NTT simulation library.

Drop-in replacement for _NTT_Engine: exposes the same two public methods
    _transform_to_ntt_form(a)    → in-place Cooley–Tukey NTT
    _transform_from_ntt_form(a)  → in-place Gentleman–Sande INTT

The hardware backend is the Verilator-compiled shared library at:
    <project_root>/src/ntt_hw.so

If the library is not present, construction raises ImportError and the
caller should fall back to the pure-Python _NTT_Engine.

Build the library first:
    cd <project_root>/verilog/
    make
"""

import ctypes
import os
import pathlib
import sys as _sys

# ── Locate shared library ──────────────────────────────────────
_HERE   = pathlib.Path(__file__).resolve().parent           # _util/
_LIB_PATH = _HERE.parent / "ntt_hw.so"                      # src/ntt_hw.so


def _load_lib() -> ctypes.CDLL:
    if not _LIB_PATH.exists():
        raise ImportError(
            f"Hardware NTT library not found at {_LIB_PATH}.\n"
            "Build it with:  cd verilog/ && make"
        )
    lib = ctypes.CDLL(str(_LIB_PATH))

    U64P = ctypes.POINTER(ctypes.c_uint64)

    lib.ntt_engine_new.restype  = ctypes.c_void_p
    lib.ntt_engine_new.argtypes = [
        ctypes.c_uint64,   # q
        ctypes.c_uint64,   # n_inv
        ctypes.c_uint64,   # barrett_m = floor(2^(2*Q_WIDTH) / q)
        U64P,              # fwd_table[N]
        U64P,              # inv_table[N]
        ctypes.c_int,      # table_size = N
    ]

    lib.ntt_engine_free.restype  = None
    lib.ntt_engine_free.argtypes = [ctypes.c_void_p]

    lib.ntt_run.restype  = None
    lib.ntt_run.argtypes = [
        ctypes.c_void_p,   # engine handle
        U64P,              # coeffs[N]  (in-place)
        ctypes.c_int,      # N
        ctypes.c_int,      # inverse (0=NTT, 1=INTT)
    ]

    return lib


# ── HW NTT Engine ──────────────────────────────────────────────
class HW_NTT_Engine:
    """
    Wraps the Verilator-compiled Verilog NTT model.
    Interface is identical to _NTT_Engine so it can be swapped in place.
    """

    # Shared library loaded once per process
    _lib: "ctypes.CDLL | None" = None

    @classmethod
    def _get_lib(cls) -> ctypes.CDLL:
        if cls._lib is None:
            cls._lib = _load_lib()
        return cls._lib

    def __init__(self, n: int, q: int):
        """
        n : polynomial degree (must be power of 2)
        q : NTT-friendly prime (q ≡ 1 mod 2n)
        """
        self._n = n
        self._q = q

        # Precompute Barrett constant: M = floor(2^(2*Q_WIDTH) / q)
        # Q_WIDTH must match the Verilog compile-time parameter (40 in Makefile).
        # Using q.bit_length() would be wrong for primes smaller than Q_WIDTH.
        _Q_WIDTH = 40
        self._barrett_m = (1 << (2 * _Q_WIDTH)) // q

        # Build the same twiddle tables as the Python engine
        g       = self._find_primitive_root(q)
        psi     = pow(g, (q - 1) // (2 * n), q)
        psi_inv = pow(psi, q - 2, q)
        self._n_inv = pow(n, q - 2, q)

        fwd = [0] * n
        inv = [0] * n
        for i in range(n):
            rev_i  = self._bit_rev(i, n.bit_length() - 1)
            fwd[i] = pow(psi,     rev_i, q)
            inv[i] = pow(psi_inv, rev_i, q)

        # Expose tables so hash_verifier HW backend can reuse them
        self._tables     = fwd
        self._inv_tables = inv

        U64  = ctypes.c_uint64
        U64A = U64 * n
        c_fwd = U64A(*fwd)
        c_inv = U64A(*inv)

        lib = self._get_lib()
        self._handle = lib.ntt_engine_new(
            q, self._n_inv, self._barrett_m,
            ctypes.cast(c_fwd, ctypes.POINTER(U64)),
            ctypes.cast(c_inv, ctypes.POINTER(U64)),
            n
        )
        if not self._handle:
            raise RuntimeError("ntt_engine_new returned NULL")

        # Keep C arrays alive (engine holds raw pointer to them internally
        # only during __init__; tables are copied into the Verilog memory)
        # No need to keep references after construction.

    def __del__(self):
        # Skip cleanup during interpreter shutdown to avoid segfaults
        if not _sys or not _sys.meta_path:
            return
        if hasattr(self, "_handle") and self._handle and self._lib is not None:
            self._lib.ntt_engine_free(self._handle)

    # ── Public interface (matches _NTT_Engine) ─────────────────

    def _transform_to_ntt_form(self, a: list) -> list:
        """Forward NTT in-place. Returns modified list."""
        self._run(a, inverse=0)
        return a

    def _transform_from_ntt_form(self, a: list) -> list:
        """Inverse NTT in-place. Returns modified list."""
        self._run(a, inverse=1)
        return a

    # ── Internal ───────────────────────────────────────────────

    def _run(self, a: list, inverse: int):
        n    = self._n
        q    = self._q
        U64  = ctypes.c_uint64
        U64A = U64 * n
        # Convert centered representation (may be negative) to unsigned [0, q)
        buf  = U64A(*[int(x) % q for x in a])
        self._get_lib().ntt_run(
            self._handle,
            ctypes.cast(buf, ctypes.POINTER(U64)),
            n,
            inverse
        )
        for i in range(n):
            # HW returns unsigned [0, q); convert back to centered (-q/2, q/2]
            v = int(buf[i])
            a[i] = v - q if v > q // 2 else v

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
