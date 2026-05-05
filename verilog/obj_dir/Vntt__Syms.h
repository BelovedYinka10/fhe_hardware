// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNTT__SYMS_H_
#define VERILATED_VNTT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vntt.h"

// INCLUDE MODULE CLASSES
#include "Vntt___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vntt__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vntt* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vntt___024root                 TOP;

    // CONSTRUCTORS
    Vntt__Syms(VerilatedContext* contextp, const char* namep, Vntt* modelp);
    ~Vntt__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
