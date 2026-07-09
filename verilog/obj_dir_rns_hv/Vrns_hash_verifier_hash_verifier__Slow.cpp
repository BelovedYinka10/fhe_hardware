// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrns_hash_verifier.h for the primary calling header

#include "Vrns_hash_verifier__pch.h"

void Vrns_hash_verifier_hash_verifier___ctor_var_reset(Vrns_hash_verifier_hash_verifier* vlSelf);

Vrns_hash_verifier_hash_verifier::Vrns_hash_verifier_hash_verifier() = default;
Vrns_hash_verifier_hash_verifier::~Vrns_hash_verifier_hash_verifier() = default;

void Vrns_hash_verifier_hash_verifier::ctor(Vrns_hash_verifier__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vrns_hash_verifier_hash_verifier___ctor_var_reset(this);
}

void Vrns_hash_verifier_hash_verifier::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vrns_hash_verifier_hash_verifier::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
