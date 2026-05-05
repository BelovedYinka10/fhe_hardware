// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vntt__pch.h"

//============================================================
// Constructors

Vntt::Vntt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vntt__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , coeff_wr_en{vlSymsp->TOP.coeff_wr_en}
    , tw_wr_en{vlSymsp->TOP.tw_wr_en}
    , start{vlSymsp->TOP.start}
    , inverse{vlSymsp->TOP.inverse}
    , done{vlSymsp->TOP.done}
    , coeff_wr_addr{vlSymsp->TOP.coeff_wr_addr}
    , tw_wr_addr{vlSymsp->TOP.tw_wr_addr}
    , rd_addr{vlSymsp->TOP.rd_addr}
    , q{vlSymsp->TOP.q}
    , n_inv{vlSymsp->TOP.n_inv}
    , coeff_wr_data{vlSymsp->TOP.coeff_wr_data}
    , tw_wr_data{vlSymsp->TOP.tw_wr_data}
    , rd_data{vlSymsp->TOP.rd_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vntt::Vntt(const char* _vcname__)
    : Vntt(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vntt::~Vntt() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vntt___024root___eval_debug_assertions(Vntt___024root* vlSelf);
#endif  // VL_DEBUG
void Vntt___024root___eval_static(Vntt___024root* vlSelf);
void Vntt___024root___eval_initial(Vntt___024root* vlSelf);
void Vntt___024root___eval_settle(Vntt___024root* vlSelf);
void Vntt___024root___eval(Vntt___024root* vlSelf);

void Vntt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vntt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vntt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vntt___024root___eval_static(&(vlSymsp->TOP));
        Vntt___024root___eval_initial(&(vlSymsp->TOP));
        Vntt___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vntt___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vntt::eventsPending() { return false; }

uint64_t Vntt::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vntt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vntt___024root___eval_final(Vntt___024root* vlSelf);

VL_ATTR_COLD void Vntt::final() {
    Vntt___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vntt::hierName() const { return vlSymsp->name(); }
const char* Vntt::modelName() const { return "Vntt"; }
unsigned Vntt::threads() const { return 1; }
void Vntt::prepareClone() const { contextp()->prepareClone(); }
void Vntt::atClone() const {
    contextp()->threadPoolpOnClone();
}
