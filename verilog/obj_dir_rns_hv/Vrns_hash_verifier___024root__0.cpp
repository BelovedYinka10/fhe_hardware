// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrns_hash_verifier.h for the primary calling header

#include "Vrns_hash_verifier__pch.h"

void Vrns_hash_verifier___024root___eval_triggers_vec__ico(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_triggers_vec__ico\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vrns_hash_verifier___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vrns_hash_verifier_hash_verifier___ico_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___ico_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___ico_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);

void Vrns_hash_verifier___024root___eval_ico(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_ico\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vrns_hash_verifier_hash_verifier___ico_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___ico_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___ico_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_hash_verifier___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vrns_hash_verifier___024root___eval_phase__ico(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_phase__ico\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vrns_hash_verifier___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrns_hash_verifier___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vrns_hash_verifier___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vrns_hash_verifier___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vrns_hash_verifier___024root___eval_triggers_vec__act(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_triggers_vec__act\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

bool Vrns_hash_verifier___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vrns_hash_verifier___024root___nba_sequent__TOP__0(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___nba_sequent__TOP__0\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.done = ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.done) 
                      & ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.done) 
                         & (IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.done)));
    vlSelfRef.valid = ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.valid) 
                       & ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.valid) 
                          & (IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.valid)));
}

void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__1(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__1(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__1(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__2(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__2(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__2(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__3(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
void Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);

void Vrns_hash_verifier___024root___eval_nba(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_nba\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv));
        vlSelfRef.done = ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.done) 
                          & ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.done) 
                             & (IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.done)));
        vlSelfRef.valid = ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.valid) 
                           & ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.valid) 
                              & (IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.valid)));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__1((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__1((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__1((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__2((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__2((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__2((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__3((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__3((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__3((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv));
    }
}

void Vrns_hash_verifier___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_hash_verifier___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vrns_hash_verifier___024root___eval_phase__act(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_phase__act\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrns_hash_verifier___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrns_hash_verifier___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vrns_hash_verifier___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vrns_hash_verifier___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vrns_hash_verifier___024root___eval_phase__nba(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_phase__nba\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vrns_hash_verifier___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vrns_hash_verifier___024root___eval_nba(vlSelf);
        Vrns_hash_verifier___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vrns_hash_verifier___024root___eval(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vrns_hash_verifier___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rns_hash_verifier.v", 26, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vrns_hash_verifier___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrns_hash_verifier___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rns_hash_verifier.v", 26, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrns_hash_verifier___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rns_hash_verifier.v", 26, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vrns_hash_verifier___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vrns_hash_verifier___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vrns_hash_verifier___024root___eval_debug_assertions(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_debug_assertions\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.q_all[3U] & 0xff000000U)))) {
        Verilated::overWidthError("q_all");
    }
    if (VL_UNLIKELY(((vlSelfRef.n_inv_all[3U] & 0xff000000U)))) {
        Verilated::overWidthError("n_inv_all");
    }
    if (VL_UNLIKELY(((vlSelfRef.barrett_m_all[7U] & 0xffff0000U)))) {
        Verilated::overWidthError("barrett_m_all");
    }
    if (VL_UNLIKELY(((vlSelfRef.lane_sel & 0xfcU)))) {
        Verilated::overWidthError("lane_sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.ct_id & 0xfcU)))) {
        Verilated::overWidthError("ct_id");
    }
    if (VL_UNLIKELY(((vlSelfRef.ct_sel & 0xfcU)))) {
        Verilated::overWidthError("ct_sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.ct_wr_en & 0xfeU)))) {
        Verilated::overWidthError("ct_wr_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.ct_wr_addr & 0xe000U)))) {
        Verilated::overWidthError("ct_wr_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.ct_wr_data & 0ULL)))) {
        Verilated::overWidthError("ct_wr_data");
    }
    if (VL_UNLIKELY(((vlSelfRef.r_wr_en & 0xfeU)))) {
        Verilated::overWidthError("r_wr_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.r_wr_addr & 0xe000U)))) {
        Verilated::overWidthError("r_wr_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.r_wr_data & 0ULL)))) {
        Verilated::overWidthError("r_wr_data");
    }
    if (VL_UNLIKELY(((vlSelfRef.tw_lane_sel & 0xfcU)))) {
        Verilated::overWidthError("tw_lane_sel");
    }
    if (VL_UNLIKELY(((vlSelfRef.tw_wr_en & 0xfeU)))) {
        Verilated::overWidthError("tw_wr_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.tw_wr_addr & 0xc000U)))) {
        Verilated::overWidthError("tw_wr_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.tw_wr_data & 0ULL)))) {
        Verilated::overWidthError("tw_wr_data");
    }
    if (VL_UNLIKELY(((vlSelfRef.c1_count & 0xfcU)))) {
        Verilated::overWidthError("c1_count");
    }
    if (VL_UNLIKELY(((vlSelfRef.c2_count & 0xfcU)))) {
        Verilated::overWidthError("c2_count");
    }
    if (VL_UNLIKELY(((vlSelfRef.c3_count & 0xfcU)))) {
        Verilated::overWidthError("c3_count");
    }
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");
    }
}
#endif  // VL_DEBUG
