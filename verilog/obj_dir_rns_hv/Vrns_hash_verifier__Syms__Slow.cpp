// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrns_hash_verifier__pch.h"

Vrns_hash_verifier__Syms::Vrns_hash_verifier__Syms(VerilatedContext* contextp, const char* namep, Vrns_hash_verifier* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(34054);
    // Setup sub module instances
    TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.ctor(this, "rns_hash_verifier.lane[0].u_hv");
    TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.ctor(this, "rns_hash_verifier.lane[1].u_hv");
    TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.ctor(this, "rns_hash_verifier.lane[2].u_hv");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv = &TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv;
    TOP.__PVT__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv = &TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv;
    TOP.__PVT__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv = &TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.__Vconfigure(true);
    TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.__Vconfigure(false);
    TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.__Vconfigure(false);
    // Setup scopes
}

Vrns_hash_verifier__Syms::~Vrns_hash_verifier__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.dtor();
    TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.dtor();
    TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.dtor();
}
