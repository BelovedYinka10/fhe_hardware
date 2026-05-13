// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt.h for the primary calling header

#include "Vntt__pch.h"

VL_ATTR_COLD void Vntt___024root___eval_static(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_static\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ntt__DOT__mod_mul__Vstatic__p, __VscopeHash, 8830060575164135358ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->ntt__DOT__mod_mul__Vstatic__pm, __VscopeHash, 17509652747396921490ull);
    vlSelf->ntt__DOT__mod_mul__Vstatic__t = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 13433300248210505018ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ntt__DOT__mod_mul__Vstatic__tq, __VscopeHash, 2368101386610359988ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ntt__DOT__mod_mul__Vstatic__r, __VscopeHash, 14260289709376739434ull);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vntt___024root___eval_static__TOP(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_static__TOP\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ntt__DOT__mod_mul__Vstatic__p, __VscopeHash, 8830060575164135358ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->ntt__DOT__mod_mul__Vstatic__pm, __VscopeHash, 17509652747396921490ull);
    vlSelf->ntt__DOT__mod_mul__Vstatic__t = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 13433300248210505018ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ntt__DOT__mod_mul__Vstatic__tq, __VscopeHash, 2368101386610359988ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ntt__DOT__mod_mul__Vstatic__r, __VscopeHash, 14260289709376739434ull);
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
            VL_FATAL_MT("ntt.v", 18, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
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
    QData/*39:0*/ ntt__DOT__vw;
    ntt__DOT__vw = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__0__Vfuncout;
    __Vfunc_ntt__DOT__mod_mul__0__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__0__a;
    __Vfunc_ntt__DOT__mod_mul__0__a = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__0__b;
    __Vfunc_ntt__DOT__mod_mul__0__b = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__0__qq;
    __Vfunc_ntt__DOT__mod_mul__0__qq = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__5__Vfuncout;
    __Vfunc_ntt__DOT__mod_mul__5__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__5__a;
    __Vfunc_ntt__DOT__mod_mul__5__a = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__5__b;
    __Vfunc_ntt__DOT__mod_mul__5__b = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__5__qq;
    __Vfunc_ntt__DOT__mod_mul__5__qq = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<5>/*159:0*/ __Vtemp_22;
    VlWide<5>/*159:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__u_r 
                                                   + vlSelfRef.ntt__DOT__v_r));
    ntt__DOT__ts = (0x00001fffU & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                    ? (IData)(vlSelfRef.ntt__DOT__stage)
                                    : ((IData)(0x000cU) 
                                       - (IData)(vlSelfRef.ntt__DOT__stage))));
    __Vfunc_ntt__DOT__mod_mul__0__qq = vlSelfRef.q;
    __Vfunc_ntt__DOT__mod_mul__0__b = vlSelfRef.ntt__DOT__w_r;
    __Vfunc_ntt__DOT__mod_mul__0__a = vlSelfRef.ntt__DOT__v_r;
    __Vtemp_2[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__a);
    __Vtemp_2[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__a 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__b);
    __Vtemp_3[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__b 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[0U] = __Vtemp_4[0U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[1U] = __Vtemp_4[1U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[2U] = (0x0000ffffU 
                                                   & __Vtemp_4[2U]);
    __Vtemp_5[0U] = vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_5[1U] = vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_5[2U] = vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_6[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_6[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_6[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_6);
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__t = (0x000001ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                                     >> 0x00000010U)));
    __Vtemp_8[0U] = (IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_8[1U] = (IData)((vlSelfRef.ntt__DOT__mod_mul__Vstatic__t 
                             >> 0x00000020U));
    __Vtemp_8[2U] = 0U;
    __Vtemp_9[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
    __Vtemp_9[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                             >> 0x00000020U));
    __Vtemp_9[2U] = 0U;
    VL_MUL_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__tq[0U] = __Vtemp_10[0U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__tq[1U] = __Vtemp_10[1U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__tq[2U] = 
        (0x0000ffffU & __Vtemp_10[2U]);
    VL_SUB_W(3, __Vtemp_12, vlSelfRef.ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_12[0U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_12[1U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                                   & __Vtemp_12[2U]);
    __Vtemp_13[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
    __Vtemp_13[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                              >> 0x00000020U));
    __Vtemp_13[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.ntt__DOT__mod_mul__Vstatic__r, __Vtemp_13)) {
        __Vtemp_16[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
        __Vtemp_16[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        VL_SUB_W(3, __Vtemp_17, vlSelfRef.ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16);
        vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_17[2U]);
    }
    __Vfunc_ntt__DOT__mod_mul__0__Vfuncout = (0x000000ffffffffffULL 
                                              & (((QData)((IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[0U]))));
    ntt__DOT__vw = __Vfunc_ntt__DOT__mod_mul__0__Vfuncout;
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.ntt__DOT__u_r 
                                         + vlSelfRef.q));
    ntt__DOT__grp = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.ntt__DOT__k), (IData)(ntt__DOT__ts));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__u_r 
                                                   + ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.ntt__DOT__v_r));
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
    __Vfunc_ntt__DOT__mod_mul__5__qq = vlSelfRef.q;
    __Vfunc_ntt__DOT__mod_mul__5__b = vlSelfRef.ntt__DOT__w_r;
    __Vfunc_ntt__DOT__mod_mul__5__a = (0x000000ffffffffffULL 
                                       & ((__VdfgRegularize_hebeb780c_0_4 
                                           >= vlSelfRef.q)
                                           ? (__VdfgRegularize_hebeb780c_0_4 
                                              - vlSelfRef.q)
                                           : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_19[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__a);
    __Vtemp_19[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__a 
                              >> 0x00000020U));
    __Vtemp_19[2U] = 0U;
    __Vtemp_20[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__b);
    __Vtemp_20[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__b 
                              >> 0x00000020U));
    __Vtemp_20[2U] = 0U;
    VL_MUL_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[0U] = __Vtemp_21[0U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[1U] = __Vtemp_21[1U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[2U] = (0x0000ffffU 
                                                   & __Vtemp_21[2U]);
    __Vtemp_22[0U] = vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_22[1U] = vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_22[2U] = vlSelfRef.ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_22[3U] = 0U;
    __Vtemp_22[4U] = 0U;
    __Vtemp_23[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_23[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_23[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_22, __Vtemp_23);
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__t = (0x000001ffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                                   << 0x00000010U) 
                                                  | ((QData)((IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                                     >> 0x00000010U)));
    __Vtemp_25[0U] = (IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_25[1U] = (IData)((vlSelfRef.ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_25[2U] = 0U;
    __Vtemp_26[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
    __Vtemp_26[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                              >> 0x00000020U));
    __Vtemp_26[2U] = 0U;
    VL_MUL_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__tq[0U] = __Vtemp_27[0U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__tq[1U] = __Vtemp_27[1U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__tq[2U] = 
        (0x0000ffffU & __Vtemp_27[2U]);
    VL_SUB_W(3, __Vtemp_29, vlSelfRef.ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_29[0U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_29[1U];
    vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                                   & __Vtemp_29[2U]);
    __Vtemp_30[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
    __Vtemp_30[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                              >> 0x00000020U));
    __Vtemp_30[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.ntt__DOT__mod_mul__Vstatic__r, __Vtemp_30)) {
        __Vtemp_33[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
        __Vtemp_33[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                                  >> 0x00000020U));
        __Vtemp_33[2U] = 0U;
        VL_SUB_W(3, __Vtemp_34, vlSelfRef.ntt__DOT__mod_mul__Vstatic__r, __Vtemp_33);
        vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_34[0U];
        vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_34[1U];
        vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_34[2U]);
    }
    __Vfunc_ntt__DOT__mod_mul__5__Vfuncout = (0x000000ffffffffffULL 
                                              & (((QData)((IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.ntt__DOT__gs_v = __Vfunc_ntt__DOT__mod_mul__5__Vfuncout;
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
    VL_SCOPED_RAND_RESET_W(80, vlSelf->barrett_m, __VscopeHash, 9163698460787631846ull);
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
