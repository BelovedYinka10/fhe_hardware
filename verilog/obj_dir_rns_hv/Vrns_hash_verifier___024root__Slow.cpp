// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrns_hash_verifier.h for the primary calling header

#include "Vrns_hash_verifier__pch.h"

void Vrns_hash_verifier___024root___ctor_var_reset(Vrns_hash_verifier___024root* vlSelf);

Vrns_hash_verifier___024root::Vrns_hash_verifier___024root(Vrns_hash_verifier__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vrns_hash_verifier___024root___ctor_var_reset(this);
}

void Vrns_hash_verifier___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrns_hash_verifier___024root::~Vrns_hash_verifier___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
