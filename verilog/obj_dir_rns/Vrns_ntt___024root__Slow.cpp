// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrns_ntt.h for the primary calling header

#include "Vrns_ntt__pch.h"

void Vrns_ntt___024root___ctor_var_reset(Vrns_ntt___024root* vlSelf);

Vrns_ntt___024root::Vrns_ntt___024root(Vrns_ntt__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vrns_ntt___024root___ctor_var_reset(this);
}

void Vrns_ntt___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrns_ntt___024root::~Vrns_ntt___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
