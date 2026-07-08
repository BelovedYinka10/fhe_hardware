// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrns_ntt__pch.h"

//============================================================
// Constructors

Vrns_ntt::Vrns_ntt(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrns_ntt__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , lane_sel{vlSymsp->TOP.lane_sel}
    , coeff_wr_en{vlSymsp->TOP.coeff_wr_en}
    , coeff_wr_addr{vlSymsp->TOP.coeff_wr_addr}
    , tw_lane_sel{vlSymsp->TOP.tw_lane_sel}
    , tw_wr_en{vlSymsp->TOP.tw_wr_en}
    , tw_wr_addr{vlSymsp->TOP.tw_wr_addr}
    , start{vlSymsp->TOP.start}
    , inverse{vlSymsp->TOP.inverse}
    , rd_lane{vlSymsp->TOP.rd_lane}
    , rd_addr{vlSymsp->TOP.rd_addr}
    , lane_done{vlSymsp->TOP.lane_done}
    , done{vlSymsp->TOP.done}
    , q_all{vlSymsp->TOP.q_all}
    , n_inv_all{vlSymsp->TOP.n_inv_all}
    , barrett_m_all{vlSymsp->TOP.barrett_m_all}
    , coeff_wr_data{vlSymsp->TOP.coeff_wr_data}
    , tw_wr_data{vlSymsp->TOP.tw_wr_data}
    , rd_data{vlSymsp->TOP.rd_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrns_ntt::Vrns_ntt(const char* _vcname__)
    : Vrns_ntt(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrns_ntt::~Vrns_ntt() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrns_ntt___024root___eval_debug_assertions(Vrns_ntt___024root* vlSelf);
#endif  // VL_DEBUG
void Vrns_ntt___024root___eval_static(Vrns_ntt___024root* vlSelf);
void Vrns_ntt___024root___eval_initial(Vrns_ntt___024root* vlSelf);
void Vrns_ntt___024root___eval_settle(Vrns_ntt___024root* vlSelf);
void Vrns_ntt___024root___eval(Vrns_ntt___024root* vlSelf);

void Vrns_ntt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrns_ntt::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrns_ntt___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrns_ntt___024root___eval_static(&(vlSymsp->TOP));
        Vrns_ntt___024root___eval_initial(&(vlSymsp->TOP));
        Vrns_ntt___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrns_ntt___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrns_ntt::eventsPending() { return false; }

uint64_t Vrns_ntt::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrns_ntt::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrns_ntt___024root___eval_final(Vrns_ntt___024root* vlSelf);

VL_ATTR_COLD void Vrns_ntt::final() {
    Vrns_ntt___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrns_ntt::hierName() const { return vlSymsp->name(); }
const char* Vrns_ntt::modelName() const { return "Vrns_ntt"; }
unsigned Vrns_ntt::threads() const { return 1; }
void Vrns_ntt::prepareClone() const { contextp()->prepareClone(); }
void Vrns_ntt::atClone() const {
    contextp()->threadPoolpOnClone();
}
