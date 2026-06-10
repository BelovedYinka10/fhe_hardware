// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhash_verifier__pch.h"

//============================================================
// Constructors

Vhash_verifier::Vhash_verifier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhash_verifier__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , ct_id{vlSymsp->TOP.ct_id}
    , ct_sel{vlSymsp->TOP.ct_sel}
    , ct_wr_en{vlSymsp->TOP.ct_wr_en}
    , r_wr_en{vlSymsp->TOP.r_wr_en}
    , tw_wr_en{vlSymsp->TOP.tw_wr_en}
    , c1_count{vlSymsp->TOP.c1_count}
    , c2_count{vlSymsp->TOP.c2_count}
    , c3_count{vlSymsp->TOP.c3_count}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , valid{vlSymsp->TOP.valid}
    , ct_wr_addr{vlSymsp->TOP.ct_wr_addr}
    , r_wr_addr{vlSymsp->TOP.r_wr_addr}
    , tw_wr_addr{vlSymsp->TOP.tw_wr_addr}
    , barrett_m{vlSymsp->TOP.barrett_m}
    , q{vlSymsp->TOP.q}
    , n_inv{vlSymsp->TOP.n_inv}
    , ct_wr_data{vlSymsp->TOP.ct_wr_data}
    , r_wr_data{vlSymsp->TOP.r_wr_data}
    , tw_wr_data{vlSymsp->TOP.tw_wr_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vhash_verifier::Vhash_verifier(const char* _vcname__)
    : Vhash_verifier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhash_verifier::~Vhash_verifier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhash_verifier___024root___eval_debug_assertions(Vhash_verifier___024root* vlSelf);
#endif  // VL_DEBUG
void Vhash_verifier___024root___eval_static(Vhash_verifier___024root* vlSelf);
void Vhash_verifier___024root___eval_initial(Vhash_verifier___024root* vlSelf);
void Vhash_verifier___024root___eval_settle(Vhash_verifier___024root* vlSelf);
void Vhash_verifier___024root___eval(Vhash_verifier___024root* vlSelf);

void Vhash_verifier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhash_verifier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhash_verifier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhash_verifier___024root___eval_static(&(vlSymsp->TOP));
        Vhash_verifier___024root___eval_initial(&(vlSymsp->TOP));
        Vhash_verifier___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhash_verifier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhash_verifier::eventsPending() { return false; }

uint64_t Vhash_verifier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhash_verifier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhash_verifier___024root___eval_final(Vhash_verifier___024root* vlSelf);

VL_ATTR_COLD void Vhash_verifier::final() {
    Vhash_verifier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhash_verifier::hierName() const { return vlSymsp->name(); }
const char* Vhash_verifier::modelName() const { return "Vhash_verifier"; }
unsigned Vhash_verifier::threads() const { return 1; }
void Vhash_verifier::prepareClone() const { contextp()->prepareClone(); }
void Vhash_verifier::atClone() const {
    contextp()->threadPoolpOnClone();
}
