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
    // Body
    vlSelfRef.ntt__DOT__cwe = 0U;
    vlSelfRef.ntt__DOT__craddr = vlSelfRef.ntt__DOT__ua;
    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__ua;
    vlSelfRef.ntt__DOT__ct_u = (0x000000ffffffffffULL 
                                & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                    >= vlSelfRef.q)
                                    ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                       - vlSelfRef.q)
                                    : vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.ntt__DOT__gs_u = (0x000000ffffffffffULL 
                                & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                    >= vlSelfRef.q)
                                    ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                       - vlSelfRef.q)
                                    : vlSelfRef.__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                                & ((vlSelfRef.ntt__DOT__u_r3 
                                                    + vlSelfRef.q) 
                                                   - vlSelfRef.ntt__DOT__vw));
    vlSelfRef.ntt__DOT__cwdata = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                   ? vlSelfRef.ntt__DOT__gs_u
                                   : vlSelfRef.ntt__DOT__ct_u);
    if ((8U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    vlSelfRef.ntt__DOT__cwe = 1U;
                    vlSelfRef.ntt__DOT__cwaddr = (0x00001fffU 
                                                  & (IData)(vlSelfRef.ntt__DOT__sc_idx));
                    vlSelfRef.ntt__DOT__cwdata = vlSelfRef.ntt__DOT__scaled;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwe = 1U;
                vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__va;
                vlSelfRef.ntt__DOT__cwdata = (0x000000ffffffffffULL 
                                              & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                  ? vlSelfRef.ntt__DOT__vw
                                                  : 
                                                 ((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                   >= vlSelfRef.q)
                                                   ? 
                                                  (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                   - vlSelfRef.q)
                                                   : vlSelfRef.__VdfgRegularize_hebeb780c_0_1)));
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                    vlSelfRef.ntt__DOT__craddr = (0x00001fffU 
                                                  & (IData)(vlSelfRef.ntt__DOT__sc_idx));
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                    vlSelfRef.ntt__DOT__cwe = 1U;
                    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__ua;
                    vlSelfRef.ntt__DOT__cwdata = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                   ? vlSelfRef.ntt__DOT__gs_u
                                                   : vlSelfRef.ntt__DOT__ct_u);
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                if (vlSelfRef.coeff_wr_en) {
                    vlSelfRef.ntt__DOT__cwe = 1U;
                    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.coeff_wr_addr;
                    vlSelfRef.ntt__DOT__cwdata = vlSelfRef.coeff_wr_data;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                      >> 2U)))) {
            vlSelfRef.ntt__DOT__craddr = ((2U & (IData)(vlSelfRef.ntt__DOT__state))
                                           ? (IData)(vlSelfRef.ntt__DOT__va)
                                           : ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                               ? (IData)(vlSelfRef.ntt__DOT__ua)
                                               : (IData)(vlSelfRef.rd_addr)));
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
    VlWide<3>/*79:0*/ ntt__DOT__unnamedblk1__DOT__bfly_tq;
    VL_ZERO_W(80, ntt__DOT__unnamedblk1__DOT__bfly_tq);
    VlWide<3>/*79:0*/ ntt__DOT__unnamedblk1__DOT__bfly_r;
    VL_ZERO_W(80, ntt__DOT__unnamedblk1__DOT__bfly_r);
    VlWide<3>/*79:0*/ ntt__DOT__unnamedblk2__DOT__sc_tq;
    VL_ZERO_W(80, ntt__DOT__unnamedblk2__DOT__sc_tq);
    VlWide<3>/*79:0*/ ntt__DOT__unnamedblk2__DOT__sc_r;
    VL_ZERO_W(80, ntt__DOT__unnamedblk2__DOT__sc_r);
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_14;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    // Body
    vlSelfRef.__VdlySet__ntt__DOT__tw__v0 = 0U;
    vlSelfRef.__VdlySet__ntt__DOT__coeff__v0 = 0U;
    if (vlSelfRef.tw_wr_en) {
        vlSelfRef.__VdlyVal__ntt__DOT__tw__v0 = vlSelfRef.tw_wr_data;
        vlSelfRef.__VdlyDim0__ntt__DOT__tw__v0 = vlSelfRef.tw_wr_addr;
        vlSelfRef.__VdlySet__ntt__DOT__tw__v0 = 1U;
    }
    if (vlSelfRef.ntt__DOT__cwe) {
        vlSelfRef.__VdlyVal__ntt__DOT__coeff__v0 = vlSelfRef.ntt__DOT__cwdata;
        vlSelfRef.__VdlyDim0__ntt__DOT__coeff__v0 = vlSelfRef.ntt__DOT__cwaddr;
        vlSelfRef.__VdlySet__ntt__DOT__coeff__v0 = 1U;
    }
    __Vtemp_4[0U] = ((vlSelfRef.ntt__DOT__sc_pm[3U] 
                      << 0x00000010U) | (vlSelfRef.ntt__DOT__sc_pm[2U] 
                                         >> 0x00000010U));
    __Vtemp_4[1U] = ((vlSelfRef.ntt__DOT__sc_pm[4U] 
                      << 0x00000010U) | (vlSelfRef.ntt__DOT__sc_pm[3U] 
                                         >> 0x00000010U));
    __Vtemp_4[2U] = (vlSelfRef.ntt__DOT__sc_pm[4U] 
                     >> 0x00000010U);
    __Vtemp_5[0U] = (IData)(vlSelfRef.q);
    __Vtemp_5[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_5[2U] = 0U;
    VL_MUL_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    ntt__DOT__unnamedblk2__DOT__sc_tq[0U] = __Vtemp_6[0U];
    ntt__DOT__unnamedblk2__DOT__sc_tq[1U] = __Vtemp_6[1U];
    ntt__DOT__unnamedblk2__DOT__sc_tq[2U] = (0x0000ffffU 
                                             & __Vtemp_6[2U]);
    VL_SUB_W(3, __Vtemp_8, vlSelfRef.ntt__DOT__sc_p, ntt__DOT__unnamedblk2__DOT__sc_tq);
    ntt__DOT__unnamedblk2__DOT__sc_r[0U] = __Vtemp_8[0U];
    ntt__DOT__unnamedblk2__DOT__sc_r[1U] = __Vtemp_8[1U];
    ntt__DOT__unnamedblk2__DOT__sc_r[2U] = (0x0000ffffU 
                                            & __Vtemp_8[2U]);
    __Vtemp_9[0U] = (IData)(vlSelfRef.q);
    __Vtemp_9[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_9[2U] = 0U;
    if (VL_GTE_W(3, ntt__DOT__unnamedblk2__DOT__sc_r, __Vtemp_9)) {
        __Vtemp_12[0U] = (IData)(vlSelfRef.q);
        __Vtemp_12[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
        __Vtemp_12[2U] = 0U;
        VL_SUB_W(3, __Vtemp_13, ntt__DOT__unnamedblk2__DOT__sc_r, __Vtemp_12);
        ntt__DOT__unnamedblk2__DOT__sc_r[0U] = __Vtemp_13[0U];
        ntt__DOT__unnamedblk2__DOT__sc_r[1U] = __Vtemp_13[1U];
        ntt__DOT__unnamedblk2__DOT__sc_r[2U] = (0x0000ffffU 
                                                & __Vtemp_13[2U]);
    }
    __Vtemp_14[0U] = vlSelfRef.ntt__DOT__sc_p[0U];
    __Vtemp_14[1U] = vlSelfRef.ntt__DOT__sc_p[1U];
    __Vtemp_14[2U] = vlSelfRef.ntt__DOT__sc_p[2U];
    __Vtemp_14[3U] = 0U;
    __Vtemp_14[4U] = 0U;
    __Vtemp_15[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_15[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_15[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_15[3U] = 0U;
    __Vtemp_15[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.ntt__DOT__sc_pm, __Vtemp_14, __Vtemp_15);
    vlSelfRef.ntt__DOT__scaled = (0x000000ffffffffffULL 
                                  & (((QData)((IData)(ntt__DOT__unnamedblk2__DOT__sc_r[1U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(ntt__DOT__unnamedblk2__DOT__sc_r[0U]))));
    vlSelfRef.ntt__DOT__u_r3 = vlSelfRef.ntt__DOT__u_r2;
    vlSelfRef.ntt__DOT__vo_r3 = vlSelfRef.ntt__DOT__vo_r2;
    __Vtemp_19[0U] = ((vlSelfRef.ntt__DOT__bfly_pm[3U] 
                       << 0x00000010U) | (vlSelfRef.ntt__DOT__bfly_pm[2U] 
                                          >> 0x00000010U));
    __Vtemp_19[1U] = ((vlSelfRef.ntt__DOT__bfly_pm[4U] 
                       << 0x00000010U) | (vlSelfRef.ntt__DOT__bfly_pm[3U] 
                                          >> 0x00000010U));
    __Vtemp_19[2U] = (vlSelfRef.ntt__DOT__bfly_pm[4U] 
                      >> 0x00000010U);
    __Vtemp_20[0U] = (IData)(vlSelfRef.q);
    __Vtemp_20[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_20[2U] = 0U;
    VL_MUL_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    ntt__DOT__unnamedblk1__DOT__bfly_tq[0U] = __Vtemp_21[0U];
    ntt__DOT__unnamedblk1__DOT__bfly_tq[1U] = __Vtemp_21[1U];
    ntt__DOT__unnamedblk1__DOT__bfly_tq[2U] = (0x0000ffffU 
                                               & __Vtemp_21[2U]);
    VL_SUB_W(3, __Vtemp_23, vlSelfRef.ntt__DOT__bfly_p, ntt__DOT__unnamedblk1__DOT__bfly_tq);
    ntt__DOT__unnamedblk1__DOT__bfly_r[0U] = __Vtemp_23[0U];
    ntt__DOT__unnamedblk1__DOT__bfly_r[1U] = __Vtemp_23[1U];
    ntt__DOT__unnamedblk1__DOT__bfly_r[2U] = (0x0000ffffU 
                                              & __Vtemp_23[2U]);
    __Vtemp_24[0U] = (IData)(vlSelfRef.q);
    __Vtemp_24[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_24[2U] = 0U;
    if (VL_GTE_W(3, ntt__DOT__unnamedblk1__DOT__bfly_r, __Vtemp_24)) {
        __Vtemp_27[0U] = (IData)(vlSelfRef.q);
        __Vtemp_27[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
        __Vtemp_27[2U] = 0U;
        VL_SUB_W(3, __Vtemp_28, ntt__DOT__unnamedblk1__DOT__bfly_r, __Vtemp_27);
        ntt__DOT__unnamedblk1__DOT__bfly_r[0U] = __Vtemp_28[0U];
        ntt__DOT__unnamedblk1__DOT__bfly_r[1U] = __Vtemp_28[1U];
        ntt__DOT__unnamedblk1__DOT__bfly_r[2U] = (0x0000ffffU 
                                                  & __Vtemp_28[2U]);
    }
    __Vtemp_29[0U] = vlSelfRef.ntt__DOT__bfly_p[0U];
    __Vtemp_29[1U] = vlSelfRef.ntt__DOT__bfly_p[1U];
    __Vtemp_29[2U] = vlSelfRef.ntt__DOT__bfly_p[2U];
    __Vtemp_29[3U] = 0U;
    __Vtemp_29[4U] = 0U;
    __Vtemp_30[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_30[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_30[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_30[3U] = 0U;
    __Vtemp_30[4U] = 0U;
    VL_MUL_W(5, vlSelfRef.ntt__DOT__bfly_pm, __Vtemp_29, __Vtemp_30);
    vlSelfRef.ntt__DOT__vw = (0x000000ffffffffffULL 
                              & (((QData)((IData)(ntt__DOT__unnamedblk1__DOT__bfly_r[1U])) 
                                  << 0x00000020U) | (QData)((IData)(ntt__DOT__unnamedblk1__DOT__bfly_r[0U]))));
    __Vtemp_32[0U] = (IData)(vlSelfRef.ntt__DOT__cdo);
    __Vtemp_32[1U] = (IData)((vlSelfRef.ntt__DOT__cdo 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    __Vtemp_33[0U] = (IData)(vlSelfRef.n_inv);
    __Vtemp_33[1U] = (IData)((vlSelfRef.n_inv >> 0x00000020U));
    __Vtemp_33[2U] = 0U;
    VL_MUL_W(3, __Vtemp_34, __Vtemp_32, __Vtemp_33);
    vlSelfRef.ntt__DOT__sc_p[0U] = __Vtemp_34[0U];
    vlSelfRef.ntt__DOT__sc_p[1U] = __Vtemp_34[1U];
    vlSelfRef.ntt__DOT__sc_p[2U] = (0x0000ffffU & __Vtemp_34[2U]);
    vlSelfRef.ntt__DOT__u_r2 = vlSelfRef.ntt__DOT__u_r;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__u_r3 
                                                   + vlSelfRef.ntt__DOT__vo_r3));
    vlSelfRef.ntt__DOT__vo_r2 = vlSelfRef.ntt__DOT__v_orig;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                                & ((vlSelfRef.ntt__DOT__u_r3 
                                                    + vlSelfRef.q) 
                                                   - vlSelfRef.ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__u_r3 
                                                   + vlSelfRef.ntt__DOT__vw));
    __Vtemp_36[0U] = (IData)(vlSelfRef.ntt__DOT__v_r);
    __Vtemp_36[1U] = (IData)((vlSelfRef.ntt__DOT__v_r 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    __Vtemp_37[0U] = (IData)(vlSelfRef.ntt__DOT__w_r);
    __Vtemp_37[1U] = (IData)((vlSelfRef.ntt__DOT__w_r 
                              >> 0x00000020U));
    __Vtemp_37[2U] = 0U;
    VL_MUL_W(3, __Vtemp_38, __Vtemp_36, __Vtemp_37);
    vlSelfRef.ntt__DOT__bfly_p[0U] = __Vtemp_38[0U];
    vlSelfRef.ntt__DOT__bfly_p[1U] = __Vtemp_38[1U];
    vlSelfRef.ntt__DOT__bfly_p[2U] = (0x0000ffffU & __Vtemp_38[2U]);
    vlSelfRef.ntt__DOT__gs_u = (0x000000ffffffffffULL 
                                & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                    >= vlSelfRef.q)
                                    ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                       - vlSelfRef.q)
                                    : vlSelfRef.__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.ntt__DOT__ct_u = (0x000000ffffffffffULL 
                                & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                    >= vlSelfRef.q)
                                    ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                       - vlSelfRef.q)
                                    : vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
}

void Vntt___024root___nba_sequent__TOP__1(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___nba_sequent__TOP__1\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_sub__3__Vfuncout;
    __Vfunc_ntt__DOT__mod_sub__3__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_sub__3__a;
    __Vfunc_ntt__DOT__mod_sub__3__a = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_sub__3__b;
    __Vfunc_ntt__DOT__mod_sub__3__b = 0;
    QData/*39:0*/ __Vfunc_ntt__DOT__mod_sub__3__qq;
    __Vfunc_ntt__DOT__mod_sub__3__qq = 0;
    QData/*40:0*/ __Vfunc_ntt__DOT__mod_sub__3__d;
    __Vfunc_ntt__DOT__mod_sub__3__d = 0;
    CData/*3:0*/ __Vdly__ntt__DOT__state;
    __Vdly__ntt__DOT__state = 0;
    SData/*12:0*/ __Vdly__ntt__DOT__k;
    __Vdly__ntt__DOT__k = 0;
    // Body
    __Vdly__ntt__DOT__state = vlSelfRef.ntt__DOT__state;
    __Vdly__ntt__DOT__k = vlSelfRef.ntt__DOT__k;
    vlSelfRef.__Vdly__ntt__DOT__stage = vlSelfRef.ntt__DOT__stage;
    vlSelfRef.__Vdly__ntt__DOT__inv_r = vlSelfRef.ntt__DOT__inv_r;
    if (vlSelfRef.rst_n) {
        if ((8U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
                    __Vdly__ntt__DOT__state = 0U;
                } else if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                    vlSelfRef.done = 1U;
                    __Vdly__ntt__DOT__state = 0U;
                } else if ((0x1fffU == (IData)(vlSelfRef.ntt__DOT__sc_idx))) {
                    __Vdly__ntt__DOT__state = 0x0dU;
                } else {
                    vlSelfRef.ntt__DOT__sc_idx = (0x00003fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.ntt__DOT__sc_idx)));
                    __Vdly__ntt__DOT__state = 9U;
                }
            } else if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
                __Vdly__ntt__DOT__state = ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                            ? 0x0cU
                                            : 0x0bU);
            } else if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                __Vdly__ntt__DOT__state = 0x0aU;
            } else if ((0x0fffU == (IData)(vlSelfRef.ntt__DOT__k))) {
                __Vdly__ntt__DOT__k = 0U;
                if ((0x000cU == (IData)(vlSelfRef.ntt__DOT__stage))) {
                    vlSelfRef.ntt__DOT__sc_idx = 0U;
                    __Vdly__ntt__DOT__state = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                ? 9U
                                                : 0x0dU);
                } else {
                    vlSelfRef.__Vdly__ntt__DOT__stage 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ntt__DOT__stage)));
                    __Vdly__ntt__DOT__state = 1U;
                }
            } else {
                __Vdly__ntt__DOT__k = (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.ntt__DOT__k)));
                __Vdly__ntt__DOT__state = 1U;
            }
        } else if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            __Vdly__ntt__DOT__state = ((2U & (IData)(vlSelfRef.ntt__DOT__state))
                                        ? ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                            ? 8U : 7U)
                                        : ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                            ? 6U : 5U));
        } else if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                if (vlSelfRef.ntt__DOT__inv_r) {
                    __Vfunc_ntt__DOT__mod_sub__3__qq 
                        = vlSelfRef.q;
                    __Vfunc_ntt__DOT__mod_sub__3__b 
                        = vlSelfRef.ntt__DOT__cdo;
                    vlSelfRef.ntt__DOT__v_orig = vlSelfRef.ntt__DOT__cdo;
                    __Vfunc_ntt__DOT__mod_sub__3__a 
                        = vlSelfRef.ntt__DOT__u_r;
                    __Vfunc_ntt__DOT__mod_sub__3__d 
                        = (0x000001ffffffffffULL & 
                           ((__Vfunc_ntt__DOT__mod_sub__3__a 
                             + __Vfunc_ntt__DOT__mod_sub__3__qq) 
                            - __Vfunc_ntt__DOT__mod_sub__3__b));
                    __Vfunc_ntt__DOT__mod_sub__3__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           ((__Vfunc_ntt__DOT__mod_sub__3__d 
                             >= __Vfunc_ntt__DOT__mod_sub__3__qq)
                             ? (__Vfunc_ntt__DOT__mod_sub__3__d 
                                - __Vfunc_ntt__DOT__mod_sub__3__qq)
                             : __Vfunc_ntt__DOT__mod_sub__3__d));
                    vlSelfRef.ntt__DOT__v_r = __Vfunc_ntt__DOT__mod_sub__3__Vfuncout;
                } else {
                    vlSelfRef.ntt__DOT__v_r = vlSelfRef.ntt__DOT__cdo;
                }
                __Vdly__ntt__DOT__state = 4U;
            } else {
                vlSelfRef.ntt__DOT__u_r = vlSelfRef.ntt__DOT__cdo;
                vlSelfRef.ntt__DOT__w_r = vlSelfRef.ntt__DOT__tdo;
                __Vdly__ntt__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
            __Vdly__ntt__DOT__state = 2U;
        } else {
            vlSelfRef.done = 0U;
            if (vlSelfRef.start) {
                vlSelfRef.__Vdly__ntt__DOT__stage = 0U;
                __Vdly__ntt__DOT__k = 0U;
                vlSelfRef.__Vdly__ntt__DOT__inv_r = vlSelfRef.inverse;
                __Vdly__ntt__DOT__state = 1U;
            }
        }
    } else {
        vlSelfRef.__Vdly__ntt__DOT__stage = 0U;
        vlSelfRef.ntt__DOT__sc_idx = 0U;
        __Vdly__ntt__DOT__state = 0U;
        vlSelfRef.done = 0U;
        __Vdly__ntt__DOT__k = 0U;
        vlSelfRef.__Vdly__ntt__DOT__inv_r = 0U;
    }
    vlSelfRef.ntt__DOT__state = __Vdly__ntt__DOT__state;
    vlSelfRef.ntt__DOT__k = __Vdly__ntt__DOT__k;
    vlSelfRef.ntt__DOT__cwe = 0U;
    if ((8U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    vlSelfRef.ntt__DOT__cwe = 1U;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwe = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                vlSelfRef.ntt__DOT__cwe = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
            if (vlSelfRef.coeff_wr_en) {
                vlSelfRef.ntt__DOT__cwe = 1U;
            }
        }
    }
}

