// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhash_verifier.h for the primary calling header

#include "Vhash_verifier__pch.h"

VL_ATTR_COLD void Vhash_verifier___024root___eval_static(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_static\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vhash_verifier___024root___eval_initial(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_initial\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vhash_verifier___024root___eval_final(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_final\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhash_verifier___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhash_verifier___024root___eval_phase__stl(Vhash_verifier___024root* vlSelf);

VL_ATTR_COLD void Vhash_verifier___024root___eval_settle(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_settle\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vhash_verifier___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("hash_verifier.v", 32, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vhash_verifier___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vhash_verifier___024root___eval_triggers_vec__stl(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_triggers_vec__stl\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vhash_verifier___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhash_verifier___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vhash_verifier___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vhash_verifier___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vhash_verifier___024root___stl_sequent__TOP__0(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___stl_sequent__TOP__0\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
    SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp = 0;
    SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
    SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __Vtemp_3[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r);
    __Vtemp_3[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    __Vtemp_4[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r);
    __Vtemp_4[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
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
    __VdfgRegularize_hebeb780c_0_11 = (0x000000ffffffffffULL 
                                       & (((QData)((IData)(__Vtemp_8[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(__Vtemp_8[0U]))));
    __Vtemp_12[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r);
    __Vtemp_12[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r 
                              >> 0x00000020U));
    __Vtemp_12[2U] = 0U;
    __Vtemp_13[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r);
    __Vtemp_13[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
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
    __VdfgRegularize_hebeb780c_0_16 = (0x000000ffffffffffULL 
                                       & (((QData)((IData)(__Vtemp_17[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(__Vtemp_17[0U]))));
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + vlSelfRef.q));
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + vlSelfRef.q));
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                           : ((IData)(0x000cU) - (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                           : ((IData)(0x000cU) - (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + __VdfgRegularize_hebeb780c_0_11));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + __VdfgRegularize_hebeb780c_0_16));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - __VdfgRegularize_hebeb780c_0_16));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - __VdfgRegularize_hebeb780c_0_11));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    __Vtemp_21[0U] = (IData)((0x000000ffffffffffULL 
                              & ((__VdfgRegularize_hebeb780c_0_4 
                                  >= vlSelfRef.q) ? 
                                 (__VdfgRegularize_hebeb780c_0_4 
                                  - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_4)));
    __Vtemp_21[1U] = (IData)(((0x000000ffffffffffULL 
                               & ((__VdfgRegularize_hebeb780c_0_4 
                                   >= vlSelfRef.q) ? 
                                  (__VdfgRegularize_hebeb780c_0_4 
                                   - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_4)) 
                              >> 0x00000020U));
    __Vtemp_21[2U] = 0U;
    __Vtemp_22[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r);
    __Vtemp_22[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                              >> 0x00000020U));
    __Vtemp_22[2U] = 0U;
    VL_MUL_W(3, __Vtemp_23, __Vtemp_21, __Vtemp_22);
    __Vtemp_24[0U] = __Vtemp_23[0U];
    __Vtemp_24[1U] = __Vtemp_23[1U];
    __Vtemp_24[2U] = (0x0000ffffU & __Vtemp_23[2U]);
    __Vtemp_25[0U] = (IData)(vlSelfRef.q);
    __Vtemp_25[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_25[2U] = 0U;
    VL_MODDIV_WWW(80, __Vtemp_26, __Vtemp_24, __Vtemp_25);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = (0x000000ffffffffffULL & (((QData)((IData)(__Vtemp_26[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__Vtemp_26[0U]))));
    __Vtemp_30[0U] = (IData)((0x000000ffffffffffULL 
                              & ((__VdfgRegularize_hebeb780c_0_9 
                                  >= vlSelfRef.q) ? 
                                 (__VdfgRegularize_hebeb780c_0_9 
                                  - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_9)));
    __Vtemp_30[1U] = (IData)(((0x000000ffffffffffULL 
                               & ((__VdfgRegularize_hebeb780c_0_9 
                                   >= vlSelfRef.q) ? 
                                  (__VdfgRegularize_hebeb780c_0_9 
                                   - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_9)) 
                              >> 0x00000020U));
    __Vtemp_30[2U] = 0U;
    __Vtemp_31[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r);
    __Vtemp_31[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                              >> 0x00000020U));
    __Vtemp_31[2U] = 0U;
    VL_MUL_W(3, __Vtemp_32, __Vtemp_30, __Vtemp_31);
    __Vtemp_33[0U] = __Vtemp_32[0U];
    __Vtemp_33[1U] = __Vtemp_32[1U];
    __Vtemp_33[2U] = (0x0000ffffU & __Vtemp_32[2U]);
    __Vtemp_34[0U] = (IData)(vlSelfRef.q);
    __Vtemp_34[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_34[2U] = 0U;
    VL_MODDIV_WWW(80, __Vtemp_35, __Vtemp_33, __Vtemp_34);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = (0x000000ffffffffffULL & (((QData)((IData)(__Vtemp_35[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__Vtemp_35[0U]))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw_idx 
        = (0x00003fffU & (((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                            ? 0x2000U : 0U) + ((0x00001fffU 
                                                & VL_SHIFTL_III(13,13,13, (IData)(1U), 
                                                                (0x00001fffU 
                                                                 & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                                     ? 
                                                                    ((IData)(0x000cU) 
                                                                     - (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))
                                                                     : (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))))) 
                                               + (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua 
        = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp), 
                                        (0x00001fffU 
                                         & ((IData)(1U) 
                                            + (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k) 
                             & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw_idx 
        = (0x00003fffU & (((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                            ? 0x2000U : 0U) + ((0x00001fffU 
                                                & VL_SHIFTL_III(13,13,13, (IData)(1U), 
                                                                (0x00001fffU 
                                                                 & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                                     ? 
                                                                    ((IData)(0x000cU) 
                                                                     - (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage))
                                                                     : (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage))))) 
                                               + (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua 
        = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp), 
                                        (0x00001fffU 
                                         & ((IData)(1U) 
                                            + (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k) 
                             & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
}

VL_ATTR_COLD void Vhash_verifier___024root___eval_stl(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_stl\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vhash_verifier___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vhash_verifier___024root___eval_phase__stl(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_phase__stl\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhash_verifier___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhash_verifier___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vhash_verifier___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vhash_verifier___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vhash_verifier___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhash_verifier___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vhash_verifier___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vhash_verifier___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhash_verifier___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vhash_verifier___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vhash_verifier___024root___ctor_var_reset(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___ctor_var_reset\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->q = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8861071527689086543ull);
    vlSelf->n_inv = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8929588735678779128ull);
    vlSelf->ct_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6213303245558280970ull);
    vlSelf->ct_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5704733337405244791ull);
    vlSelf->ct_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17785535827056100023ull);
    vlSelf->ct_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10785235741635887383ull);
    vlSelf->ct_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16159523684042801144ull);
    vlSelf->r_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6996322988015867944ull);
    vlSelf->r_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10133271101593205408ull);
    vlSelf->r_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1414332756376121481ull);
    vlSelf->tw_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1923444488897307551ull);
    vlSelf->tw_wr_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 17355659617915903897ull);
    vlSelf->tw_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2389558324345623160ull);
    vlSelf->c1_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17676014983583511744ull);
    vlSelf->c2_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3288848687513722386ull);
    vlSelf->c3_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1015654979339967121ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->hash_verifier__DOT____Vlvbound_h957a2f4a__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 8192; ++__Vi2) {
                vlSelf->hash_verifier__DOT__ct_mem[__Vi0][__Vi1][__Vi2] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18083252958355453523ull);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__h1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1213016976873093910ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__h2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8404935249874181291ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__h3[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1417937298847169339ull);
    }
    vlSelf->hash_verifier__DOT__ch_ct_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3086620306844864785ull);
    vlSelf->hash_verifier__DOT__ch_ct_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18156682161086585907ull);
    vlSelf->hash_verifier__DOT__ch_ct_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8707553074922492826ull);
    vlSelf->hash_verifier__DOT__ch_ct_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10017069810589384382ull);
    vlSelf->hash_verifier__DOT__ch_r_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12566837310930963664ull);
    vlSelf->hash_verifier__DOT__ch_r_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10658322069477390588ull);
    vlSelf->hash_verifier__DOT__ch_r_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15882438922179309377ull);
    vlSelf->hash_verifier__DOT__ch_ct_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9403372419143676214ull);
    vlSelf->hash_verifier__DOT__ch_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10178357035924591623ull);
    vlSelf->hash_verifier__DOT__ch_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7997261847823069608ull);
    vlSelf->hash_verifier__DOT__ch_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8329219958965282426ull);
    vlSelf->hash_verifier__DOT__ch_rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13493796182957654248ull);
    vlSelf->hash_verifier__DOT__pm_a_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1478875856692968202ull);
    vlSelf->hash_verifier__DOT__pm_a_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9357465547568982066ull);
    vlSelf->hash_verifier__DOT__pm_a_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2370512574743313019ull);
    vlSelf->hash_verifier__DOT__pm_b_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4771501163636487623ull);
    vlSelf->hash_verifier__DOT__pm_b_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1810143055672893923ull);
    vlSelf->hash_verifier__DOT__pm_b_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16823748746127250740ull);
    vlSelf->hash_verifier__DOT__pm_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1786814731662930516ull);
    vlSelf->hash_verifier__DOT__pm_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1700078591917823931ull);
    vlSelf->hash_verifier__DOT__pm_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1067023730369963250ull);
    vlSelf->hash_verifier__DOT__pa_a_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4236059589721518095ull);
    vlSelf->hash_verifier__DOT__pa_a_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14772798995958914912ull);
    vlSelf->hash_verifier__DOT__pa_a_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4860654278453322525ull);
    vlSelf->hash_verifier__DOT__pa_b_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13955760273087634243ull);
    vlSelf->hash_verifier__DOT__pa_b_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10230542396320252226ull);
    vlSelf->hash_verifier__DOT__pa_b_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2093610533027492611ull);
    vlSelf->hash_verifier__DOT__pa_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5213791263184894074ull);
    vlSelf->hash_verifier__DOT__pa_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10680130123597425908ull);
    vlSelf->hash_verifier__DOT__pa_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11238073367595301181ull);
    vlSelf->hash_verifier__DOT__pa_rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4736888451995250204ull);
    vlSelf->hash_verifier__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3576686360739086702ull);
    vlSelf->hash_verifier__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 8999371123755510325ull);
    vlSelf->hash_verifier__DOT__comp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2935635943850208699ull);
    vlSelf->hash_verifier__DOT__cmp_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11474205083726291063ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT____Vlvbound_h67fe0f0a__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8192; ++__Vi1) {
            vlSelf->hash_verifier__DOT__u_ch__DOT__ct[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13242640053765893961ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__mem_r[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6722488059271350298ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__mem_h[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13985304167202005474ull);
    }
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_a_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16719866998601473193ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_a_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17248262506170337591ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_a_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9629974344896950777ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_b_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 295519207257795360ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_b_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16868119674451961348ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_b_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6847999716371649236ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3657248790926033714ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8145724206474416518ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pm_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3433408541978168084ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_a_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5440353466538482491ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_a_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 12815606345752011691ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_a_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4552780670508362980ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_b_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7878648205870989707ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_b_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 417749792079813695ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_b_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9052485871105255004ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2705720605062126423ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1565534119171876311ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7881382673666533513ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__pa_rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9242997332646633098ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8629712725570110481ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__horner_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9156232885138190140ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10886447500368148135ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__ct_last = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4441636638896314147ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 203190653470423246ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2646961255638154577ull);
    }
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7554290092520382926ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16877617317500803062ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 772188790058326800ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4378236712406573395ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3056305171655812740ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8633088237445718484ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__int_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3081971632744796382ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4803585253398692966ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3899348665926092083ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10697548622189233628ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4354146647389504492ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9490150105467098096ull);
    }
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7957266762183393743ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3694410054451498180ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 550340452658012453ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9250472531254857954ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 17247680679001375520ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4540726868849674797ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1678619878307367965ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 8960835224563899279ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 541284685913345722ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2643636120464118269ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15129839135066773808ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5097812017463807803ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9850168553564035310ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16346401696826402401ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18254949680371845272ull);
    }
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9434068301602553644ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4465773554283381195ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15761563905443569480ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_pmul__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1776268574043012860ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_pmul__DOT__mem_ntt[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10473293836095787998ull);
    }
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14107438484345328093ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16112995040242059283ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9454503165235066382ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3678610638064296056ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1186130959427309648ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 680794447086656639ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__int_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6579325779928582493ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16862519231066967803ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3015890349949140473ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2680130297339594348ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11160790015074860911ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2424926083526989345ull);
    }
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8707034486672746024ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 582017042570521224ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8707590573495732048ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12789381980797578727ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7609867225773540597ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2691047186039101073ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15989049773424255377ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10756669588797902944ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13410639134354718072ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17149368216750584394ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18092563325181024740ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1910447900070082019ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_padd__DOT__mem_a[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4086473638736055647ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_padd__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6785993607952424001ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_padd__DOT__mem_r[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11073486434273588139ull);
    }
    vlSelf->hash_verifier__DOT__u_padd__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17009947417918212812ull);
    vlSelf->hash_verifier__DOT__u_padd__DOT__idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7746511971461254893ull);
    vlSelf->hash_verifier__DOT__u_padd__DOT__sub_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12584529276687946119ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__Vdly__hash_verifier__DOT__ch_rd_addr = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__ct_mem__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__ct_mem__v0 = 0;
    vlSelf->__VdlyDim1__hash_verifier__DOT__ct_mem__v0 = 0;
    vlSelf->__VdlyDim2__hash_verifier__DOT__ct_mem__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__ct_mem__v0 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0;
    vlSelf->__VdlyDim1__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v1 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v1 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v1 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v0 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v1 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v1 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v1 = 0;
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
