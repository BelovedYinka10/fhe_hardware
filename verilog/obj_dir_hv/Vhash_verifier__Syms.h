// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHASH_VERIFIER__SYMS_H_
#define VERILATED_VHASH_VERIFIER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhash_verifier.h"

// INCLUDE MODULE CLASSES
#include "Vhash_verifier___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vhash_verifier__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhash_verifier* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhash_verifier___024root       TOP;

    // CONSTRUCTORS
    Vhash_verifier__Syms(VerilatedContext* contextp, const char* namep, Vhash_verifier* modelp);
    ~Vhash_verifier__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
