// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRNS_NTT__SYMS_H_
#define VERILATED_VRNS_NTT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrns_ntt.h"

// INCLUDE MODULE CLASSES
#include "Vrns_ntt___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vrns_ntt__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrns_ntt* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrns_ntt___024root             TOP;

    // CONSTRUCTORS
    Vrns_ntt__Syms(VerilatedContext* contextp, const char* namep, Vrns_ntt* modelp);
    ~Vrns_ntt__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
