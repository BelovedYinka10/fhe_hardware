// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt.h for the primary calling header

#include "Vntt__pch.h"

void Vntt___024root___eval_triggers_vec__ico(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_triggers_vec__ico\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vntt___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___trigger_anySet__ico\n"); );
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

void Vntt___024root___ico_sequent__TOP__0(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___ico_sequent__TOP__0\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ ntt__DOT__mod_mul__Vstatic__t;
    ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, ntt__DOT__mod_mul__Vstatic__r);
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
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__6__Vfuncout;
    __Vfunc_ntt__DOT__mod_mul__6__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__6__a;
    __Vfunc_ntt__DOT__mod_mul__6__a = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__6__b;
    __Vfunc_ntt__DOT__mod_mul__6__b = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__6__qq;
    __Vfunc_ntt__DOT__mod_mul__6__qq = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<5>/*159:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    // Body
    vlSelfRef.ntt__DOT__cwe_a = 0U;
    vlSelfRef.ntt__DOT__caddr_a = vlSelfRef.ntt__DOT__ua;
    __Vfunc_ntt__DOT__mod_mul__6__qq = vlSelfRef.q;
    __Vfunc_ntt__DOT__mod_mul__6__b = vlSelfRef.n_inv;
    __Vfunc_ntt__DOT__mod_mul__6__a = vlSelfRef.ntt__DOT__cdo_a;
    __Vtemp_2[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__a);
    __Vtemp_2[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__a 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__b);
    __Vtemp_3[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__b 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    ntt__DOT__mod_mul__Vstatic__p[0U] = __Vtemp_4[0U];
    ntt__DOT__mod_mul__Vstatic__p[1U] = __Vtemp_4[1U];
    ntt__DOT__mod_mul__Vstatic__p[2U] = (0x0000ffffU 
                                         & __Vtemp_4[2U]);
    __Vtemp_5[0U] = ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_5[1U] = ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_5[2U] = ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_6[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_6[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_6[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    VL_MUL_W(5, ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_6);
    ntt__DOT__mod_mul__Vstatic__t = (0x000001ffffffffffULL 
                                     & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
    __Vtemp_8[0U] = (IData)(ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_8[1U] = (IData)((ntt__DOT__mod_mul__Vstatic__t 
                             >> 0x00000020U));
    __Vtemp_8[2U] = 0U;
    __Vtemp_9[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__qq);
    __Vtemp_9[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__qq 
                             >> 0x00000020U));
    __Vtemp_9[2U] = 0U;
    VL_MUL_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    ntt__DOT__mod_mul__Vstatic__tq[0U] = __Vtemp_10[0U];
    ntt__DOT__mod_mul__Vstatic__tq[1U] = __Vtemp_10[1U];
    ntt__DOT__mod_mul__Vstatic__tq[2U] = (0x0000ffffU 
                                          & __Vtemp_10[2U]);
    VL_SUB_W(3, __Vtemp_12, ntt__DOT__mod_mul__Vstatic__p, ntt__DOT__mod_mul__Vstatic__tq);
    ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_12[0U];
    ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_12[1U];
    ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                         & __Vtemp_12[2U]);
    __Vtemp_13[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__qq);
    __Vtemp_13[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__qq 
                              >> 0x00000020U));
    __Vtemp_13[2U] = 0U;
    if (VL_GTE_W(3, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_13)) {
        __Vtemp_16[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__qq);
        __Vtemp_16[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        VL_SUB_W(3, __Vtemp_17, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16);
        ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_17[0U];
        ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_17[1U];
        ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                             & __Vtemp_17[2U]);
    }
    __Vfunc_ntt__DOT__mod_mul__6__Vfuncout = (0x000000ffffffffffULL 
                                              & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.ntt__DOT__scaled = __Vfunc_ntt__DOT__mod_mul__6__Vfuncout;
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.ntt__DOT__cdo_a 
                                         + vlSelfRef.q));
    __Vfunc_ntt__DOT__mod_mul__0__qq = vlSelfRef.q;
    __Vfunc_ntt__DOT__mod_mul__0__b = vlSelfRef.ntt__DOT__tdo;
    __Vfunc_ntt__DOT__mod_mul__0__a = vlSelfRef.ntt__DOT__cdo_b;
    __Vtemp_19[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__a);
    __Vtemp_19[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__a 
                              >> 0x00000020U));
    __Vtemp_19[2U] = 0U;
    __Vtemp_20[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__b);
    __Vtemp_20[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__b 
                              >> 0x00000020U));
    __Vtemp_20[2U] = 0U;
    VL_MUL_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    ntt__DOT__mod_mul__Vstatic__p[0U] = __Vtemp_21[0U];
    ntt__DOT__mod_mul__Vstatic__p[1U] = __Vtemp_21[1U];
    ntt__DOT__mod_mul__Vstatic__p[2U] = (0x0000ffffU 
                                         & __Vtemp_21[2U]);
    __Vtemp_22[0U] = ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_22[1U] = ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_22[2U] = ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_22[3U] = 0U;
    __Vtemp_22[4U] = 0U;
    __Vtemp_23[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_23[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_23[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    VL_MUL_W(5, ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_22, __Vtemp_23);
    ntt__DOT__mod_mul__Vstatic__t = (0x000001ffffffffffULL 
                                     & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
    __Vtemp_25[0U] = (IData)(ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_25[1U] = (IData)((ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_25[2U] = 0U;
    __Vtemp_26[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
    __Vtemp_26[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                              >> 0x00000020U));
    __Vtemp_26[2U] = 0U;
    VL_MUL_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    ntt__DOT__mod_mul__Vstatic__tq[0U] = __Vtemp_27[0U];
    ntt__DOT__mod_mul__Vstatic__tq[1U] = __Vtemp_27[1U];
    ntt__DOT__mod_mul__Vstatic__tq[2U] = (0x0000ffffU 
                                          & __Vtemp_27[2U]);
    VL_SUB_W(3, __Vtemp_29, ntt__DOT__mod_mul__Vstatic__p, ntt__DOT__mod_mul__Vstatic__tq);
    ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_29[0U];
    ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_29[1U];
    ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                         & __Vtemp_29[2U]);
    __Vtemp_30[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
    __Vtemp_30[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                              >> 0x00000020U));
    __Vtemp_30[2U] = 0U;
    if (VL_GTE_W(3, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_30)) {
        __Vtemp_33[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
        __Vtemp_33[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                                  >> 0x00000020U));
        __Vtemp_33[2U] = 0U;
        VL_SUB_W(3, __Vtemp_34, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_33);
        ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_34[0U];
        ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_34[1U];
        ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                             & __Vtemp_34[2U]);
    }
    __Vfunc_ntt__DOT__mod_mul__0__Vfuncout = (0x000000ffffffffffULL 
                                              & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[0U]))));
    ntt__DOT__vw = __Vfunc_ntt__DOT__mod_mul__0__Vfuncout;
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.ntt__DOT__cdo_b));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__cdo_a 
                                                   + ntt__DOT__vw));
    __Vfunc_ntt__DOT__mod_mul__5__qq = vlSelfRef.q;
    __Vfunc_ntt__DOT__mod_mul__5__b = vlSelfRef.ntt__DOT__tdo;
    __Vfunc_ntt__DOT__mod_mul__5__a = (0x000000ffffffffffULL 
                                       & ((__VdfgRegularize_hebeb780c_0_4 
                                           >= vlSelfRef.q)
                                           ? (__VdfgRegularize_hebeb780c_0_4 
                                              - vlSelfRef.q)
                                           : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_36[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__a);
    __Vtemp_36[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__a 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    __Vtemp_37[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__b);
    __Vtemp_37[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__b 
                              >> 0x00000020U));
    __Vtemp_37[2U] = 0U;
    VL_MUL_W(3, __Vtemp_38, __Vtemp_36, __Vtemp_37);
    ntt__DOT__mod_mul__Vstatic__p[0U] = __Vtemp_38[0U];
    ntt__DOT__mod_mul__Vstatic__p[1U] = __Vtemp_38[1U];
    ntt__DOT__mod_mul__Vstatic__p[2U] = (0x0000ffffU 
                                         & __Vtemp_38[2U]);
    __Vtemp_39[0U] = ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_39[1U] = ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_39[2U] = ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_39[3U] = 0U;
    __Vtemp_39[4U] = 0U;
    __Vtemp_40[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_40[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_40[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = 0U;
    VL_MUL_W(5, ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_39, __Vtemp_40);
    ntt__DOT__mod_mul__Vstatic__t = (0x000001ffffffffffULL 
                                     & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
    __Vtemp_42[0U] = (IData)(ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_42[1U] = (IData)((ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
    __Vtemp_43[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                              >> 0x00000020U));
    __Vtemp_43[2U] = 0U;
    VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
    ntt__DOT__mod_mul__Vstatic__tq[0U] = __Vtemp_44[0U];
    ntt__DOT__mod_mul__Vstatic__tq[1U] = __Vtemp_44[1U];
    ntt__DOT__mod_mul__Vstatic__tq[2U] = (0x0000ffffU 
                                          & __Vtemp_44[2U]);
    VL_SUB_W(3, __Vtemp_46, ntt__DOT__mod_mul__Vstatic__p, ntt__DOT__mod_mul__Vstatic__tq);
    ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_46[0U];
    ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_46[1U];
    ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                         & __Vtemp_46[2U]);
    __Vtemp_47[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
    __Vtemp_47[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                              >> 0x00000020U));
    __Vtemp_47[2U] = 0U;
    if (VL_GTE_W(3, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_47)) {
        __Vtemp_50[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
        __Vtemp_50[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                                  >> 0x00000020U));
        __Vtemp_50[2U] = 0U;
        VL_SUB_W(3, __Vtemp_51, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_50);
        ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_51[0U];
        ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_51[1U];
        ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                             & __Vtemp_51[2U]);
    }
    __Vfunc_ntt__DOT__mod_mul__5__Vfuncout = (0x000000ffffffffffULL 
                                              & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.ntt__DOT__gs_v = __Vfunc_ntt__DOT__mod_mul__5__Vfuncout;
    vlSelfRef.ntt__DOT__cdi_a = (0x000000ffffffffffULL 
                                 & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                     ? ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                         >= vlSelfRef.q)
                                         ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                            - vlSelfRef.q)
                                         : vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
                                     : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                         >= vlSelfRef.q)
                                         ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                            - vlSelfRef.q)
                                         : vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwe_a = 1U;
                vlSelfRef.ntt__DOT__caddr_a = (0x00001fffU 
                                               & (IData)(vlSelfRef.ntt__DOT__sc_idx));
                vlSelfRef.ntt__DOT__cdi_a = vlSelfRef.ntt__DOT__scaled;
            }
        }
    } else {
        if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwe_a = 1U;
            }
            vlSelfRef.ntt__DOT__caddr_a = (0x00001fffU 
                                           & ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                               ? (IData)(vlSelfRef.ntt__DOT__sc_idx)
                                               : (IData)(vlSelfRef.ntt__DOT__ua)));
        } else {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                if (vlSelfRef.coeff_wr_en) {
                    vlSelfRef.ntt__DOT__cwe_a = 1U;
                }
            }
            vlSelfRef.ntt__DOT__caddr_a = (0x00001fffU 
                                           & ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                               ? (IData)(vlSelfRef.ntt__DOT__ua)
                                               : ((IData)(vlSelfRef.coeff_wr_en)
                                                   ? (IData)(vlSelfRef.coeff_wr_addr)
                                                   : (IData)(vlSelfRef.rd_addr))));
        }
        if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                if (vlSelfRef.coeff_wr_en) {
                    vlSelfRef.ntt__DOT__cdi_a = vlSelfRef.coeff_wr_data;
                }
            }
        }
    }
}

void Vntt___024root___eval_ico(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_ico\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vntt___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vntt___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vntt___024root___eval_phase__ico(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_phase__ico\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vntt___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vntt___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vntt___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vntt___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vntt___024root___eval_triggers_vec__act(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_triggers_vec__act\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

bool Vntt___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___trigger_anySet__act\n"); );
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

void Vntt___024root___nba_sequent__TOP__0(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___nba_sequent__TOP__0\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ ntt__DOT__mod_mul__Vstatic__t;
    ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, ntt__DOT__mod_mul__Vstatic__r);
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
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__6__Vfuncout;
    __Vfunc_ntt__DOT__mod_mul__6__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__6__a;
    __Vfunc_ntt__DOT__mod_mul__6__a = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__6__b;
    __Vfunc_ntt__DOT__mod_mul__6__b = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_mul__6__qq;
    __Vfunc_ntt__DOT__mod_mul__6__qq = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    QData/*39:0*/ __VdlyVal__ntt__DOT__coeff__v0;
    __VdlyVal__ntt__DOT__coeff__v0 = 0;
    SData/*12:0*/ __VdlyDim0__ntt__DOT__coeff__v0;
    __VdlyDim0__ntt__DOT__coeff__v0 = 0;
    CData/*0:0*/ __VdlySet__ntt__DOT__coeff__v0;
    __VdlySet__ntt__DOT__coeff__v0 = 0;
    QData/*39:0*/ __VdlyVal__ntt__DOT__coeff__v1;
    __VdlyVal__ntt__DOT__coeff__v1 = 0;
    SData/*12:0*/ __VdlyDim0__ntt__DOT__coeff__v1;
    __VdlyDim0__ntt__DOT__coeff__v1 = 0;
    CData/*0:0*/ __VdlySet__ntt__DOT__coeff__v1;
    __VdlySet__ntt__DOT__coeff__v1 = 0;
    QData/*39:0*/ __VdlyVal__ntt__DOT__tw__v0;
    __VdlyVal__ntt__DOT__tw__v0 = 0;
    SData/*13:0*/ __VdlyDim0__ntt__DOT__tw__v0;
    __VdlyDim0__ntt__DOT__tw__v0 = 0;
    CData/*0:0*/ __VdlySet__ntt__DOT__tw__v0;
    __VdlySet__ntt__DOT__tw__v0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<5>/*159:0*/ __Vtemp_39;
    VlWide<5>/*159:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    // Body
    __VdlySet__ntt__DOT__tw__v0 = 0U;
    __VdlySet__ntt__DOT__coeff__v0 = 0U;
    __VdlySet__ntt__DOT__coeff__v1 = 0U;
    if (vlSelfRef.tw_wr_en) {
        __VdlyVal__ntt__DOT__tw__v0 = vlSelfRef.tw_wr_data;
        __VdlyDim0__ntt__DOT__tw__v0 = vlSelfRef.tw_wr_addr;
        __VdlySet__ntt__DOT__tw__v0 = 1U;
    }
    if (vlSelfRef.ntt__DOT__cwe_a) {
        __VdlyVal__ntt__DOT__coeff__v0 = vlSelfRef.ntt__DOT__cdi_a;
        __VdlyDim0__ntt__DOT__coeff__v0 = vlSelfRef.ntt__DOT__caddr_a;
        __VdlySet__ntt__DOT__coeff__v0 = 1U;
    }
    if (vlSelfRef.ntt__DOT__cwe_b) {
        __VdlyVal__ntt__DOT__coeff__v1 = (0x000000ffffffffffULL 
                                          & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                              ? vlSelfRef.ntt__DOT__gs_v
                                              : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                                  >= vlSelfRef.q)
                                                  ? 
                                                 (vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                                  - vlSelfRef.q)
                                                  : vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
        __VdlyDim0__ntt__DOT__coeff__v1 = vlSelfRef.ntt__DOT__caddr_b;
        __VdlySet__ntt__DOT__coeff__v1 = 1U;
    }
    vlSelfRef.ntt__DOT__cdo_b = vlSelfRef.ntt__DOT__coeff
        [vlSelfRef.ntt__DOT__caddr_b];
    vlSelfRef.ntt__DOT__cdo_a = vlSelfRef.ntt__DOT__coeff
        [vlSelfRef.ntt__DOT__caddr_a];
    vlSelfRef.ntt__DOT__tdo = vlSelfRef.ntt__DOT__tw
        [(0x00003fffU & (((IData)(vlSelfRef.ntt__DOT__inv_r)
                           ? 0x2000U : 0U) + ((0x00001fffU 
                                               & VL_SHIFTL_III(13,13,13, (IData)(1U), 
                                                               (0x00001fffU 
                                                                & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                                    ? 
                                                                   ((IData)(0x000cU) 
                                                                    - (IData)(vlSelfRef.ntt__DOT__stage))
                                                                    : (IData)(vlSelfRef.ntt__DOT__stage))))) 
                                              + (IData)(vlSelfRef.ntt__DOT__grp))))];
    if (__VdlySet__ntt__DOT__coeff__v0) {
        vlSelfRef.ntt__DOT__coeff[__VdlyDim0__ntt__DOT__coeff__v0] 
            = __VdlyVal__ntt__DOT__coeff__v0;
    }
    if (__VdlySet__ntt__DOT__coeff__v1) {
        vlSelfRef.ntt__DOT__coeff[__VdlyDim0__ntt__DOT__coeff__v1] 
            = __VdlyVal__ntt__DOT__coeff__v1;
    }
    if (__VdlySet__ntt__DOT__tw__v0) {
        vlSelfRef.ntt__DOT__tw[__VdlyDim0__ntt__DOT__tw__v0] 
            = __VdlyVal__ntt__DOT__tw__v0;
    }
    vlSelfRef.rd_data = vlSelfRef.ntt__DOT__cdo_a;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__cdo_a 
                                                   + vlSelfRef.ntt__DOT__cdo_b));
    __Vfunc_ntt__DOT__mod_mul__6__qq = vlSelfRef.q;
    __Vfunc_ntt__DOT__mod_mul__6__b = vlSelfRef.n_inv;
    __Vfunc_ntt__DOT__mod_mul__6__a = vlSelfRef.ntt__DOT__cdo_a;
    __Vtemp_2[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__a);
    __Vtemp_2[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__a 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__b);
    __Vtemp_3[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__b 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    ntt__DOT__mod_mul__Vstatic__p[0U] = __Vtemp_4[0U];
    ntt__DOT__mod_mul__Vstatic__p[1U] = __Vtemp_4[1U];
    ntt__DOT__mod_mul__Vstatic__p[2U] = (0x0000ffffU 
                                         & __Vtemp_4[2U]);
    __Vtemp_5[0U] = ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_5[1U] = ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_5[2U] = ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_6[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_6[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_6[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    VL_MUL_W(5, ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_6);
    ntt__DOT__mod_mul__Vstatic__t = (0x000001ffffffffffULL 
                                     & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
    __Vtemp_8[0U] = (IData)(ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_8[1U] = (IData)((ntt__DOT__mod_mul__Vstatic__t 
                             >> 0x00000020U));
    __Vtemp_8[2U] = 0U;
    __Vtemp_9[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__qq);
    __Vtemp_9[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__qq 
                             >> 0x00000020U));
    __Vtemp_9[2U] = 0U;
    VL_MUL_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    ntt__DOT__mod_mul__Vstatic__tq[0U] = __Vtemp_10[0U];
    ntt__DOT__mod_mul__Vstatic__tq[1U] = __Vtemp_10[1U];
    ntt__DOT__mod_mul__Vstatic__tq[2U] = (0x0000ffffU 
                                          & __Vtemp_10[2U]);
    VL_SUB_W(3, __Vtemp_12, ntt__DOT__mod_mul__Vstatic__p, ntt__DOT__mod_mul__Vstatic__tq);
    ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_12[0U];
    ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_12[1U];
    ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                         & __Vtemp_12[2U]);
    __Vtemp_13[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__qq);
    __Vtemp_13[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__qq 
                              >> 0x00000020U));
    __Vtemp_13[2U] = 0U;
    if (VL_GTE_W(3, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_13)) {
        __Vtemp_16[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__6__qq);
        __Vtemp_16[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__6__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        VL_SUB_W(3, __Vtemp_17, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16);
        ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_17[0U];
        ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_17[1U];
        ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                             & __Vtemp_17[2U]);
    }
    __Vfunc_ntt__DOT__mod_mul__6__Vfuncout = (0x000000ffffffffffULL 
                                              & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.ntt__DOT__scaled = __Vfunc_ntt__DOT__mod_mul__6__Vfuncout;
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.ntt__DOT__cdo_a 
                                         + vlSelfRef.q));
    __Vfunc_ntt__DOT__mod_mul__0__qq = vlSelfRef.q;
    __Vfunc_ntt__DOT__mod_mul__0__b = vlSelfRef.ntt__DOT__tdo;
    __Vfunc_ntt__DOT__mod_mul__0__a = vlSelfRef.ntt__DOT__cdo_b;
    __Vtemp_19[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__a);
    __Vtemp_19[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__a 
                              >> 0x00000020U));
    __Vtemp_19[2U] = 0U;
    __Vtemp_20[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__b);
    __Vtemp_20[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__b 
                              >> 0x00000020U));
    __Vtemp_20[2U] = 0U;
    VL_MUL_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    ntt__DOT__mod_mul__Vstatic__p[0U] = __Vtemp_21[0U];
    ntt__DOT__mod_mul__Vstatic__p[1U] = __Vtemp_21[1U];
    ntt__DOT__mod_mul__Vstatic__p[2U] = (0x0000ffffU 
                                         & __Vtemp_21[2U]);
    __Vtemp_22[0U] = ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_22[1U] = ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_22[2U] = ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_22[3U] = 0U;
    __Vtemp_22[4U] = 0U;
    __Vtemp_23[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_23[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_23[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    VL_MUL_W(5, ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_22, __Vtemp_23);
    ntt__DOT__mod_mul__Vstatic__t = (0x000001ffffffffffULL 
                                     & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
    __Vtemp_25[0U] = (IData)(ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_25[1U] = (IData)((ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_25[2U] = 0U;
    __Vtemp_26[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
    __Vtemp_26[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                              >> 0x00000020U));
    __Vtemp_26[2U] = 0U;
    VL_MUL_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    ntt__DOT__mod_mul__Vstatic__tq[0U] = __Vtemp_27[0U];
    ntt__DOT__mod_mul__Vstatic__tq[1U] = __Vtemp_27[1U];
    ntt__DOT__mod_mul__Vstatic__tq[2U] = (0x0000ffffU 
                                          & __Vtemp_27[2U]);
    VL_SUB_W(3, __Vtemp_29, ntt__DOT__mod_mul__Vstatic__p, ntt__DOT__mod_mul__Vstatic__tq);
    ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_29[0U];
    ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_29[1U];
    ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                         & __Vtemp_29[2U]);
    __Vtemp_30[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
    __Vtemp_30[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                              >> 0x00000020U));
    __Vtemp_30[2U] = 0U;
    if (VL_GTE_W(3, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_30)) {
        __Vtemp_33[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__0__qq);
        __Vtemp_33[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__0__qq 
                                  >> 0x00000020U));
        __Vtemp_33[2U] = 0U;
        VL_SUB_W(3, __Vtemp_34, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_33);
        ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_34[0U];
        ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_34[1U];
        ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                             & __Vtemp_34[2U]);
    }
    __Vfunc_ntt__DOT__mod_mul__0__Vfuncout = (0x000000ffffffffffULL 
                                              & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[0U]))));
    ntt__DOT__vw = __Vfunc_ntt__DOT__mod_mul__0__Vfuncout;
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.ntt__DOT__cdo_b));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__cdo_a 
                                                   + ntt__DOT__vw));
    __Vfunc_ntt__DOT__mod_mul__5__qq = vlSelfRef.q;
    __Vfunc_ntt__DOT__mod_mul__5__b = vlSelfRef.ntt__DOT__tdo;
    __Vfunc_ntt__DOT__mod_mul__5__a = (0x000000ffffffffffULL 
                                       & ((__VdfgRegularize_hebeb780c_0_4 
                                           >= vlSelfRef.q)
                                           ? (__VdfgRegularize_hebeb780c_0_4 
                                              - vlSelfRef.q)
                                           : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_36[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__a);
    __Vtemp_36[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__a 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    __Vtemp_37[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__b);
    __Vtemp_37[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__b 
                              >> 0x00000020U));
    __Vtemp_37[2U] = 0U;
    VL_MUL_W(3, __Vtemp_38, __Vtemp_36, __Vtemp_37);
    ntt__DOT__mod_mul__Vstatic__p[0U] = __Vtemp_38[0U];
    ntt__DOT__mod_mul__Vstatic__p[1U] = __Vtemp_38[1U];
    ntt__DOT__mod_mul__Vstatic__p[2U] = (0x0000ffffU 
                                         & __Vtemp_38[2U]);
    __Vtemp_39[0U] = ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_39[1U] = ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_39[2U] = ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_39[3U] = 0U;
    __Vtemp_39[4U] = 0U;
    __Vtemp_40[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_40[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_40[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = 0U;
    VL_MUL_W(5, ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_39, __Vtemp_40);
    ntt__DOT__mod_mul__Vstatic__t = (0x000001ffffffffffULL 
                                     & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
    __Vtemp_42[0U] = (IData)(ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_42[1U] = (IData)((ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
    __Vtemp_43[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                              >> 0x00000020U));
    __Vtemp_43[2U] = 0U;
    VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
    ntt__DOT__mod_mul__Vstatic__tq[0U] = __Vtemp_44[0U];
    ntt__DOT__mod_mul__Vstatic__tq[1U] = __Vtemp_44[1U];
    ntt__DOT__mod_mul__Vstatic__tq[2U] = (0x0000ffffU 
                                          & __Vtemp_44[2U]);
    VL_SUB_W(3, __Vtemp_46, ntt__DOT__mod_mul__Vstatic__p, ntt__DOT__mod_mul__Vstatic__tq);
    ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_46[0U];
    ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_46[1U];
    ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                         & __Vtemp_46[2U]);
    __Vtemp_47[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
    __Vtemp_47[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                              >> 0x00000020U));
    __Vtemp_47[2U] = 0U;
    if (VL_GTE_W(3, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_47)) {
        __Vtemp_50[0U] = (IData)(__Vfunc_ntt__DOT__mod_mul__5__qq);
        __Vtemp_50[1U] = (IData)((__Vfunc_ntt__DOT__mod_mul__5__qq 
                                  >> 0x00000020U));
        __Vtemp_50[2U] = 0U;
        VL_SUB_W(3, __Vtemp_51, ntt__DOT__mod_mul__Vstatic__r, __Vtemp_50);
        ntt__DOT__mod_mul__Vstatic__r[0U] = __Vtemp_51[0U];
        ntt__DOT__mod_mul__Vstatic__r[1U] = __Vtemp_51[1U];
        ntt__DOT__mod_mul__Vstatic__r[2U] = (0x0000ffffU 
                                             & __Vtemp_51[2U]);
    }
    __Vfunc_ntt__DOT__mod_mul__5__Vfuncout = (0x000000ffffffffffULL 
                                              & (((QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.ntt__DOT__gs_v = __Vfunc_ntt__DOT__mod_mul__5__Vfuncout;
}

void Vntt___024root___nba_sequent__TOP__1(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___nba_sequent__TOP__1\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ ntt__DOT__ts;
    ntt__DOT__ts = 0;
    SData/*12:0*/ ntt__DOT__va;
    ntt__DOT__va = 0;
    CData/*2:0*/ __Vdly__ntt__DOT__state;
    __Vdly__ntt__DOT__state = 0;
    SData/*12:0*/ __Vdly__ntt__DOT__k;
    __Vdly__ntt__DOT__k = 0;
    // Body
    __Vdly__ntt__DOT__state = vlSelfRef.ntt__DOT__state;
    __Vdly__ntt__DOT__k = vlSelfRef.ntt__DOT__k;
    if (vlSelfRef.rst_n) {
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
                __Vdly__ntt__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                vlSelfRef.done = 1U;
                __Vdly__ntt__DOT__state = 0U;
            } else if ((0x1fffU == (IData)(vlSelfRef.ntt__DOT__sc_idx))) {
                __Vdly__ntt__DOT__state = 5U;
            } else {
                vlSelfRef.ntt__DOT__sc_idx = (0x00003fffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.ntt__DOT__sc_idx)));
                __Vdly__ntt__DOT__state = 3U;
            }
        } else if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                __Vdly__ntt__DOT__state = 4U;
            } else if ((0x0fffU == (IData)(vlSelfRef.ntt__DOT__k))) {
                __Vdly__ntt__DOT__k = 0U;
                if ((0x000cU == (IData)(vlSelfRef.ntt__DOT__stage))) {
                    vlSelfRef.ntt__DOT__sc_idx = 0U;
                    __Vdly__ntt__DOT__state = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                ? 3U
                                                : 5U);
                } else {
                    vlSelfRef.ntt__DOT__stage = (0x00001fffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.ntt__DOT__stage)));
                    __Vdly__ntt__DOT__state = 1U;
                }
            } else {
                __Vdly__ntt__DOT__k = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ntt__DOT__k)));
                __Vdly__ntt__DOT__state = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
            __Vdly__ntt__DOT__state = 2U;
        } else {
            vlSelfRef.done = 0U;
            if (vlSelfRef.start) {
                vlSelfRef.ntt__DOT__stage = 0U;
                __Vdly__ntt__DOT__k = 0U;
                vlSelfRef.ntt__DOT__inv_r = vlSelfRef.inverse;
                __Vdly__ntt__DOT__state = 1U;
            }
        }
    } else {
        vlSelfRef.ntt__DOT__stage = 0U;
        vlSelfRef.ntt__DOT__sc_idx = 0U;
        __Vdly__ntt__DOT__state = 0U;
        vlSelfRef.done = 0U;
        __Vdly__ntt__DOT__k = 0U;
        vlSelfRef.ntt__DOT__inv_r = 0U;
    }
    vlSelfRef.ntt__DOT__state = __Vdly__ntt__DOT__state;
    vlSelfRef.ntt__DOT__k = __Vdly__ntt__DOT__k;
    vlSelfRef.ntt__DOT__cwe_b = 0U;
    vlSelfRef.ntt__DOT__cwe_a = 0U;
    ntt__DOT__ts = (0x00001fffU & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                    ? (IData)(vlSelfRef.ntt__DOT__stage)
                                    : ((IData)(0x000cU) 
                                       - (IData)(vlSelfRef.ntt__DOT__stage))));
    vlSelfRef.ntt__DOT__grp = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.ntt__DOT__k), (IData)(ntt__DOT__ts));
    vlSelfRef.ntt__DOT__ua = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.ntt__DOT__grp), 
                                                           (0x00001fffU 
                                                            & ((IData)(1U) 
                                                               + (IData)(ntt__DOT__ts)))) 
                                             | ((IData)(vlSelfRef.ntt__DOT__k) 
                                                & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(ntt__DOT__ts)) 
                                                   - (IData)(1U)))));
    vlSelfRef.ntt__DOT__caddr_a = vlSelfRef.ntt__DOT__ua;
    if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwe_a = 1U;
                vlSelfRef.ntt__DOT__caddr_a = (0x00001fffU 
                                               & (IData)(vlSelfRef.ntt__DOT__sc_idx));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
            vlSelfRef.ntt__DOT__cwe_a = 1U;
        }
        vlSelfRef.ntt__DOT__caddr_a = (0x00001fffU 
                                       & ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                           ? (IData)(vlSelfRef.ntt__DOT__sc_idx)
                                           : (IData)(vlSelfRef.ntt__DOT__ua)));
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
            if (vlSelfRef.coeff_wr_en) {
                vlSelfRef.ntt__DOT__cwe_a = 1U;
            }
        }
        vlSelfRef.ntt__DOT__caddr_a = (0x00001fffU 
                                       & ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                           ? (IData)(vlSelfRef.ntt__DOT__ua)
                                           : ((IData)(vlSelfRef.coeff_wr_en)
                                               ? (IData)(vlSelfRef.coeff_wr_addr)
                                               : (IData)(vlSelfRef.rd_addr))));
    }
    ntt__DOT__va = (0x00001fffU & ((IData)(vlSelfRef.ntt__DOT__ua) 
                                   | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(ntt__DOT__ts))));
    vlSelfRef.ntt__DOT__caddr_b = ntt__DOT__va;
    if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwe_b = 1U;
                vlSelfRef.ntt__DOT__caddr_b = ntt__DOT__va;
            }
        } else if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
            vlSelfRef.ntt__DOT__caddr_b = ntt__DOT__va;
        }
    }
}

