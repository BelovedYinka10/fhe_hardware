// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt.h for the primary calling header

#include "Vntt__pch.h"

VL_ATTR_COLD void Vntt___024root___eval_static(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_static\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vntt___024root___eval_initial(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_initial\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vntt___024root___eval_final(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_final\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vntt___024root___eval_phase__stl(Vntt___024root* vlSelf);

VL_ATTR_COLD void Vntt___024root___eval_settle(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_settle\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vntt___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("ntt.v", 19, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vntt___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vntt___024root___eval_triggers_vec__stl(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_triggers_vec__stl\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vntt___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vntt___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vntt___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vntt___024root___stl_sequent__TOP__0(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___stl_sequent__TOP__0\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ ntt__DOT__ts;
    ntt__DOT__ts = 0;
    SData/*12:0*/ ntt__DOT__grp;
    ntt__DOT__grp = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__u_r 
                                                   + vlSelfRef.ntt__DOT__v_r));
    __Vtemp_3[0U] = (IData)(vlSelfRef.ntt__DOT__v_r);
    __Vtemp_3[1U] = (IData)((vlSelfRef.ntt__DOT__v_r 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    __Vtemp_4[0U] = (IData)(vlSelfRef.ntt__DOT__w_r);
    __Vtemp_4[1U] = (IData)((vlSelfRef.ntt__DOT__w_r 
                             >> 0x00000020U));
    __Vtemp_4[2U] = 0U;
    VL_MUL_W(3, __Vtemp_5, __Vtemp_3, __Vtemp_4);
    __Vtemp_6[0U] = __Vtemp_5[0U];
    __Vtemp_6[1U] = __Vtemp_5[1U];
    __Vtemp_6[2U] = (0x0000ffffU & __Vtemp_5[2U]);
    __Vtemp_7[0U] = (IData)(vlSelfRef.q);
    __Vtemp_7[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_7[2U] = 0U;
    VL_MODDIV_WWW(80, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    __VdfgRegularize_hebeb780c_0_7 = (0x000000ffffffffffULL 
                                      & (((QData)((IData)(__Vtemp_8[1U])) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(__Vtemp_8[0U]))));
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.ntt__DOT__u_r 
                                         + vlSelfRef.q));
    ntt__DOT__ts = (0x00001fffU & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                    ? (IData)(vlSelfRef.ntt__DOT__stage)
                                    : ((IData)(0x000cU) 
                                       - (IData)(vlSelfRef.ntt__DOT__stage))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__u_r 
                                                   + __VdfgRegularize_hebeb780c_0_7));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - __VdfgRegularize_hebeb780c_0_7));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.ntt__DOT__v_r));
    ntt__DOT__grp = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.ntt__DOT__k), (IData)(ntt__DOT__ts));
    __Vtemp_12[0U] = (IData)((0x000000ffffffffffULL 
                              & ((__VdfgRegularize_hebeb780c_0_4 
                                  >= vlSelfRef.q) ? 
                                 (__VdfgRegularize_hebeb780c_0_4 
                                  - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_4)));
    __Vtemp_12[1U] = (IData)(((0x000000ffffffffffULL 
                               & ((__VdfgRegularize_hebeb780c_0_4 
                                   >= vlSelfRef.q) ? 
                                  (__VdfgRegularize_hebeb780c_0_4 
                                   - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_4)) 
                              >> 0x00000020U));
    __Vtemp_12[2U] = 0U;
    __Vtemp_13[0U] = (IData)(vlSelfRef.ntt__DOT__w_r);
    __Vtemp_13[1U] = (IData)((vlSelfRef.ntt__DOT__w_r 
                              >> 0x00000020U));
    __Vtemp_13[2U] = 0U;
    VL_MUL_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
    __Vtemp_15[0U] = __Vtemp_14[0U];
    __Vtemp_15[1U] = __Vtemp_14[1U];
    __Vtemp_15[2U] = (0x0000ffffU & __Vtemp_14[2U]);
    __Vtemp_16[0U] = (IData)(vlSelfRef.q);
    __Vtemp_16[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_16[2U] = 0U;
    VL_MODDIV_WWW(80, __Vtemp_17, __Vtemp_15, __Vtemp_16);
    vlSelfRef.ntt__DOT__gs_v = (0x000000ffffffffffULL 
                                & (((QData)((IData)(__Vtemp_17[1U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(__Vtemp_17[0U]))));
    vlSelfRef.ntt__DOT__tw_idx = (0x00003fffU & (((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                   ? 0x2000U
                                                   : 0U) 
                                                 + 
                                                 ((0x00001fffU 
                                                   & VL_SHIFTL_III(13,13,13, (IData)(1U), 
                                                                   (0x00001fffU 
                                                                    & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                                        ? 
                                                                       ((IData)(0x000cU) 
                                                                        - (IData)(vlSelfRef.ntt__DOT__stage))
                                                                        : (IData)(vlSelfRef.ntt__DOT__stage))))) 
                                                  + (IData)(ntt__DOT__grp))));
    vlSelfRef.ntt__DOT__ua = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(ntt__DOT__grp), 
                                                           (0x00001fffU 
                                                            & ((IData)(1U) 
                                                               + (IData)(ntt__DOT__ts)))) 
                                             | ((IData)(vlSelfRef.ntt__DOT__k) 
                                                & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(ntt__DOT__ts)) 
                                                   - (IData)(1U)))));
    vlSelfRef.ntt__DOT__va = (0x00001fffU & ((IData)(vlSelfRef.ntt__DOT__ua) 
                                             | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(ntt__DOT__ts))));
}

VL_ATTR_COLD void Vntt___024root___eval_stl(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_stl\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vntt___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vntt___024root___eval_phase__stl(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_phase__stl\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vntt___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vntt___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vntt___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vntt___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vntt___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vntt___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vntt___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vntt___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vntt___024root___ctor_var_reset(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___ctor_var_reset\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8861071527689086543ull);
    vlSelf->n_inv = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8929588735678779128ull);
    vlSelf->coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13018687539275992020ull);
    vlSelf->coeff_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11746289273846781034ull);
    vlSelf->coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10803392500267065075ull);
    vlSelf->tw_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1923444488897307551ull);
    vlSelf->tw_wr_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 17355659617915903897ull);
    vlSelf->tw_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2389558324345623160ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1159024208945578495ull);
    vlSelf->rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7950012703377089919ull);
    vlSelf->rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17824471296722538975ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9268419360184689766ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12181619401206055091ull);
    }
    vlSelf->ntt__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2615800629313669464ull);
    vlSelf->ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18073376465433391453ull);
    vlSelf->ntt__DOT__k = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15973457003699889496ull);
    vlSelf->ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17485353398699210192ull);
    vlSelf->ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14874068962576317398ull);
    vlSelf->ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4015596799741278431ull);
    vlSelf->ntt__DOT__va = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6830641595502704745ull);
    vlSelf->ntt__DOT__tw_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 16390722548385396601ull);
    vlSelf->ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17279061880860941049ull);
    vlSelf->ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14595197436326880995ull);
    vlSelf->ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1828397381912433081ull);
    vlSelf->ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12895967732240772362ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
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
