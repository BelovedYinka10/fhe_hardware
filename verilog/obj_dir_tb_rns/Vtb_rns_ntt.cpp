// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_rns_ntt__pch.h"

//============================================================
// Constructors

Vtb_rns_ntt::Vtb_rns_ntt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_rns_ntt__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_rns_ntt::Vtb_rns_ntt(const char* _vcname__)
    : Vtb_rns_ntt(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_rns_ntt::~Vtb_rns_ntt() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_rns_ntt___024root___eval_debug_assertions(Vtb_rns_ntt___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_rns_ntt___024root___eval_static(Vtb_rns_ntt___024root* vlSelf);
void Vtb_rns_ntt___024root___eval_initial(Vtb_rns_ntt___024root* vlSelf);
void Vtb_rns_ntt___024root___eval_settle(Vtb_rns_ntt___024root* vlSelf);
void Vtb_rns_ntt___024root___eval(Vtb_rns_ntt___024root* vlSelf);

void Vtb_rns_ntt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_rns_ntt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_rns_ntt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_rns_ntt___024root___eval_static(&(vlSymsp->TOP));
        Vtb_rns_ntt___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_rns_ntt___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_rns_ntt___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_rns_ntt::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb_rns_ntt::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_rns_ntt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_rns_ntt___024root___eval_final(Vtb_rns_ntt___024root* vlSelf);

VL_ATTR_COLD void Vtb_rns_ntt::final() {
    Vtb_rns_ntt___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_rns_ntt::hierName() const { return vlSymsp->name(); }
const char* Vtb_rns_ntt::modelName() const { return "Vtb_rns_ntt"; }
unsigned Vtb_rns_ntt::threads() const { return 1; }
void Vtb_rns_ntt::prepareClone() const { contextp()->prepareClone(); }
void Vtb_rns_ntt::atClone() const {
    contextp()->threadPoolpOnClone();
}