void Vntt___024root___nba_sequent__TOP__2(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___nba_sequent__TOP__2\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ntt__DOT__cdo = vlSelfRef.ntt__DOT__coeff
        [vlSelfRef.ntt__DOT__craddr];
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
    if (vlSelfRef.__VdlySet__ntt__DOT__coeff__v0) {
        vlSelfRef.ntt__DOT__coeff[vlSelfRef.__VdlyDim0__ntt__DOT__coeff__v0] 
            = vlSelfRef.__VdlyVal__ntt__DOT__coeff__v0;
    }
    if (vlSelfRef.__VdlySet__ntt__DOT__tw__v0) {
        vlSelfRef.ntt__DOT__tw[vlSelfRef.__VdlyDim0__ntt__DOT__tw__v0] 
            = vlSelfRef.__VdlyVal__ntt__DOT__tw__v0;
    }
    vlSelfRef.rd_data = vlSelfRef.ntt__DOT__cdo;
}

void Vntt___024root___nba_sequent__TOP__3(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___nba_sequent__TOP__3\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ ntt__DOT__ts;
    ntt__DOT__ts = 0;
    // Body
    vlSelfRef.ntt__DOT__stage = vlSelfRef.__Vdly__ntt__DOT__stage;
    vlSelfRef.ntt__DOT__inv_r = vlSelfRef.__Vdly__ntt__DOT__inv_r;
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
    vlSelfRef.ntt__DOT__va = (0x00001fffU & ((IData)(vlSelfRef.ntt__DOT__ua) 
                                             | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(ntt__DOT__ts))));
    vlSelfRef.ntt__DOT__craddr = vlSelfRef.ntt__DOT__ua;
    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__ua;
    if ((8U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                    vlSelfRef.ntt__DOT__craddr = (0x00001fffU 
                                                  & (IData)(vlSelfRef.ntt__DOT__sc_idx));
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    vlSelfRef.ntt__DOT__cwaddr = (0x00001fffU 
                                                  & (IData)(vlSelfRef.ntt__DOT__sc_idx));
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__va;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                      >> 2U)))) {
            vlSelfRef.ntt__DOT__craddr = ((2U & (IData)(vlSelfRef.ntt__DOT__state))
                                           ? (IData)(vlSelfRef.ntt__DOT__va)
                                           : ((1U & (IData)(vlSelfRef.ntt__DOT__state))
                                               ? (IData)(vlSelfRef.ntt__DOT__ua)
                                               : (IData)(vlSelfRef.rd_addr)));
        }
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__ua;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                if (vlSelfRef.coeff_wr_en) {
                    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.coeff_wr_addr;
                }
            }
        }
    }
}

