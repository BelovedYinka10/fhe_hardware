# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Python implementation of Homomorphic Encryption (BV scheme) over Galois rings, called the **CPET Galois Ring Package**, plus a Verilog hardware accelerator that Verilator compiles into shared libraries the Python side loads via `ctypes`.

The research goal is *verifiable* FHE: prove a ciphertext circuit was evaluated correctly without decrypting, using a homomorphic hash (`proof/cipher_hash.py`) and a GKR-style interactive proof (`proof/giraffe.py`). The Verilog implements the hot paths (NTT, hash verification) so software and hardware results can be compared.

Python 3.12.2, stdlib only — no external dependencies, no test framework, no build system, and no package manager.

## Running the Code

All commands run from `src/` — imports are rooted there (`from he...`, `from _util...`), so running from the repo root fails.

```bash
cd src/

python test.py                  # main scratch entry point; most blocks are commented out —
                                # uncomment the section you want before running
python rns_example.py           # RNS system walkthrough (educational, no NTT)
python test_homo.py             # homomorphic hash + circuit verification
python benchmark_poly_mul.py    # schoolbook vs NTT poly multiplication
python benchmark_hom_hash.py    # hash verification under both mul modes
python test_rns_ntt_hw.py       # RNS NTT hardware vs software (needs rns_ntt_hw.so)
python test_sw_vs_hw.py         # hash verifier hardware vs software

# Modules with __main__ blocks
python -m he.galois_ring.poly
python -m he._ntt
python -m _util._prime
```

`test.py` is a scratchpad, not a test suite: nearly everything is commented out and the active line at the bottom changes often. Read it before running — the last uncommented call is whatever was being worked on.

### Building Hardware Acceleration (Optional)

Requires Verilator ≥ 5.x and g++. The Makefile is written for a Unix shell; on Windows use WSL or a MinGW/MSYS environment.

```bash
cd verilog/
make                    # NTT core             → ../src/ntt_hw.so           (default target)
make rns_ntt            # RNS NTT (N lanes)    → ../src/rns_ntt_hw.so
make hash_verifier      # hash verifier        → ../src/hash_verifier_hw.so
make rns_hash_verifier  # RNS hash verifier    → ../src/rns_hash_verifier_hw.so
make clean
```

Prebuilt `.so` files are currently checked in under `src/` (both trees load these). They are **macOS Mach-O** binaries — on Windows `ctypes.CDLL` raises `OSError: [WinError 193]`, which the `except ImportError` guards in `he/_ntt.py` and `proof/hash_verifier.py` do **not** catch, so the fallback to Python does not happen.

### Running the RTL in Vivado (Windows)

Independent of the Verilator flow — no `make`, no `.so`. Vivado 2023.2 lives at `C:\Xilinx\Vivado\2023.2\bin\vivado.bat` (not on PATH).

```bash
cd verilog/
vivado -mode gui -source create_project.tcl     # project + synth/impl runs + helper procs
vivado -mode batch -source run_sim.tcl          # sim only; -tclargs <tb> to pick a testbench
```

From the Vivado Tcl console (paths need forward slashes):

```tcl
source create_project.tcl
sim_run tb_rns_hash_verifier    # also: tb_rns_ntt, tb_cipher_hash, tb_hash_verifier
run_synth                       # synthesise + utilisation/timing reports
```

`tb_rns_hash_verifier` passes in ~5.3M cycles at `LOGN=13, Q_WIDTH=60, N_PRIMES=2` with a [60, 60] base.

Vivado-specific traps:
- **Vivado reads the RTL default parameters; Verilator reads the Makefile's `-G` overrides.** The two configs drift silently. The Design Sources tree elaborates a synthesis-top candidate with *defaults*, so the lane count shown there is not necessarily what the testbench simulates.
- **`$readmemh` cannot see `verilog/*.hex`** — xsim runs in `<proj>.sim/sim_1/behav/xsim/` and resolves against that, not the Tcl working directory. Both scripts generate `pre_sim.tcl` and wire it to **`xsim.compile.tcl.pre`** to copy the vectors in. There is **no `xsim.simulate.tcl.pre` property** — and `set_property -name` accepts an unknown name as a user property *without error*, so a wrong name fails silently and every `$readmemh` loads X. `create_project.tcl` reads the property back and warns.
- Both scripts `-force` into the same `vivado_project/` under different project names (`cpet_he` vs `cpet_he_sim`); whichever runs second wipes the first.
- `create_project -force` fails with "directory in use" if a sim is loaded — run `close_sim -force` first.
- `create_project.tcl` adds `tb_hash_verifier_schoolbook` / `tb_poly_mul_schoolbook` to `sim_1` but omits their DUTs from `RTL_SRCS`, so those two tops fail to elaborate. `run_sim.tcl` adds all ten RTL files and is fine.
- Schoolbook poly-mul is ~268M cycles at N=8192 — run only for cycle-count comparison.

