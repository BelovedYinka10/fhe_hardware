// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrns_hash_verifier__pch.h"

//============================================================
// Constructors

Vrns_hash_verifier::Vrns_hash_verifier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrns_hash_verifier__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , lane_sel{vlSymsp->TOP.lane_sel}
    , ct_id{vlSymsp->TOP.ct_id}
    , ct_sel{vlSymsp->TOP.ct_sel}
    , ct_wr_en{vlSymsp->TOP.ct_wr_en}
    , r_wr_en{vlSymsp->TOP.r_wr_en}
    , tw_lane_sel{vlSymsp->TOP.tw_lane_sel}
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
    , q_all{vlSymsp->TOP.q_all}
    , n_inv_all{vlSymsp->TOP.n_inv_all}
    , barrett_m_all{vlSymsp->TOP.barrett_m_all}
    , ct_wr_data{vlSymsp->TOP.ct_wr_data}
    , r_wr_data{vlSymsp->TOP.r_wr_data}
    , tw_wr_data{vlSymsp->TOP.tw_wr_data}
    , __PVT__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv{vlSymsp->TOP.__PVT__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv}
    , __PVT__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv{vlSymsp->TOP.__PVT__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv}
    , __PVT__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv{vlSymsp->TOP.__PVT__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrns_hash_verifier::Vrns_hash_verifier(const char* _vcname__)
    : Vrns_hash_verifier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrns_hash_verifier::~Vrns_hash_verifier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrns_hash_verifier___024root___eval_debug_assertions(Vrns_hash_verifier___024root* vlSelf);
#endif  // VL_DEBUG
void Vrns_hash_verifier___024root___eval_static(Vrns_hash_verifier___024root* vlSelf);
void Vrns_hash_verifier___024root___eval_initial(Vrns_hash_verifier___024root* vlSelf);
void Vrns_hash_verifier___024root___eval_settle(Vrns_hash_verifier___024root* vlSelf);
void Vrns_hash_verifier___024root___eval(Vrns_hash_verifier___024root* vlSelf);

void Vrns_hash_verifier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrns_hash_verifier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrns_hash_verifier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrns_hash_verifier___024root___eval_static(&(vlSymsp->TOP));
        Vrns_hash_verifier___024root___eval_initial(&(vlSymsp->TOP));
        Vrns_hash_verifier___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrns_hash_verifier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrns_hash_verifier::eventsPending() { return false; }

uint64_t Vrns_hash_verifier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrns_hash_verifier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrns_hash_verifier___024root___eval_final(Vrns_hash_verifier___024root* vlSelf);

VL_ATTR_COLD void Vrns_hash_verifier::final() {
    Vrns_hash_verifier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrns_hash_verifier::hierName() const { return vlSymsp->name(); }
const char* Vrns_hash_verifier::modelName() const { return "Vrns_hash_verifier"; }
unsigned Vrns_hash_verifier::threads() const { return 1; }
void Vrns_hash_verifier::prepareClone() const { contextp()->prepareClone(); }
void Vrns_hash_verifier::atClone() const {
    contextp()->threadPoolpOnClone();
}
