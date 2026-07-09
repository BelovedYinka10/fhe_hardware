// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRNS_HASH_VERIFIER__SYMS_H_
#define VERILATED_VRNS_HASH_VERIFIER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrns_hash_verifier.h"

// INCLUDE MODULE CLASSES
#include "Vrns_hash_verifier___024root.h"
#include "Vrns_hash_verifier_hash_verifier.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vrns_hash_verifier__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrns_hash_verifier* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrns_hash_verifier___024root   TOP;
    Vrns_hash_verifier_hash_verifier TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv;
    Vrns_hash_verifier_hash_verifier TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv;
    Vrns_hash_verifier_hash_verifier TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv;

    // CONSTRUCTORS
    Vrns_hash_verifier__Syms(VerilatedContext* contextp, const char* namep, Vrns_hash_verifier* modelp);
    ~Vrns_hash_verifier__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