## Architecture

### Layer Structure

```
src/
  _util/                    — shared primitives (imported as `from _util import ...`)
    _prime.py               — Miller-Rabin; NTT-friendly prime + RNS basis generation
    _modulus.py             — centered modular reduction; modular inverse (extended GCD)
    _random.py              — sampling helpers (uniform, bounded, centered)
    _field.py               — Field / Fielder: Z_p arithmetic for the proof layer
    _ntt_hw.py              — ctypes wrapper → ntt_hw.so
    _rns_ntt_hw.py          — ctypes wrapper → rns_ntt_hw.so

  he/
    he_parameter.py         — HE_Parameter: builder-pattern setup; generate_context()
    key_generator.py        — secret key (RNS_Poly, NTT form); public key (Ciphertext)
    encoder.py              — int list → Poly (coeff_encode = coeff form, slot_encode = NTT form)
    encryptor.py            — Poly → Ciphertext via public key
    decryptor.py            — Ciphertext → Poly; precomputes sk^i for i < 100
    evaluator.py            — stub; holds the parameter, no operations implemented
    ciphertext.py           — list of RNS_Poly; +, -, *, plain ops; tracks error bounds
    _ntt.py                 — _NTT_Engine: Cooley-Tukey NTT / Gentleman-Sande INTT;
                              optionally swapped for the HW backend (see below)
    galois_ring/
      poly.py               — Poly: element of Z_q[X]/(X^N+1)
      poly_config.py        — PolyConfig: global "ntt" | "schoolbook" mul mode switch
      rns_poly.py           — RNS_Poly: dict[prime → Poly]; distributes ops per lane

  proof/
    cipher_hash.py          — HomHash_Manager: Horner hash H(ct,r) = ct[0]+r*(ct[1]+r*(...))
    hash_verifier.py        — unified SW/HW verifier for c3 == c1*c2 + c2
    _hash_verifier_hw.py    — ctypes wrapper → hash_verifier_hw.so
    circuit.py              — recursive-descent parser for circuits ("((0*1)+(2+3))*(4*5)")
    giraffe.py              — Prover / Verifier / Demo: GKR-style sumcheck proof over
                              circuits, run on either Field values or Ciphertexts

verilog/
  ntt.v, rns_ntt.v          — NTT core; RNS wrapper instantiating N_PRIMES cores
  poly_mul.v, poly_add.v    — polynomial arithmetic (+ _schoolbook variants)
  cipher_hash.v             — Horner hash
  hash_verifier.v,
  rns_hash_verifier.v       — full verification circuit; RNS wrapper
  *_sim.cpp                 — Verilator C++ harnesses exporting the C API
  gen_*_vectors.py          — generate tv_*.hex test vectors for the testbenches
  tb_*.v                    — testbenches
  Makefile                  — Verilator builds → ../src/*.so

src_2/                      — older fork of src/; NOT software-only (see below)
```

### Key Data Flow

1. **Setup**: `HE_Parameter("bv").set_poly_modulus(13).set_coeff_modulus([30,30,40]).set_plain_modulus(18).set_bound(1,2)` then `.generate_context()`, which builds an `_NTT_Engine` per coeff prime **and** one for the plain modulus.
2. **Key generation**: `Key_Generator` builds the secret key as an NTT-form `RNS_Poly`; the public key is a `Ciphertext([c0, -c1])`.
3. **Encryption**: `Encryptor.encrypt(plain_poly)` adds the plaintext into the last component of a public-key copy.
4. **Decryption**: `Decryptor.decrypt(ct)` computes `sum(ct_i * sk^i)` in NTT form, then `_recover_rns` applies CRT (via `parms._basis`) to reduce back to `plain_modulus`.
5. **Ciphertext multiplication**: polynomial convolution across RNS lanes; ciphertext degree grows to `len(ct1) + len(ct2) - 1` components.
6. **Hash verification**: `HomHash_Manager.cipher_hash(ct)` collapses a ciphertext to a single `RNS_Poly` fingerprint. The hash is homomorphic, so `H(c3) == H(c1)*H(c2) + H(c2)` verifies `c3 == c1*c2 + c2` without the secret key.

### Important Design Patterns

- **RNS (Residue Number System)**: all ciphertext arithmetic is component-wise under each prime of `coeff_modulus`. `RNS_Poly` holds `dict[prime → Poly]` and forwards every operation to each lane.
- **NTT form tracking**: `Poly`, `RNS_Poly`, and `Ciphertext` each carry `_is_ntt_form`. Operations raise if the two operands' forms differ — form mismatch is the most common error in this codebase. In NTT form multiplication is pointwise; in coefficient form it is schoolbook with negacyclic reduction (`X^N ≡ -1`).
- **Centered representation**: coefficients live in `(-q/2, q/2]` via `_modulus._centered_modulus`, so printed values are frequently negative. This is expected, not a bug.
- **NTT-friendly primes**: every modulus satisfies `p ≡ 1 (mod 2N)`, generated by `_prime._generate_prime` / `_generate_rns_bases`.
- **`set_poly_modulus(n)` takes a log-2 exponent** — the actual degree is `2^n` (13 → N = 8192).
- **Error bound tracking**: `Ciphertext._error_bound` — addition adds bounds, multiplication multiplies them plus cross-terms.

