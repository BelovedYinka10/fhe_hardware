// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt.h for the primary calling header

#include "Vntt__pch.h"

void Vntt___024root___ctor_var_reset(Vntt___024root* vlSelf);

Vntt___024root::Vntt___024root(Vntt__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vntt___024root___ctor_var_reset(this);
}

void Vntt___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vntt___024root::~Vntt___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
