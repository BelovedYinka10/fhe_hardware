# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Python implementation of a Homomorphic Encryption (BV scheme) built on Galois ring structures. Called **CPET Galois Ring Package**. Uses Python 3.12.2, no external dependencies (stdlib only).

## Running the Code

All commands must be run from the `src/` directory (imports are relative to it):

```bash
cd src/

# Main HE demonstration (encrypt, multiply ciphertexts, decrypt)
python example.py

# RNS system walkthrough (educational, no NTT)
python rns_example.py

# Homomorphic hash and circuit verification tests
python test_homo.py

# Hardware vs software NTT comparison (requires built .so files)
python test_ntt_hw_vs_sw.py

# Run individual modules (each has __main__ blocks)
python -m he.galois_ring.poly
python -m he.galois_ring._util._ntt
python -m he.galois_ring._util._prime
```

There is no test framework, build system, or package manager configured.

### Building Hardware Acceleration (Optional)

Requires Verilator installed. From repo root:

```bash
cd verilog/
make                # Build NTT library → ../src/ntt_hw.so
make hash_verifier  # Build hash verifier → ../src/hash_verifier_hw.so
make clean          # Remove build artifacts
```

Software fallback is automatic — if `.so` files aren't built, pure Python engines are used.

## Architecture

### Layer Structure

```
HE Layer (he/)
  ├── HE_Parameter       — builder-pattern setup (scheme, poly_modulus, coeff_modulus, plain_modulus, bounds)
  ├── Key_Generator      — generates secret key (RNS_Poly) and public key (Ciphertext)
  ├── Encoder            — encodes int lists to Poly (coeff_encode or slot_encode)
  ├── Encryptor          — encrypts Poly → Ciphertext using public key
  ├── Decryptor          — decrypts Ciphertext → Poly using secret key; precomputes sk^i for i up to 40
  ├── Evaluator          — stub for HE operations (currently empty)
  ├── Ciphertext         — list of RNS_Poly; supports +, -, *, plain operations; tracks error bounds
  └── galois_ring/
        ├── Poly           — element of Z_q[X]/(X^N+1); supports NTT/INTT, arithmetic
        ├── RNS_Poly       — dict[prime → Poly]; distributes ops to each Poly lane
        ├── poly_hash.py   — incomplete homomorphic hash stub
        └── _util/
              ├── _ntt.py      — Cooley-Tukey NTT / Gentleman-Sande INTT (SW); optional HW backend
              ├── _ntt_hw.py   — ctypes wrapper for Verilator-compiled NTT (loads ntt_hw.so)
              ├── _prime.py    — Miller-Rabin primality; NTT-friendly prime generation (p ≡ 1 mod 2N)
              ├── _modulus.py  — centered modular reduction; modular inverse (extended GCD)
              └── _random.py   — sampling helpers (uniform, bounded, centered)

Proof Layer (proof/)
  ├── cipher_hash.py       — Horner-evaluation hash: H(ct, r) = ct[0] + r*(ct[1] + r*(...))
  ├── hash_verifier.py     — unified SW/HW hash verifier (verifies c3 == c1*c2 + c2 via hash)
  ├── circuit.py           — recursive descent parser for arithmetic circuits ("0*1+2")
  └── _hash_verifier_hw.py — ctypes wrapper for Verilator-compiled hash verifier

Hardware (verilog/)
  ├── ntt.v, ntt_online.v  — NTT cores
  ├── poly_mul.v, poly_add.v — polynomial arithmetic
  ├── cipher_hash.v        — Horner hash in hardware
  ├── hash_verifier.v      — full verification circuit
  └── Makefile             — Verilator build → shared libraries
```

### Key Data Flow

1. **Setup**: `HE_Parameter` → `generate_context()` creates `_NTT_Engine` instances keyed by each prime modulus.
2. **Key generation**: `Key_Generator` builds secret key as NTT-form `RNS_Poly`; public key as `Ciphertext([c0, -c1])`.
3. **Encryption**: `Encryptor.encrypt(plain_poly)` adds plaintext to the last component of the public key copy.
4. **Decryption**: `Decryptor.decrypt(ct)` computes `sum(ct_i * sk^i)`, then applies CRT (`_recover_rns`) to reduce back to `plain_modulus`.
5. **Ciphertext multiplication**: Polynomial convolution across RNS components; ciphertext degree grows with each multiplication (len(ct1) + len(ct2) - 1 components).
6. **Hash verification**: `cipher_hash(ct, r)` produces a single RNS_Poly fingerprint; homomorphic property lets you verify `c3 == c1*c2 + c2` without decryption.

### Important Design Patterns

- **RNS (Residue Number System)**: All ciphertext arithmetic is performed component-wise under each prime in `coeff_modulus`. `RNS_Poly` holds a `dict[prime -> Poly]`.
- **NTT form tracking**: Both `Poly` and `RNS_Poly` carry `_is_ntt_form` state. Operations require matching forms. Poly multiplication in NTT form is pointwise; outside NTT it is schoolbook with negacyclic reduction.
- **Centered representation**: Coefficients are stored in `(-q/2, q/2]` via `_centered_modulus`.
- **NTT-friendly primes**: All moduli satisfy `p ≡ 1 (mod 2N)` to support NTT of degree N.
- **`set_poly_modulus(n)`** takes a log-2 exponent: the actual degree is `2^n`.
- **Graceful HW fallback**: `_ntt.py` and `hash_verifier.py` try to import HW backends; if `.so` files aren't built, they silently fall back to pure Python.
- **Error bound tracking**: `Ciphertext` tracks noise growth — addition adds bounds, multiplication multiplies them plus cross-terms.

### Supported Schemes

`HE_SCHEME = {"bv", "bgv", "bfv"}` — only `bv` is actively used/tested.