void Vntt___024root___nba_comb__TOP__0(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___nba_comb__TOP__0\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ntt__DOT__cdi_a = (0x000000ffffffffffULL 
                                 & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                     ? ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                         >= vlSelfRef.q)
                                         ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                            - vlSelfRef.q)
                                         : vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
                                     : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                         >= vlSelfRef.q)
                                         ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                            - vlSelfRef.q)
                                         : vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
    if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cdi_a = vlSelfRef.ntt__DOT__scaled;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
            if (vlSelfRef.coeff_wr_en) {
                vlSelfRef.ntt__DOT__cdi_a = vlSelfRef.coeff_wr_data;
            }
        }
    }
}

void Vntt___024root___eval_nba(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_nba\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vntt___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vntt___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.ntt__DOT__cdi_a = (0x000000ffffffffffULL 
                                     & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                         ? ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                             >= vlSelfRef.q)
                                             ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                                - vlSelfRef.q)
                                             : vlSelfRef.__VdfgRegularize_hebeb780c_0_3)
                                         : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                             >= vlSelfRef.q)
                                             ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                - vlSelfRef.q)
                                             : vlSelfRef.__VdfgRegularize_hebeb780c_0_0)));
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    vlSelfRef.ntt__DOT__cdi_a = vlSelfRef.ntt__DOT__scaled;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                if (vlSelfRef.coeff_wr_en) {
                    vlSelfRef.ntt__DOT__cdi_a = vlSelfRef.coeff_wr_data;
                }
            }
        }
    }
}