### Hardware Backend Gotchas

- **The NTT hardware backend is ON by default, in *both* trees.** `he/_ntt.py` sets `USE_HW_NTT = True` and rebinds the name `_NTT_Engine` to `HW_NTT_Engine` at import time, so *everything* downstream silently uses Verilator. The pure-Python class stays reachable as `_SW_NTT_Engine`. Set `USE_HW_NTT = False` to force software.
- **The fallback only catches a *missing* `.so`.** The guard is `except ImportError`, but `_load_lib()` raises `ImportError` only when the file is absent; a file that exists but is the wrong architecture makes `ctypes.CDLL` raise `OSError`, which is not caught. Worse, the failure is *deferred*: `import he._ntt` succeeds and even prints "[NTT] Using Verilog hardware backend", because `_load_lib()` is lazy — it runs from `_get_lib()` inside `HW_NTT_Engine.__init__`, so the crash surfaces later inside `parms.generate_context()`. Widening to `except (ImportError, OSError)` is what makes the software path usable on a machine without a matching `.so`.
- **The hash verifier backend is OFF by default** (`USE_HW_VERIFIER = False` in `proof/hash_verifier.py`), or pass `HashVerifier(parms, use_hw=True)` per call.
- **Verilog parameters must match the Python context.** The current configuration is `LOGN=13` (N=8192), `Q_WIDTH=60`, `CT_SIZE=3`, `N_PRIMES=2`, `SEL_W=1`. The Makefile bakes these in at compile time via `-G` overrides. A `.so` built with one `LOGN` will not work with a different `set_poly_modulus`, and `SEL_W` must be updated by hand to `ceil(log2(N_PRIMES))` when `N_PRIMES` changes. Rebuild after changing parameters: `make clean && make LOGN=... hash_verifier`.
- **`Q_WIDTH` is duplicated in five places that must agree**, or Python's Barrett constant will not match the Verilog's shift: `verilog/Makefile`, `_util/_ntt_hw.py`, `_util/_rns_ntt_hw.py`, `verilog/rns_ntt_sim.cpp`, `verilog/rns_hash_verifier_sim.cpp` (plus `proof/_hash_verifier_hw.py`). Grep before trusting any one of them.
- **Only 57–60 bit primes are safe on the ctypes path.** The Barrett constant `M = floor(2^(2*Q_WIDTH) / q)` grows as `q` *shrinks*. At `Q_WIDTH=60`, `M` exceeds 64 bits once `q < 2^56` — and `barrett_m` crosses the C ABI as a scalar `uint64_t`, which `ctypes` **silently truncates** (no exception). A 40-bit prime needs an 81-bit `M` and would make every `mod_mul` in that lane quietly wrong. The Verilog itself is fine (`barrett_m` is a `[2*Q_WIDTH-1:0]` bus); only the C ABI is too narrow. The Vivado path is unaffected — `gen_rns_hv_vectors.py` writes the full-width constant into the `.hex`.

### `src/` vs `src_2/`

`src_2/` is an older fork of `src/`. It is **not** a software-only baseline — it carries the same hardware wrappers (`_util/_ntt_hw.py`, `_util/_rns_ntt_hw.py`, `proof/hash_verifier.py`, `proof/_hash_verifier_hw.py`), and its `he/_ntt.py` also sets `USE_HW_NTT = True`. Its `_LIB_PATH` resolves to `<project_root>/src/*.so`, so **both trees load the same `.so` files** — switching trees does not switch backends.

**To force software, set `USE_HW_NTT = False` or import `_SW_NTT_Engine` directly** (aliased in `he/_ntt.py` before the HW override rebinds `_NTT_Engine`). That name is the real software reference, and it is what the comparison harnesses use: `src_2/verify_hw.py`, `src/test_rns_ntt_hw.py`, `src/test_ntt_hw_vs_sw.py`, and `verilog/gen_rns_ntt_vectors.py` — which is why the generated `.hex` vectors are trustworthy as golden data.

Real differences: `src_2/` has no `poly_config.py`; its `Poly.__mul__` is the plain original (pointwise in NTT form, schoolbook otherwise, no `PolyConfig` branching, no coefficient-form NTT path); its `Poly.equal` compares `_data` directly. Entry points are `test.py`, `debug.py`, and `verify_hw.py`.

Changes to the HE or proof layers usually need to be mirrored in both trees. When in doubt, `src/` is the active one.

### Supported Schemes

`HE_SCHEME = {"bv", "bgv", "bfv"}` — the parameter validator accepts all three, but only `bv` is implemented and tested.
