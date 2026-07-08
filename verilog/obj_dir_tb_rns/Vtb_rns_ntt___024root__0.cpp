// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rns_ntt.h for the primary calling header

#include "Vtb_rns_ntt__pch.h"

VlCoroutine Vtb_rns_ntt___024root___eval_initial__TOP__Vtiming__0(Vtb_rns_ntt___024root* vlSelf);
VlCoroutine Vtb_rns_ntt___024root___eval_initial__TOP__Vtiming__1(Vtb_rns_ntt___024root* vlSelf);

void Vtb_rns_ntt___024root___eval_initial(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_initial\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_rns_ntt___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_rns_ntt___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(Vtb_rns_ntt___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_rns_ntt___024root___eval_initial__TOP__Vtiming__0(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ tb_rns_ntt__DOT__guard_max;
    tb_rns_ntt__DOT__guard_max = 0;
    IData/*31:0*/ tb_rns_ntt__DOT__gi;
    tb_rns_ntt__DOT__gi = 0;
    IData/*31:0*/ tb_rns_ntt__DOT__fail_count;
    tb_rns_ntt__DOT__fail_count = 0;
    IData/*31:0*/ tb_rns_ntt__DOT__i;
    tb_rns_ntt__DOT__i = 0;
    IData/*31:0*/ tb_rns_ntt__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_rns_ntt__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__1__got;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__1__got[__Vi0] = 0;
    }
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__1__exp;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__1__exp[__Vi0] = 0;
    }
    QData/*63:0*/ __Vtask_tb_rns_ntt__DOT__compare__1__tag;
    __Vtask_tb_rns_ntt__DOT__compare__1__tag = 0;
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__2__got;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__2__got[__Vi0] = 0;
    }
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__2__exp;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__2__exp[__Vi0] = 0;
    }
    QData/*63:0*/ __Vtask_tb_rns_ntt__DOT__compare__2__tag;
    __Vtask_tb_rns_ntt__DOT__compare__2__tag = 0;
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__3__got;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__3__got[__Vi0] = 0;
    }
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__3__exp;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__3__exp[__Vi0] = 0;
    }
    QData/*63:0*/ __Vtask_tb_rns_ntt__DOT__compare__3__tag;
    __Vtask_tb_rns_ntt__DOT__compare__3__tag = 0;
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__5__got;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__5__got[__Vi0] = 0;
    }
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__5__exp;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__5__exp[__Vi0] = 0;
    }
    QData/*63:0*/ __Vtask_tb_rns_ntt__DOT__compare__5__tag;
    __Vtask_tb_rns_ntt__DOT__compare__5__tag = 0;
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__6__got;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__6__got[__Vi0] = 0;
    }
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__6__exp;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__6__exp[__Vi0] = 0;
    }
    QData/*63:0*/ __Vtask_tb_rns_ntt__DOT__compare__6__tag;
    __Vtask_tb_rns_ntt__DOT__compare__6__tag = 0;
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__7__got;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__7__got[__Vi0] = 0;
    }
    VlUnpacked<QData/*39:0*/, 16> __Vtask_tb_rns_ntt__DOT__compare__7__exp;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        __Vtask_tb_rns_ntt__DOT__compare__7__exp[__Vi0] = 0;
    }
    QData/*63:0*/ __Vtask_tb_rns_ntt__DOT__compare__7__tag;
    __Vtask_tb_rns_ntt__DOT__compare__7__tag = 0;
    // Body
    VL_READMEM_N(true, 80, 3, 0, "tv_rns_params_lane0.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__params0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 80, 3, 0, "tv_rns_params_lane1.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__params1)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 80, 3, 0, "tv_rns_params_lane2.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__params2)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_twiddles_fwd_lane0.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__tw_fwd0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_twiddles_inv_lane0.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__tw_inv0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_twiddles_fwd_lane1.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__tw_fwd1)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_twiddles_inv_lane1.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__tw_inv1)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_twiddles_fwd_lane2.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__tw_fwd2)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_twiddles_inv_lane2.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__tw_inv2)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_input_lane0.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__input0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_input_lane1.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__input1)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_input_lane2.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__input2)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_ntt_lane0.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__ntt_exp0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_ntt_lane1.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__ntt_exp1)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_ntt_lane2.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__ntt_exp2)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_intt_lane0.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__intt_exp0)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_intt_lane1.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__intt_exp1)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 40, 16, 0, "tv_rns_intt_lane2.hex"s
                 ,  &(vlSelfRef.tb_rns_ntt__DOT__intt_exp2)
                 , 0, ~0ULL);
    vlSelfRef.tb_rns_ntt__DOT__clk = 0U;
    vlSelfRef.tb_rns_ntt__DOT__rst_n = 0U;
    vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en = 0U;
    vlSelfRef.tb_rns_ntt__DOT__tw_wr_en = 0U;
    vlSelfRef.tb_rns_ntt__DOT__start = 0U;
    vlSelfRef.tb_rns_ntt__DOT__inverse = 0U;
    tb_rns_ntt__DOT__unnamedblk1_1__DOT____Vrepeat0 = 8U;
    while (VL_LTS_III(32, 0U, tb_rns_ntt__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             173);
        tb_rns_ntt__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_rns_ntt__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_rns_ntt__DOT__rst_n = 1U;
    Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                      "@(posedge tb_rns_ntt.clk)");
    co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rns_ntt.clk)", 
                                                         "tb_rns_ntt.v", 
                                                         175);
    vlSelfRef.tb_rns_ntt__DOT__q_all[0U] = (IData)(
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[0U][1U])) 
                                                        << 0x00000020U) 
                                                       | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[0U][0U])))));
    vlSelfRef.tb_rns_ntt__DOT__q_all[1U] = (((IData)(
                                                     (0x000000ffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[0U][1U])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[0U][0U]))))) 
                                             << 8U) 
                                            | (IData)(
                                                      ((0x000000ffffffffffULL 
                                                        & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[0U][1U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[0U][0U])))) 
                                                       >> 0x00000020U)));
    vlSelfRef.tb_rns_ntt__DOT__q_all[2U] = ((0xffff0000U 
                                             & vlSelfRef.tb_rns_ntt__DOT__q_all[2U]) 
                                            | (((IData)(
                                                        (0x000000ffffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[0U][1U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[0U][0U]))))) 
                                                >> 0x00000018U) 
                                               | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[0U][1U])) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[0U][0U])))) 
                                                           >> 0x00000020U)) 
                                                  << 8U)));
    vlSelfRef.tb_rns_ntt__DOT__q_all[2U] = ((0x0000ffffU 
                                             & vlSelfRef.tb_rns_ntt__DOT__q_all[2U]) 
                                            | ((IData)(
                                                       (0x000000ffffffffffULL 
                                                        & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[0U][1U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[0U][0U]))))) 
                                               << 0x00000010U));
    vlSelfRef.tb_rns_ntt__DOT__q_all[3U] = (0x00ffffffU 
                                            & (((IData)(
                                                        (0x000000ffffffffffULL 
                                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[0U][1U])) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[0U][0U]))))) 
                                                >> 0x00000010U) 
                                               | ((IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[0U][1U])) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[0U][0U])))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000010U)));
    vlSelfRef.tb_rns_ntt__DOT__n_inv_all[0U] = (IData)(
                                                       (0x000000ffffffffffULL 
                                                        & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[1U][1U])) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[1U][0U])))));
    vlSelfRef.tb_rns_ntt__DOT__n_inv_all[1U] = (((IData)(
                                                         (0x000000ffffffffffULL 
                                                          & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[1U][1U])) 
                                                              << 0x00000020U) 
                                                             | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[1U][0U]))))) 
                                                 << 8U) 
                                                | (IData)(
                                                          ((0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[1U][1U])) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[1U][0U])))) 
                                                           >> 0x00000020U)));
    vlSelfRef.tb_rns_ntt__DOT__n_inv_all[2U] = ((0xffff0000U 
                                                 & vlSelfRef.tb_rns_ntt__DOT__n_inv_all[2U]) 
                                                | (((IData)(
                                                            (0x000000ffffffffffULL 
                                                             & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[1U][1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[1U][0U]))))) 
                                                    >> 0x00000018U) 
                                                   | ((IData)(
                                                              ((0x000000ffffffffffULL 
                                                                & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[1U][1U])) 
                                                                    << 0x00000020U) 
                                                                   | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[1U][0U])))) 
                                                               >> 0x00000020U)) 
                                                      << 8U)));
    vlSelfRef.tb_rns_ntt__DOT__n_inv_all[2U] = ((0x0000ffffU 
                                                 & vlSelfRef.tb_rns_ntt__DOT__n_inv_all[2U]) 
                                                | ((IData)(
                                                           (0x000000ffffffffffULL 
                                                            & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[1U][1U])) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[1U][0U]))))) 
                                                   << 0x00000010U));
    vlSelfRef.tb_rns_ntt__DOT__n_inv_all[3U] = (0x00ffffffU 
                                                & (((IData)(
                                                            (0x000000ffffffffffULL 
                                                             & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[1U][1U])) 
                                                                 << 0x00000020U) 
                                                                | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[1U][0U]))))) 
                                                    >> 0x00000010U) 
                                                   | ((IData)(
                                                              ((0x000000ffffffffffULL 
                                                                & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[1U][1U])) 
                                                                    << 0x00000020U) 
                                                                   | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[1U][0U])))) 
                                                               >> 0x00000020U)) 
                                                      << 0x00000010U)));
    vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[0U] = vlSelfRef.tb_rns_ntt__DOT__params0[2U][0U];
    vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[1U] = vlSelfRef.tb_rns_ntt__DOT__params0[2U][1U];
    vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U] = 
        ((vlSelfRef.tb_rns_ntt__DOT__params1[2U][0U] 
          << 0x00000010U) | vlSelfRef.tb_rns_ntt__DOT__params0[2U][2U]);
    vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] = 
        ((vlSelfRef.tb_rns_ntt__DOT__params1[2U][0U] 
          >> 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__params1[2U][1U] 
                             << 0x00000010U));
    vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] = 
        ((vlSelfRef.tb_rns_ntt__DOT__params1[2U][1U] 
          >> 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__params1[2U][2U] 
                             << 0x00000010U));
    vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[5U] = 
        (((0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__params2[2U][0U]) 
          | (vlSelfRef.tb_rns_ntt__DOT__params1[2U][2U] 
             >> 0x00000010U)) | (0xffff0000U & vlSelfRef.tb_rns_ntt__DOT__params2[2U][0U]));
    vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[6U] = 
        ((0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__params2[2U][1U]) 
         | (0xffff0000U & vlSelfRef.tb_rns_ntt__DOT__params2[2U][1U]));
    vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[7U] = 
        (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__params2[2U][2U]);
    VL_WRITEF_NX("Lane 0: q=%0# (30-bit)\nLane 1: q=%0# (30-bit)\nLane 2: q=%0# (40-bit)\n",0,
                 40,(0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[0U][1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params0[0U][0U])))),
                 40,(0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[0U][1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params1[0U][0U])))),
                 40,(0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[0U][1U])) 
                                               << 0x00000020U) 
                                              | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__params2[0U][0U])))));
    vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel = 0U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_en = 1U;
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr = (0x0000001fU 
                                                 & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_data = vlSelfRef.tb_rns_ntt__DOT__tw_fwd0
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             193);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr = (0x0000001fU 
                                                 & ((IData)(0x10U) 
                                                    + tb_rns_ntt__DOT__i));
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_data = vlSelfRef.tb_rns_ntt__DOT__tw_inv0
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             194);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel = 1U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr = (0x0000001fU 
                                                 & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_data = vlSelfRef.tb_rns_ntt__DOT__tw_fwd1
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             197);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr = (0x0000001fU 
                                                 & ((IData)(0x10U) 
                                                    + tb_rns_ntt__DOT__i));
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_data = vlSelfRef.tb_rns_ntt__DOT__tw_inv1
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             198);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel = 2U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr = (0x0000001fU 
                                                 & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_data = vlSelfRef.tb_rns_ntt__DOT__tw_fwd2
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             201);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr = (0x0000001fU 
                                                 & ((IData)(0x10U) 
                                                    + tb_rns_ntt__DOT__i));
        vlSelfRef.tb_rns_ntt__DOT__tw_wr_data = vlSelfRef.tb_rns_ntt__DOT__tw_inv2
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             202);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__tw_wr_en = 0U;
    Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                      "@(posedge tb_rns_ntt.clk)");
    co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rns_ntt.clk)", 
                                                         "tb_rns_ntt.v", 
                                                         204);
    vlSelfRef.tb_rns_ntt__DOT__lane_sel = 0U;
    vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en = 1U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr = 
            (0x0000000fU & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data = vlSelfRef.tb_rns_ntt__DOT__input0
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             208);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__lane_sel = 1U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr = 
            (0x0000000fU & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data = vlSelfRef.tb_rns_ntt__DOT__input1
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             210);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__lane_sel = 2U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr = 
            (0x0000000fU & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data = vlSelfRef.tb_rns_ntt__DOT__input2
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             212);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en = 0U;
    Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                      "@(posedge tb_rns_ntt.clk)");
    co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rns_ntt.clk)", 
                                                         "tb_rns_ntt.v", 
                                                         213);
    VL_WRITEF_NX("\n[NTT] Starting all 3 lanes...\n",0);
    vlSelfRef.tb_rns_ntt__DOT__inverse = 0U;
    vlSelfRef.tb_rns_ntt__DOT__start = 1U;
    Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                      "@(posedge tb_rns_ntt.clk)");
    co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rns_ntt.clk)", 
                                                         "tb_rns_ntt.v", 
                                                         217);
    vlSelfRef.tb_rns_ntt__DOT__start = 0U;
    tb_rns_ntt__DOT__guard_max = 0x000001e8U;
    tb_rns_ntt__DOT__gi = 0U;
    while (VL_LTS_III(32, tb_rns_ntt__DOT__gi, tb_rns_ntt__DOT__guard_max)) {
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             120);
        if (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done) 
             & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done) 
                & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done)))) {
            tb_rns_ntt__DOT__gi = tb_rns_ntt__DOT__guard_max;
        }
        tb_rns_ntt__DOT__gi = ((IData)(1U) + tb_rns_ntt__DOT__gi);
    }
    VL_WRITEF_NX("[NTT] Done. lane_done=%b\n",0,3,(
                                                   ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done))));
    vlSelfRef.tb_rns_ntt__DOT__rd_lane = 0U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__rd_addr = (0x0000000fU 
                                              & tb_rns_ntt__DOT__i);
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             222);
        vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[(0x0000000fU 
                                            & tb_rns_ntt__DOT__i)] 
            = vlSelfRef.tb_rns_ntt__DOT__rd_data;
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__rd_lane = 1U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__rd_addr = (0x0000000fU 
                                              & tb_rns_ntt__DOT__i);
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             223);
        vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[(0x0000000fU 
                                            & tb_rns_ntt__DOT__i)] 
            = vlSelfRef.tb_rns_ntt__DOT__rd_data;
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__rd_lane = 2U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__rd_addr = (0x0000000fU 
                                              & tb_rns_ntt__DOT__i);
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             224);
        vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[(0x0000000fU 
                                            & tb_rns_ntt__DOT__i)] 
            = vlSelfRef.tb_rns_ntt__DOT__rd_data;
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    tb_rns_ntt__DOT__fail_count = 0U;
    __Vtask_tb_rns_ntt__DOT__compare__1__tag = 0ULL;
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[0U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[0U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[1U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[1U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[2U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[2U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[3U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[3U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[4U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[4U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[5U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[5U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[6U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[6U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[7U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[7U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[8U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[8U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[9U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[9U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[10U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[10U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[11U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[11U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[12U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[12U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[13U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[13U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[14U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[14U];
    __Vtask_tb_rns_ntt__DOT__compare__1__exp[15U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp0[15U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[0U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[0U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[1U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[1U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[2U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[2U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[3U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[3U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[4U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[4U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[5U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[5U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[6U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[6U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[7U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[7U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[8U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[8U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[9U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[9U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[10U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[10U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[11U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[11U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[12U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[12U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[13U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[13U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[14U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[14U];
    __Vtask_tb_rns_ntt__DOT__compare__1__got[15U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0[15U];
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[0U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[0U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=0  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[0U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[0U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[1U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[1U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=1  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[1U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[1U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[2U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[2U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=2  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[2U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[2U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[3U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[3U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=3  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[3U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[3U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[4U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[4U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=4  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[4U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[4U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[5U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[5U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=5  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[5U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[5U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[6U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[6U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=6  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[6U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[6U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[7U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[7U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=7  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[7U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[7U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[8U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[8U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=8  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[8U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[8U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[9U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[9U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=9  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[9U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[9U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[10U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[10U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=10  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[10U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[10U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[11U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[11U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=11  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[11U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[11U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[12U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[12U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=12  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[12U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[12U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[13U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[13U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=13  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[13U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[13U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[14U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[14U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=14  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[14U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[14U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__1__got[15U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__1__exp[15U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=15  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__1__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__got[15U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__1__exp[15U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    __Vtask_tb_rns_ntt__DOT__compare__2__tag = 0ULL;
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[0U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[0U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[1U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[1U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[2U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[2U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[3U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[3U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[4U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[4U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[5U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[5U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[6U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[6U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[7U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[7U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[8U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[8U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[9U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[9U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[10U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[10U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[11U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[11U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[12U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[12U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[13U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[13U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[14U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[14U];
    __Vtask_tb_rns_ntt__DOT__compare__2__exp[15U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp1[15U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[0U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[0U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[1U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[1U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[2U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[2U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[3U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[3U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[4U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[4U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[5U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[5U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[6U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[6U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[7U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[7U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[8U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[8U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[9U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[9U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[10U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[10U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[11U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[11U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[12U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[12U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[13U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[13U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[14U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[14U];
    __Vtask_tb_rns_ntt__DOT__compare__2__got[15U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1[15U];
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[0U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[0U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=0  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[0U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[0U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[1U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[1U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=1  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[1U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[1U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[2U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[2U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=2  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[2U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[2U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[3U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[3U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=3  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[3U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[3U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[4U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[4U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=4  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[4U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[4U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[5U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[5U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=5  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[5U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[5U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[6U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[6U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=6  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[6U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[6U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[7U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[7U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=7  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[7U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[7U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[8U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[8U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=8  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[8U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[8U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[9U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[9U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=9  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[9U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[9U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[10U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[10U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=10  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[10U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[10U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[11U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[11U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=11  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[11U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[11U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[12U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[12U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=12  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[12U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[12U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[13U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[13U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=13  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[13U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[13U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[14U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[14U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=14  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[14U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[14U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__2__got[15U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__2__exp[15U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=15  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__2__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__got[15U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__2__exp[15U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    __Vtask_tb_rns_ntt__DOT__compare__3__tag = 0ULL;
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[0U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[0U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[1U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[1U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[2U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[2U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[3U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[3U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[4U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[4U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[5U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[5U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[6U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[6U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[7U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[7U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[8U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[8U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[9U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[9U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[10U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[10U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[11U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[11U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[12U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[12U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[13U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[13U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[14U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[14U];
    __Vtask_tb_rns_ntt__DOT__compare__3__exp[15U] = vlSelfRef.tb_rns_ntt__DOT__ntt_exp2[15U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[0U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[0U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[1U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[1U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[2U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[2U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[3U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[3U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[4U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[4U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[5U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[5U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[6U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[6U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[7U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[7U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[8U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[8U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[9U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[9U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[10U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[10U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[11U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[11U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[12U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[12U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[13U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[13U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[14U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[14U];
    __Vtask_tb_rns_ntt__DOT__compare__3__got[15U] = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2[15U];
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[0U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[0U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=0  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[0U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[0U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[1U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[1U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=1  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[1U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[1U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[2U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[2U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=2  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[2U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[2U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[3U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[3U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=3  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[3U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[3U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[4U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[4U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=4  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[4U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[4U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[5U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[5U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=5  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[5U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[5U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[6U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[6U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=6  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[6U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[6U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[7U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[7U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=7  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[7U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[7U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[8U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[8U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=8  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[8U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[8U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[9U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[9U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=9  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[9U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[9U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[10U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[10U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=10  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[10U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[10U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[11U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[11U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=11  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[11U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[11U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[12U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[12U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=12  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[12U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[12U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[13U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[13U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=13  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[13U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[13U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[14U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[14U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=14  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[14U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[14U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__3__got[15U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__3__exp[15U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=15  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__3__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__got[15U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__3__exp[15U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if ((0U == tb_rns_ntt__DOT__fail_count)) {
        VL_WRITEF_NX("[NTT] PASS \342\200\224 all 3 lanes match expected\n",0);
    } else {
        VL_WRITEF_NX("[NTT] FAIL \342\200\224 %0d mismatches\n",0,
                     32,tb_rns_ntt__DOT__fail_count);
    }
    vlSelfRef.tb_rns_ntt__DOT__lane_sel = 0U;
    vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en = 1U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr = 
            (0x0000000fU & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data = vlSelfRef.tb_rns_ntt__DOT__hw_ntt0
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             238);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__lane_sel = 1U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr = 
            (0x0000000fU & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data = vlSelfRef.tb_rns_ntt__DOT__hw_ntt1
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             240);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__lane_sel = 2U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr = 
            (0x0000000fU & tb_rns_ntt__DOT__i);
        vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data = vlSelfRef.tb_rns_ntt__DOT__hw_ntt2
            [(0x0000000fU & tb_rns_ntt__DOT__i)];
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             242);
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en = 0U;
    Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                      "@(posedge tb_rns_ntt.clk)");
    co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rns_ntt.clk)", 
                                                         "tb_rns_ntt.v", 
                                                         243);
    VL_WRITEF_NX("\n[INTT] Starting all 3 lanes...\n",0);
    vlSelfRef.tb_rns_ntt__DOT__inverse = 1U;
    vlSelfRef.tb_rns_ntt__DOT__start = 1U;
    Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                      "@(posedge tb_rns_ntt.clk)");
    co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_rns_ntt.clk)", 
                                                         "tb_rns_ntt.v", 
                                                         247);
    vlSelfRef.tb_rns_ntt__DOT__start = 0U;
    tb_rns_ntt__DOT__guard_max = 0x000001e8U;
    tb_rns_ntt__DOT__gi = 0U;
    while (VL_LTS_III(32, tb_rns_ntt__DOT__gi, tb_rns_ntt__DOT__guard_max)) {
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             120);
        if (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done) 
             & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done) 
                & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done)))) {
            tb_rns_ntt__DOT__gi = tb_rns_ntt__DOT__guard_max;
        }
        tb_rns_ntt__DOT__gi = ((IData)(1U) + tb_rns_ntt__DOT__gi);
    }
    VL_WRITEF_NX("[INTT] Done. lane_done=%b\n",0,3,
                 (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done) 
                   << 2U) | (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done) 
                              << 1U) | (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done))));
    vlSelfRef.tb_rns_ntt__DOT__rd_lane = 0U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__rd_addr = (0x0000000fU 
                                              & tb_rns_ntt__DOT__i);
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             252);
        vlSelfRef.tb_rns_ntt__DOT__hw_intt0[(0x0000000fU 
                                             & tb_rns_ntt__DOT__i)] 
            = vlSelfRef.tb_rns_ntt__DOT__rd_data;
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__rd_lane = 1U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__rd_addr = (0x0000000fU 
                                              & tb_rns_ntt__DOT__i);
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             253);
        vlSelfRef.tb_rns_ntt__DOT__hw_intt1[(0x0000000fU 
                                             & tb_rns_ntt__DOT__i)] 
            = vlSelfRef.tb_rns_ntt__DOT__rd_data;
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    vlSelfRef.tb_rns_ntt__DOT__rd_lane = 2U;
    tb_rns_ntt__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000010U, tb_rns_ntt__DOT__i)) {
        vlSelfRef.tb_rns_ntt__DOT__rd_addr = (0x0000000fU 
                                              & tb_rns_ntt__DOT__i);
        Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(vlSelf, 
                                                          "@(posedge tb_rns_ntt.clk)");
        co_await vlSelfRef.__VtrigSched_h057f82d5__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_rns_ntt.clk)", 
                                                             "tb_rns_ntt.v", 
                                                             254);
        vlSelfRef.tb_rns_ntt__DOT__hw_intt2[(0x0000000fU 
                                             & tb_rns_ntt__DOT__i)] 
            = vlSelfRef.tb_rns_ntt__DOT__rd_data;
        tb_rns_ntt__DOT__i = ((IData)(1U) + tb_rns_ntt__DOT__i);
    }
    tb_rns_ntt__DOT__fail_count = 0U;
    __Vtask_tb_rns_ntt__DOT__compare__5__tag = 1ULL;
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[0U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[0U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[1U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[1U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[2U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[2U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[3U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[3U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[4U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[4U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[5U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[5U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[6U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[6U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[7U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[7U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[8U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[8U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[9U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[9U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[10U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[10U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[11U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[11U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[12U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[12U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[13U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[13U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[14U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[14U];
    __Vtask_tb_rns_ntt__DOT__compare__5__exp[15U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp0[15U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[0U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[0U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[1U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[1U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[2U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[2U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[3U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[3U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[4U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[4U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[5U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[5U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[6U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[6U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[7U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[7U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[8U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[8U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[9U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[9U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[10U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[10U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[11U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[11U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[12U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[12U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[13U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[13U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[14U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[14U];
    __Vtask_tb_rns_ntt__DOT__compare__5__got[15U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt0[15U];
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[0U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[0U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=0  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[0U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[0U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[1U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[1U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=1  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[1U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[1U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[2U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[2U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=2  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[2U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[2U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[3U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[3U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=3  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[3U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[3U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[4U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[4U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=4  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[4U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[4U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[5U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[5U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=5  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[5U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[5U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[6U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[6U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=6  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[6U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[6U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[7U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[7U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=7  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[7U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[7U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[8U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[8U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=8  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[8U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[8U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[9U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[9U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=9  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[9U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[9U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[10U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[10U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=10  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[10U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[10U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[11U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[11U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=11  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[11U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[11U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[12U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[12U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=12  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[12U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[12U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[13U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[13U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=13  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[13U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[13U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[14U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[14U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=14  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[14U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[14U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__5__got[15U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__5__exp[15U])))) {
        VL_WRITEF_NX("  FAIL %s lane=0 i=15  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__5__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__got[15U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__5__exp[15U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    __Vtask_tb_rns_ntt__DOT__compare__6__tag = 1ULL;
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[0U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[0U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[1U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[1U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[2U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[2U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[3U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[3U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[4U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[4U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[5U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[5U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[6U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[6U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[7U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[7U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[8U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[8U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[9U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[9U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[10U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[10U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[11U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[11U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[12U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[12U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[13U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[13U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[14U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[14U];
    __Vtask_tb_rns_ntt__DOT__compare__6__exp[15U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp1[15U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[0U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[0U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[1U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[1U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[2U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[2U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[3U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[3U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[4U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[4U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[5U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[5U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[6U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[6U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[7U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[7U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[8U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[8U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[9U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[9U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[10U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[10U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[11U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[11U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[12U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[12U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[13U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[13U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[14U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[14U];
    __Vtask_tb_rns_ntt__DOT__compare__6__got[15U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt1[15U];
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[0U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[0U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=0  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[0U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[0U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[1U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[1U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=1  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[1U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[1U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[2U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[2U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=2  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[2U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[2U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[3U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[3U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=3  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[3U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[3U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[4U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[4U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=4  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[4U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[4U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[5U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[5U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=5  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[5U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[5U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[6U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[6U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=6  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[6U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[6U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[7U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[7U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=7  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[7U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[7U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[8U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[8U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=8  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[8U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[8U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[9U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[9U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=9  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[9U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[9U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[10U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[10U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=10  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[10U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[10U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[11U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[11U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=11  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[11U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[11U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[12U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[12U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=12  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[12U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[12U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[13U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[13U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=13  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[13U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[13U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[14U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[14U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=14  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[14U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[14U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__6__got[15U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__6__exp[15U])))) {
        VL_WRITEF_NX("  FAIL %s lane=1 i=15  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__6__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__got[15U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__6__exp[15U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    __Vtask_tb_rns_ntt__DOT__compare__7__tag = 1ULL;
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[0U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[0U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[1U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[1U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[2U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[2U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[3U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[3U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[4U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[4U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[5U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[5U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[6U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[6U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[7U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[7U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[8U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[8U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[9U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[9U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[10U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[10U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[11U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[11U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[12U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[12U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[13U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[13U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[14U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[14U];
    __Vtask_tb_rns_ntt__DOT__compare__7__exp[15U] = vlSelfRef.tb_rns_ntt__DOT__intt_exp2[15U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[0U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[0U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[1U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[1U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[2U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[2U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[3U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[3U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[4U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[4U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[5U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[5U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[6U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[6U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[7U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[7U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[8U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[8U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[9U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[9U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[10U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[10U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[11U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[11U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[12U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[12U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[13U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[13U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[14U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[14U];
    __Vtask_tb_rns_ntt__DOT__compare__7__got[15U] = vlSelfRef.tb_rns_ntt__DOT__hw_intt2[15U];
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[0U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[0U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=0  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[0U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[0U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[1U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[1U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=1  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[1U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[1U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[2U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[2U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=2  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[2U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[2U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[3U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[3U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=3  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[3U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[3U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[4U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[4U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=4  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[4U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[4U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[5U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[5U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=5  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[5U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[5U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[6U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[6U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=6  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[6U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[6U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[7U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[7U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=7  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[7U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[7U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[8U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[8U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=8  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[8U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[8U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[9U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[9U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=9  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[9U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[9U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[10U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[10U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=10  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[10U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[10U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[11U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[11U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=11  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[11U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[11U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[12U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[12U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=12  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[12U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[12U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[13U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[13U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=13  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[13U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[13U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[14U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[14U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=14  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[14U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[14U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if (VL_UNLIKELY(((__Vtask_tb_rns_ntt__DOT__compare__7__got[15U] 
                      != __Vtask_tb_rns_ntt__DOT__compare__7__exp[15U])))) {
        VL_WRITEF_NX("  FAIL %s lane=2 i=15  got=%0#  exp=%0#\n",0,
                     32,((0U != __Vtask_tb_rns_ntt__DOT__compare__7__tag)
                          ? 0x494e5454U : 0x4e545420U),
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__got[15U],
                     40,__Vtask_tb_rns_ntt__DOT__compare__7__exp[15U]);
        tb_rns_ntt__DOT__fail_count = ((IData)(1U) 
                                       + tb_rns_ntt__DOT__fail_count);
    }
    if ((0U == tb_rns_ntt__DOT__fail_count)) {
        VL_WRITEF_NX("[INTT] PASS \342\200\224 all 3 lanes recovered original input\n",0);
    } else {
        VL_WRITEF_NX("[INTT] FAIL \342\200\224 %0d mismatches\n",0,
                     32,tb_rns_ntt__DOT__fail_count);
    }
    VL_WRITEF_NX("\nDone.\n",0);
    VL_FINISH_MT("tb_rns_ntt.v", 267, "");
    co_return;
}

VlCoroutine Vtb_rns_ntt___024root___eval_initial__TOP__Vtiming__1(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_rns_ntt.v", 
                                             31);
        vlSelfRef.tb_rns_ntt__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__clk)));
    }
    co_return;
}

void Vtb_rns_ntt___024root___eval_triggers_vec__act(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_triggers_vec__act\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.tb_rns_ntt__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.tb_rns_ntt__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__clk__0 
        = vlSelfRef.tb_rns_ntt__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__rst_n__0 
        = vlSelfRef.tb_rns_ntt__DOT__rst_n;
}

bool Vtb_rns_ntt___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___trigger_anySet__act\n"); );
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

void Vtb_rns_ntt___024root___act_sequent__TOP__0(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___act_sequent__TOP__0\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_14;
    __VdfgRegularize_hebeb780c_0_14 = 0;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<5>/*159:0*/ __Vtemp_7;
    VlWide<5>/*159:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<5>/*159:0*/ __Vtemp_27;
    VlWide<5>/*159:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_41;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<5>/*159:0*/ __Vtemp_47;
    VlWide<5>/*159:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<5>/*159:0*/ __Vtemp_67;
    VlWide<5>/*159:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_82;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<3>/*95:0*/ __Vtemp_85;
    VlWide<3>/*95:0*/ __Vtemp_86;
    VlWide<5>/*159:0*/ __Vtemp_87;
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
    VlWide<5>/*159:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_114;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_118;
    VlWide<3>/*95:0*/ __Vtemp_121;
    VlWide<3>/*95:0*/ __Vtemp_122;
    VlWide<3>/*95:0*/ __Vtemp_124;
    VlWide<3>/*95:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_126;
    VlWide<5>/*159:0*/ __Vtemp_127;
    VlWide<5>/*159:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_134;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<3>/*95:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_142;
    VlWide<3>/*95:0*/ __Vtemp_144;
    VlWide<3>/*95:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_146;
    VlWide<5>/*159:0*/ __Vtemp_147;
    VlWide<5>/*159:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_154;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_158;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_162;
    VlWide<3>/*95:0*/ __Vtemp_164;
    VlWide<3>/*95:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_166;
    VlWide<5>/*159:0*/ __Vtemp_167;
    VlWide<5>/*159:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_173;
    VlWide<3>/*95:0*/ __Vtemp_174;
    VlWide<3>/*95:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_177;
    VlWide<3>/*95:0*/ __Vtemp_178;
    VlWide<3>/*95:0*/ __Vtemp_181;
    VlWide<3>/*95:0*/ __Vtemp_182;
    // Body
    __Vtemp_2[0U] = (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo);
    __Vtemp_2[1U] = (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo) 
                      << 8U) | (IData)((vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo) 
                      << 0x00000010U) | (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo 
                                                     >> 0x00000020U)) 
                                            << 8U)));
    __Vtemp_2[3U] = (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo) 
                      >> 0x00000010U) | ((IData)((vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo 
                                                  >> 0x00000020U)) 
                                         << 0x00000010U));
    vlSelfRef.tb_rns_ntt__DOT__rd_data = ((0x77U >= 
                                           (0x0000007fU 
                                            & ((IData)(0x00000028U) 
                                               * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane))))
                                           ? (0x000000ffffffffffULL 
                                              & (((QData)((IData)(__Vtemp_2
                                                                  [
                                                                  (((IData)(0x00000027U) 
                                                                    + 
                                                                    (0x0000007fU 
                                                                     & ((IData)(0x00000028U) 
                                                                        * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & ((IData)(0x00000028U) 
                                                        * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane))))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(0x00000028U) 
                                                        * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(0x00000028U) 
                                                          * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(__Vtemp_2
                                                                      [
                                                                      (((IData)(0x0000001fU) 
                                                                        + 
                                                                        (0x0000007fU 
                                                                         & ((IData)(0x00000028U) 
                                                                            * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000028U) 
                                                           * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))))) 
                                                    | ((QData)((IData)(__Vtemp_2
                                                                       [
                                                                       (3U 
                                                                        & (((IData)(0x00000028U) 
                                                                            * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000028U) 
                                                           * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))))))
                                           : 0ULL);
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U])))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                               >> 8U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                 >> 8U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_13 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_13 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_13));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
           & (0U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
           & (1U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
           & (2U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[0U]))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_4[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a);
    __Vtemp_4[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a 
                             >> 0x00000020U));
    __Vtemp_4[2U] = 0U;
    __Vtemp_5[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b);
    __Vtemp_5[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b 
                             >> 0x00000020U));
    __Vtemp_5[2U] = 0U;
    VL_MUL_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_6[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_6[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
    __Vtemp_7[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_7[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_7[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    __Vtemp_11[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[0U];
    __Vtemp_11[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[1U];
    __Vtemp_11[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U]);
    __Vtemp_11[3U] = 0U;
    __Vtemp_11[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_7, __Vtemp_11);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_13[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_13[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_13[2U] = 0U;
    __Vtemp_14[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
    __Vtemp_14[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                              >> 0x00000020U));
    __Vtemp_14[2U] = 0U;
    VL_MUL_W(3, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_15[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_15[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_15[2U]);
    VL_SUB_W(3, __Vtemp_17, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_17[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_17[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_17[2U]);
    __Vtemp_18[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
    __Vtemp_18[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                              >> 0x00000020U));
    __Vtemp_18[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_18)) {
        __Vtemp_21[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
        __Vtemp_21[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                                  >> 0x00000020U));
        __Vtemp_21[2U] = 0U;
        VL_SUB_W(3, __Vtemp_22, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_21);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_22[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_22[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_22[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                       >> 8U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[1U])) 
                                       >> 8U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_24[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a);
    __Vtemp_24[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a 
                              >> 0x00000020U));
    __Vtemp_24[2U] = 0U;
    __Vtemp_25[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b);
    __Vtemp_25[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b 
                              >> 0x00000020U));
    __Vtemp_25[2U] = 0U;
    VL_MUL_W(3, __Vtemp_26, __Vtemp_24, __Vtemp_25);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_26[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_26[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_26[2U]);
    __Vtemp_27[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_27[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_27[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_27[3U] = 0U;
    __Vtemp_27[4U] = 0U;
    __Vtemp_31[0U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_31[1U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_31[2U] = (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                      >> 0x00000010U);
    __Vtemp_31[3U] = 0U;
    __Vtemp_31[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_27, __Vtemp_31);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_33[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_33[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_33[2U] = 0U;
    __Vtemp_34[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq);
    __Vtemp_34[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq 
                              >> 0x00000020U));
    __Vtemp_34[2U] = 0U;
    VL_MUL_W(3, __Vtemp_35, __Vtemp_33, __Vtemp_34);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_35[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_35[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_35[2U]);
    VL_SUB_W(3, __Vtemp_37, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_37[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_37[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_37[2U]);
    __Vtemp_38[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq);
    __Vtemp_38[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq 
                              >> 0x00000020U));
    __Vtemp_38[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_38)) {
        __Vtemp_41[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq);
        __Vtemp_41[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq 
                                  >> 0x00000020U));
        __Vtemp_41[2U] = 0U;
        VL_SUB_W(3, __Vtemp_42, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_41);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_42[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_42[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_42[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_44[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a);
    __Vtemp_44[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a 
                              >> 0x00000020U));
    __Vtemp_44[2U] = 0U;
    __Vtemp_45[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b);
    __Vtemp_45[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b 
                              >> 0x00000020U));
    __Vtemp_45[2U] = 0U;
    VL_MUL_W(3, __Vtemp_46, __Vtemp_44, __Vtemp_45);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_46[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_46[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_46[2U]);
    __Vtemp_47[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_47[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_47[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_47[3U] = 0U;
    __Vtemp_47[4U] = 0U;
    __Vtemp_51[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[5U];
    __Vtemp_51[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[6U];
    __Vtemp_51[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[7U]);
    __Vtemp_51[3U] = 0U;
    __Vtemp_51[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_47, __Vtemp_51);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_53[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_53[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_53[2U] = 0U;
    __Vtemp_54[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq);
    __Vtemp_54[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq 
                              >> 0x00000020U));
    __Vtemp_54[2U] = 0U;
    VL_MUL_W(3, __Vtemp_55, __Vtemp_53, __Vtemp_54);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_55[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_55[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    VL_SUB_W(3, __Vtemp_57, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_57[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_57[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_57[2U]);
    __Vtemp_58[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq);
    __Vtemp_58[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq 
                              >> 0x00000020U));
    __Vtemp_58[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_58)) {
        __Vtemp_61[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq);
        __Vtemp_61[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq 
                                  >> 0x00000020U));
        __Vtemp_61[2U] = 0U;
        VL_SUB_W(3, __Vtemp_62, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_61);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_62[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_62[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_62[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_64[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a);
    __Vtemp_64[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a 
                              >> 0x00000020U));
    __Vtemp_64[2U] = 0U;
    __Vtemp_65[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b);
    __Vtemp_65[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b 
                              >> 0x00000020U));
    __Vtemp_65[2U] = 0U;
    VL_MUL_W(3, __Vtemp_66, __Vtemp_64, __Vtemp_65);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_66[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_66[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_66[2U]);
    __Vtemp_67[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_67[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_67[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_67[3U] = 0U;
    __Vtemp_67[4U] = 0U;
    __Vtemp_71[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[0U];
    __Vtemp_71[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[1U];
    __Vtemp_71[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U]);
    __Vtemp_71[3U] = 0U;
    __Vtemp_71[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_67, __Vtemp_71);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_73[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_73[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_73[2U] = 0U;
    __Vtemp_74[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq);
    __Vtemp_74[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq 
                              >> 0x00000020U));
    __Vtemp_74[2U] = 0U;
    VL_MUL_W(3, __Vtemp_75, __Vtemp_73, __Vtemp_74);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_75[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_75[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_75[2U]);
    VL_SUB_W(3, __Vtemp_77, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_77[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_77[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_77[2U]);
    __Vtemp_78[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq);
    __Vtemp_78[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq 
                              >> 0x00000020U));
    __Vtemp_78[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_78)) {
        __Vtemp_81[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq);
        __Vtemp_81[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq 
                                  >> 0x00000020U));
        __Vtemp_81[2U] = 0U;
        VL_SUB_W(3, __Vtemp_82, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_81);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_82[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_82[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_82[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                       >> 8U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_84[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a);
    __Vtemp_84[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a 
                              >> 0x00000020U));
    __Vtemp_84[2U] = 0U;
    __Vtemp_85[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b);
    __Vtemp_85[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b 
                              >> 0x00000020U));
    __Vtemp_85[2U] = 0U;
    VL_MUL_W(3, __Vtemp_86, __Vtemp_84, __Vtemp_85);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_86[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_86[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_86[2U]);
    __Vtemp_87[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_87[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_87[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_87[3U] = 0U;
    __Vtemp_87[4U] = 0U;
    __Vtemp_91[0U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_91[1U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_91[2U] = (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                      >> 0x00000010U);
    __Vtemp_91[3U] = 0U;
    __Vtemp_91[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_87, __Vtemp_91);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_93[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_93[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_93[2U] = 0U;
    __Vtemp_94[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq);
    __Vtemp_94[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq 
                              >> 0x00000020U));
    __Vtemp_94[2U] = 0U;
    VL_MUL_W(3, __Vtemp_95, __Vtemp_93, __Vtemp_94);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_95[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_95[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_95[2U]);
    VL_SUB_W(3, __Vtemp_97, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_97[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_97[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_97[2U]);
    __Vtemp_98[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq);
    __Vtemp_98[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq 
                              >> 0x00000020U));
    __Vtemp_98[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_98)) {
        __Vtemp_101[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq);
        __Vtemp_101[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq 
                                   >> 0x00000020U));
        __Vtemp_101[2U] = 0U;
        VL_SUB_W(3, __Vtemp_102, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_101);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_102[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_102[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_102[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_104[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a);
    __Vtemp_104[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a 
                               >> 0x00000020U));
    __Vtemp_104[2U] = 0U;
    __Vtemp_105[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b);
    __Vtemp_105[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b 
                               >> 0x00000020U));
    __Vtemp_105[2U] = 0U;
    VL_MUL_W(3, __Vtemp_106, __Vtemp_104, __Vtemp_105);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_106[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_106[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_106[2U]);
    __Vtemp_107[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_107[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_107[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_107[3U] = 0U;
    __Vtemp_107[4U] = 0U;
    __Vtemp_111[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[5U];
    __Vtemp_111[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[6U];
    __Vtemp_111[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[7U]);
    __Vtemp_111[3U] = 0U;
    __Vtemp_111[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_107, __Vtemp_111);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_113[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_113[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_113[2U] = 0U;
    __Vtemp_114[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq);
    __Vtemp_114[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq 
                               >> 0x00000020U));
    __Vtemp_114[2U] = 0U;
    VL_MUL_W(3, __Vtemp_115, __Vtemp_113, __Vtemp_114);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_115[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_115[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_115[2U]);
    VL_SUB_W(3, __Vtemp_117, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_117[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_117[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_117[2U]);
    __Vtemp_118[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq);
    __Vtemp_118[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq 
                               >> 0x00000020U));
    __Vtemp_118[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_118)) {
        __Vtemp_121[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq);
        __Vtemp_121[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq 
                                   >> 0x00000020U));
        __Vtemp_121[2U] = 0U;
        VL_SUB_W(3, __Vtemp_122, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_121);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_122[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_122[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_122[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__Vfuncout;
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                         + (0x000000ffffffffffULL 
                                            & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))));
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                         + (0x000000ffffffffffULL 
                                            & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                << 0x00000018U) 
                                               | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                  >> 8U)))));
    __VdfgRegularize_hebeb780c_0_11 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                   >> 0x00000010U)))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
    __VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                         + tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                         + tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_10 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                          + tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_11 
                                                    - tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_14 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_11 
                                          - vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_0 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_0 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_5 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_5 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_10 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_10 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_10));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_4 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_4 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_124[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a);
    __Vtemp_124[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a 
                               >> 0x00000020U));
    __Vtemp_124[2U] = 0U;
    __Vtemp_125[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b);
    __Vtemp_125[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b 
                               >> 0x00000020U));
    __Vtemp_125[2U] = 0U;
    VL_MUL_W(3, __Vtemp_126, __Vtemp_124, __Vtemp_125);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_126[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_126[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_126[2U]);
    __Vtemp_127[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_127[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_127[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_127[3U] = 0U;
    __Vtemp_127[4U] = 0U;
    __Vtemp_131[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[0U];
    __Vtemp_131[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[1U];
    __Vtemp_131[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U]);
    __Vtemp_131[3U] = 0U;
    __Vtemp_131[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_127, __Vtemp_131);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_133[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_133[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_133[2U] = 0U;
    __Vtemp_134[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
    __Vtemp_134[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                               >> 0x00000020U));
    __Vtemp_134[2U] = 0U;
    VL_MUL_W(3, __Vtemp_135, __Vtemp_133, __Vtemp_134);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_135[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_135[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_135[2U]);
    VL_SUB_W(3, __Vtemp_137, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_137[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_137[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_137[2U]);
    __Vtemp_138[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
    __Vtemp_138[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                               >> 0x00000020U));
    __Vtemp_138[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_138)) {
        __Vtemp_141[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
        __Vtemp_141[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                                   >> 0x00000020U));
        __Vtemp_141[2U] = 0U;
        VL_SUB_W(3, __Vtemp_142, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_141);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_142[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_142[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_142[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                       >> 8U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_9 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_9 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_9));
    __Vtemp_144[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a);
    __Vtemp_144[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a 
                               >> 0x00000020U));
    __Vtemp_144[2U] = 0U;
    __Vtemp_145[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b);
    __Vtemp_145[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b 
                               >> 0x00000020U));
    __Vtemp_145[2U] = 0U;
    VL_MUL_W(3, __Vtemp_146, __Vtemp_144, __Vtemp_145);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_146[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_146[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_146[2U]);
    __Vtemp_147[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_147[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_147[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_147[3U] = 0U;
    __Vtemp_147[4U] = 0U;
    __Vtemp_151[0U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                        << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U] 
                                           >> 0x00000010U));
    __Vtemp_151[1U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                        << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                                           >> 0x00000010U));
    __Vtemp_151[2U] = (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                       >> 0x00000010U);
    __Vtemp_151[3U] = 0U;
    __Vtemp_151[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_147, __Vtemp_151);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_153[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_153[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_153[2U] = 0U;
    __Vtemp_154[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
    __Vtemp_154[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                               >> 0x00000020U));
    __Vtemp_154[2U] = 0U;
    VL_MUL_W(3, __Vtemp_155, __Vtemp_153, __Vtemp_154);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_155[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_155[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_155[2U]);
    VL_SUB_W(3, __Vtemp_157, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_157[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_157[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_157[2U]);
    __Vtemp_158[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
    __Vtemp_158[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                               >> 0x00000020U));
    __Vtemp_158[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_158)) {
        __Vtemp_161[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
        __Vtemp_161[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                                   >> 0x00000020U));
        __Vtemp_161[2U] = 0U;
        VL_SUB_W(3, __Vtemp_162, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_161);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_162[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_162[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_162[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_14 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_14 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_14));
    __Vtemp_164[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a);
    __Vtemp_164[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a 
                               >> 0x00000020U));
    __Vtemp_164[2U] = 0U;
    __Vtemp_165[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b);
    __Vtemp_165[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b 
                               >> 0x00000020U));
    __Vtemp_165[2U] = 0U;
    VL_MUL_W(3, __Vtemp_166, __Vtemp_164, __Vtemp_165);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_166[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_166[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_166[2U]);
    __Vtemp_167[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_167[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_167[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_167[3U] = 0U;
    __Vtemp_167[4U] = 0U;
    __Vtemp_171[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[5U];
    __Vtemp_171[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[6U];
    __Vtemp_171[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[7U]);
    __Vtemp_171[3U] = 0U;
    __Vtemp_171[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_167, __Vtemp_171);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_173[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_173[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_173[2U] = 0U;
    __Vtemp_174[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq);
    __Vtemp_174[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq 
                               >> 0x00000020U));
    __Vtemp_174[2U] = 0U;
    VL_MUL_W(3, __Vtemp_175, __Vtemp_173, __Vtemp_174);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_175[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_175[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_175[2U]);
    VL_SUB_W(3, __Vtemp_177, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_177[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_177[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_177[2U]);
    __Vtemp_178[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq);
    __Vtemp_178[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq 
                               >> 0x00000020U));
    __Vtemp_178[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_178)) {
        __Vtemp_181[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq);
        __Vtemp_181[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq 
                                   >> 0x00000020U));
        __Vtemp_181[2U] = 0U;
        VL_SUB_W(3, __Vtemp_182, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_181);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_182[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_182[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_182[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__Vfuncout;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u);
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx));
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U])))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                    - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
                } else {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u));
                }
            }
        } else {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_addr));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u);
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx));
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                           >> 8U))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                    - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                        << 0x00000038U) 
                                       | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                           << 0x00000018U) 
                                          | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                             >> 8U))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
                } else {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u));
                }
            }
        } else {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_addr));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data;
                    }
                }
            }
        }
    }
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u);
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx));
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_12 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                           >> 0x00000010U))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_12 
                                    - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                        << 0x00000030U) 
                                       | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                           << 0x00000010U) 
                                          | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                             >> 0x00000010U))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_12)));
                } else {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u));
                }
            }
        } else {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_addr));
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data;
                    }
                }
            }
        }
    }
}

void Vtb_rns_ntt___024root___eval_act(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_act\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb_rns_ntt___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_rns_ntt___024root___nba_sequent__TOP__0(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___nba_sequent__TOP__0\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 0U;
    vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 0U;
    vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 0U;
    vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 0U;
    vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 0U;
    vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 0U;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
           & (0U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
           & (1U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
           & (2U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
    if (((IData)(vlSelfRef.tb_rns_ntt__DOT__tw_wr_en) 
         & (0U == (IData)(vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel)))) {
        vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 
            = vlSelfRef.tb_rns_ntt__DOT__tw_wr_data;
        vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 
            = vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_rns_ntt__DOT__tw_wr_en) 
         & (1U == (IData)(vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel)))) {
        vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 
            = vlSelfRef.tb_rns_ntt__DOT__tw_wr_data;
        vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 
            = vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_rns_ntt__DOT__tw_wr_en) 
         & (2U == (IData)(vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel)))) {
        vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 
            = vlSelfRef.tb_rns_ntt__DOT__tw_wr_data;
        vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 
            = vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 1U;
    }
    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe) {
        vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata;
        vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 1U;
    }
    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe) {
        vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata;
        vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 1U;
    }
    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe) {
        vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata;
        vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 1U;
    }
}

void Vtb_rns_ntt___024root___nba_sequent__TOP__1(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___nba_sequent__TOP__1\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k = 0;
    CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k = 0;
    CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 0;
    CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k = 0;
    // Body
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k;
    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k;
    vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage;
    vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage;
    vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage;
    vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r;
    vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r;
    vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r;
    if (vlSelfRef.tb_rns_ntt__DOT__rst_n) {
        if ((8U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 0U;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done = 1U;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                    if ((0x0fU == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx))) {
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 8U;
                    } else {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx 
                            = (0x0000001fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx)));
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 6U;
                    }
                } else {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((7U == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k))) {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k = 0U;
                    if ((3U == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage))) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx = 0U;
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state 
                            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                                ? 6U : 8U);
                    } else {
                        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage)));
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 1U;
                    }
                } else {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k)));
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 1U;
                }
            } else {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 4U;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo;
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tdo;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 2U;
        } else {
            vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done = 0U;
            if (vlSelfRef.tb_rns_ntt__DOT__start) {
                vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage = 0U;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k = 0U;
                vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r 
                    = vlSelfRef.tb_rns_ntt__DOT__inverse;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 0U;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done = 1U;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                    if ((0x0fU == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx))) {
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 8U;
                    } else {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx 
                            = (0x0000001fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx)));
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 6U;
                    }
                } else {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((7U == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k))) {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k = 0U;
                    if ((3U == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage))) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx = 0U;
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state 
                            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                                ? 6U : 8U);
                    } else {
                        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage)));
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 1U;
                    }
                } else {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k)));
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 1U;
                }
            } else {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 4U;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo;
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tdo;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
            __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 2U;
        } else {
            vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done = 0U;
            if (vlSelfRef.tb_rns_ntt__DOT__start) {
                vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage = 0U;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k = 0U;
                vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r 
                    = vlSelfRef.tb_rns_ntt__DOT__inverse;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 0U;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done = 1U;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                    if ((0x0fU == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx))) {
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 8U;
                    } else {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx 
                            = (0x0000001fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx)));
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 6U;
                    }
                } else {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((7U == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k))) {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k = 0U;
                    if ((3U == (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage))) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx = 0U;
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state 
                            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                                ? 6U : 8U);
                    } else {
                        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage)));
                        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 1U;
                    }
                } else {
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k)));
                    __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 1U;
                }
            } else {
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 4U;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo;
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tdo;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
            __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 2U;
        } else {
            vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done = 0U;
            if (vlSelfRef.tb_rns_ntt__DOT__start) {
                vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage = 0U;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k = 0U;
                vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r 
                    = vlSelfRef.tb_rns_ntt__DOT__inverse;
                __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 1U;
            }
        }
    } else {
        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage = 0U;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx = 0U;
        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = 0U;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done = 0U;
        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k = 0U;
        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r = 0U;
        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage = 0U;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx = 0U;
        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = 0U;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done = 0U;
        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k = 0U;
        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r = 0U;
        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage = 0U;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx = 0U;
        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = 0U;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done = 0U;
        __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k = 0U;
        vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r = 0U;
    }
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state 
        = __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k 
        = __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state 
        = __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k 
        = __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state 
        = __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k 
        = __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r));
}

void Vtb_rns_ntt___024root___nba_sequent__TOP__2(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___nba_sequent__TOP__2\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<5>/*159:0*/ __Vtemp_47;
    VlWide<5>/*159:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_58;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_62;
    // Body
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff
        [vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr];
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tdo 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw
        [(0x0000001fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                           ? 0x10U : 0U) + ((0x0000000fU 
                                             & ((IData)(1U) 
                                                << 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                                                     ? 
                                                    ((IData)(3U) 
                                                     - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage))
                                                     : (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage))))) 
                                            + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp))))];
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff
        [vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr];
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tdo 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw
        [(0x0000001fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                           ? 0x10U : 0U) + ((0x0000000fU 
                                             & ((IData)(1U) 
                                                << 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                                                     ? 
                                                    ((IData)(3U) 
                                                     - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage))
                                                     : (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage))))) 
                                            + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp))))];
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff
        [vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr];
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tdo 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw
        [(0x0000001fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                           ? 0x10U : 0U) + ((0x0000000fU 
                                             & ((IData)(1U) 
                                                << 
                                                (0x0000000fU 
                                                 & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                                                     ? 
                                                    ((IData)(3U) 
                                                     - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage))
                                                     : (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage))))) 
                                            + (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp))))];
    if (vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff[vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0] 
            = vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0;
    }
    if (vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw[vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0] 
            = vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0;
    }
    if (vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff[vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0] 
            = vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0;
    }
    if (vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw[vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0] 
            = vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0;
    }
    if (vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff[vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0] 
            = vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0;
    }
    if (vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw[vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0] 
            = vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0;
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[0U]))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_2[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a);
    __Vtemp_2[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__a 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b);
    __Vtemp_3[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__b 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_4[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_4[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_4[2U]);
    __Vtemp_5[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_5[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_5[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_9[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[0U];
    __Vtemp_9[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[1U];
    __Vtemp_9[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U]);
    __Vtemp_9[3U] = 0U;
    __Vtemp_9[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_9);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_11[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_11[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_11[2U] = 0U;
    __Vtemp_12[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
    __Vtemp_12[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                              >> 0x00000020U));
    __Vtemp_12[2U] = 0U;
    VL_MUL_W(3, __Vtemp_13, __Vtemp_11, __Vtemp_12);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_13[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_13[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_13[2U]);
    VL_SUB_W(3, __Vtemp_15, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_15[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_15[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_15[2U]);
    __Vtemp_16[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
    __Vtemp_16[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                              >> 0x00000020U));
    __Vtemp_16[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16)) {
        __Vtemp_19[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
        __Vtemp_19[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                                  >> 0x00000020U));
        __Vtemp_19[2U] = 0U;
        VL_SUB_W(3, __Vtemp_20, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_19);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_20[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_20[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_20[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                       >> 8U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[1U])) 
                                       >> 8U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_22[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a);
    __Vtemp_22[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__a 
                              >> 0x00000020U));
    __Vtemp_22[2U] = 0U;
    __Vtemp_23[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b);
    __Vtemp_23[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__b 
                              >> 0x00000020U));
    __Vtemp_23[2U] = 0U;
    VL_MUL_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_24[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_24[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_24[2U]);
    __Vtemp_25[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_25[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_25[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_25[3U] = 0U;
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_29[1U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_29[2U] = (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                      >> 0x00000010U);
    __Vtemp_29[3U] = 0U;
    __Vtemp_29[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_25, __Vtemp_29);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_31[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_31[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_31[2U] = 0U;
    __Vtemp_32[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq);
    __Vtemp_32[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    VL_MUL_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_33[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_33[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_33[2U]);
    VL_SUB_W(3, __Vtemp_35, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_35[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_35[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_35[2U]);
    __Vtemp_36[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq);
    __Vtemp_36[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_36)) {
        __Vtemp_39[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq);
        __Vtemp_39[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__qq 
                                  >> 0x00000020U));
        __Vtemp_39[2U] = 0U;
        VL_SUB_W(3, __Vtemp_40, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_39);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_40[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_40[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_40[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__21__Vfuncout;
    __Vtemp_42[0U] = (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo);
    __Vtemp_42[1U] = (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo) 
                       << 8U) | (IData)((vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo 
                                         >> 0x00000020U)));
    __Vtemp_42[2U] = (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo) 
                       << 0x00000010U) | (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo) 
                                           >> 0x00000018U) 
                                          | ((IData)(
                                                     (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo 
                                                      >> 0x00000020U)) 
                                             << 8U)));
    __Vtemp_42[3U] = (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo) 
                       >> 0x00000010U) | ((IData)((vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo 
                                                   >> 0x00000020U)) 
                                          << 0x00000010U));
    vlSelfRef.tb_rns_ntt__DOT__rd_data = ((0x77U >= 
                                           (0x0000007fU 
                                            & ((IData)(0x00000028U) 
                                               * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane))))
                                           ? (0x000000ffffffffffULL 
                                              & (((QData)((IData)(__Vtemp_42
                                                                  [
                                                                  (((IData)(0x00000027U) 
                                                                    + 
                                                                    (0x0000007fU 
                                                                     & ((IData)(0x00000028U) 
                                                                        * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & ((IData)(0x00000028U) 
                                                        * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane))))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & ((IData)(0x00000028U) 
                                                        * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(0x00000028U) 
                                                          * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(__Vtemp_42
                                                                      [
                                                                      (((IData)(0x0000001fU) 
                                                                        + 
                                                                        (0x0000007fU 
                                                                         & ((IData)(0x00000028U) 
                                                                            * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000028U) 
                                                           * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))))) 
                                                    | ((QData)((IData)(__Vtemp_42
                                                                       [
                                                                       (3U 
                                                                        & (((IData)(0x00000028U) 
                                                                            * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & ((IData)(0x00000028U) 
                                                           * (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_lane)))))))
                                           : 0ULL);
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__n_inv_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_44[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a);
    __Vtemp_44[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__a 
                              >> 0x00000020U));
    __Vtemp_44[2U] = 0U;
    __Vtemp_45[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b);
    __Vtemp_45[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__b 
                              >> 0x00000020U));
    __Vtemp_45[2U] = 0U;
    VL_MUL_W(3, __Vtemp_46, __Vtemp_44, __Vtemp_45);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_46[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_46[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_46[2U]);
    __Vtemp_47[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_47[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_47[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_47[3U] = 0U;
    __Vtemp_47[4U] = 0U;
    __Vtemp_51[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[5U];
    __Vtemp_51[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[6U];
    __Vtemp_51[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[7U]);
    __Vtemp_51[3U] = 0U;
    __Vtemp_51[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_47, __Vtemp_51);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_53[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_53[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_53[2U] = 0U;
    __Vtemp_54[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq);
    __Vtemp_54[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq 
                              >> 0x00000020U));
    __Vtemp_54[2U] = 0U;
    VL_MUL_W(3, __Vtemp_55, __Vtemp_53, __Vtemp_54);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_55[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_55[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    VL_SUB_W(3, __Vtemp_57, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_57[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_57[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_57[2U]);
    __Vtemp_58[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq);
    __Vtemp_58[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq 
                              >> 0x00000020U));
    __Vtemp_58[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_58)) {
        __Vtemp_61[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq);
        __Vtemp_61[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__qq 
                                  >> 0x00000020U));
        __Vtemp_61[2U] = 0U;
        VL_SUB_W(3, __Vtemp_62, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_61);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_62[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_62[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_62[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__28__Vfuncout;
}

void Vtb_rns_ntt___024root___nba_comb__TOP__0(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___nba_comb__TOP__0\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__Vfuncout;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b = 0;
    QData/*39:0*/ __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_0;
    __VdfgRegularize_hebeb780c_0_0 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_14;
    __VdfgRegularize_hebeb780c_0_14 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<5>/*159:0*/ __Vtemp_25;
    VlWide<5>/*159:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<5>/*159:0*/ __Vtemp_45;
    VlWide<5>/*159:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<5>/*159:0*/ __Vtemp_65;
    VlWide<5>/*159:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    VlWide<3>/*95:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    VlWide<3>/*95:0*/ __Vtemp_82;
    VlWide<3>/*95:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<5>/*159:0*/ __Vtemp_85;
    VlWide<5>/*159:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_91;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    VlWide<3>/*95:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    VlWide<3>/*95:0*/ __Vtemp_102;
    VlWide<3>/*95:0*/ __Vtemp_103;
    VlWide<3>/*95:0*/ __Vtemp_104;
    VlWide<5>/*159:0*/ __Vtemp_105;
    VlWide<5>/*159:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_111;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    // Body
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                }
            }
        }
    }
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                         + (0x000000ffffffffffULL 
                                            & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_2[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a);
    __Vtemp_2[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__a 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b);
    __Vtemp_3[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__b 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_4[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_4[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_4[2U]);
    __Vtemp_5[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_5[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_5[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_9[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[0U];
    __Vtemp_9[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[1U];
    __Vtemp_9[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U]);
    __Vtemp_9[3U] = 0U;
    __Vtemp_9[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_9);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_11[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_11[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_11[2U] = 0U;
    __Vtemp_12[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq);
    __Vtemp_12[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq 
                              >> 0x00000020U));
    __Vtemp_12[2U] = 0U;
    VL_MUL_W(3, __Vtemp_13, __Vtemp_11, __Vtemp_12);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_13[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_13[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_13[2U]);
    VL_SUB_W(3, __Vtemp_15, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_15[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_15[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_15[2U]);
    __Vtemp_16[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq);
    __Vtemp_16[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq 
                              >> 0x00000020U));
    __Vtemp_16[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16)) {
        __Vtemp_19[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq);
        __Vtemp_19[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__qq 
                                  >> 0x00000020U));
        __Vtemp_19[2U] = 0U;
        VL_SUB_W(3, __Vtemp_20, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_19);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_20[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_20[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_20[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__8__Vfuncout;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                }
            }
        }
    }
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                         + (0x000000ffffffffffULL 
                                            & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                << 0x00000018U) 
                                               | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                  >> 8U)))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                       >> 8U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_22[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a);
    __Vtemp_22[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__a 
                              >> 0x00000020U));
    __Vtemp_22[2U] = 0U;
    __Vtemp_23[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b);
    __Vtemp_23[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__b 
                              >> 0x00000020U));
    __Vtemp_23[2U] = 0U;
    VL_MUL_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_24[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_24[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_24[2U]);
    __Vtemp_25[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_25[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_25[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_25[3U] = 0U;
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_29[1U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_29[2U] = (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                      >> 0x00000010U);
    __Vtemp_29[3U] = 0U;
    __Vtemp_29[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_25, __Vtemp_29);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_31[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_31[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_31[2U] = 0U;
    __Vtemp_32[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq);
    __Vtemp_32[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    VL_MUL_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_33[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_33[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_33[2U]);
    VL_SUB_W(3, __Vtemp_35, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_35[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_35[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_35[2U]);
    __Vtemp_36[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq);
    __Vtemp_36[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_36)) {
        __Vtemp_39[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq);
        __Vtemp_39[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__qq 
                                  >> 0x00000020U));
        __Vtemp_39[2U] = 0U;
        VL_SUB_W(3, __Vtemp_40, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_39);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_40[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_40[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_40[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__15__Vfuncout;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                }
            }
        }
    }
    __VdfgRegularize_hebeb780c_0_11 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                   >> 0x00000010U)))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_42[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a);
    __Vtemp_42[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__a 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b);
    __Vtemp_43[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__b 
                              >> 0x00000020U));
    __Vtemp_43[2U] = 0U;
    VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_44[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_44[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_44[2U]);
    __Vtemp_45[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_45[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_45[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_45[3U] = 0U;
    __Vtemp_45[4U] = 0U;
    __Vtemp_49[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[5U];
    __Vtemp_49[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[6U];
    __Vtemp_49[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[7U]);
    __Vtemp_49[3U] = 0U;
    __Vtemp_49[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_45, __Vtemp_49);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_51[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_51[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_51[2U] = 0U;
    __Vtemp_52[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq);
    __Vtemp_52[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq 
                              >> 0x00000020U));
    __Vtemp_52[2U] = 0U;
    VL_MUL_W(3, __Vtemp_53, __Vtemp_51, __Vtemp_52);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_53[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_53[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_53[2U]);
    VL_SUB_W(3, __Vtemp_55, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_55[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_55[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    __Vtemp_56[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq);
    __Vtemp_56[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq 
                              >> 0x00000020U));
    __Vtemp_56[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_56)) {
        __Vtemp_59[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq);
        __Vtemp_59[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__qq 
                                  >> 0x00000020U));
        __Vtemp_59[2U] = 0U;
        VL_SUB_W(3, __Vtemp_60, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_59);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_60[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_60[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_60[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__22__Vfuncout;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U])))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                               >> 8U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                 >> 8U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_13 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_13 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_13));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                         + tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                         + tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_14 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_11 
                                          - vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_11 
                                                    - tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_10 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                          + tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_4 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_4 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_62[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a);
    __Vtemp_62[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__a 
                              >> 0x00000020U));
    __Vtemp_62[2U] = 0U;
    __Vtemp_63[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b);
    __Vtemp_63[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__b 
                              >> 0x00000020U));
    __Vtemp_63[2U] = 0U;
    VL_MUL_W(3, __Vtemp_64, __Vtemp_62, __Vtemp_63);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_64[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_64[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_64[2U]);
    __Vtemp_65[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_65[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_65[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_65[3U] = 0U;
    __Vtemp_65[4U] = 0U;
    __Vtemp_69[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[0U];
    __Vtemp_69[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[1U];
    __Vtemp_69[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U]);
    __Vtemp_69[3U] = 0U;
    __Vtemp_69[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_65, __Vtemp_69);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_71[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_71[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_71[2U] = 0U;
    __Vtemp_72[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
    __Vtemp_72[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                              >> 0x00000020U));
    __Vtemp_72[2U] = 0U;
    VL_MUL_W(3, __Vtemp_73, __Vtemp_71, __Vtemp_72);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_73[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_73[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_73[2U]);
    VL_SUB_W(3, __Vtemp_75, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_75[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_75[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_75[2U]);
    __Vtemp_76[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
    __Vtemp_76[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                              >> 0x00000020U));
    __Vtemp_76[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_76)) {
        __Vtemp_79[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
        __Vtemp_79[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                                  >> 0x00000020U));
        __Vtemp_79[2U] = 0U;
        VL_SUB_W(3, __Vtemp_80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_79);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_80[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_80[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_80[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_0 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_0 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_0));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                       >> 8U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_9 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_9 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_9));
    __Vtemp_82[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a);
    __Vtemp_82[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__a 
                              >> 0x00000020U));
    __Vtemp_82[2U] = 0U;
    __Vtemp_83[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b);
    __Vtemp_83[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__b 
                              >> 0x00000020U));
    __Vtemp_83[2U] = 0U;
    VL_MUL_W(3, __Vtemp_84, __Vtemp_82, __Vtemp_83);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_84[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_84[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_84[2U]);
    __Vtemp_85[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_85[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_85[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_85[3U] = 0U;
    __Vtemp_85[4U] = 0U;
    __Vtemp_89[0U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_89[1U] = ((vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                       << 0x00000010U) | (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_89[2U] = (vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[4U] 
                      >> 0x00000010U);
    __Vtemp_89[3U] = 0U;
    __Vtemp_89[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_85, __Vtemp_89);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_91[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_91[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_91[2U] = 0U;
    __Vtemp_92[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
    __Vtemp_92[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                              >> 0x00000020U));
    __Vtemp_92[2U] = 0U;
    VL_MUL_W(3, __Vtemp_93, __Vtemp_91, __Vtemp_92);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_93[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_93[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_93[2U]);
    VL_SUB_W(3, __Vtemp_95, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_95[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_95[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_95[2U]);
    __Vtemp_96[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
    __Vtemp_96[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                              >> 0x00000020U));
    __Vtemp_96[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_96)) {
        __Vtemp_99[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
        __Vtemp_99[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                                  >> 0x00000020U));
        __Vtemp_99[2U] = 0U;
        VL_SUB_W(3, __Vtemp_100, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_99);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_100[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_100[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_100[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_5 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_5 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_5));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_14 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_14 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_14));
    __Vtemp_102[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a);
    __Vtemp_102[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__a 
                               >> 0x00000020U));
    __Vtemp_102[2U] = 0U;
    __Vtemp_103[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b);
    __Vtemp_103[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__b 
                               >> 0x00000020U));
    __Vtemp_103[2U] = 0U;
    VL_MUL_W(3, __Vtemp_104, __Vtemp_102, __Vtemp_103);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_104[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_104[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_104[2U]);
    __Vtemp_105[0U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_105[1U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_105[2U] = tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_105[3U] = 0U;
    __Vtemp_105[4U] = 0U;
    __Vtemp_109[0U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[5U];
    __Vtemp_109[1U] = vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[6U];
    __Vtemp_109[2U] = (0x0000ffffU & vlSelfRef.tb_rns_ntt__DOT__barrett_m_all[7U]);
    __Vtemp_109[3U] = 0U;
    __Vtemp_109[4U] = 0U;
    VL_MUL_W(5, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_105, __Vtemp_109);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_111[0U] = (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_111[1U] = (IData)((tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_111[2U] = 0U;
    __Vtemp_112[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq);
    __Vtemp_112[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq 
                               >> 0x00000020U));
    __Vtemp_112[2U] = 0U;
    VL_MUL_W(3, __Vtemp_113, __Vtemp_111, __Vtemp_112);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_113[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_113[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_113[2U]);
    VL_SUB_W(3, __Vtemp_115, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_115[0U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_115[1U];
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_115[2U]);
    __Vtemp_116[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq);
    __Vtemp_116[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq 
                               >> 0x00000020U));
    __Vtemp_116[2U] = 0U;
    if (VL_GTE_W(3, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_116)) {
        __Vtemp_119[0U] = (IData)(__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq);
        __Vtemp_119[1U] = (IData)((__Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__qq 
                                   >> 0x00000020U));
        __Vtemp_119[2U] = 0U;
        VL_SUB_W(3, __Vtemp_120, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_119);
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_120[0U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_120[1U];
        tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_120[2U]);
    }
    __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__27__Vfuncout;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_10 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_10 
                                        - (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_10));
}

void Vtb_rns_ntt___024root___nba_sequent__TOP__3(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___nba_sequent__TOP__3\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts = 0;
    CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts = 0;
    CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts = 0;
    // Body
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage 
        = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r 
        = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage 
        = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r 
        = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage 
        = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r 
        = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage))));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage))));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua 
        = (0x0000000fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp) 
                           << (0x0000000fU & ((IData)(1U) 
                                              + (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k) 
                             & (((IData)(1U) << (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua 
        = (0x0000000fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp) 
                           << (0x0000000fU & ((IData)(1U) 
                                              + (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k) 
                             & (((IData)(1U) << (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua 
        = (0x0000000fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp) 
                           << (0x0000000fU & ((IData)(1U) 
                                              + (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k) 
                             & (((IData)(1U) << (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua) 
                          | ((IData)(1U) << (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua) 
                          | ((IData)(1U) << (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua) 
                          | ((IData)(1U) << (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts))));
}

void Vtb_rns_ntt___024root___nba_comb__TOP__1(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___nba_comb__TOP__1\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u);
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u);
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u);
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                    = (0x000000ffffffffffULL & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                                                 ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v
                                                 : 
                                                ((vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                                  >= 
                                                  (0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U])))))
                                                  ? 
                                                 (vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                                  - 
                                                  (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[0U]))))
                                                  : vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                    = (0x000000ffffffffffULL & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                                                 ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u
                                                 : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u));
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr;
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_addr));
            }
        }
    }
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                    = (0x000000ffffffffffULL & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                                                 ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v
                                                 : 
                                                ((vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                                  >= 
                                                  (0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                         >> 8U))))
                                                  ? 
                                                 (vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                                  - 
                                                  (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                    << 0x00000038U) 
                                                   | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                       << 0x00000018U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[1U])) 
                                                         >> 8U))))
                                                  : vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                    = (0x000000ffffffffffULL & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                                                 ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u
                                                 : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u));
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr;
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_addr));
            }
        }
    }
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                    = (0x000000ffffffffffULL & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                                                 ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v
                                                 : 
                                                ((vlSelfRef.__VdfgRegularize_hebeb780c_0_12 
                                                  >= 
                                                  (0x000000ffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                                       << 0x00000010U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                         >> 0x00000010U))))
                                                  ? 
                                                 (vlSelfRef.__VdfgRegularize_hebeb780c_0_12 
                                                  - 
                                                  (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                                    << 0x00000030U) 
                                                   | (((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[3U])) 
                                                       << 0x00000010U) 
                                                      | ((QData)((IData)(vlSelfRef.tb_rns_ntt__DOT__q_all[2U])) 
                                                         >> 0x00000010U))))
                                                  : vlSelfRef.__VdfgRegularize_hebeb780c_0_12)));
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                    = (0x000000ffffffffffULL & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                                                 ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u
                                                 : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u));
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                    = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_data;
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.tb_rns_ntt__DOT__coeff_wr_addr;
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.tb_rns_ntt__DOT__rd_addr));
            }
        }
    }
}

void Vtb_rns_ntt___024root___eval_nba(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_nba\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts;
    __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts = 0;
    CData/*3:0*/ __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts;
    __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts = 0;
    CData/*3:0*/ __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts;
    __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 0U;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 0U;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 0U;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 0U;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 0U;
        vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 0U;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en 
            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
               & (0U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en 
            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
               & (1U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en 
            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__coeff_wr_en) 
               & (2U == (IData)(vlSelfRef.tb_rns_ntt__DOT__lane_sel)));
        if (((IData)(vlSelfRef.tb_rns_ntt__DOT__tw_wr_en) 
             & (0U == (IData)(vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel)))) {
            vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tb_rns_ntt__DOT__tw_wr_data;
            vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr;
            vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 1U;
        }
        if (((IData)(vlSelfRef.tb_rns_ntt__DOT__tw_wr_en) 
             & (1U == (IData)(vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel)))) {
            vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tb_rns_ntt__DOT__tw_wr_data;
            vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr;
            vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 1U;
        }
        if (((IData)(vlSelfRef.tb_rns_ntt__DOT__tw_wr_en) 
             & (2U == (IData)(vlSelfRef.tb_rns_ntt__DOT__tw_lane_sel)))) {
            vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tb_rns_ntt__DOT__tw_wr_data;
            vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 
                = vlSelfRef.tb_rns_ntt__DOT__tw_wr_addr;
            vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 1U;
        }
        if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe) {
            vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 
                = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata;
            vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 
                = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr;
            vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 1U;
        }
        if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe) {
            vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 
                = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata;
            vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 
                = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr;
            vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 1U;
        }
        if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe) {
            vlSelfRef.__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 
                = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata;
            vlSelfRef.__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 
                = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr;
            vlSelfRef.__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 1U;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_rns_ntt___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_rns_ntt___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_rns_ntt___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage 
            = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r 
            = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage 
            = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r 
            = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage 
            = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage;
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r 
            = vlSelfRef.__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r;
        __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                               ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage)
                               : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage))));
        __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                               ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage)
                               : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage))));
        __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                               ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage)
                               : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage))));
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp 
            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k) 
               >> __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts);
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp 
            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k) 
               >> __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts);
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp 
            = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k) 
               >> __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts);
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua 
            = (0x0000000fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp) 
                               << (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(__Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts)))) 
                              | ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k) 
                                 & (((IData)(1U) << __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts) 
                                    - (IData)(1U)))));
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua 
            = (0x0000000fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp) 
                               << (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(__Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts)))) 
                              | ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k) 
                                 & (((IData)(1U) << __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts) 
                                    - (IData)(1U)))));
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua 
            = (0x0000000fU & (((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp) 
                               << (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(__Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts)))) 
                              | ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k) 
                                 & (((IData)(1U) << __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts) 
                                    - (IData)(1U)))));
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua) 
                              | ((IData)(1U) << __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts)));
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua) 
                              | ((IData)(1U) << __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts)));
        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va 
            = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua) 
                              | ((IData)(1U) << __Vinline__nba_sequent__TOP__3_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts)));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_rns_ntt___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_rns_ntt___024root___timing_ready(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___timing_ready\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h057f82d5__0.ready("@(posedge tb_rns_ntt.clk)");
    }
}

void Vtb_rns_ntt___024root___timing_resume(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___timing_resume\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h057f82d5__0.moveToResumeQueue(
                                                          "@(posedge tb_rns_ntt.clk)");
    vlSelfRef.__VtrigSched_h057f82d5__0.resume("@(posedge tb_rns_ntt.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_rns_ntt___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_rns_ntt___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_rns_ntt___024root___eval_phase__act(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_phase__act\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_rns_ntt___024root___eval_triggers_vec__act(vlSelf);
    Vtb_rns_ntt___024root___timing_ready(vlSelf);
    Vtb_rns_ntt___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rns_ntt___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_rns_ntt___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_rns_ntt___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_rns_ntt___024root___timing_resume(vlSelf);
        Vtb_rns_ntt___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_rns_ntt___024root___eval_phase__inact(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_phase__inact\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_rns_ntt.v", 19, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_rns_ntt___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_rns_ntt___024root___eval_phase__nba(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_phase__nba\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_rns_ntt___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_rns_ntt___024root___eval_nba(vlSelf);
        Vtb_rns_ntt___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_rns_ntt___024root___eval(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_rns_ntt___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_rns_ntt.v", 19, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_rns_ntt.v", 19, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_rns_ntt___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_rns_ntt.v", 19, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_rns_ntt___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_rns_ntt___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_rns_ntt___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0(Vtb_rns_ntt___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root____VbeforeTrig_h057f82d5__0\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_rns_ntt__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__clk__0 
        = vlSelfRef.tb_rns_ntt__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h057f82d5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_rns_ntt___024root___eval_debug_assertions(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_debug_assertions\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