void Vntt___024root___nba_comb__TOP__0(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___nba_comb__TOP__0\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ntt__DOT__cwdata = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                   ? vlSelfRef.ntt__DOT__gs_u
                                   : vlSelfRef.ntt__DOT__ct_u);
    if ((8U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    vlSelfRef.ntt__DOT__cwdata = vlSelfRef.ntt__DOT__scaled;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwdata = (0x000000ffffffffffULL 
                                              & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                  ? vlSelfRef.ntt__DOT__vw
                                                  : 
                                                 ((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                   >= vlSelfRef.q)
                                                   ? 
                                                  (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                   - vlSelfRef.q)
                                                   : vlSelfRef.__VdfgRegularize_hebeb780c_0_1)));
            }
        }
    } else if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                vlSelfRef.ntt__DOT__cwdata = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                               ? vlSelfRef.ntt__DOT__gs_u
                                               : vlSelfRef.ntt__DOT__ct_u);
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
            if (vlSelfRef.coeff_wr_en) {
                vlSelfRef.ntt__DOT__cwdata = vlSelfRef.coeff_wr_data;
            }
        }
    }
}

void Vntt___024root___eval_nba(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_nba\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ __Vinline__nba_sequent__TOP__3_ntt__DOT__ts;
    __Vinline__nba_sequent__TOP__3_ntt__DOT__ts = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vntt___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vntt___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.ntt__DOT__cdo = vlSelfRef.ntt__DOT__coeff
            [vlSelfRef.ntt__DOT__craddr];
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
        if (vlSelfRef.__VdlySet__ntt__DOT__coeff__v0) {
            vlSelfRef.ntt__DOT__coeff[vlSelfRef.__VdlyDim0__ntt__DOT__coeff__v0] 
                = vlSelfRef.__VdlyVal__ntt__DOT__coeff__v0;
        }
        if (vlSelfRef.__VdlySet__ntt__DOT__tw__v0) {
            vlSelfRef.ntt__DOT__tw[vlSelfRef.__VdlyDim0__ntt__DOT__tw__v0] 
                = vlSelfRef.__VdlyVal__ntt__DOT__tw__v0;
        }
        vlSelfRef.rd_data = vlSelfRef.ntt__DOT__cdo;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.ntt__DOT__stage = vlSelfRef.__Vdly__ntt__DOT__stage;
        vlSelfRef.ntt__DOT__inv_r = vlSelfRef.__Vdly__ntt__DOT__inv_r;
        __Vinline__nba_sequent__TOP__3_ntt__DOT__ts 
            = (0x00001fffU & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                               ? (IData)(vlSelfRef.ntt__DOT__stage)
                               : ((IData)(0x000cU) 
                                  - (IData)(vlSelfRef.ntt__DOT__stage))));
        vlSelfRef.ntt__DOT__grp = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.ntt__DOT__k), __Vinline__nba_sequent__TOP__3_ntt__DOT__ts);
        vlSelfRef.ntt__DOT__ua = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.ntt__DOT__grp), 
                                                               (0x00001fffU 
                                                                & ((IData)(1U) 
                                                                   + (IData)(__Vinline__nba_sequent__TOP__3_ntt__DOT__ts)))) 
                                                 | ((IData)(vlSelfRef.ntt__DOT__k) 
                                                    & (VL_SHIFTL_III(13,13,13, (IData)(1U), __Vinline__nba_sequent__TOP__3_ntt__DOT__ts) 
                                                       - (IData)(1U)))));
        vlSelfRef.ntt__DOT__va = (0x00001fffU & ((IData)(vlSelfRef.ntt__DOT__ua) 
                                                 | VL_SHIFTL_III(13,13,13, (IData)(1U), __Vinline__nba_sequent__TOP__3_ntt__DOT__ts)));
        vlSelfRef.ntt__DOT__craddr = vlSelfRef.ntt__DOT__ua;
        vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__ua;
        if ((8U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                        vlSelfRef.ntt__DOT__craddr 
                            = (0x00001fffU & (IData)(vlSelfRef.ntt__DOT__sc_idx));
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                        vlSelfRef.ntt__DOT__cwaddr 
                            = (0x00001fffU & (IData)(vlSelfRef.ntt__DOT__sc_idx));
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__va;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 2U)))) {
                vlSelfRef.ntt__DOT__craddr = ((2U & (IData)(vlSelfRef.ntt__DOT__state))
                                               ? (IData)(vlSelfRef.ntt__DOT__va)
                                               : ((1U 
                                                   & (IData)(vlSelfRef.ntt__DOT__state))
                                                   ? (IData)(vlSelfRef.ntt__DOT__ua)
                                                   : (IData)(vlSelfRef.rd_addr)));
            }
            if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                        vlSelfRef.ntt__DOT__cwaddr 
                            = vlSelfRef.ntt__DOT__ua;
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    if (vlSelfRef.coeff_wr_en) {
                        vlSelfRef.ntt__DOT__cwaddr 
                            = vlSelfRef.coeff_wr_addr;
                    }
                }
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.ntt__DOT__cwdata = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                       ? vlSelfRef.ntt__DOT__gs_u
                                       : vlSelfRef.ntt__DOT__ct_u);
        if ((8U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                        vlSelfRef.ntt__DOT__cwdata 
                            = vlSelfRef.ntt__DOT__scaled;
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    vlSelfRef.ntt__DOT__cwdata = (0x000000ffffffffffULL 
                                                  & ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                      ? vlSelfRef.ntt__DOT__vw
                                                      : 
                                                     ((vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                       >= vlSelfRef.q)
                                                       ? 
                                                      (vlSelfRef.__VdfgRegularize_hebeb780c_0_1 
                                                       - vlSelfRef.q)
                                                       : vlSelfRef.__VdfgRegularize_hebeb780c_0_1)));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.ntt__DOT__state))) {
                    vlSelfRef.ntt__DOT__cwdata = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                   ? vlSelfRef.ntt__DOT__gs_u
                                                   : vlSelfRef.ntt__DOT__ct_u);
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                if (vlSelfRef.coeff_wr_en) {
                    vlSelfRef.ntt__DOT__cwdata = vlSelfRef.coeff_wr_data;
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