void Vntt___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vntt___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vntt___024root___eval_phase__act(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_phase__act\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vntt___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vntt___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vntt___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vntt___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vntt___024root___eval_phase__nba(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_phase__nba\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vntt___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vntt___024root___eval_nba(vlSelf);
        Vntt___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vntt___024root___eval(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vntt___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("ntt.v", 33, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vntt___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vntt___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("ntt.v", 33, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vntt___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("ntt.v", 33, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vntt___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vntt___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vntt___024root___eval_debug_assertions(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_debug_assertions\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.q & 0ULL)))) {
        Verilated::overWidthError("q");
    }
    if (VL_UNLIKELY(((vlSelfRef.n_inv & 0ULL)))) {
        Verilated::overWidthError("n_inv");
    }
    if (VL_UNLIKELY(((vlSelfRef.barrett_m[2U] & 0xffff0000U)))) {
        Verilated::overWidthError("barrett_m");
    }
    if (VL_UNLIKELY(((vlSelfRef.coeff_wr_en & 0xfeU)))) {
        Verilated::overWidthError("coeff_wr_en");
    }
    if (VL_UNLIKELY(((vlSelfRef.coeff_wr_addr & 0xe000U)))) {
        Verilated::overWidthError("coeff_wr_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.coeff_wr_data & 0ULL)))) {
        Verilated::overWidthError("coeff_wr_data");
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
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");
    }
    if (VL_UNLIKELY(((vlSelfRef.inverse & 0xfeU)))) {
        Verilated::overWidthError("inverse");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd_addr & 0xe000U)))) {
        Verilated::overWidthError("rd_addr");
    }
}
#endif  // VL_DEBUG
