// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhash_verifier.h for the primary calling header

#include "Vhash_verifier__pch.h"

void Vhash_verifier___024root___eval_triggers_vec__ico(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_triggers_vec__ico\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vhash_verifier___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___trigger_anySet__ico\n"); );
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

void Vhash_verifier___024root___ico_sequent__TOP__0(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___ico_sequent__TOP__0\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = 0;
    QData/*39:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_56;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    // Body
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_2[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a);
    __Vtemp_2[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b);
    __Vtemp_3[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_4[2U]);
    __Vtemp_5[0U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_5[1U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_5[2U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_6[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_6[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_6[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_6);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_8[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_8[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                             >> 0x00000020U));
    __Vtemp_8[2U] = 0U;
    __Vtemp_9[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq);
    __Vtemp_9[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq 
                             >> 0x00000020U));
    __Vtemp_9[2U] = 0U;
    VL_MUL_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_10[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_10[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_10[2U]);
    VL_SUB_W(3, __Vtemp_12, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_12[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_12[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_12[2U]);
    __Vtemp_13[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq);
    __Vtemp_13[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq 
                              >> 0x00000020U));
    __Vtemp_13[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_13)) {
        __Vtemp_16[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq);
        __Vtemp_16[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        VL_SUB_W(3, __Vtemp_17, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16);
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_17[0U];
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_17[1U];
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_17[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw 
        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_19[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a);
    __Vtemp_19[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a 
                              >> 0x00000020U));
    __Vtemp_19[2U] = 0U;
    __Vtemp_20[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b);
    __Vtemp_20[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b 
                              >> 0x00000020U));
    __Vtemp_20[2U] = 0U;
    VL_MUL_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_21[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_21[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_21[2U]);
    __Vtemp_22[0U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_22[1U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_22[2U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_22[3U] = 0U;
    __Vtemp_22[4U] = 0U;
    __Vtemp_23[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_23[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_23[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_22, __Vtemp_23);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_25[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_25[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_25[2U] = 0U;
    __Vtemp_26[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq);
    __Vtemp_26[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq 
                              >> 0x00000020U));
    __Vtemp_26[2U] = 0U;
    VL_MUL_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_27[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_27[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_27[2U]);
    VL_SUB_W(3, __Vtemp_29, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_29[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_29[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_29[2U]);
    __Vtemp_30[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq);
    __Vtemp_30[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq 
                              >> 0x00000020U));
    __Vtemp_30[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_30)) {
        __Vtemp_33[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq);
        __Vtemp_33[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq 
                                  >> 0x00000020U));
        __Vtemp_33[2U] = 0U;
        VL_SUB_W(3, __Vtemp_34, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_33);
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_34[0U];
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_34[1U];
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_34[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw 
        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__Vfuncout;
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + vlSelfRef.q));
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + vlSelfRef.q));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_4 
                                     >= vlSelfRef.q)
                                     ? (__VdfgRegularize_hebeb780c_0_4 
                                        - vlSelfRef.q)
                                     : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_36[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a);
    __Vtemp_36[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    __Vtemp_37[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b);
    __Vtemp_37[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b 
                              >> 0x00000020U));
    __Vtemp_37[2U] = 0U;
    VL_MUL_W(3, __Vtemp_38, __Vtemp_36, __Vtemp_37);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_38[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_38[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_38[2U]);
    __Vtemp_39[0U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_39[1U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_39[2U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_39[3U] = 0U;
    __Vtemp_39[4U] = 0U;
    __Vtemp_40[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_40[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_40[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_39, __Vtemp_40);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_42[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_42[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq);
    __Vtemp_43[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq 
                              >> 0x00000020U));
    __Vtemp_43[2U] = 0U;
    VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_44[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_44[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_44[2U]);
    VL_SUB_W(3, __Vtemp_46, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_46[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_46[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_46[2U]);
    __Vtemp_47[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq);
    __Vtemp_47[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq 
                              >> 0x00000020U));
    __Vtemp_47[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_47)) {
        __Vtemp_50[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq);
        __Vtemp_50[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq 
                                  >> 0x00000020U));
        __Vtemp_50[2U] = 0U;
        VL_SUB_W(3, __Vtemp_51, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_50);
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_51[0U];
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_51[1U];
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_51[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_9 
                                     >= vlSelfRef.q)
                                     ? (__VdfgRegularize_hebeb780c_0_9 
                                        - vlSelfRef.q)
                                     : __VdfgRegularize_hebeb780c_0_9));
    __Vtemp_53[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a);
    __Vtemp_53[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a 
                              >> 0x00000020U));
    __Vtemp_53[2U] = 0U;
    __Vtemp_54[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b);
    __Vtemp_54[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b 
                              >> 0x00000020U));
    __Vtemp_54[2U] = 0U;
    VL_MUL_W(3, __Vtemp_55, __Vtemp_53, __Vtemp_54);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_55[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_55[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    __Vtemp_56[0U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_56[1U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_56[2U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_56[3U] = 0U;
    __Vtemp_56[4U] = 0U;
    __Vtemp_57[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_57[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_57[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_57[3U] = 0U;
    __Vtemp_57[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_56, __Vtemp_57);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_59[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_59[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_59[2U] = 0U;
    __Vtemp_60[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq);
    __Vtemp_60[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq 
                              >> 0x00000020U));
    __Vtemp_60[2U] = 0U;
    VL_MUL_W(3, __Vtemp_61, __Vtemp_59, __Vtemp_60);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_61[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_61[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_61[2U]);
    VL_SUB_W(3, __Vtemp_63, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_63[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_63[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_63[2U]);
    __Vtemp_64[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq);
    __Vtemp_64[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq 
                              >> 0x00000020U));
    __Vtemp_64[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_64)) {
        __Vtemp_67[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq);
        __Vtemp_67[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq 
                                  >> 0x00000020U));
        __Vtemp_67[2U] = 0U;
        VL_SUB_W(3, __Vtemp_68, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_67);
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_68[0U];
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_68[1U];
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_68[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__Vfuncout;
}

void Vhash_verifier___024root___eval_ico(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_ico\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vhash_verifier___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhash_verifier___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vhash_verifier___024root___eval_phase__ico(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_phase__ico\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vhash_verifier___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhash_verifier___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vhash_verifier___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vhash_verifier___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vhash_verifier___024root___eval_triggers_vec__act(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_triggers_vec__act\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

bool Vhash_verifier___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___trigger_anySet__act\n"); );
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

void Vhash_verifier___024root___nba_sequent__TOP__0(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___nba_sequent__TOP__0\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__hash_verifier__DOT__ct_mem__v0 = 0U;
    vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0U;
    if (vlSelfRef.ct_wr_en) {
        vlSelfRef.hash_verifier__DOT____Vlvbound_h957a2f4a__0 
            = vlSelfRef.ct_wr_data;
        if (((2U >= (IData)(vlSelfRef.ct_sel)) && (2U 
                                                   >= (IData)(vlSelfRef.ct_id)))) {
            vlSelfRef.__VdlyVal__hash_verifier__DOT__ct_mem__v0 
                = vlSelfRef.hash_verifier__DOT____Vlvbound_h957a2f4a__0;
            vlSelfRef.__VdlyDim0__hash_verifier__DOT__ct_mem__v0 
                = vlSelfRef.ct_wr_addr;
            vlSelfRef.__VdlyDim1__hash_verifier__DOT__ct_mem__v0 
                = vlSelfRef.ct_sel;
            vlSelfRef.__VdlyDim2__hash_verifier__DOT__ct_mem__v0 
                = vlSelfRef.ct_id;
            vlSelfRef.__VdlySet__hash_verifier__DOT__ct_mem__v0 = 1U;
        }
    }
    if (vlSelfRef.hash_verifier__DOT__ch_ct_wr_en) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT____Vlvbound_h67fe0f0a__0 
            = vlSelfRef.hash_verifier__DOT__ch_ct_wr_data;
        if ((2U >= (IData)(vlSelfRef.hash_verifier__DOT__ch_ct_sel))) {
            vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__ct__v0 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT____Vlvbound_h67fe0f0a__0;
            vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__ct__v0 
                = vlSelfRef.hash_verifier__DOT__ch_ct_wr_addr;
            vlSelfRef.__VdlyDim1__hash_verifier__DOT__u_ch__DOT__ct__v0 
                = vlSelfRef.hash_verifier__DOT__ch_ct_sel;
            vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0 = 1U;
        }
    }
}

void Vhash_verifier___024root___nba_sequent__TOP__1(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___nba_sequent__TOP__1\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
    SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp = 0;
    QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = 0;
    SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
    SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp = 0;
    QData/*39:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__qq = 0;
    QData/*40:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__d;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__d = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__qq = 0;
    QData/*40:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__s;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__s = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__a;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__b;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__qq;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__qq = 0;
    QData/*40:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__d;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__d = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__a;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__b;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__qq;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__qq = 0;
    QData/*40:0*/ __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__s;
    __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__s = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__pm_start;
    __Vdly__hash_verifier__DOT__pm_start = 0;
    CData/*3:0*/ __Vdly__hash_verifier__DOT__state;
    __Vdly__hash_verifier__DOT__state = 0;
    SData/*13:0*/ __Vdly__hash_verifier__DOT__idx;
    __Vdly__hash_verifier__DOT__idx = 0;
    CData/*1:0*/ __Vdly__hash_verifier__DOT__comp_i;
    __Vdly__hash_verifier__DOT__comp_i = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__pm_start;
    __Vdly__hash_verifier__DOT__u_ch__DOT__pm_start = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__ch_done;
    __Vdly__hash_verifier__DOT__ch_done = 0;
    CData/*3:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__state;
    __Vdly__hash_verifier__DOT__u_ch__DOT__state = 0;
    CData/*1:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__horner_i;
    __Vdly__hash_verifier__DOT__u_ch__DOT__horner_i = 0;
    SData/*13:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__idx;
    __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0;
    CData/*2:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 0;
    SData/*13:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx = 0;
    QData/*39:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data = 0;
    CData/*2:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done = 0;
    SData/*12:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = 0;
    QData/*39:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__pa_rd_data;
    __Vdly__hash_verifier__DOT__u_ch__DOT__pa_rd_data = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__pa_done;
    __Vdly__hash_verifier__DOT__u_ch__DOT__pa_done = 0;
    SData/*12:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r = 0;
    CData/*1:0*/ __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state = 0;
    CData/*2:0*/ __Vdly__hash_verifier__DOT__u_pmul__DOT__state;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 0;
    SData/*13:0*/ __Vdly__hash_verifier__DOT__u_pmul__DOT__idx;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__idx = 0;
    QData/*39:0*/ __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_rd_data;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_rd_data = 0;
    CData/*2:0*/ __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_done;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_done = 0;
    SData/*12:0*/ __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k = 0;
    QData/*39:0*/ __Vdly__hash_verifier__DOT__pa_rd_data;
    __Vdly__hash_verifier__DOT__pa_rd_data = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__pa_done;
    __Vdly__hash_verifier__DOT__pa_done = 0;
    SData/*12:0*/ __Vdly__hash_verifier__DOT__u_padd__DOT__idx;
    __Vdly__hash_verifier__DOT__u_padd__DOT__idx = 0;
    CData/*0:0*/ __Vdly__hash_verifier__DOT__u_padd__DOT__sub_r;
    __Vdly__hash_verifier__DOT__u_padd__DOT__sub_r = 0;
    CData/*1:0*/ __Vdly__hash_verifier__DOT__u_padd__DOT__state;
    __Vdly__hash_verifier__DOT__u_padd__DOT__state = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__h3__v0;
    __VdlyVal__hash_verifier__DOT__h3__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__h3__v0;
    __VdlyDim0__hash_verifier__DOT__h3__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__h3__v0;
    __VdlySet__hash_verifier__DOT__h3__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__h2__v0;
    __VdlyVal__hash_verifier__DOT__h2__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__h2__v0;
    __VdlyDim0__hash_verifier__DOT__h2__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__h2__v0;
    __VdlySet__hash_verifier__DOT__h2__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__h1__v0;
    __VdlyVal__hash_verifier__DOT__h1__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__h1__v0;
    __VdlyDim0__hash_verifier__DOT__h1__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__h1__v0;
    __VdlySet__hash_verifier__DOT__h1__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    SData/*13:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0;
    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0;
    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_b__v0;
    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_b__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_b__v0;
    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_b__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_b__v0;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_b__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    SData/*13:0*/ __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1;
    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1;
    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2;
    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2;
    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3;
    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3;
    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_r__v0;
    __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_r__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_r__v0;
    __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_r__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_r__v0;
    __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_r__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_a__v0;
    __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_a__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_a__v0;
    __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_a__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_a__v0;
    __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_a__v0 = 0;
    QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_b__v0;
    __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_b__v0 = 0;
    SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_b__v0;
    __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_b__v0 = 0;
    CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_b__v0;
    __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_b__v0 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<5>/*159:0*/ __Vtemp_56;
    VlWide<5>/*159:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<5>/*159:0*/ __Vtemp_73;
    VlWide<5>/*159:0*/ __Vtemp_74;
    VlWide<3>/*95:0*/ __Vtemp_76;
    VlWide<3>/*95:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_80;
    VlWide<3>/*95:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<3>/*95:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<5>/*159:0*/ __Vtemp_90;
    VlWide<5>/*159:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_94;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_98;
    VlWide<3>/*95:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_102;
    VlWide<3>/*95:0*/ __Vtemp_104;
    VlWide<3>/*95:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_106;
    VlWide<5>/*159:0*/ __Vtemp_107;
    VlWide<5>/*159:0*/ __Vtemp_108;
    VlWide<3>/*95:0*/ __Vtemp_110;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_118;
    VlWide<3>/*95:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_122;
    VlWide<3>/*95:0*/ __Vtemp_123;
    VlWide<5>/*159:0*/ __Vtemp_124;
    VlWide<5>/*159:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    VlWide<3>/*95:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_136;
    // Body
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0U;
    vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0 = 0U;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__state 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__idx = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 0U;
    __Vdly__hash_verifier__DOT__pm_start = vlSelfRef.hash_verifier__DOT__pm_start;
    __Vdly__hash_verifier__DOT__state = vlSelfRef.hash_verifier__DOT__state;
    __Vdly__hash_verifier__DOT__idx = vlSelfRef.hash_verifier__DOT__idx;
    vlSelfRef.__Vdly__hash_verifier__DOT__ch_rd_addr 
        = vlSelfRef.hash_verifier__DOT__ch_rd_addr;
    __Vdly__hash_verifier__DOT__comp_i = vlSelfRef.hash_verifier__DOT__comp_i;
    __VdlySet__hash_verifier__DOT__h3__v0 = 0U;
    __VdlySet__hash_verifier__DOT__h2__v0 = 0U;
    __VdlySet__hash_verifier__DOT__h1__v0 = 0U;
    __Vdly__hash_verifier__DOT__u_ch__DOT__pm_start 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_start;
    __Vdly__hash_verifier__DOT__ch_done = vlSelfRef.hash_verifier__DOT__ch_done;
    __Vdly__hash_verifier__DOT__u_ch__DOT__state = vlSelfRef.hash_verifier__DOT__u_ch__DOT__state;
    __Vdly__hash_verifier__DOT__u_ch__DOT__horner_i 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__horner_i;
    __Vdly__hash_verifier__DOT__u_ch__DOT__idx = vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx;
    vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v1 = 0U;
    vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v0 = 0U;
    vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v1 = 0U;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_b__v0 = 0U;
    __Vdly__hash_verifier__DOT__pa_rd_data = vlSelfRef.hash_verifier__DOT__pa_rd_data;
    __Vdly__hash_verifier__DOT__pa_done = vlSelfRef.hash_verifier__DOT__pa_done;
    __Vdly__hash_verifier__DOT__u_padd__DOT__idx = vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx;
    __Vdly__hash_verifier__DOT__u_padd__DOT__sub_r 
        = vlSelfRef.hash_verifier__DOT__u_padd__DOT__sub_r;
    __Vdly__hash_verifier__DOT__u_padd__DOT__state 
        = vlSelfRef.hash_verifier__DOT__u_padd__DOT__state;
    __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_r__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_a__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_b__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0U;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_rd_data 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_rd_data;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_done 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_done;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0U;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 0U;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 0U;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k;
    __Vdly__hash_verifier__DOT__u_ch__DOT__pa_rd_data 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_rd_data;
    __Vdly__hash_verifier__DOT__u_ch__DOT__pa_done 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_done;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0U;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0U;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 0U;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 0U;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k;
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.tw_wr_en) {
            __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tw_wr_data;
            __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tw_wr_addr;
            __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 1U;
            __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tw_wr_data;
            __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tw_wr_addr;
            __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 1U;
        }
        if (vlSelfRef.hash_verifier__DOT__pm_b_wr_en) {
            __VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_b__v0 
                = vlSelfRef.hash_verifier__DOT__pm_b_wr_data;
            __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_b__v0 
                = vlSelfRef.hash_verifier__DOT__pm_b_wr_addr;
            __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_b__v0 = 1U;
        }
    }
    if (vlSelfRef.rst_n) {
        __Vdly__hash_verifier__DOT__pa_rd_data = vlSelfRef.hash_verifier__DOT__u_padd__DOT__mem_r
            [vlSelfRef.hash_verifier__DOT__pa_rd_addr];
        if ((0U == (IData)(vlSelfRef.hash_verifier__DOT__u_padd__DOT__state))) {
            __Vdly__hash_verifier__DOT__pa_done = 0U;
            if (vlSelfRef.hash_verifier__DOT__pa_start) {
                __Vdly__hash_verifier__DOT__u_padd__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__u_padd__DOT__sub_r = 0U;
                __Vdly__hash_verifier__DOT__u_padd__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.hash_verifier__DOT__u_padd__DOT__state))) {
            __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_r__v0 
                = ((IData)(vlSelfRef.hash_verifier__DOT__u_padd__DOT__sub_r)
                    ? ([&]() {
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__qq 
                            = vlSelfRef.q;
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__b 
                            = vlSelfRef.hash_verifier__DOT__u_padd__DOT__mem_b
                            [vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx];
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__a 
                            = vlSelfRef.hash_verifier__DOT__u_padd__DOT__mem_a
                            [vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx];
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__d 
                            = (0x000001ffffffffffULL 
                               & ((__Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__a 
                                   + __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__qq) 
                                  - __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__b));
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__Vfuncout 
                            = (0x000000ffffffffffULL 
                               & ((__Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__d 
                                   >= __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__qq)
                                   ? (__Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__d 
                                      - __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__qq)
                                   : __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__d));
                    }(), __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_sub__18__Vfuncout)
                    : ([&]() {
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__qq 
                            = vlSelfRef.q;
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__b 
                            = vlSelfRef.hash_verifier__DOT__u_padd__DOT__mem_b
                            [vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx];
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__a 
                            = vlSelfRef.hash_verifier__DOT__u_padd__DOT__mem_a
                            [vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx];
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__s 
                            = (0x000001ffffffffffULL 
                               & (__Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__a 
                                  + __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__b));
                        __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__Vfuncout 
                            = (0x000000ffffffffffULL 
                               & ((__Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__s 
                                   >= __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__qq)
                                   ? (__Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__s 
                                      - __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__qq)
                                   : __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__s));
                    }(), __Vfunc_hash_verifier__DOT__u_padd__DOT__mod_add__19__Vfuncout));
            __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_r__v0 
                = vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx;
            __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_r__v0 = 1U;
            if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx))) {
                __Vdly__hash_verifier__DOT__u_padd__DOT__state = 2U;
            } else {
                __Vdly__hash_verifier__DOT__u_padd__DOT__idx 
                    = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx)));
            }
        } else if ((2U == (IData)(vlSelfRef.hash_verifier__DOT__u_padd__DOT__state))) {
            __Vdly__hash_verifier__DOT__pa_done = 1U;
            __Vdly__hash_verifier__DOT__u_padd__DOT__state = 0U;
        } else {
            __Vdly__hash_verifier__DOT__u_padd__DOT__state = 0U;
        }
        if (vlSelfRef.hash_verifier__DOT__pa_a_wr_en) {
            __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_a__v0 
                = vlSelfRef.hash_verifier__DOT__pa_a_wr_data;
            __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_a__v0 
                = vlSelfRef.hash_verifier__DOT__pa_a_wr_addr;
            __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_a__v0 = 1U;
        }
        if (vlSelfRef.hash_verifier__DOT__pa_b_wr_en) {
            __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_b__v0 
                = vlSelfRef.hash_verifier__DOT__pa_b_wr_data;
            __VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_b__v0 
                = vlSelfRef.hash_verifier__DOT__pa_b_wr_addr;
            __VdlySet__hash_verifier__DOT__u_padd__DOT__mem_b__v0 = 1U;
        }
    } else {
        __Vdly__hash_verifier__DOT__u_padd__DOT__state = 0U;
        __Vdly__hash_verifier__DOT__pa_done = 0U;
        __Vdly__hash_verifier__DOT__u_padd__DOT__idx = 0U;
        __Vdly__hash_verifier__DOT__u_padd__DOT__sub_r = 0U;
        __Vdly__hash_verifier__DOT__pa_rd_data = 0ULL;
    }
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_en) {
            __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_data;
            __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_addr;
            __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 1U;
        }
    }
    if (vlSelfRef.rst_n) {
        __Vdly__hash_verifier__DOT__u_ch__DOT__pa_rd_data 
            = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r
            [vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_rd_addr];
        if ((0U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state))) {
            __Vdly__hash_verifier__DOT__u_ch__DOT__pa_done = 0U;
            if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_start) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r = 0U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state))) {
            __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 
                = ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r)
                    ? ([&]() {
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__qq 
                            = vlSelfRef.q;
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__b 
                            = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b
                            [vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx];
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__a 
                            = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a
                            [vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx];
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__d 
                            = (0x000001ffffffffffULL 
                               & ((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__a 
                                   + __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__qq) 
                                  - __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__b));
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__Vfuncout 
                            = (0x000000ffffffffffULL 
                               & ((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__d 
                                   >= __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__qq)
                                   ? (__Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__d 
                                      - __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__qq)
                                   : __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__d));
                    }(), __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_sub__8__Vfuncout)
                    : ([&]() {
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__qq 
                            = vlSelfRef.q;
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__b 
                            = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b
                            [vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx];
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__a 
                            = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a
                            [vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx];
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__s 
                            = (0x000001ffffffffffULL 
                               & (__Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__a 
                                  + __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__b));
                        __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__Vfuncout 
                            = (0x000000ffffffffffULL 
                               & ((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__s 
                                   >= __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__qq)
                                   ? (__Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__s 
                                      - __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__qq)
                                   : __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__s));
                    }(), __Vfunc_hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mod_add__9__Vfuncout));
            __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx;
            __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 1U;
            if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx))) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state = 2U;
            } else {
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx 
                    = (0x00001fffU & ((IData)(1U) + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx)));
            }
        } else if ((2U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state))) {
            __Vdly__hash_verifier__DOT__u_ch__DOT__pa_done = 1U;
            __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state = 0U;
        } else {
            __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state = 0U;
        }
        if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_a_wr_en) {
            __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_a_wr_data;
            __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_a_wr_addr;
            __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0 = 1U;
        }
        if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_b_wr_en) {
            __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_b_wr_data;
            __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_b_wr_addr;
            __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0 = 1U;
        }
    } else {
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__pa_done = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__pa_rd_data = 0ULL;
    }
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
             | ((IData)(vlSelfRef.hash_verifier__DOT__pm_a_wr_en) 
                | (IData)(vlSelfRef.hash_verifier__DOT__pm_b_wr_en)))) {
            if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en) {
                __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_data;
                __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr;
            } else if (vlSelfRef.hash_verifier__DOT__pm_a_wr_en) {
                __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__pm_a_wr_data;
                __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__pm_a_wr_addr;
            } else {
                __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__pm_b_wr_data;
                __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__pm_b_wr_addr;
            }
            __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 1U;
        }
        __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_rd_data 
            = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff
            [(((2U == (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state)) 
               | (5U == (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state)))
               ? (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__int_rd_addr)
               : (IData)(vlSelfRef.hash_verifier__DOT__pm_rd_addr))];
        if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else {
                __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_done = 1U;
                __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx))) {
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq 
                        = vlSelfRef.q;
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__b 
                        = vlSelfRef.n_inv;
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__a 
                        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff
                        [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx))];
                    __Vtemp_2[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__a);
                    __Vtemp_2[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__a 
                                             >> 0x00000020U));
                    __Vtemp_2[2U] = 0U;
                    __Vtemp_3[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__b);
                    __Vtemp_3[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__b 
                                             >> 0x00000020U));
                    __Vtemp_3[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
                        = __Vtemp_4[0U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
                        = __Vtemp_4[1U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
                        = (0x0000ffffU & __Vtemp_4[2U]);
                    __Vtemp_5[0U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
                    __Vtemp_5[1U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
                    __Vtemp_5[2U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
                    __Vtemp_5[3U] = 0U;
                    __Vtemp_5[4U] = 0U;
                    __Vtemp_6[0U] = vlSelfRef.barrett_m[0U];
                    __Vtemp_6[1U] = vlSelfRef.barrett_m[1U];
                    __Vtemp_6[2U] = vlSelfRef.barrett_m[2U];
                    __Vtemp_6[3U] = 0U;
                    __Vtemp_6[4U] = 0U;
                    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_6);
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                        = (0x000001ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                             << 0x00000010U) | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                                >> 0x00000010U)));
                    __Vtemp_8[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
                    __Vtemp_8[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                                             >> 0x00000020U));
                    __Vtemp_8[2U] = 0U;
                    __Vtemp_9[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq);
                    __Vtemp_9[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq 
                                             >> 0x00000020U));
                    __Vtemp_9[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
                        = __Vtemp_10[0U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
                        = __Vtemp_10[1U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
                        = (0x0000ffffU & __Vtemp_10[2U]);
                    VL_SUB_W(3, __Vtemp_12, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
                        = __Vtemp_12[0U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
                        = __Vtemp_12[1U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
                        = (0x0000ffffU & __Vtemp_12[2U]);
                    __Vtemp_13[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq);
                    __Vtemp_13[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq 
                                              >> 0x00000020U));
                    __Vtemp_13[2U] = 0U;
                    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_13)) {
                        __Vtemp_16[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq);
                        __Vtemp_16[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq 
                                                  >> 0x00000020U));
                        __Vtemp_16[2U] = 0U;
                        VL_SUB_W(3, __Vtemp_17, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16);
                        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
                            = __Vtemp_17[0U];
                        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
                            = __Vtemp_17[1U];
                        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
                            = (0x0000ffffU & __Vtemp_17[2U]);
                    }
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
                    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 
                        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__Vfuncout;
                    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 1U;
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx)));
                } else {
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 4U;
                }
            } else {
                if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r) {
                    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 
                        = (0x000000ffffffffffULL & 
                           ((vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                             >= vlSelfRef.q) ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                                - vlSelfRef.q)
                             : vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
                    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 
                        = (0x000000ffffffffffULL & vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v);
                } else {
                    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 
                        = (0x000000ffffffffffULL & 
                           ((vlSelfRef.__VdfgRegularize_hebeb780c_0_5 
                             >= vlSelfRef.q) ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_5 
                                                - vlSelfRef.q)
                             : vlSelfRef.__VdfgRegularize_hebeb780c_0_5));
                    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 
                        = (0x000000ffffffffffULL & 
                           ((vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                             >= vlSelfRef.q) ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                                - vlSelfRef.q)
                             : vlSelfRef.__VdfgRegularize_hebeb780c_0_7));
                }
                __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 
                    = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua;
                __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 1U;
                if ((0x0fffU == (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k))) {
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
                    if ((0x000cU == (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage))) {
                        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = 0U;
                        __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state 
                            = ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                ? 3U : 4U);
                    } else {
                        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage 
                            = (0x00001fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage)));
                        __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
                    }
                } else {
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k)));
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
                }
                __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 
                    = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va;
                __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff
                [vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua];
            vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw
                [vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw_idx];
            __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 2U;
            vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r 
                = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff
                [vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va];
        } else {
            __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_done = 0U;
            if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_start) {
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage = 0U;
                __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r 
                    = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_inverse;
                __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
            }
        }
        if (((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
             | ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en) 
                | (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_en)))) {
            if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) {
                __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data;
                __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr;
            } else if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en) {
                __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_data;
                __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_addr;
            } else {
                __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_data;
                __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_addr;
            }
            __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 1U;
        }
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data 
            = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff
            [(((2U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state)) 
               | (5U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state)))
               ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__int_rd_addr)
               : (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_rd_addr))];
        if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else {
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done = 1U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx))) {
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq 
                        = vlSelfRef.q;
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b 
                        = vlSelfRef.n_inv;
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff
                        [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx))];
                    __Vtemp_19[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a);
                    __Vtemp_19[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a 
                                              >> 0x00000020U));
                    __Vtemp_19[2U] = 0U;
                    __Vtemp_20[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b);
                    __Vtemp_20[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b 
                                              >> 0x00000020U));
                    __Vtemp_20[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
                        = __Vtemp_21[0U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
                        = __Vtemp_21[1U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
                        = (0x0000ffffU & __Vtemp_21[2U]);
                    __Vtemp_22[0U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
                    __Vtemp_22[1U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
                    __Vtemp_22[2U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
                    __Vtemp_22[3U] = 0U;
                    __Vtemp_22[4U] = 0U;
                    __Vtemp_23[0U] = vlSelfRef.barrett_m[0U];
                    __Vtemp_23[1U] = vlSelfRef.barrett_m[1U];
                    __Vtemp_23[2U] = vlSelfRef.barrett_m[2U];
                    __Vtemp_23[3U] = 0U;
                    __Vtemp_23[4U] = 0U;
                    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_22, __Vtemp_23);
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                        = (0x000001ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                             << 0x00000010U) | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                                >> 0x00000010U)));
                    __Vtemp_25[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
                    __Vtemp_25[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                                              >> 0x00000020U));
                    __Vtemp_25[2U] = 0U;
                    __Vtemp_26[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq);
                    __Vtemp_26[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq 
                                              >> 0x00000020U));
                    __Vtemp_26[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
                        = __Vtemp_27[0U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
                        = __Vtemp_27[1U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
                        = (0x0000ffffU & __Vtemp_27[2U]);
                    VL_SUB_W(3, __Vtemp_29, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
                        = __Vtemp_29[0U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
                        = __Vtemp_29[1U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
                        = (0x0000ffffU & __Vtemp_29[2U]);
                    __Vtemp_30[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq);
                    __Vtemp_30[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq 
                                              >> 0x00000020U));
                    __Vtemp_30[2U] = 0U;
                    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_30)) {
                        __Vtemp_33[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq);
                        __Vtemp_33[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq 
                                                  >> 0x00000020U));
                        __Vtemp_33[2U] = 0U;
                        VL_SUB_W(3, __Vtemp_34, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_33);
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
                            = __Vtemp_34[0U];
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
                            = __Vtemp_34[1U];
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
                            = (0x0000ffffU & __Vtemp_34[2U]);
                    }
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
                    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 
                        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__Vfuncout;
                    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx)));
                } else {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 4U;
                }
            } else {
                if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r) {
                    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 
                        = (0x000000ffffffffffULL & 
                           ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                             >= vlSelfRef.q) ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                                - vlSelfRef.q)
                             : vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
                    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 
                        = (0x000000ffffffffffULL & vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v);
                } else {
                    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 
                        = (0x000000ffffffffffULL & 
                           ((vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                             >= vlSelfRef.q) ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                                - vlSelfRef.q)
                             : vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
                    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 
                        = (0x000000ffffffffffULL & 
                           ((vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                             >= vlSelfRef.q) ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                                - vlSelfRef.q)
                             : vlSelfRef.__VdfgRegularize_hebeb780c_0_2));
                }
                __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
                __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2 = 1U;
                if ((0x0fffU == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k))) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
                    if ((0x000cU == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))) {
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = 0U;
                        __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state 
                            = ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                ? 3U : 4U);
                    } else {
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage 
                            = (0x00001fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)));
                        __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
                    }
                } else {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k)));
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
                }
                __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
                __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3 = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff
                [vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua];
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw
                [vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw_idx];
            __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 2U;
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff
                [vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va];
        } else {
            __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done = 0U;
            if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start) {
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage = 0U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_inverse;
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
            }
        }
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_en = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__pm_start = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_a_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_b_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_start = 0U;
        __Vdly__hash_verifier__DOT__ch_done = 0U;
        if ((8U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__state = 0U;
                } else {
                    __Vdly__hash_verifier__DOT__ch_done = 1U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                    vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v1 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
                    vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v1 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx) 
                                          - (IData)(2U)));
                    vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v1 = 1U;
                }
                if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__horner_i 
                        = (3U & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__horner_i) 
                                 - (IData)(1U)));
                    __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__state = 2U;
                } else {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx)));
                }
            } else if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_done) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__state = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx));
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_data 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_r
                        [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx));
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_data 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_r
                        [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))];
                    if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                        __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                        __Vdly__hash_verifier__DOT__u_ch__DOT__pm_start = 1U;
                        __Vdly__hash_verifier__DOT__u_ch__DOT__state = 8U;
                    } else {
                        __Vdly__hash_verifier__DOT__u_ch__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx)));
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_rd_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx));
                    }
                    if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                        vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v0 
                            = vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_rd_data;
                        vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v0 
                            = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx) 
                                              - (IData)(2U)));
                        vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v0 = 1U;
                    }
                    if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                        __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                        __Vdly__hash_verifier__DOT__u_ch__DOT__state 
                            = ((0U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__horner_i))
                                ? 0x0aU : 7U);
                    } else {
                        __Vdly__hash_verifier__DOT__u_ch__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
                if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_done) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__state = 6U;
                }
            } else {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_a_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_a_wr_addr 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx) 
                                          - (IData)(2U)));
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_a_wr_data 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_b_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_b_wr_addr 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx) 
                                          - (IData)(2U)));
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_b_wr_data 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_h
                        [(0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx) 
                                         - (IData)(2U)))];
                }
                if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_start = 1U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__state = 5U;
                } else {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
                if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_done) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__state = 4U;
                }
            } else {
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en = 1U;
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_addr 
                    = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx));
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_en = 1U;
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_data 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct
                    [((2U >= (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__horner_i))
                       ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__horner_i)
                       : 0U)][(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))];
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_addr 
                    = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx));
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_data 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_r
                    [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))];
                if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__pm_start = 1U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__state = 3U;
                } else {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__state))) {
            vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v1 
                = vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct
                [((2U >= (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct_last))
                   ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct_last)
                   : 0U)][(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))];
            vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v1 
                = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx));
            vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v1 = 1U;
            if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx))) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__horner_i 
                    = (3U & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct_last) 
                             - (IData)(1U)));
                __Vdly__hash_verifier__DOT__u_ch__DOT__state 
                    = ((0U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct_last))
                        ? 0x0aU : 2U);
            } else {
                __Vdly__hash_verifier__DOT__u_ch__DOT__idx 
                    = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx)));
            }
        } else if (vlSelfRef.hash_verifier__DOT__ch_start) {
            __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct_last 
                = (3U & ((IData)(vlSelfRef.hash_verifier__DOT__ch_ct_count) 
                         - (IData)(1U)));
            __Vdly__hash_verifier__DOT__u_ch__DOT__state = 1U;
        }
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_done = 0U;
        if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state))) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 0U;
                } else if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_done = 1U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx))) {
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq 
                        = vlSelfRef.q;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx) 
                                          - (IData)(2U)));
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt
                        [(0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx) 
                                         - (IData)(2U)))];
                    __Vtemp_104[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a);
                    __Vtemp_104[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a 
                                               >> 0x00000020U));
                    __Vtemp_104[2U] = 0U;
                    __Vtemp_105[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b);
                    __Vtemp_105[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b 
                                               >> 0x00000020U));
                    __Vtemp_105[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_106, __Vtemp_104, __Vtemp_105);
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U] 
                        = __Vtemp_106[0U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U] 
                        = __Vtemp_106[1U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U] 
                        = (0x0000ffffU & __Vtemp_106[2U]);
                    __Vtemp_107[0U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U];
                    __Vtemp_107[1U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U];
                    __Vtemp_107[2U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U];
                    __Vtemp_107[3U] = 0U;
                    __Vtemp_107[4U] = 0U;
                    __Vtemp_108[0U] = vlSelfRef.barrett_m[0U];
                    __Vtemp_108[1U] = vlSelfRef.barrett_m[1U];
                    __Vtemp_108[2U] = vlSelfRef.barrett_m[2U];
                    __Vtemp_108[3U] = 0U;
                    __Vtemp_108[4U] = 0U;
                    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __Vtemp_107, __Vtemp_108);
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
                        = (0x000001ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[3U])) 
                             << 0x00000010U) | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[2U])) 
                                                >> 0x00000010U)));
                    __Vtemp_110[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t);
                    __Vtemp_110[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
                                               >> 0x00000020U));
                    __Vtemp_110[2U] = 0U;
                    __Vtemp_111[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq);
                    __Vtemp_111[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq 
                                               >> 0x00000020U));
                    __Vtemp_111[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_112, __Vtemp_110, __Vtemp_111);
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[0U] 
                        = __Vtemp_112[0U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[1U] 
                        = __Vtemp_112[1U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[2U] 
                        = (0x0000ffffU & __Vtemp_112[2U]);
                    VL_SUB_W(3, __Vtemp_114, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq);
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                        = __Vtemp_114[0U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                        = __Vtemp_114[1U];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                        = (0x0000ffffU & __Vtemp_114[2U]);
                    __Vtemp_115[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq);
                    __Vtemp_115[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq 
                                               >> 0x00000020U));
                    __Vtemp_115[2U] = 0U;
                    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_115)) {
                        __Vtemp_118[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq);
                        __Vtemp_118[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq 
                                                   >> 0x00000020U));
                        __Vtemp_118[2U] = 0U;
                        VL_SUB_W(3, __Vtemp_119, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_118);
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                            = __Vtemp_119[0U];
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                            = __Vtemp_119[1U];
                        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                            = (0x0000ffffU & __Vtemp_119[2U]);
                    }
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data 
                        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__Vfuncout;
                }
                if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 6U;
                } else {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx)));
                }
            } else if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state))) {
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 4U;
            } else {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx));
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b
                        [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx))];
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx))) {
                    __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
                    __VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx) 
                                          - (IData)(2U)));
                    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 1U;
                }
                if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx))) {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 3U;
                } else {
                    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state))) {
            if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 2U;
            }
        } else if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_start) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
            __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 1U;
        }
        vlSelfRef.hash_verifier__DOT__ch_ct_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__ch_start = 0U;
        vlSelfRef.hash_verifier__DOT__pm_a_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__pm_b_wr_en = 0U;
        __Vdly__hash_verifier__DOT__pm_start = 0U;
        vlSelfRef.hash_verifier__DOT__pa_a_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__pa_b_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__pa_start = 0U;
        vlSelfRef.done = 0U;
        if ((8U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                        vlSelfRef.valid = vlSelfRef.hash_verifier__DOT__cmp_ok;
                        vlSelfRef.done = 1U;
                        __Vdly__hash_verifier__DOT__state = 0U;
                    } else {
                        if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                            vlSelfRef.hash_verifier__DOT__pa_rd_addr 
                                = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                        }
                        if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                            if ((vlSelfRef.hash_verifier__DOT__pa_rd_data 
                                 != vlSelfRef.hash_verifier__DOT__h3
                                 [(0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__idx) 
                                                  - (IData)(2U)))])) {
                                vlSelfRef.hash_verifier__DOT__cmp_ok = 0U;
                            }
                        }
                        if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                            __Vdly__hash_verifier__DOT__state = 0x0fU;
                        } else {
                            __Vdly__hash_verifier__DOT__idx 
                                = (0x00003fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                    if (vlSelfRef.hash_verifier__DOT__pa_done) {
                        __Vdly__hash_verifier__DOT__idx = 0U;
                        vlSelfRef.hash_verifier__DOT__cmp_ok = 1U;
                        __Vdly__hash_verifier__DOT__state = 0x0eU;
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                        vlSelfRef.hash_verifier__DOT__pm_rd_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                    }
                    if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                        vlSelfRef.hash_verifier__DOT__pa_a_wr_en = 1U;
                        vlSelfRef.hash_verifier__DOT__pa_a_wr_addr 
                            = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__idx) 
                                              - (IData)(2U)));
                        vlSelfRef.hash_verifier__DOT__pa_a_wr_data 
                            = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_rd_data;
                        vlSelfRef.hash_verifier__DOT__pa_b_wr_en = 1U;
                        vlSelfRef.hash_verifier__DOT__pa_b_wr_addr 
                            = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__idx) 
                                              - (IData)(2U)));
                        vlSelfRef.hash_verifier__DOT__pa_b_wr_data 
                            = vlSelfRef.hash_verifier__DOT__h2
                            [(0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__idx) 
                                             - (IData)(2U)))];
                    }
                    if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                        __Vdly__hash_verifier__DOT__idx = 0U;
                        vlSelfRef.hash_verifier__DOT__pa_start = 1U;
                        __Vdly__hash_verifier__DOT__state = 0x0dU;
                    } else {
                        __Vdly__hash_verifier__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                    if (vlSelfRef.hash_verifier__DOT__pm_done) {
                        __Vdly__hash_verifier__DOT__idx = 0U;
                        __Vdly__hash_verifier__DOT__state = 0x0cU;
                    }
                } else {
                    vlSelfRef.hash_verifier__DOT__pm_a_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__pm_a_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                    vlSelfRef.hash_verifier__DOT__pm_b_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__pm_a_wr_data 
                        = vlSelfRef.hash_verifier__DOT__h1
                        [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx))];
                    vlSelfRef.hash_verifier__DOT__pm_b_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                    vlSelfRef.hash_verifier__DOT__pm_b_wr_data 
                        = vlSelfRef.hash_verifier__DOT__h2
                        [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx))];
                    if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                        __Vdly__hash_verifier__DOT__idx = 0U;
                        __Vdly__hash_verifier__DOT__pm_start = 1U;
                        __Vdly__hash_verifier__DOT__state = 0x0bU;
                    } else {
                        __Vdly__hash_verifier__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                    vlSelfRef.__Vdly__hash_verifier__DOT__ch_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                    __VdlyVal__hash_verifier__DOT__h3__v0 
                        = vlSelfRef.hash_verifier__DOT__ch_rd_data;
                    __VdlyDim0__hash_verifier__DOT__h3__v0 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__idx) 
                                          - (IData)(2U)));
                    __VdlySet__hash_verifier__DOT__h3__v0 = 1U;
                }
                if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                    __Vdly__hash_verifier__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__state = 0x0aU;
                } else {
                    __Vdly__hash_verifier__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
                }
            } else if (vlSelfRef.hash_verifier__DOT__ch_done) {
                __Vdly__hash_verifier__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__state = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                    vlSelfRef.hash_verifier__DOT__ch_ct_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__ch_ct_sel 
                        = vlSelfRef.hash_verifier__DOT__comp_i;
                    vlSelfRef.hash_verifier__DOT__ch_ct_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                    vlSelfRef.hash_verifier__DOT__ch_ct_wr_data 
                        = vlSelfRef.hash_verifier__DOT__ct_mem[2U]
                        [((2U >= (IData)(vlSelfRef.hash_verifier__DOT__comp_i))
                           ? (IData)(vlSelfRef.hash_verifier__DOT__comp_i)
                           : 0U)][(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx))];
                    if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                        __Vdly__hash_verifier__DOT__idx = 0U;
                        if (((IData)(vlSelfRef.hash_verifier__DOT__comp_i) 
                             == (3U & ((IData)(vlSelfRef.c3_count) 
                                       - (IData)(1U))))) {
                            __Vdly__hash_verifier__DOT__comp_i = 0U;
                            vlSelfRef.hash_verifier__DOT__ch_ct_count 
                                = vlSelfRef.c3_count;
                            vlSelfRef.hash_verifier__DOT__ch_start = 1U;
                            __Vdly__hash_verifier__DOT__state = 8U;
                        } else {
                            __Vdly__hash_verifier__DOT__comp_i 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.hash_verifier__DOT__comp_i)));
                        }
                    } else {
                        __Vdly__hash_verifier__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                        vlSelfRef.__Vdly__hash_verifier__DOT__ch_rd_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                    }
                    if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                        __VdlyVal__hash_verifier__DOT__h2__v0 
                            = vlSelfRef.hash_verifier__DOT__ch_rd_data;
                        __VdlyDim0__hash_verifier__DOT__h2__v0 
                            = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__idx) 
                                              - (IData)(2U)));
                        __VdlySet__hash_verifier__DOT__h2__v0 = 1U;
                    }
                    if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                        __Vdly__hash_verifier__DOT__idx = 0U;
                        __Vdly__hash_verifier__DOT__comp_i = 0U;
                        __Vdly__hash_verifier__DOT__state = 7U;
                    } else {
                        __Vdly__hash_verifier__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                if (vlSelfRef.hash_verifier__DOT__ch_done) {
                    __Vdly__hash_verifier__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__state = 6U;
                }
            } else {
                vlSelfRef.hash_verifier__DOT__ch_ct_wr_en = 1U;
                vlSelfRef.hash_verifier__DOT__ch_ct_sel 
                    = vlSelfRef.hash_verifier__DOT__comp_i;
                vlSelfRef.hash_verifier__DOT__ch_ct_wr_addr 
                    = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                vlSelfRef.hash_verifier__DOT__ch_ct_wr_data 
                    = vlSelfRef.hash_verifier__DOT__ct_mem[1U]
                    [((2U >= (IData)(vlSelfRef.hash_verifier__DOT__comp_i))
                       ? (IData)(vlSelfRef.hash_verifier__DOT__comp_i)
                       : 0U)][(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx))];
                if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                    __Vdly__hash_verifier__DOT__idx = 0U;
                    if (((IData)(vlSelfRef.hash_verifier__DOT__comp_i) 
                         == (3U & ((IData)(vlSelfRef.c2_count) 
                                   - (IData)(1U))))) {
                        __Vdly__hash_verifier__DOT__comp_i = 0U;
                        vlSelfRef.hash_verifier__DOT__ch_ct_count 
                            = vlSelfRef.c2_count;
                        vlSelfRef.hash_verifier__DOT__ch_start = 1U;
                        __Vdly__hash_verifier__DOT__state = 5U;
                    } else {
                        __Vdly__hash_verifier__DOT__comp_i 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.hash_verifier__DOT__comp_i)));
                    }
                } else {
                    __Vdly__hash_verifier__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                    vlSelfRef.__Vdly__hash_verifier__DOT__ch_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                    __VdlyVal__hash_verifier__DOT__h1__v0 
                        = vlSelfRef.hash_verifier__DOT__ch_rd_data;
                    __VdlyDim0__hash_verifier__DOT__h1__v0 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__idx) 
                                          - (IData)(2U)));
                    __VdlySet__hash_verifier__DOT__h1__v0 = 1U;
                }
                if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                    __Vdly__hash_verifier__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__comp_i = 0U;
                    __Vdly__hash_verifier__DOT__state = 4U;
                } else {
                    __Vdly__hash_verifier__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
                }
            } else if (vlSelfRef.hash_verifier__DOT__ch_done) {
                __Vdly__hash_verifier__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__state))) {
            vlSelfRef.hash_verifier__DOT__ch_ct_wr_en = 1U;
            vlSelfRef.hash_verifier__DOT__ch_ct_sel 
                = vlSelfRef.hash_verifier__DOT__comp_i;
            vlSelfRef.hash_verifier__DOT__ch_ct_wr_addr 
                = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx));
            vlSelfRef.hash_verifier__DOT__ch_ct_wr_data 
                = vlSelfRef.hash_verifier__DOT__ct_mem[0U]
                [((2U >= (IData)(vlSelfRef.hash_verifier__DOT__comp_i))
                   ? (IData)(vlSelfRef.hash_verifier__DOT__comp_i)
                   : 0U)][(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__idx))];
            if ((0x1fffU == (IData)(vlSelfRef.hash_verifier__DOT__idx))) {
                __Vdly__hash_verifier__DOT__idx = 0U;
                if (((IData)(vlSelfRef.hash_verifier__DOT__comp_i) 
                     == (3U & ((IData)(vlSelfRef.c1_count) 
                               - (IData)(1U))))) {
                    __Vdly__hash_verifier__DOT__comp_i = 0U;
                    vlSelfRef.hash_verifier__DOT__ch_ct_count 
                        = vlSelfRef.c1_count;
                    vlSelfRef.hash_verifier__DOT__ch_start = 1U;
                    __Vdly__hash_verifier__DOT__state = 2U;
                } else {
                    __Vdly__hash_verifier__DOT__comp_i 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.hash_verifier__DOT__comp_i)));
                }
            } else {
                __Vdly__hash_verifier__DOT__idx = (0x00003fffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.hash_verifier__DOT__idx)));
            }
        } else if (vlSelfRef.start) {
            __Vdly__hash_verifier__DOT__comp_i = 0U;
            __Vdly__hash_verifier__DOT__idx = 0U;
            __Vdly__hash_verifier__DOT__state = 1U;
        }
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__pm_done = 0U;
        if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state))) {
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 0U;
                } else if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_done) {
                    vlSelfRef.hash_verifier__DOT__pm_done = 1U;
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx))) {
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq 
                        = vlSelfRef.q;
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx) 
                                          - (IData)(2U)));
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__b 
                        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_rd_data;
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__a 
                        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mem_ntt
                        [(0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx) 
                                         - (IData)(2U)))];
                    __Vtemp_121[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__a);
                    __Vtemp_121[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__a 
                                               >> 0x00000020U));
                    __Vtemp_121[2U] = 0U;
                    __Vtemp_122[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__b);
                    __Vtemp_122[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__b 
                                               >> 0x00000020U));
                    __Vtemp_122[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_123, __Vtemp_121, __Vtemp_122);
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U] 
                        = __Vtemp_123[0U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U] 
                        = __Vtemp_123[1U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U] 
                        = (0x0000ffffU & __Vtemp_123[2U]);
                    __Vtemp_124[0U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U];
                    __Vtemp_124[1U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U];
                    __Vtemp_124[2U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U];
                    __Vtemp_124[3U] = 0U;
                    __Vtemp_124[4U] = 0U;
                    __Vtemp_125[0U] = vlSelfRef.barrett_m[0U];
                    __Vtemp_125[1U] = vlSelfRef.barrett_m[1U];
                    __Vtemp_125[2U] = vlSelfRef.barrett_m[2U];
                    __Vtemp_125[3U] = 0U;
                    __Vtemp_125[4U] = 0U;
                    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __Vtemp_124, __Vtemp_125);
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
                        = (0x000001ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[3U])) 
                             << 0x00000010U) | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[2U])) 
                                                >> 0x00000010U)));
                    __Vtemp_127[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__t);
                    __Vtemp_127[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
                                               >> 0x00000020U));
                    __Vtemp_127[2U] = 0U;
                    __Vtemp_128[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq);
                    __Vtemp_128[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq 
                                               >> 0x00000020U));
                    __Vtemp_128[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_129, __Vtemp_127, __Vtemp_128);
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[0U] 
                        = __Vtemp_129[0U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[1U] 
                        = __Vtemp_129[1U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[2U] 
                        = (0x0000ffffU & __Vtemp_129[2U]);
                    VL_SUB_W(3, __Vtemp_131, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__tq);
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                        = __Vtemp_131[0U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                        = __Vtemp_131[1U];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                        = (0x0000ffffU & __Vtemp_131[2U]);
                    __Vtemp_132[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq);
                    __Vtemp_132[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq 
                                               >> 0x00000020U));
                    __Vtemp_132[2U] = 0U;
                    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_132)) {
                        __Vtemp_135[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq);
                        __Vtemp_135[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq 
                                                   >> 0x00000020U));
                        __Vtemp_135[2U] = 0U;
                        VL_SUB_W(3, __Vtemp_136, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_135);
                        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                            = __Vtemp_136[0U];
                        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                            = __Vtemp_136[1U];
                        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                            = (0x0000ffffU & __Vtemp_136[2U]);
                    }
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_data 
                        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__Vfuncout;
                }
                if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_inverse = 1U;
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_start = 1U;
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 6U;
                } else {
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx)));
                }
            } else if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_done) {
                __Vdly__hash_verifier__DOT__u_pmul__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state))) {
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_inverse = 0U;
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_start = 1U;
                __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 4U;
            } else {
                if ((0x2000U > (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx));
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_data 
                        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mem_b
                        [(0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx))];
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx))) {
                    __VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 
                        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_rd_data;
                    __VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx) 
                                          - (IData)(2U)));
                    __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 1U;
                }
                if ((0x2001U == (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx))) {
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__idx = 0U;
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 3U;
                } else {
                    __Vdly__hash_verifier__DOT__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state))) {
            if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_done) {
                __Vdly__hash_verifier__DOT__u_pmul__DOT__idx = 0U;
                __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 2U;
            }
        } else if (vlSelfRef.hash_verifier__DOT__pm_start) {
            vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_inverse = 0U;
            vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_start = 1U;
            __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 1U;
        }
    } else {
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage = 0U;
        __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
        __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
        __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_done = 0U;
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__horner_i = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__state = 0U;
        __Vdly__hash_verifier__DOT__ch_done = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct_last = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_en = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__pm_start = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_a_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_b_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_start = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_done = 0U;
        __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr = 0U;
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data = 0ULL;
        __Vdly__hash_verifier__DOT__idx = 0U;
        __Vdly__hash_verifier__DOT__comp_i = 0U;
        __Vdly__hash_verifier__DOT__state = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        vlSelfRef.hash_verifier__DOT__ch_ct_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__ch_start = 0U;
        vlSelfRef.hash_verifier__DOT__pm_a_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__pm_b_wr_en = 0U;
        __Vdly__hash_verifier__DOT__pm_start = 0U;
        vlSelfRef.hash_verifier__DOT__pa_a_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__pa_b_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__pa_start = 0U;
        vlSelfRef.hash_verifier__DOT__cmp_ok = 1U;
        __Vdly__hash_verifier__DOT__u_pmul__DOT__state = 0U;
        vlSelfRef.hash_verifier__DOT__pm_done = 0U;
        __Vdly__hash_verifier__DOT__u_pmul__DOT__idx = 0U;
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_inverse = 0U;
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr = 0U;
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_data = 0ULL;
    }
    vlSelfRef.hash_verifier__DOT__u_padd__DOT__idx 
        = __Vdly__hash_verifier__DOT__u_padd__DOT__idx;
    vlSelfRef.hash_verifier__DOT__u_padd__DOT__sub_r 
        = __Vdly__hash_verifier__DOT__u_padd__DOT__sub_r;
    vlSelfRef.hash_verifier__DOT__u_padd__DOT__state 
        = __Vdly__hash_verifier__DOT__u_padd__DOT__state;
    if (__VdlySet__hash_verifier__DOT__u_padd__DOT__mem_r__v0) {
        vlSelfRef.hash_verifier__DOT__u_padd__DOT__mem_r[__VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_r__v0] 
            = __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_r__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_padd__DOT__mem_a__v0) {
        vlSelfRef.hash_verifier__DOT__u_padd__DOT__mem_a[__VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_a__v0] 
            = __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_a__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_padd__DOT__mem_b__v0) {
        vlSelfRef.hash_verifier__DOT__u_padd__DOT__mem_b[__VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_b__v0] 
            = __VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_b__v0;
    }
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state;
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0;
    }
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state 
        = __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state;
    if (__VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw[__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0] 
            = __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0] 
            = __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1) {
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1] 
            = __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1;
    }
    if (__VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2) {
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2] 
            = __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2;
    }
    if (__VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3) {
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3] 
            = __VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3;
    }
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k 
        = __Vdly__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state;
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1;
    }
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v2;
    }
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v3;
    }
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                           : ((IData)(0x000cU) - (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + vlSelfRef.q));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_36[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a);
    __Vtemp_36[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__a 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    __Vtemp_37[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b);
    __Vtemp_37[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__b 
                              >> 0x00000020U));
    __Vtemp_37[2U] = 0U;
    VL_MUL_W(3, __Vtemp_38, __Vtemp_36, __Vtemp_37);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_38[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_38[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_38[2U]);
    __Vtemp_39[0U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_39[1U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_39[2U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_39[3U] = 0U;
    __Vtemp_39[4U] = 0U;
    __Vtemp_40[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_40[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_40[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_39, __Vtemp_40);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_42[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_42[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq);
    __Vtemp_43[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq 
                              >> 0x00000020U));
    __Vtemp_43[2U] = 0U;
    VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_44[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_44[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_44[2U]);
    VL_SUB_W(3, __Vtemp_46, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_46[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_46[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_46[2U]);
    __Vtemp_47[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq);
    __Vtemp_47[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq 
                              >> 0x00000020U));
    __Vtemp_47[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_47)) {
        __Vtemp_50[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq);
        __Vtemp_50[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__qq 
                                  >> 0x00000020U));
        __Vtemp_50[2U] = 0U;
        VL_SUB_W(3, __Vtemp_51, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_50);
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_51[0U];
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_51[1U];
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_51[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw 
        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__11__Vfuncout;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                           : ((IData)(0x000cU) - (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + vlSelfRef.q));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_53[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a);
    __Vtemp_53[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__a 
                              >> 0x00000020U));
    __Vtemp_53[2U] = 0U;
    __Vtemp_54[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b);
    __Vtemp_54[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__b 
                              >> 0x00000020U));
    __Vtemp_54[2U] = 0U;
    VL_MUL_W(3, __Vtemp_55, __Vtemp_53, __Vtemp_54);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_55[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_55[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    __Vtemp_56[0U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_56[1U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_56[2U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_56[3U] = 0U;
    __Vtemp_56[4U] = 0U;
    __Vtemp_57[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_57[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_57[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_57[3U] = 0U;
    __Vtemp_57[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_56, __Vtemp_57);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_59[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_59[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_59[2U] = 0U;
    __Vtemp_60[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq);
    __Vtemp_60[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq 
                              >> 0x00000020U));
    __Vtemp_60[2U] = 0U;
    VL_MUL_W(3, __Vtemp_61, __Vtemp_59, __Vtemp_60);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_61[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_61[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_61[2U]);
    VL_SUB_W(3, __Vtemp_63, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_63[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_63[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_63[2U]);
    __Vtemp_64[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq);
    __Vtemp_64[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq 
                              >> 0x00000020U));
    __Vtemp_64[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_64)) {
        __Vtemp_67[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq);
        __Vtemp_67[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__qq 
                                  >> 0x00000020U));
        __Vtemp_67[2U] = 0U;
        VL_SUB_W(3, __Vtemp_68, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_67);
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_68[0U];
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_68[1U];
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_68[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw 
        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__1__Vfuncout;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_rd_data 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__pa_rd_data;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_done 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__pa_done;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__state 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__state;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__horner_i 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__horner_i;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx = __Vdly__hash_verifier__DOT__u_ch__DOT__idx;
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
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_9 
                                     >= vlSelfRef.q)
                                     ? (__VdfgRegularize_hebeb780c_0_9 
                                        - vlSelfRef.q)
                                     : __VdfgRegularize_hebeb780c_0_9));
    __Vtemp_70[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a);
    __Vtemp_70[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__a 
                              >> 0x00000020U));
    __Vtemp_70[2U] = 0U;
    __Vtemp_71[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b);
    __Vtemp_71[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__b 
                              >> 0x00000020U));
    __Vtemp_71[2U] = 0U;
    VL_MUL_W(3, __Vtemp_72, __Vtemp_70, __Vtemp_71);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_72[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_72[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_72[2U]);
    __Vtemp_73[0U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_73[1U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_73[2U] = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_73[3U] = 0U;
    __Vtemp_73[4U] = 0U;
    __Vtemp_74[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_74[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_74[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_74[3U] = 0U;
    __Vtemp_74[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_73, __Vtemp_74);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_76[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_76[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_76[2U] = 0U;
    __Vtemp_77[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq);
    __Vtemp_77[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq 
                              >> 0x00000020U));
    __Vtemp_77[2U] = 0U;
    VL_MUL_W(3, __Vtemp_78, __Vtemp_76, __Vtemp_77);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_78[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_78[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_78[2U]);
    VL_SUB_W(3, __Vtemp_80, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_80[0U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_80[1U];
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_80[2U]);
    __Vtemp_81[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq);
    __Vtemp_81[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq 
                              >> 0x00000020U));
    __Vtemp_81[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_81)) {
        __Vtemp_84[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq);
        __Vtemp_84[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__qq 
                                  >> 0x00000020U));
        __Vtemp_84[2U] = 0U;
        VL_SUB_W(3, __Vtemp_85, vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_84);
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_85[0U];
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_85[1U];
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_85[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__16__Vfuncout;
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
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_4 
                                     >= vlSelfRef.q)
                                     ? (__VdfgRegularize_hebeb780c_0_4 
                                        - vlSelfRef.q)
                                     : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_87[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a);
    __Vtemp_87[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__a 
                              >> 0x00000020U));
    __Vtemp_87[2U] = 0U;
    __Vtemp_88[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b);
    __Vtemp_88[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__b 
                              >> 0x00000020U));
    __Vtemp_88[2U] = 0U;
    VL_MUL_W(3, __Vtemp_89, __Vtemp_87, __Vtemp_88);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_89[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_89[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_89[2U]);
    __Vtemp_90[0U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_90[1U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_90[2U] = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_90[3U] = 0U;
    __Vtemp_90[4U] = 0U;
    __Vtemp_91[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_91[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_91[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_91[3U] = 0U;
    __Vtemp_91[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_90, __Vtemp_91);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_93[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_93[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_93[2U] = 0U;
    __Vtemp_94[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq);
    __Vtemp_94[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq 
                              >> 0x00000020U));
    __Vtemp_94[2U] = 0U;
    VL_MUL_W(3, __Vtemp_95, __Vtemp_93, __Vtemp_94);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_95[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_95[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_95[2U]);
    VL_SUB_W(3, __Vtemp_97, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_97[0U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_97[1U];
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_97[2U]);
    __Vtemp_98[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq);
    __Vtemp_98[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq 
                              >> 0x00000020U));
    __Vtemp_98[2U] = 0U;
    if (VL_GTE_W(3, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_98)) {
        __Vtemp_101[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq);
        __Vtemp_101[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__qq 
                                   >> 0x00000020U));
        __Vtemp_101[2U] = 0U;
        VL_SUB_W(3, __Vtemp_102, vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_101);
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_102[0U];
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_102[1U];
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_102[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__6__Vfuncout;
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_start 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__pm_start;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx;
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt[__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0] 
            = __VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0;
    }
    vlSelfRef.hash_verifier__DOT__pa_rd_data = __Vdly__hash_verifier__DOT__pa_rd_data;
    vlSelfRef.hash_verifier__DOT__pa_done = __Vdly__hash_verifier__DOT__pa_done;
    vlSelfRef.hash_verifier__DOT__ch_done = __Vdly__hash_verifier__DOT__ch_done;
    vlSelfRef.hash_verifier__DOT__state = __Vdly__hash_verifier__DOT__state;
    vlSelfRef.hash_verifier__DOT__idx = __Vdly__hash_verifier__DOT__idx;
    vlSelfRef.hash_verifier__DOT__comp_i = __Vdly__hash_verifier__DOT__comp_i;
    if (__VdlySet__hash_verifier__DOT__h3__v0) {
        vlSelfRef.hash_verifier__DOT__h3[__VdlyDim0__hash_verifier__DOT__h3__v0] 
            = __VdlyVal__hash_verifier__DOT__h3__v0;
    }
    if (__VdlySet__hash_verifier__DOT__h2__v0) {
        vlSelfRef.hash_verifier__DOT__h2[__VdlyDim0__hash_verifier__DOT__h2__v0] 
            = __VdlyVal__hash_verifier__DOT__h2__v0;
    }
    if (__VdlySet__hash_verifier__DOT__h1__v0) {
        vlSelfRef.hash_verifier__DOT__h1[__VdlyDim0__hash_verifier__DOT__h1__v0] 
            = __VdlyVal__hash_verifier__DOT__h1__v0;
    }
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_done 
        = __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_done;
    vlSelfRef.hash_verifier__DOT__pm_start = __Vdly__hash_verifier__DOT__pm_start;
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state 
        = __Vdly__hash_verifier__DOT__u_pmul__DOT__state;
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_rd_data 
        = __Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_rd_data;
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx 
        = __Vdly__hash_verifier__DOT__u_pmul__DOT__idx;
    if (__VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_b__v0) {
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mem_b[__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_b__v0] 
            = __VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_b__v0;
    }
    if (__VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0) {
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mem_ntt[__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0] 
            = __VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0;
    }
}

void Vhash_verifier___024root___nba_sequent__TOP__2(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___nba_sequent__TOP__2\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.hash_verifier__DOT__ch_r_wr_en) {
        vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v0 
            = vlSelfRef.hash_verifier__DOT__ch_r_wr_data;
        vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v0 
            = vlSelfRef.hash_verifier__DOT__ch_r_wr_addr;
        vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0 = 1U;
    }
    if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct[vlSelfRef.__VdlyDim1__hash_verifier__DOT__u_ch__DOT__ct__v0][vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__ct__v0] 
            = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__ct__v0;
    }
    if (vlSelfRef.__VdlySet__hash_verifier__DOT__ct_mem__v0) {
        vlSelfRef.hash_verifier__DOT__ct_mem[vlSelfRef.__VdlyDim2__hash_verifier__DOT__ct_mem__v0][vlSelfRef.__VdlyDim1__hash_verifier__DOT__ct_mem__v0][vlSelfRef.__VdlyDim0__hash_verifier__DOT__ct_mem__v0] 
            = vlSelfRef.__VdlyVal__hash_verifier__DOT__ct_mem__v0;
    }
    vlSelfRef.hash_verifier__DOT__ch_rd_data = vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_h
        [vlSelfRef.hash_verifier__DOT__ch_rd_addr];
}

void Vhash_verifier___024root___nba_sequent__TOP__3(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___nba_sequent__TOP__3\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_r[vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v0] 
            = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v0;
    }
    if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v1) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_r[vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v1] 
            = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v1;
    }
    vlSelfRef.hash_verifier__DOT__ch_rd_addr = vlSelfRef.__Vdly__hash_verifier__DOT__ch_rd_addr;
    if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v0) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_h[vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v0] 
            = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v0;
    }
    if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v1) {
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_h[vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v1] 
            = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v1;
    }
    if (vlSelfRef.rst_n) {
        vlSelfRef.hash_verifier__DOT__ch_r_wr_en = 0U;
        if (vlSelfRef.r_wr_en) {
            vlSelfRef.hash_verifier__DOT__ch_r_wr_en = 1U;
            vlSelfRef.hash_verifier__DOT__ch_r_wr_data 
                = vlSelfRef.r_wr_data;
            vlSelfRef.hash_verifier__DOT__ch_r_wr_addr 
                = vlSelfRef.r_wr_addr;
        }
    } else {
        vlSelfRef.hash_verifier__DOT__ch_r_wr_en = 0U;
    }
}

void Vhash_verifier___024root___eval_nba(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_nba\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdlySet__hash_verifier__DOT__ct_mem__v0 = 0U;
        vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0U;
        if (vlSelfRef.ct_wr_en) {
            vlSelfRef.hash_verifier__DOT____Vlvbound_h957a2f4a__0 
                = vlSelfRef.ct_wr_data;
            if (((2U >= (IData)(vlSelfRef.ct_sel)) 
                 && (2U >= (IData)(vlSelfRef.ct_id)))) {
                vlSelfRef.__VdlyVal__hash_verifier__DOT__ct_mem__v0 
                    = vlSelfRef.hash_verifier__DOT____Vlvbound_h957a2f4a__0;
                vlSelfRef.__VdlyDim0__hash_verifier__DOT__ct_mem__v0 
                    = vlSelfRef.ct_wr_addr;
                vlSelfRef.__VdlyDim1__hash_verifier__DOT__ct_mem__v0 
                    = vlSelfRef.ct_sel;
                vlSelfRef.__VdlyDim2__hash_verifier__DOT__ct_mem__v0 
                    = vlSelfRef.ct_id;
                vlSelfRef.__VdlySet__hash_verifier__DOT__ct_mem__v0 = 1U;
            }
        }
        if (vlSelfRef.hash_verifier__DOT__ch_ct_wr_en) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT____Vlvbound_h67fe0f0a__0 
                = vlSelfRef.hash_verifier__DOT__ch_ct_wr_data;
            if ((2U >= (IData)(vlSelfRef.hash_verifier__DOT__ch_ct_sel))) {
                vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__ct__v0 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT____Vlvbound_h67fe0f0a__0;
                vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__ct__v0 
                    = vlSelfRef.hash_verifier__DOT__ch_ct_wr_addr;
                vlSelfRef.__VdlyDim1__hash_verifier__DOT__u_ch__DOT__ct__v0 
                    = vlSelfRef.hash_verifier__DOT__ch_ct_sel;
                vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0 = 1U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vhash_verifier___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.hash_verifier__DOT__ch_r_wr_en) {
            vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v0 
                = vlSelfRef.hash_verifier__DOT__ch_r_wr_data;
            vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v0 
                = vlSelfRef.hash_verifier__DOT__ch_r_wr_addr;
            vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0 = 1U;
        }
        if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__ct[vlSelfRef.__VdlyDim1__hash_verifier__DOT__u_ch__DOT__ct__v0][vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__ct__v0] 
                = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__ct__v0;
        }
        if (vlSelfRef.__VdlySet__hash_verifier__DOT__ct_mem__v0) {
            vlSelfRef.hash_verifier__DOT__ct_mem[vlSelfRef.__VdlyDim2__hash_verifier__DOT__ct_mem__v0][vlSelfRef.__VdlyDim1__hash_verifier__DOT__ct_mem__v0][vlSelfRef.__VdlyDim0__hash_verifier__DOT__ct_mem__v0] 
                = vlSelfRef.__VdlyVal__hash_verifier__DOT__ct_mem__v0;
        }
        vlSelfRef.hash_verifier__DOT__ch_rd_data = vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_h
            [vlSelfRef.hash_verifier__DOT__ch_rd_addr];
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_r[vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v0] 
                = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v0;
        }
        if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v1) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_r[vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v1] 
                = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v1;
        }
        vlSelfRef.hash_verifier__DOT__ch_rd_addr = vlSelfRef.__Vdly__hash_verifier__DOT__ch_rd_addr;
        if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v0) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_h[vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v0] 
                = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v0;
        }
        if (vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v1) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__mem_h[vlSelfRef.__VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v1] 
                = vlSelfRef.__VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v1;
        }
        if (vlSelfRef.rst_n) {
            vlSelfRef.hash_verifier__DOT__ch_r_wr_en = 0U;
            if (vlSelfRef.r_wr_en) {
                vlSelfRef.hash_verifier__DOT__ch_r_wr_en = 1U;
                vlSelfRef.hash_verifier__DOT__ch_r_wr_data 
                    = vlSelfRef.r_wr_data;
                vlSelfRef.hash_verifier__DOT__ch_r_wr_addr 
                    = vlSelfRef.r_wr_addr;
            }
        } else {
            vlSelfRef.hash_verifier__DOT__ch_r_wr_en = 0U;
        }
    }
}

void Vhash_verifier___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vhash_verifier___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vhash_verifier___024root___eval_phase__act(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_phase__act\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhash_verifier___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhash_verifier___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vhash_verifier___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vhash_verifier___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vhash_verifier___024root___eval_phase__nba(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_phase__nba\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vhash_verifier___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vhash_verifier___024root___eval_nba(vlSelf);
        Vhash_verifier___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vhash_verifier___024root___eval(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vhash_verifier___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("hash_verifier.v", 32, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vhash_verifier___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vhash_verifier___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("hash_verifier.v", 32, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vhash_verifier___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("hash_verifier.v", 32, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vhash_verifier___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vhash_verifier___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vhash_verifier___024root___eval_debug_assertions(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_debug_assertions\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
