"""
RNS (Residue Number System) example — no NTT involved.

Demonstrates how a polynomial is split into independent prime lanes,
how arithmetic is performed per-lane, and how CRT reconstructs the
true coefficients.

  p(x) = 3 + 5x
  q(x) = 2 + 4x
  RNS bases: [7, 11, 13]  →  Q = 1001
  Ring: Z_Q[X] / (X^4 + 1)
"""

from __future__ import annotations
from he.galois_ring.poly import Poly
from he.galois_ring.rns_poly import RNS_Poly
from he.galois_ring._util._modulus import _mod_inverse, _centered_modulus

# ── parameters ─────────────────────────────────────────────────────────────

RNS_BASES = [7, 11, 13]
POLY_MOD  = 4               # ring Z_Q[X] / (X^4 + 1)
Q         = 7 * 11 * 13     # 1001

# ── hel\pers ─────────────────────────────────────────────────────────────────

def crt_recover(residues: list[int], bases: list[int], total_mod: int) -> int:
    """Reconstruct one integer from its RNS residues via CRT."""
    acc = 0
    for r, b in zip(residues, bases):
        M_i = total_mod // b
        y_i = _mod_inverse(M_i, b)
        acc += r * M_i * y_i
    return _centered_modulus(acc, total_mod)


def show_lanes(label: str, rns_poly: RNS_Poly) -> None:
    print(f"  {label}")
    for base, poly in rns_poly._rns_poly.items():
        print(f"    mod {base:2d} : {poly._data}")


def crt_verify(label: str, rns_poly: RNS_Poly, true_poly: Poly) -> None:
    print(f"  CRT recovery — {label}")
    max_len = max(len(p._data) for p in rns_poly._rns_poly.values())
    for deg in range(max_len):
        residues = [
            rns_poly._rns_poly[b]._data[deg] if deg < len(rns_poly._rns_poly[b]._data) else 0
            for b in RNS_BASES
        ]
        recovered = crt_recover(residues, RNS_BASES, Q)
        expected  = true_poly._data[deg] if deg < len(true_poly._data) else 0
        status    = "✓" if recovered == expected else "✗"
        print(f"    x^{deg}: residues {residues} → CRT → {recovered:4d}  (expected {expected}) {status}")


# ── plain polynomials ────────────────────────────────────────────────────────

p_plain = Poly(Q, POLY_MOD, [3, 5])   # p(x) = 3 + 5x
q_plain = Poly(Q, POLY_MOD, [2, 4])   # q(x) = 2 + 4x

print("=" * 60)
print("RNS Example (no NTT)")
print("=" * 60)
print(f"RNS bases : {RNS_BASES}  →  Q = {Q}")
print(f"Ring      : Z_{Q}[X] / (X^{POLY_MOD} + 1)")
print()
print(f"p(x) = {p_plain.toString()}")
print(f"q(x) = {q_plain.toString()}")
print()

# ── Step 1 — RNS decomposition ───────────────────────────────────────────────

p_rns = RNS_Poly(RNS_BASES, POLY_MOD)
p_rns._eval_rns(p_plain)

q_rns = RNS_Poly(RNS_BASES, POLY_MOD)
q_rns._eval_rns(q_plain)

print("─" * 60)
print("Step 1 — RNS decomposition  (_eval_rns)")
print("  Each coefficient c is stored as (c mod 7, c mod 11, c mod 13).")
print()
show_lanes("p(x) lanes:", p_rns)
print()
show_lanes("q(x) lanes:", q_rns)
print()

# ── Step 2 — Addition ────────────────────────────────────────────────────────

sum_rns  = p_rns + q_rns
sum_true = p_plain + q_plain

print("─" * 60)
print("Step 2 — Addition  (each lane adds independently, no cross-lane talk)")
print()
show_lanes("(p + q) lanes:", sum_rns)
print()
crt_verify("p + q", sum_rns, sum_true)
print()

# ── Step 3 — Multiplication ──────────────────────────────────────────────────

prod_rns  = p_rns * q_rns
prod_true = p_plain * q_plain

print("─" * 60)
print("Step 3 — Multiplication  (schoolbook per lane, negacyclic mod X^4+1)")
print()
show_lanes("(p × q) lanes:", prod_rns)
print()
crt_verify("p × q", prod_rns, prod_true)
print()

# ── Step 4 — Manual walkthrough of one lane ──────────────────────────────────

print("─" * 60)
print("Step 4 — Manual schoolbook multiplication in lane mod 7")
print()
p7 = [3, 5]
q7 = [2, 4]
print(f"  p mod 7 = {p7}   (coefficients of 3 + 5x)")
print(f"  q mod 7 = {q7}   (coefficients of 2 + 4x)")
print()
print("  Schoolbook accumulation:")
res7 = [0] * (len(p7) + len(q7))
for i, pi in enumerate(p7):
    for j, qj in enumerate(q7):
        contrib = _centered_modulus(pi * qj, 7)
        before  = res7[i + j]
        res7[i + j] = _centered_modulus(res7[i + j] + pi * qj, 7)
        print(f"    i={i}, j={j}: x^{i+j}  +=  {pi}×{qj} = {pi*qj}  →  {before} + {contrib} = {res7[i+j]}  (mod 7)")

print(f"\n  Lane 7 result: {res7[:3]}  (trailing 0 compressed away)")
print(f"  Expected     : {[_centered_modulus(c, 7) for c in [6, 22, 20]]}")
print()

# ── Step 5 — CRT precomputed basis ───────────────────────────────────────────

print("─" * 60)
print("Step 5 — CRT basis values  (precomputed once in HE_Parameter)")
print()
for b in RNS_BASES:
    M_i = Q // b
    y_i = _mod_inverse(M_i, b)
    print(f"  base={b:2d}:  M_i = {Q}/{b} = {M_i:3d},  y_i = {M_i}⁻¹ mod {b} = {y_i},  basis = {M_i}×{y_i} = {M_i*y_i}")
print()
print("  Recovery of x^1 coefficient of p×q  (true value = 22):")
residues_x1 = [
    prod_rns._rns_poly[b]._data[1] if 1 < len(prod_rns._rns_poly[b]._data) else 0
    for b in RNS_BASES
]
acc = 0
for r, b in zip(residues_x1, RNS_BASES):
    M_i = Q // b
    y_i = _mod_inverse(M_i, b)
    term = r * M_i * y_i
    acc += term
    print(f"    r={r:3d}  M_i={M_i:3d}  y_i={y_i}  →  term = {term}")
print(f"\n  acc = {acc}")
print(f"  acc mod {Q} = {acc % Q}")
print(f"  centered    = {_centered_modulus(acc, Q)}  ✓")
