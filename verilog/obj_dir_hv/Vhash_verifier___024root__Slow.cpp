// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhash_verifier.h for the primary calling header

#include "Vhash_verifier__pch.h"

void Vhash_verifier___024root___ctor_var_reset(Vhash_verifier___024root* vlSelf);

Vhash_verifier___024root::Vhash_verifier___024root(Vhash_verifier__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vhash_verifier___024root___ctor_var_reset(this);
}

void Vhash_verifier___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhash_verifier___024root::~Vhash_verifier___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
