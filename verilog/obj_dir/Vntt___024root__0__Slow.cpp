// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vntt.h for the primary calling header

#include "Vntt__pch.h"

VL_ATTR_COLD void Vntt___024root___eval_static(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_static\n"); );
    Vntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_ntt__DOT__unnamedblk1__DOT__bfly_tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_ntt__DOT__unnamedblk1__DOT__bfly_tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_ntt__DOT__unnamedblk1__DOT__bfly_r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_ntt__DOT__unnamedblk1__DOT__bfly_r);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_ntt__DOT__unnamedblk2__DOT__sc_tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_ntt__DOT__unnamedblk2__DOT__sc_tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_ntt__DOT__unnamedblk2__DOT__sc_r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_ntt__DOT__unnamedblk2__DOT__sc_r);
    // Body
    VL_ZERO_W(80, __Vinline__eval_static__TOP_ntt__DOT__unnamedblk1__DOT__bfly_tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_ntt__DOT__unnamedblk1__DOT__bfly_r);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_ntt__DOT__unnamedblk2__DOT__sc_tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_ntt__DOT__unnamedblk2__DOT__sc_r);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vntt___024root___eval_static__TOP(Vntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vntt___024root___eval_static__TOP\n"); );
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
    // Body
    VL_ZERO_W(80, ntt__DOT__unnamedblk1__DOT__bfly_tq);
    VL_ZERO_W(80, ntt__DOT__unnamedblk1__DOT__bfly_r);
    VL_ZERO_W(80, ntt__DOT__unnamedblk2__DOT__sc_tq);
    VL_ZERO_W(80, ntt__DOT__unnamedblk2__DOT__sc_r);
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
            VL_FATAL_MT("ntt.v", 33, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
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
    // Body
    vlSelfRef.rd_data = vlSelfRef.ntt__DOT__cdo;
    vlSelfRef.ntt__DOT__cwe = 0U;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                                & ((vlSelfRef.ntt__DOT__u_r3 
                                                    + vlSelfRef.q) 
                                                   - vlSelfRef.ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__u_r3 
                                                   + vlSelfRef.ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.ntt__DOT__u_r3 
                                                   + vlSelfRef.ntt__DOT__vo_r3));
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
    if (vlSelfRef.ntt__DOT__inv_r) {
        ntt__DOT__ts = (0x00001fffU & (IData)(vlSelfRef.ntt__DOT__stage));
        vlSelfRef.ntt__DOT__cwdata = vlSelfRef.ntt__DOT__gs_u;
    } else {
        ntt__DOT__ts = (0x00001fffU & ((IData)(0x000cU) 
                                       - (IData)(vlSelfRef.ntt__DOT__stage)));
        vlSelfRef.ntt__DOT__cwdata = vlSelfRef.ntt__DOT__ct_u;
    }
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
        if ((4U & (IData)(vlSelfRef.ntt__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                    vlSelfRef.ntt__DOT__cwe = 1U;
                    vlSelfRef.ntt__DOT__cwdata = vlSelfRef.ntt__DOT__scaled;
                    vlSelfRef.ntt__DOT__cwaddr = (0x00001fffU 
                                                  & (IData)(vlSelfRef.ntt__DOT__sc_idx));
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                vlSelfRef.ntt__DOT__cwe = 1U;
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
                vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__va;
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
                    vlSelfRef.ntt__DOT__cwdata = ((IData)(vlSelfRef.ntt__DOT__inv_r)
                                                   ? vlSelfRef.ntt__DOT__gs_u
                                                   : vlSelfRef.ntt__DOT__ct_u);
                    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.ntt__DOT__ua;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.ntt__DOT__state)))) {
                if (vlSelfRef.coeff_wr_en) {
                    vlSelfRef.ntt__DOT__cwe = 1U;
                    vlSelfRef.ntt__DOT__cwdata = vlSelfRef.coeff_wr_data;
                    vlSelfRef.ntt__DOT__cwaddr = vlSelfRef.coeff_wr_addr;
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
    vlSelf->ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2615800629313669464ull);
    vlSelf->ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18073376465433391453ull);
    vlSelf->ntt__DOT__k = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15973457003699889496ull);
    vlSelf->ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17485353398699210192ull);
    vlSelf->ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14874068962576317398ull);
    vlSelf->ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 18411423551095424546ull);
    vlSelf->ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4015596799741278431ull);
    vlSelf->ntt__DOT__va = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6830641595502704745ull);
    vlSelf->ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18070679603892795017ull);
    vlSelf->ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13595329280851320293ull);
    vlSelf->ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17279061880860941049ull);
    vlSelf->ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14595197436326880995ull);
    vlSelf->ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1828397381912433081ull);
    vlSelf->ntt__DOT__v_orig = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7539273739731610075ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ntt__DOT__bfly_p, __VscopeHash, 15768177309092400813ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->ntt__DOT__bfly_pm, __VscopeHash, 197871078802995036ull);
    vlSelf->ntt__DOT__vw = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18423436512353433578ull);
    vlSelf->ntt__DOT__u_r2 = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10591891298723507176ull);
    vlSelf->ntt__DOT__u_r3 = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10992438812435865398ull);
    vlSelf->ntt__DOT__vo_r2 = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 81719032626827693ull);
    vlSelf->ntt__DOT__vo_r3 = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3365930504573514959ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->ntt__DOT__sc_p, __VscopeHash, 12774177780749284190ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->ntt__DOT__sc_pm, __VscopeHash, 5031675983038264802ull);
    vlSelf->ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12852811225682344157ull);
    vlSelf->ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1318843114452986324ull);
    vlSelf->ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17718866234564244223ull);
    vlSelf->ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6820095488337406888ull);
    vlSelf->ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8979652368047445700ull);
    vlSelf->ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16583126936861295604ull);
    vlSelf->ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18006288244530667690ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__Vdly__ntt__DOT__stage = 0;
    vlSelf->__Vdly__ntt__DOT__inv_r = 0;
    vlSelf->__VdlyVal__ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__ntt__DOT__tw__v0 = 0;
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
