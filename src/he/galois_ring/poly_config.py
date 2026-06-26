"""
Global configuration for polynomial multiplication strategy.

Usage
-----
from he.galois_ring.poly_config import PolyConfig

PolyConfig.set_mul_mode("schoolbook")   # or "ntt"

The mode controls how Poly.__mul__ / mul_inplace behave:

  "ntt"        — NTT-based multiplication (default).
                 Requires the poly to have an ntt_engine attached.
                 Complexity: O(N log N).

  "schoolbook" — Schoolbook negacyclic multiplication.
                 Works without an ntt_engine.
                 Complexity: O(N^2).
"""


class PolyConfig:
    _mul_mode: str = "ntt"   # default

    @classmethod
    def set_mul_mode(cls, mode: str) -> None:
        if mode not in ("ntt", "schoolbook"):
            raise ValueError(f"mul_mode must be 'ntt' or 'schoolbook', got '{mode}'")
        cls._mul_mode = mode

    @classmethod
    def get_mul_mode(cls) -> str:
        return cls._mul_mode

    @classmethod
    def use_ntt(cls) -> bool:
        return cls._mul_mode == "ntt"
