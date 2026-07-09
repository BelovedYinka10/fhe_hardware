// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrns_hash_verifier.h for the primary calling header

#include "Vrns_hash_verifier__pch.h"

VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___eval_static__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv(Vrns_hash_verifier_hash_verifier* vlSelf);

VL_ATTR_COLD void Vrns_hash_verifier___024root___eval_static(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_static\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrns_hash_verifier_hash_verifier___eval_static__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv));
    Vrns_hash_verifier_hash_verifier___eval_static__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv));
    Vrns_hash_verifier_hash_verifier___eval_static__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vrns_hash_verifier___024root___eval_initial(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_initial\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vrns_hash_verifier___024root___eval_final(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_final\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_hash_verifier___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrns_hash_verifier___024root___eval_phase__stl(Vrns_hash_verifier___024root* vlSelf);

VL_ATTR_COLD void Vrns_hash_verifier___024root___eval_settle(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_settle\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrns_hash_verifier___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rns_hash_verifier.v", 26, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vrns_hash_verifier___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vrns_hash_verifier___024root___eval_triggers_vec__stl(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_triggers_vec__stl\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vrns_hash_verifier___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_hash_verifier___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vrns_hash_verifier___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vrns_hash_verifier___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);
VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf);

VL_ATTR_COLD void Vrns_hash_verifier___024root___eval_stl(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_stl\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv));
        Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0((&vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv));
        vlSelfRef.done = ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.done) 
                          & ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.done) 
                             & (IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.done)));
        vlSelfRef.valid = ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv.valid) 
                           & ((IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv.valid) 
                              & (IData)(vlSymsp->TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv.valid)));
    }
}

VL_ATTR_COLD bool Vrns_hash_verifier___024root___eval_phase__stl(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___eval_phase__stl\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrns_hash_verifier___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrns_hash_verifier___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vrns_hash_verifier___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vrns_hash_verifier___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vrns_hash_verifier___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_hash_verifier___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vrns_hash_verifier___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vrns_hash_verifier___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_hash_verifier___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vrns_hash_verifier___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrns_hash_verifier___024root___ctor_var_reset(Vrns_hash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_hash_verifier___024root___ctor_var_reset\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->q_all, __VscopeHash, 3522688321782256014ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->n_inv_all, __VscopeHash, 16093554444120912415ull);
    VL_SCOPED_RAND_RESET_W(240, vlSelf->barrett_m_all, __VscopeHash, 1049357579205823727ull);
    vlSelf->lane_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2947586351289412895ull);
    vlSelf->ct_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6213303245558280970ull);
    vlSelf->ct_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5704733337405244791ull);
    vlSelf->ct_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17785535827056100023ull);
    vlSelf->ct_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10785235741635887383ull);
    vlSelf->ct_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16159523684042801144ull);
    vlSelf->r_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996322988015867944ull);
    vlSelf->r_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10133271101593205408ull);
    vlSelf->r_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1414332756376121481ull);
    vlSelf->tw_lane_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3695761493199107826ull);
    vlSelf->tw_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1923444488897307551ull);
    vlSelf->tw_wr_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 17355659617915903897ull);
    vlSelf->tw_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2389558324345623160ull);
    vlSelf->c1_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17676014983583511744ull);
    vlSelf->c2_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3288848687513722386ull);
    vlSelf->c3_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1015654979339967121ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
