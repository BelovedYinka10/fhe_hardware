// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrns_hash_verifier.h for the primary calling header

#include "Vrns_hash_verifier__pch.h"

void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__2(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__2\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq = 0;
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
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.__PVT__pm_done = 0U;
        if ((4U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
                    if (vlSelfRef.__PVT__u_pmul__DOT__ntt_done) {
                        vlSelfRef.__PVT__pm_done = 1U;
                        vlSelfRef.__Vdly__u_pmul__DOT__state = 0U;
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx));
                    }
                    if ((0x2000U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                        vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse = 1U;
                        vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 1U;
                        vlSelfRef.__Vdly__u_pmul__DOT__state = 7U;
                    } else {
                        vlSelfRef.__Vdly__u_pmul__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                    vlSelfRef.__PVT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                    vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_pmul__DOT__state = 6U;
                } else {
                    vlSelfRef.__Vdly__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx)));
                }
            } else if (vlSelfRef.__PVT__u_pmul__DOT__ntt_done) {
                vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
                vlSelfRef.__Vdly__u_pmul__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
                vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse = 0U;
                vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 1U;
                vlSelfRef.__Vdly__u_pmul__DOT__state = 4U;
            } else {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                    vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx));
                    vlSelfRef.__PVT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                    vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_pmul__DOT__state = 3U;
                } else {
                    vlSelfRef.__Vdly__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
            if (vlSelfRef.__PVT__u_pmul__DOT__ntt_done) {
                vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
                vlSelfRef.__Vdly__u_pmul__DOT__state = 2U;
            }
        } else if (vlSelfRef.__PVT__pm_start) {
            vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse = 0U;
            vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 1U;
            vlSelfRef.__Vdly__u_pmul__DOT__state = 1U;
        }
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pm_done = 0U;
        if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
                    if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                        vlSelfRef.__PVT__u_ch__DOT__pm_done = 1U;
                        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 0U;
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx));
                    }
                    if ((0x2000U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 1U;
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
                        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 7U;
                    } else {
                        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 6U;
                } else {
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx)));
                }
            } else if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 4U;
            } else {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx));
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 3U;
                } else {
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
            if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 2U;
            }
        } else if (vlSelfRef.__PVT__u_ch__DOT__pm_start) {
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
            vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 1U;
        }
    } else {
        vlSelfRef.__Vdly__u_pmul__DOT__state = 0U;
        vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
        vlSelfRef.__PVT__pm_done = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_addr = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pm_done = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr = 0U;
    }
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__tdo = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__tw
        [(0x00003fffU & (((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? 0x2000U : 0U) + ((0x00001fffU 
                                               & VL_SHIFTL_III(13,13,13, (IData)(1U), 
                                                               (0x00001fffU 
                                                                & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                                    ? 
                                                                   ((IData)(0x000cU) 
                                                                    - (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage))
                                                                    : (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage))))) 
                                              + (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__grp))))];
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__coeff
        [vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr];
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tdo 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw
        [(0x00003fffU & (((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? 0x2000U : 0U) + ((0x00001fffU 
                                               & VL_SHIFTL_III(13,13,13, (IData)(1U), 
                                                               (0x00001fffU 
                                                                & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                                    ? 
                                                                   ((IData)(0x000cU) 
                                                                    - (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))
                                                                    : (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))))) 
                                              + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp))))];
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff
        [vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr];
    vlSelfRef.__PVT__pm_start = vlSelfRef.__Vdly__pm_start;
    vlSelfRef.__PVT__u_pmul__DOT__idx = vlSelfRef.__Vdly__u_pmul__DOT__idx;
    vlSelfRef.__PVT__u_pmul__DOT__state = vlSelfRef.__Vdly__u_pmul__DOT__state;
    if (vlSelfRef.__VdlySet__u_pmul__DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__tw[vlSelfRef.__VdlyDim0__u_pmul__DOT__u_ntt__DOT__tw__v0] 
            = vlSelfRef.__VdlyVal__u_pmul__DOT__u_ntt__DOT__tw__v0;
    }
    if (vlSelfRef.__VdlySet__u_pmul__DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__coeff[vlSelfRef.__VdlyDim0__u_pmul__DOT__u_ntt__DOT__coeff__v0] 
            = vlSelfRef.__VdlyVal__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    }
    vlSelfRef.__PVT__u_ch__DOT__pm_start = vlSelfRef.__Vdly__u_ch__DOT__pm_start;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx = vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state 
        = vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state;
    if (vlSelfRef.__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw[vlSelfRef.__VdlyDim0__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0] 
            = vlSelfRef.__VdlyVal__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    }
    if (vlSelfRef.__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff[vlSelfRef.__VdlyDim0__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0] 
            = vlSelfRef.__VdlyVal__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    }
    vlSelfRef.u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__pm_b_wr_en)));
    if (vlSelfRef.__PVT__pm_b_wr_en) {
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__PVT__h2_rd;
    } else {
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                           >> 8U)));
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__b 
            = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__a 
            = vlSelfRef.__PVT__u_pmul__DOT__mem_ntt_rd;
        __Vtemp_2[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__a);
        __Vtemp_2[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__a 
                                 >> 0x00000020U));
        __Vtemp_2[2U] = 0U;
        __Vtemp_3[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__b);
        __Vtemp_3[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__b 
                                 >> 0x00000020U));
        __Vtemp_3[2U] = 0U;
        VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[0U] 
            = __Vtemp_4[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[1U] 
            = __Vtemp_4[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[2U] 
            = (0x0000ffffU & __Vtemp_4[2U]);
        __Vtemp_5[0U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[0U];
        __Vtemp_5[1U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[2U];
        __Vtemp_5[3U] = 0U;
        __Vtemp_5[4U] = 0U;
        __Vtemp_9[0U] = ((vlSymsp->TOP.barrett_m_all[3U] 
                          << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[2U] 
                                             >> 0x00000010U));
        __Vtemp_9[1U] = ((vlSymsp->TOP.barrett_m_all[4U] 
                          << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[3U] 
                                             >> 0x00000010U));
        __Vtemp_9[2U] = (vlSymsp->TOP.barrett_m_all[4U] 
                         >> 0x00000010U);
        __Vtemp_9[3U] = 0U;
        __Vtemp_9[4U] = 0U;
        VL_MUL_W(5, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_9);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t 
            = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
        __Vtemp_11[0U] = (IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t);
        __Vtemp_11[1U] = (IData)((vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t 
                                  >> 0x00000020U));
        __Vtemp_11[2U] = 0U;
        __Vtemp_12[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq);
        __Vtemp_12[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq 
                                  >> 0x00000020U));
        __Vtemp_12[2U] = 0U;
        VL_MUL_W(3, __Vtemp_13, __Vtemp_11, __Vtemp_12);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[0U] 
            = __Vtemp_13[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[1U] 
            = __Vtemp_13[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[2U] 
            = (0x0000ffffU & __Vtemp_13[2U]);
        VL_SUB_W(3, __Vtemp_15, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_15[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_15[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_15[2U]);
        __Vtemp_16[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq);
        __Vtemp_16[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_16)) {
            __Vtemp_19[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq);
            __Vtemp_19[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq 
                                      >> 0x00000020U));
            __Vtemp_19[2U] = 0U;
            VL_SUB_W(3, __Vtemp_20, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_19);
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                = __Vtemp_20[0U];
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                = __Vtemp_20[1U];
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                = (0x0000ffffU & __Vtemp_20[2U]);
        }
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__Vfuncout;
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.n_inv_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSymsp->TOP.n_inv_all[1U])) 
                                       >> 8U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
    __Vtemp_22[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a);
    __Vtemp_22[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a 
                              >> 0x00000020U));
    __Vtemp_22[2U] = 0U;
    __Vtemp_23[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b);
    __Vtemp_23[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b 
                              >> 0x00000020U));
    __Vtemp_23[2U] = 0U;
    VL_MUL_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_24[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_24[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_24[2U]);
    __Vtemp_25[0U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_25[1U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_25[2U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_25[3U] = 0U;
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = ((vlSymsp->TOP.barrett_m_all[3U] 
                       << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_29[1U] = ((vlSymsp->TOP.barrett_m_all[4U] 
                       << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_29[2U] = (vlSymsp->TOP.barrett_m_all[4U] 
                      >> 0x00000010U);
    __Vtemp_29[3U] = 0U;
    __Vtemp_29[4U] = 0U;
    VL_MUL_W(5, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_25, __Vtemp_29);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_31[0U] = (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_31[1U] = (IData)((__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_31[2U] = 0U;
    __Vtemp_32[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq);
    __Vtemp_32[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    VL_MUL_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_33[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_33[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_33[2U]);
    VL_SUB_W(3, __Vtemp_35, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_35[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_35[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_35[2U]);
    __Vtemp_36[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq);
    __Vtemp_36[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_36)) {
        __Vtemp_39[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq);
        __Vtemp_39[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq 
                                  >> 0x00000020U));
        __Vtemp_39[2U] = 0U;
        VL_SUB_W(3, __Vtemp_40, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_39);
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_40[0U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_40[1U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_40[2U]);
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__Vfuncout;
    vlSelfRef.u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en)));
    vlSelfRef.__PVT__u_ch__DOT__memr_wd = ((IData)(vlSelfRef.__PVT__ch_r_wr_en)
                                            ? vlSelfRef.__PVT__ch_r_wr_data
                                            : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo);
    if (vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__PVT__u_ch__DOT__memr_rd;
    } else {
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                           >> 8U)));
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__b 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__a 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt_rd;
        __Vtemp_42[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__a);
        __Vtemp_42[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__a 
                                  >> 0x00000020U));
        __Vtemp_42[2U] = 0U;
        __Vtemp_43[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__b);
        __Vtemp_43[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__b 
                                  >> 0x00000020U));
        __Vtemp_43[2U] = 0U;
        VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U] 
            = __Vtemp_44[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U] 
            = __Vtemp_44[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U] 
            = (0x0000ffffU & __Vtemp_44[2U]);
        __Vtemp_45[0U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U];
        __Vtemp_45[1U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U];
        __Vtemp_45[2U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U];
        __Vtemp_45[3U] = 0U;
        __Vtemp_45[4U] = 0U;
        __Vtemp_49[0U] = ((vlSymsp->TOP.barrett_m_all[3U] 
                           << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[2U] 
                                              >> 0x00000010U));
        __Vtemp_49[1U] = ((vlSymsp->TOP.barrett_m_all[4U] 
                           << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[3U] 
                                              >> 0x00000010U));
        __Vtemp_49[2U] = (vlSymsp->TOP.barrett_m_all[4U] 
                          >> 0x00000010U);
        __Vtemp_49[3U] = 0U;
        __Vtemp_49[4U] = 0U;
        VL_MUL_W(5, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __Vtemp_45, __Vtemp_49);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
            = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
        __Vtemp_51[0U] = (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t);
        __Vtemp_51[1U] = (IData)((vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
                                  >> 0x00000020U));
        __Vtemp_51[2U] = 0U;
        __Vtemp_52[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq);
        __Vtemp_52[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq 
                                  >> 0x00000020U));
        __Vtemp_52[2U] = 0U;
        VL_MUL_W(3, __Vtemp_53, __Vtemp_51, __Vtemp_52);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[0U] 
            = __Vtemp_53[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[1U] 
            = __Vtemp_53[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[2U] 
            = (0x0000ffffU & __Vtemp_53[2U]);
        VL_SUB_W(3, __Vtemp_55, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_55[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_55[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_55[2U]);
        __Vtemp_56[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq);
        __Vtemp_56[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq 
                                  >> 0x00000020U));
        __Vtemp_56[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_56)) {
            __Vtemp_59[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq);
            __Vtemp_59[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq 
                                      >> 0x00000020U));
            __Vtemp_59[2U] = 0U;
            VL_SUB_W(3, __Vtemp_60, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_59);
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                = __Vtemp_60[0U];
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                = __Vtemp_60[1U];
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                = (0x0000ffffU & __Vtemp_60[2U]);
        }
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__Vfuncout;
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.n_inv_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSymsp->TOP.n_inv_all[1U])) 
                                       >> 8U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__a 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
    __Vtemp_62[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__a);
    __Vtemp_62[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__a 
                              >> 0x00000020U));
    __Vtemp_62[2U] = 0U;
    __Vtemp_63[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__b);
    __Vtemp_63[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__b 
                              >> 0x00000020U));
    __Vtemp_63[2U] = 0U;
    VL_MUL_W(3, __Vtemp_64, __Vtemp_62, __Vtemp_63);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_64[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_64[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_64[2U]);
    __Vtemp_65[0U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_65[1U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_65[2U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_65[3U] = 0U;
    __Vtemp_65[4U] = 0U;
    __Vtemp_69[0U] = ((vlSymsp->TOP.barrett_m_all[3U] 
                       << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_69[1U] = ((vlSymsp->TOP.barrett_m_all[4U] 
                       << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_69[2U] = (vlSymsp->TOP.barrett_m_all[4U] 
                      >> 0x00000010U);
    __Vtemp_69[3U] = 0U;
    __Vtemp_69[4U] = 0U;
    VL_MUL_W(5, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_65, __Vtemp_69);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_71[0U] = (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_71[1U] = (IData)((__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_71[2U] = 0U;
    __Vtemp_72[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq);
    __Vtemp_72[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq 
                              >> 0x00000020U));
    __Vtemp_72[2U] = 0U;
    VL_MUL_W(3, __Vtemp_73, __Vtemp_71, __Vtemp_72);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_73[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_73[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_73[2U]);
    VL_SUB_W(3, __Vtemp_75, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_75[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_75[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_75[2U]);
    __Vtemp_76[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq);
    __Vtemp_76[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq 
                              >> 0x00000020U));
    __Vtemp_76[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_76)) {
        __Vtemp_79[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq);
        __Vtemp_79[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq 
                                  >> 0x00000020U));
        __Vtemp_79[2U] = 0U;
        VL_SUB_W(3, __Vtemp_80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_79);
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_80[0U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_80[1U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_80[2U]);
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__Vfuncout;
}

void Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u);
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u);
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua;
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__scaled;
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_17 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                           >> 8U))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_17 
                                    - (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                        << 0x00000038U) 
                                       | (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                           << 0x00000018U) 
                                          | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                             >> 8U))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_17)));
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                        if (vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en) {
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_data;
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_addr;
                        } else if (vlSelfRef.__PVT__pm_a_wr_en) {
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__h1_rd;
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__pm_a_wr_addr;
                        } else {
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__h2_rd;
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__pm_b_wr_addr;
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua)
                        : (((2U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__state)) 
                            | (5U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__state)))
                            ? (IData)(vlSelfRef.__PVT__u_pmul__DOT__int_rd_addr)
                            : (IData)(vlSelfRef.__PVT__pm_rd_addr)));
            }
        }
    }
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled;
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_12 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                           >> 8U))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_12 
                                    - (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                        << 0x00000038U) 
                                       | (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                           << 0x00000018U) 
                                          | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                             >> 8U))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_12)));
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                        if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) {
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data;
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr;
                        } else if (vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en) {
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = ((7U == (IData)(vlSelfRef.__PVT__u_ch__DOT__state))
                                    ? vlSelfRef.__PVT__u_ch__DOT__memr_rd
                                    : vlSelfRef.__PVT__u_ch__DOT__ct_rd);
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_addr;
                        } else {
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__u_ch__DOT__memr_rd;
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_addr;
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua)
                        : (((2U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state)) 
                            | (5U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state)))
                            ? (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__int_rd_addr)
                            : (IData)(vlSelfRef.__PVT__u_ch__DOT__pm_rd_addr)));
            }
        }
    }
}

void Vrns_hash_verifier_hash_verifier___ico_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___ico_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = 0;
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__vw;
    __PVT__u_pmul__DOT__u_ntt__DOT__vw = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_20;
    __VdfgRegularize_hebeb780c_0_20 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_21;
    __VdfgRegularize_hebeb780c_0_21 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_24;
    __VdfgRegularize_hebeb780c_0_24 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_25;
    __VdfgRegularize_hebeb780c_0_25 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_26;
    __VdfgRegularize_hebeb780c_0_26 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_29;
    __VdfgRegularize_hebeb780c_0_29 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_122;
    VlWide<3>/*95:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    VlWide<5>/*159:0*/ __Vtemp_125;
    VlWide<5>/*159:0*/ __Vtemp_129;
    VlWide<3>/*95:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_140;
    VlWide<3>/*95:0*/ __Vtemp_142;
    VlWide<3>/*95:0*/ __Vtemp_143;
    VlWide<3>/*95:0*/ __Vtemp_144;
    VlWide<5>/*159:0*/ __Vtemp_145;
    VlWide<5>/*159:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_152;
    VlWide<3>/*95:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_155;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_160;
    // Body
    vlSelfRef.tw_wr_en = ((IData)(vlSymsp->TOP.tw_wr_en) 
                          & (2U == (IData)(vlSymsp->TOP.tw_lane_sel)));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_28 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_28 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_28));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_23 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_23 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_23));
    if (vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__PVT__u_ch__DOT__memr_rd;
    } else {
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                           >> 0x00000010U)));
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__b 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__a 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt_rd;
        __Vtemp_2[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__a);
        __Vtemp_2[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__a 
                                 >> 0x00000020U));
        __Vtemp_2[2U] = 0U;
        __Vtemp_3[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__b);
        __Vtemp_3[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__b 
                                 >> 0x00000020U));
        __Vtemp_3[2U] = 0U;
        VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U] 
            = __Vtemp_4[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U] 
            = __Vtemp_4[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U] 
            = (0x0000ffffU & __Vtemp_4[2U]);
        __Vtemp_5[0U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U];
        __Vtemp_5[1U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U];
        __Vtemp_5[3U] = 0U;
        __Vtemp_5[4U] = 0U;
        __Vtemp_9[0U] = vlSymsp->TOP.barrett_m_all[5U];
        __Vtemp_9[1U] = vlSymsp->TOP.barrett_m_all[6U];
        __Vtemp_9[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
        __Vtemp_9[3U] = 0U;
        __Vtemp_9[4U] = 0U;
        VL_MUL_W(5, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_9);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
            = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
        __Vtemp_11[0U] = (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t);
        __Vtemp_11[1U] = (IData)((vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
                                  >> 0x00000020U));
        __Vtemp_11[2U] = 0U;
        __Vtemp_12[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq);
        __Vtemp_12[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq 
                                  >> 0x00000020U));
        __Vtemp_12[2U] = 0U;
        VL_MUL_W(3, __Vtemp_13, __Vtemp_11, __Vtemp_12);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[0U] 
            = __Vtemp_13[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[1U] 
            = __Vtemp_13[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[2U] 
            = (0x0000ffffU & __Vtemp_13[2U]);
        VL_SUB_W(3, __Vtemp_15, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_15[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_15[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_15[2U]);
        __Vtemp_16[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq);
        __Vtemp_16[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_16)) {
            __Vtemp_19[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq);
            __Vtemp_19[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq 
                                      >> 0x00000020U));
            __Vtemp_19[2U] = 0U;
            VL_SUB_W(3, __Vtemp_20, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_19);
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                = __Vtemp_20[0U];
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                = __Vtemp_20[1U];
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                = (0x0000ffffU & __Vtemp_20[2U]);
        }
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__Vfuncout;
    }
    if (vlSelfRef.__PVT__pm_b_wr_en) {
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__PVT__h2_rd;
    } else {
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                           >> 0x00000010U)));
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__b 
            = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__a 
            = vlSelfRef.__PVT__u_pmul__DOT__mem_ntt_rd;
        __Vtemp_22[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__a);
        __Vtemp_22[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__a 
                                  >> 0x00000020U));
        __Vtemp_22[2U] = 0U;
        __Vtemp_23[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__b);
        __Vtemp_23[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__b 
                                  >> 0x00000020U));
        __Vtemp_23[2U] = 0U;
        VL_MUL_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[0U] 
            = __Vtemp_24[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[1U] 
            = __Vtemp_24[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[2U] 
            = (0x0000ffffU & __Vtemp_24[2U]);
        __Vtemp_25[0U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[0U];
        __Vtemp_25[1U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[1U];
        __Vtemp_25[2U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[2U];
        __Vtemp_25[3U] = 0U;
        __Vtemp_25[4U] = 0U;
        __Vtemp_29[0U] = vlSymsp->TOP.barrett_m_all[5U];
        __Vtemp_29[1U] = vlSymsp->TOP.barrett_m_all[6U];
        __Vtemp_29[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
        __Vtemp_29[3U] = 0U;
        __Vtemp_29[4U] = 0U;
        VL_MUL_W(5, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm, __Vtemp_25, __Vtemp_29);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t 
            = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
        __Vtemp_31[0U] = (IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t);
        __Vtemp_31[1U] = (IData)((vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t 
                                  >> 0x00000020U));
        __Vtemp_31[2U] = 0U;
        __Vtemp_32[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq);
        __Vtemp_32[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq 
                                  >> 0x00000020U));
        __Vtemp_32[2U] = 0U;
        VL_MUL_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[0U] 
            = __Vtemp_33[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[1U] 
            = __Vtemp_33[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[2U] 
            = (0x0000ffffU & __Vtemp_33[2U]);
        VL_SUB_W(3, __Vtemp_35, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_35[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_35[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_35[2U]);
        __Vtemp_36[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq);
        __Vtemp_36[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq 
                                  >> 0x00000020U));
        __Vtemp_36[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_36)) {
            __Vtemp_39[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq);
            __Vtemp_39[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq 
                                      >> 0x00000020U));
            __Vtemp_39[2U] = 0U;
            VL_SUB_W(3, __Vtemp_40, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_39);
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                = __Vtemp_40[0U];
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                = __Vtemp_40[1U];
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                = (0x0000ffffU & __Vtemp_40[2U]);
        }
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__Vfuncout;
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.n_inv_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.n_inv_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
    __Vtemp_42[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a);
    __Vtemp_42[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b);
    __Vtemp_43[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b 
                              >> 0x00000020U));
    __Vtemp_43[2U] = 0U;
    VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_44[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_44[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_44[2U]);
    __Vtemp_45[0U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_45[1U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_45[2U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_45[3U] = 0U;
    __Vtemp_45[4U] = 0U;
    __Vtemp_49[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_49[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_49[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_49[3U] = 0U;
    __Vtemp_49[4U] = 0U;
    VL_MUL_W(5, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_45, __Vtemp_49);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_51[0U] = (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_51[1U] = (IData)((__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_51[2U] = 0U;
    __Vtemp_52[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq);
    __Vtemp_52[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq 
                              >> 0x00000020U));
    __Vtemp_52[2U] = 0U;
    VL_MUL_W(3, __Vtemp_53, __Vtemp_51, __Vtemp_52);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_53[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_53[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_53[2U]);
    VL_SUB_W(3, __Vtemp_55, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_55[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_55[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    __Vtemp_56[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq);
    __Vtemp_56[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq 
                              >> 0x00000020U));
    __Vtemp_56[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_56)) {
        __Vtemp_59[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq);
        __Vtemp_59[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq 
                                  >> 0x00000020U));
        __Vtemp_59[2U] = 0U;
        VL_SUB_W(3, __Vtemp_60, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_59);
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_60[0U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_60[1U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_60[2U]);
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.n_inv_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.n_inv_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
    __Vtemp_62[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a);
    __Vtemp_62[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a 
                              >> 0x00000020U));
    __Vtemp_62[2U] = 0U;
    __Vtemp_63[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b);
    __Vtemp_63[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b 
                              >> 0x00000020U));
    __Vtemp_63[2U] = 0U;
    VL_MUL_W(3, __Vtemp_64, __Vtemp_62, __Vtemp_63);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_64[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_64[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_64[2U]);
    __Vtemp_65[0U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_65[1U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_65[2U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_65[3U] = 0U;
    __Vtemp_65[4U] = 0U;
    __Vtemp_69[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_69[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_69[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_69[3U] = 0U;
    __Vtemp_69[4U] = 0U;
    VL_MUL_W(5, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_65, __Vtemp_69);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_71[0U] = (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_71[1U] = (IData)((__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_71[2U] = 0U;
    __Vtemp_72[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq);
    __Vtemp_72[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq 
                              >> 0x00000020U));
    __Vtemp_72[2U] = 0U;
    VL_MUL_W(3, __Vtemp_73, __Vtemp_71, __Vtemp_72);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_73[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_73[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_73[2U]);
    VL_SUB_W(3, __Vtemp_75, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_75[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_75[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_75[2U]);
    __Vtemp_76[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq);
    __Vtemp_76[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq 
                              >> 0x00000020U));
    __Vtemp_76[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_76)) {
        __Vtemp_79[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq);
        __Vtemp_79[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq 
                                  >> 0x00000020U));
        __Vtemp_79[2U] = 0U;
        VL_SUB_W(3, __Vtemp_80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_79);
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_80[0U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_80[1U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_80[2U]);
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_82[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a);
    __Vtemp_82[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a 
                              >> 0x00000020U));
    __Vtemp_82[2U] = 0U;
    __Vtemp_83[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b);
    __Vtemp_83[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b 
                              >> 0x00000020U));
    __Vtemp_83[2U] = 0U;
    VL_MUL_W(3, __Vtemp_84, __Vtemp_82, __Vtemp_83);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_84[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_84[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_84[2U]);
    __Vtemp_85[0U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_85[1U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_85[2U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_85[3U] = 0U;
    __Vtemp_85[4U] = 0U;
    __Vtemp_89[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_89[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_89[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_89[3U] = 0U;
    __Vtemp_89[4U] = 0U;
    VL_MUL_W(5, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_85, __Vtemp_89);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_91[0U] = (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_91[1U] = (IData)((__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_91[2U] = 0U;
    __Vtemp_92[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq);
    __Vtemp_92[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq 
                              >> 0x00000020U));
    __Vtemp_92[2U] = 0U;
    VL_MUL_W(3, __Vtemp_93, __Vtemp_91, __Vtemp_92);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_93[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_93[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_93[2U]);
    VL_SUB_W(3, __Vtemp_95, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_95[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_95[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_95[2U]);
    __Vtemp_96[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq);
    __Vtemp_96[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq 
                              >> 0x00000020U));
    __Vtemp_96[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_96)) {
        __Vtemp_99[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq);
        __Vtemp_99[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq 
                                  >> 0x00000020U));
        __Vtemp_99[2U] = 0U;
        VL_SUB_W(3, __Vtemp_100, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_99);
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_100[0U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_100[1U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_100[2U]);
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    __PVT__u_pmul__DOT__u_ntt__DOT__vw = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__Vfuncout;
    __VdfgRegularize_hebeb780c_0_26 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                   >> 0x00000010U)))));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_102[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a);
    __Vtemp_102[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a 
                               >> 0x00000020U));
    __Vtemp_102[2U] = 0U;
    __Vtemp_103[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b);
    __Vtemp_103[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b 
                               >> 0x00000020U));
    __Vtemp_103[2U] = 0U;
    VL_MUL_W(3, __Vtemp_104, __Vtemp_102, __Vtemp_103);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_104[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_104[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_104[2U]);
    __Vtemp_105[0U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_105[1U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_105[2U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_105[3U] = 0U;
    __Vtemp_105[4U] = 0U;
    __Vtemp_109[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_109[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_109[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_109[3U] = 0U;
    __Vtemp_109[4U] = 0U;
    VL_MUL_W(5, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_105, __Vtemp_109);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_111[0U] = (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_111[1U] = (IData)((__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_111[2U] = 0U;
    __Vtemp_112[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq);
    __Vtemp_112[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq 
                               >> 0x00000020U));
    __Vtemp_112[2U] = 0U;
    VL_MUL_W(3, __Vtemp_113, __Vtemp_111, __Vtemp_112);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_113[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_113[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_113[2U]);
    VL_SUB_W(3, __Vtemp_115, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_115[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_115[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_115[2U]);
    __Vtemp_116[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq);
    __Vtemp_116[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq 
                               >> 0x00000020U));
    __Vtemp_116[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_116)) {
        __Vtemp_119[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq);
        __Vtemp_119[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq 
                                   >> 0x00000020U));
        __Vtemp_119[2U] = 0U;
        VL_SUB_W(3, __Vtemp_120, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_119);
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_120[0U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_120[1U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_120[2U]);
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__Vfuncout;
    __VdfgRegularize_hebeb780c_0_21 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                   >> 0x00000010U)))));
    __VdfgRegularize_hebeb780c_0_25 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + __PVT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_26 
                                                    - __PVT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_29 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_26 
                                          - vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r));
    __VdfgRegularize_hebeb780c_0_20 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_21 
                                                    - __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_24 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_21 
                                          - vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_25 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_25 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_25));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_29 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_29 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_29));
    __Vtemp_122[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a);
    __Vtemp_122[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a 
                               >> 0x00000020U));
    __Vtemp_122[2U] = 0U;
    __Vtemp_123[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b);
    __Vtemp_123[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b 
                               >> 0x00000020U));
    __Vtemp_123[2U] = 0U;
    VL_MUL_W(3, __Vtemp_124, __Vtemp_122, __Vtemp_123);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_124[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_124[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_124[2U]);
    __Vtemp_125[0U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_125[1U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_125[2U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_125[3U] = 0U;
    __Vtemp_125[4U] = 0U;
    __Vtemp_129[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_129[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_129[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_129[3U] = 0U;
    __Vtemp_129[4U] = 0U;
    VL_MUL_W(5, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_125, __Vtemp_129);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_131[0U] = (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_131[1U] = (IData)((__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_131[2U] = 0U;
    __Vtemp_132[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq);
    __Vtemp_132[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq 
                               >> 0x00000020U));
    __Vtemp_132[2U] = 0U;
    VL_MUL_W(3, __Vtemp_133, __Vtemp_131, __Vtemp_132);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_133[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_133[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_133[2U]);
    VL_SUB_W(3, __Vtemp_135, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_135[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_135[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_135[2U]);
    __Vtemp_136[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq);
    __Vtemp_136[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq 
                               >> 0x00000020U));
    __Vtemp_136[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_136)) {
        __Vtemp_139[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq);
        __Vtemp_139[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq 
                                   >> 0x00000020U));
        __Vtemp_139[2U] = 0U;
        VL_SUB_W(3, __Vtemp_140, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_139);
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_140[0U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_140[1U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_140[2U]);
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__Vfuncout;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_20 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_20 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_20));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_24 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_24 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_24));
    __Vtemp_142[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a);
    __Vtemp_142[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a 
                               >> 0x00000020U));
    __Vtemp_142[2U] = 0U;
    __Vtemp_143[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b);
    __Vtemp_143[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b 
                               >> 0x00000020U));
    __Vtemp_143[2U] = 0U;
    VL_MUL_W(3, __Vtemp_144, __Vtemp_142, __Vtemp_143);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_144[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_144[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_144[2U]);
    __Vtemp_145[0U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_145[1U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_145[2U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_145[3U] = 0U;
    __Vtemp_145[4U] = 0U;
    __Vtemp_149[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_149[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_149[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_149[3U] = 0U;
    __Vtemp_149[4U] = 0U;
    VL_MUL_W(5, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_145, __Vtemp_149);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_151[0U] = (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_151[1U] = (IData)((__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_151[2U] = 0U;
    __Vtemp_152[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq);
    __Vtemp_152[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq 
                               >> 0x00000020U));
    __Vtemp_152[2U] = 0U;
    VL_MUL_W(3, __Vtemp_153, __Vtemp_151, __Vtemp_152);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_153[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_153[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_153[2U]);
    VL_SUB_W(3, __Vtemp_155, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_155[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_155[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_155[2U]);
    __Vtemp_156[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq);
    __Vtemp_156[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq 
                               >> 0x00000020U));
    __Vtemp_156[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_156)) {
        __Vtemp_159[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq);
        __Vtemp_159[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq 
                                   >> 0x00000020U));
        __Vtemp_159[2U] = 0U;
        VL_SUB_W(3, __Vtemp_160, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_159);
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_160[0U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_160[1U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_160[2U]);
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__Vfuncout;
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u);
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__scaled;
                }
            } else {
                vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                    = (0x000000ffffffffffULL & ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                  ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_v
                                                  : 
                                                 ((vlSelfRef.__VdfgRegularize_hebeb780c_0_27 
                                                   >= 
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                          >> 0x00000010U))))
                                                   ? 
                                                  (vlSelfRef.__VdfgRegularize_hebeb780c_0_27 
                                                   - 
                                                   (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                          >> 0x00000010U))))
                                                   : vlSelfRef.__VdfgRegularize_hebeb780c_0_27))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                  ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
                                                  : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u)));
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en)
                            ? vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_data
                            : ((IData)(vlSelfRef.__PVT__pm_a_wr_en)
                                ? vlSelfRef.__PVT__h1_rd
                                : vlSelfRef.__PVT__h2_rd));
                }
            }
        }
    }
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u);
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled;
                }
            } else {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                    = (0x000000ffffffffffULL & ((1U 
                                                 & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                  ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v
                                                  : 
                                                 ((vlSelfRef.__VdfgRegularize_hebeb780c_0_22 
                                                   >= 
                                                   (0x000000ffffffffffULL 
                                                    & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                          >> 0x00000010U))))
                                                   ? 
                                                  (vlSelfRef.__VdfgRegularize_hebeb780c_0_22 
                                                   - 
                                                   (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                     << 0x00000030U) 
                                                    | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                        << 0x00000010U) 
                                                       | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                          >> 0x00000010U))))
                                                   : vlSelfRef.__VdfgRegularize_hebeb780c_0_22))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                  ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
                                                  : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u)));
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en)
                            ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data
                            : ((IData)(vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en)
                                ? ((7U == (IData)(vlSelfRef.__PVT__u_ch__DOT__state))
                                    ? vlSelfRef.__PVT__u_ch__DOT__memr_rd
                                    : vlSelfRef.__PVT__u_ch__DOT__ct_rd)
                                : vlSelfRef.__PVT__u_ch__DOT__memr_rd));
                }
            }
        }
    }
}

void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_ct_lin__64__Vfuncout;
    __Vfunc_ct_lin__64__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_ct_lin__64__cid;
    __Vfunc_ct_lin__64__cid = 0;
    CData/*1:0*/ __Vfunc_ct_lin__64__comp;
    __Vfunc_ct_lin__64__comp = 0;
    SData/*12:0*/ __Vfunc_ct_lin__64__a;
    __Vfunc_ct_lin__64__a = 0;
    IData/*31:0*/ __Vfunc_ct_lin__65__Vfuncout;
    __Vfunc_ct_lin__65__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_ct_lin__65__cid;
    __Vfunc_ct_lin__65__cid = 0;
    CData/*1:0*/ __Vfunc_ct_lin__65__comp;
    __Vfunc_ct_lin__65__comp = 0;
    SData/*12:0*/ __Vfunc_ct_lin__65__a;
    __Vfunc_ct_lin__65__a = 0;
    IData/*31:0*/ __Vfunc_ct_lin__66__Vfuncout;
    __Vfunc_ct_lin__66__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_ct_lin__66__comp;
    __Vfunc_ct_lin__66__comp = 0;
    SData/*12:0*/ __Vfunc_ct_lin__66__a;
    __Vfunc_ct_lin__66__a = 0;
    IData/*31:0*/ __Vfunc_ct_lin__67__Vfuncout;
    __Vfunc_ct_lin__67__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_ct_lin__67__comp;
    __Vfunc_ct_lin__67__comp = 0;
    SData/*12:0*/ __Vfunc_ct_lin__67__a;
    __Vfunc_ct_lin__67__a = 0;
    IData/*31:0*/ __Vfunc_ct_lin__68__Vfuncout;
    __Vfunc_ct_lin__68__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_ct_lin__68__comp;
    __Vfunc_ct_lin__68__comp = 0;
    SData/*12:0*/ __Vfunc_ct_lin__68__a;
    __Vfunc_ct_lin__68__a = 0;
    IData/*31:0*/ __Vfunc_ct_lin__69__Vfuncout;
    __Vfunc_ct_lin__69__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_ct_lin__69__comp;
    __Vfunc_ct_lin__69__comp = 0;
    SData/*12:0*/ __Vfunc_ct_lin__69__a;
    __Vfunc_ct_lin__69__a = 0;
    IData/*31:0*/ __Vfunc_ct_lin__70__Vfuncout;
    __Vfunc_ct_lin__70__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_ct_lin__70__comp;
    __Vfunc_ct_lin__70__comp = 0;
    SData/*12:0*/ __Vfunc_ct_lin__70__a;
    __Vfunc_ct_lin__70__a = 0;
    IData/*31:0*/ __Vfunc_ct_lin__71__Vfuncout;
    __Vfunc_ct_lin__71__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_ct_lin__71__comp;
    __Vfunc_ct_lin__71__comp = 0;
    SData/*12:0*/ __Vfunc_ct_lin__71__a;
    __Vfunc_ct_lin__71__a = 0;
    IData/*31:0*/ __Vfunc_u_ch__DOT__ct_lin__74__Vfuncout;
    __Vfunc_u_ch__DOT__ct_lin__74__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_u_ch__DOT__ct_lin__74__comp;
    __Vfunc_u_ch__DOT__ct_lin__74__comp = 0;
    SData/*12:0*/ __Vfunc_u_ch__DOT__ct_lin__74__a;
    __Vfunc_u_ch__DOT__ct_lin__74__a = 0;
    IData/*31:0*/ __Vfunc_u_ch__DOT__ct_lin__75__Vfuncout;
    __Vfunc_u_ch__DOT__ct_lin__75__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_u_ch__DOT__ct_lin__75__comp;
    __Vfunc_u_ch__DOT__ct_lin__75__comp = 0;
    SData/*12:0*/ __Vfunc_u_ch__DOT__ct_lin__75__a;
    __Vfunc_u_ch__DOT__ct_lin__75__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__Vfuncout;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__a;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__b;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__qq;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__qq = 0;
    QData/*40:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__d;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__d = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__Vfuncout;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__a;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__b;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__qq;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__qq = 0;
    QData/*40:0*/ __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__s;
    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__s = 0;
    QData/*39:0*/ __Vfunc_u_padd__DOT__mod_sub__94__Vfuncout;
    __Vfunc_u_padd__DOT__mod_sub__94__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_padd__DOT__mod_sub__94__a;
    __Vfunc_u_padd__DOT__mod_sub__94__a = 0;
    QData/*39:0*/ __Vfunc_u_padd__DOT__mod_sub__94__b;
    __Vfunc_u_padd__DOT__mod_sub__94__b = 0;
    QData/*39:0*/ __Vfunc_u_padd__DOT__mod_sub__94__qq;
    __Vfunc_u_padd__DOT__mod_sub__94__qq = 0;
    QData/*40:0*/ __Vfunc_u_padd__DOT__mod_sub__94__d;
    __Vfunc_u_padd__DOT__mod_sub__94__d = 0;
    QData/*39:0*/ __Vfunc_u_padd__DOT__mod_add__95__Vfuncout;
    __Vfunc_u_padd__DOT__mod_add__95__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_padd__DOT__mod_add__95__a;
    __Vfunc_u_padd__DOT__mod_add__95__a = 0;
    QData/*39:0*/ __Vfunc_u_padd__DOT__mod_add__95__b;
    __Vfunc_u_padd__DOT__mod_add__95__b = 0;
    QData/*39:0*/ __Vfunc_u_padd__DOT__mod_add__95__qq;
    __Vfunc_u_padd__DOT__mod_add__95__qq = 0;
    QData/*40:0*/ __Vfunc_u_padd__DOT__mod_add__95__s;
    __Vfunc_u_padd__DOT__mod_add__95__s = 0;
    CData/*0:0*/ __Vdly__pa_start;
    __Vdly__pa_start = 0;
    CData/*3:0*/ __Vdly__state;
    __Vdly__state = 0;
    SData/*12:0*/ __Vdly__pa_rd_addr;
    __Vdly__pa_rd_addr = 0;
    SData/*13:0*/ __Vdly__idx;
    __Vdly__idx = 0;
    CData/*1:0*/ __Vdly__comp_i;
    __Vdly__comp_i = 0;
    CData/*0:0*/ __Vdly__u_ch__DOT__pa_start;
    __Vdly__u_ch__DOT__pa_start = 0;
    CData/*0:0*/ __Vdly__ch_done;
    __Vdly__ch_done = 0;
    CData/*3:0*/ __Vdly__u_ch__DOT__state;
    __Vdly__u_ch__DOT__state = 0;
    CData/*1:0*/ __Vdly__u_ch__DOT__horner_i;
    __Vdly__u_ch__DOT__horner_i = 0;
    SData/*13:0*/ __Vdly__u_ch__DOT__idx;
    __Vdly__u_ch__DOT__idx = 0;
    CData/*1:0*/ __Vdly__u_ch__DOT__u_padd__DOT__state;
    __Vdly__u_ch__DOT__u_padd__DOT__state = 0;
    CData/*1:0*/ __Vdly__u_padd__DOT__state;
    __Vdly__u_padd__DOT__state = 0;
    QData/*39:0*/ __VdlyVal__ct_mem__v0;
    __VdlyVal__ct_mem__v0 = 0;
    IData/*16:0*/ __VdlyDim0__ct_mem__v0;
    __VdlyDim0__ct_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__ct_mem__v0;
    __VdlySet__ct_mem__v0 = 0;
    QData/*39:0*/ __VdlyVal__h1__v0;
    __VdlyVal__h1__v0 = 0;
    SData/*12:0*/ __VdlyDim0__h1__v0;
    __VdlyDim0__h1__v0 = 0;
    CData/*0:0*/ __VdlySet__h1__v0;
    __VdlySet__h1__v0 = 0;
    QData/*39:0*/ __VdlyVal__h2__v0;
    __VdlyVal__h2__v0 = 0;
    SData/*12:0*/ __VdlyDim0__h2__v0;
    __VdlyDim0__h2__v0 = 0;
    CData/*0:0*/ __VdlySet__h2__v0;
    __VdlySet__h2__v0 = 0;
    QData/*39:0*/ __VdlyVal__h3__v0;
    __VdlyVal__h3__v0 = 0;
    SData/*12:0*/ __VdlyDim0__h3__v0;
    __VdlyDim0__h3__v0 = 0;
    CData/*0:0*/ __VdlySet__h3__v0;
    __VdlySet__h3__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_ch__DOT__ct__v0;
    __VdlyVal__u_ch__DOT__ct__v0 = 0;
    SData/*14:0*/ __VdlyDim0__u_ch__DOT__ct__v0;
    __VdlyDim0__u_ch__DOT__ct__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ch__DOT__ct__v0;
    __VdlySet__u_ch__DOT__ct__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_ch__DOT__mem_r__v0;
    __VdlyVal__u_ch__DOT__mem_r__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_ch__DOT__mem_r__v0;
    __VdlyDim0__u_ch__DOT__mem_r__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ch__DOT__mem_r__v0;
    __VdlySet__u_ch__DOT__mem_r__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_ch__DOT__mem_h__v0;
    __VdlyVal__u_ch__DOT__mem_h__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_ch__DOT__mem_h__v0;
    __VdlyDim0__u_ch__DOT__mem_h__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ch__DOT__mem_h__v0;
    __VdlySet__u_ch__DOT__mem_h__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_ch__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlyVal__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_ch__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlyDim0__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ch__DOT__u_pmul__DOT__mem_ntt__v0;
    __VdlySet__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_ch__DOT__u_pmul__DOT__mem_b__v0;
    __VdlyVal__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_ch__DOT__u_pmul__DOT__mem_b__v0;
    __VdlyDim0__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ch__DOT__u_pmul__DOT__mem_b__v0;
    __VdlySet__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_ch__DOT__u_padd__DOT__mem_a__v0;
    __VdlyVal__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_a__v0;
    __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ch__DOT__u_padd__DOT__mem_a__v0;
    __VdlySet__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_ch__DOT__u_padd__DOT__mem_b__v0;
    __VdlyVal__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_b__v0;
    __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ch__DOT__u_padd__DOT__mem_b__v0;
    __VdlySet__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_ch__DOT__u_padd__DOT__mem_r__v0;
    __VdlyVal__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_r__v0;
    __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ch__DOT__u_padd__DOT__mem_r__v0;
    __VdlySet__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_pmul__DOT__mem_ntt__v0;
    __VdlyVal__u_pmul__DOT__mem_ntt__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_pmul__DOT__mem_ntt__v0;
    __VdlyDim0__u_pmul__DOT__mem_ntt__v0 = 0;
    CData/*0:0*/ __VdlySet__u_pmul__DOT__mem_ntt__v0;
    __VdlySet__u_pmul__DOT__mem_ntt__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_pmul__DOT__mem_b__v0;
    __VdlyVal__u_pmul__DOT__mem_b__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_pmul__DOT__mem_b__v0;
    __VdlyDim0__u_pmul__DOT__mem_b__v0 = 0;
    CData/*0:0*/ __VdlySet__u_pmul__DOT__mem_b__v0;
    __VdlySet__u_pmul__DOT__mem_b__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_padd__DOT__mem_a__v0;
    __VdlyVal__u_padd__DOT__mem_a__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_padd__DOT__mem_a__v0;
    __VdlyDim0__u_padd__DOT__mem_a__v0 = 0;
    CData/*0:0*/ __VdlySet__u_padd__DOT__mem_a__v0;
    __VdlySet__u_padd__DOT__mem_a__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_padd__DOT__mem_b__v0;
    __VdlyVal__u_padd__DOT__mem_b__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_padd__DOT__mem_b__v0;
    __VdlyDim0__u_padd__DOT__mem_b__v0 = 0;
    CData/*0:0*/ __VdlySet__u_padd__DOT__mem_b__v0;
    __VdlySet__u_padd__DOT__mem_b__v0 = 0;
    QData/*39:0*/ __VdlyVal__u_padd__DOT__mem_r__v0;
    __VdlyVal__u_padd__DOT__mem_r__v0 = 0;
    SData/*12:0*/ __VdlyDim0__u_padd__DOT__mem_r__v0;
    __VdlyDim0__u_padd__DOT__mem_r__v0 = 0;
    CData/*0:0*/ __VdlySet__u_padd__DOT__mem_r__v0;
    __VdlySet__u_padd__DOT__mem_r__v0 = 0;
    // Body
    __VdlySet__u_ch__DOT__mem_h__v0 = 0U;
    __VdlySet__u_ch__DOT__mem_r__v0 = 0U;
    vlSelfRef.__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0U;
    vlSelfRef.__VdlySet__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0U;
    vlSelfRef.__VdlySet__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0U;
    vlSelfRef.__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0U;
    __VdlySet__ct_mem__v0 = 0U;
    __Vdly__u_ch__DOT__u_padd__DOT__state = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state;
    __Vdly__u_padd__DOT__state = vlSelfRef.__PVT__u_padd__DOT__state;
    vlSelfRef.__Vdly__u_pmul__DOT__idx = vlSelfRef.__PVT__u_pmul__DOT__idx;
    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx;
    vlSelfRef.__Vdly__u_pmul__DOT__state = vlSelfRef.__PVT__u_pmul__DOT__state;
    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state;
    __VdlySet__u_pmul__DOT__mem_ntt__v0 = 0U;
    __VdlySet__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0U;
    __VdlySet__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0U;
    __VdlySet__u_padd__DOT__mem_r__v0 = 0U;
    vlSelfRef.__Vdly__pm_start = vlSelfRef.__PVT__pm_start;
    __Vdly__pa_start = vlSelfRef.__PVT__pa_start;
    __Vdly__state = vlSelfRef.__PVT__state;
    __Vdly__pa_rd_addr = vlSelfRef.__PVT__pa_rd_addr;
    __Vdly__idx = vlSelfRef.__PVT__idx;
    __Vdly__comp_i = vlSelfRef.__PVT__comp_i;
    __VdlySet__h1__v0 = 0U;
    __VdlySet__h2__v0 = 0U;
    __VdlySet__h3__v0 = 0U;
    __VdlySet__u_padd__DOT__mem_b__v0 = 0U;
    __VdlySet__u_pmul__DOT__mem_b__v0 = 0U;
    vlSelfRef.__Vdly__u_ch__DOT__pm_start = vlSelfRef.__PVT__u_ch__DOT__pm_start;
    __Vdly__u_ch__DOT__pa_start = vlSelfRef.__PVT__u_ch__DOT__pa_start;
    __Vdly__ch_done = vlSelfRef.__PVT__ch_done;
    __Vdly__u_ch__DOT__horner_i = vlSelfRef.__PVT__u_ch__DOT__horner_i;
    __Vdly__u_ch__DOT__idx = vlSelfRef.__PVT__u_ch__DOT__idx;
    __VdlySet__u_padd__DOT__mem_a__v0 = 0U;
    __Vdly__u_ch__DOT__state = vlSelfRef.__PVT__u_ch__DOT__state;
    __VdlySet__u_ch__DOT__ct__v0 = 0U;
    __VdlySet__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0U;
    __VdlySet__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0U;
    __VdlySet__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0U;
    if (vlSelfRef.__PVT__u_ch__DOT__memh_we) {
        __VdlyVal__u_ch__DOT__mem_h__v0 = vlSelfRef.__PVT__u_ch__DOT__memh_wd;
        __VdlyDim0__u_ch__DOT__mem_h__v0 = vlSelfRef.__PVT__u_ch__DOT__memh_wa;
        __VdlySet__u_ch__DOT__mem_h__v0 = 1U;
    }
    if (vlSelfRef.__PVT__u_ch__DOT__memr_we) {
        __VdlyVal__u_ch__DOT__mem_r__v0 = vlSelfRef.__PVT__u_ch__DOT__memr_wd;
        __VdlyDim0__u_ch__DOT__mem_r__v0 = vlSelfRef.__PVT__u_ch__DOT__memr_wa;
        __VdlySet__u_ch__DOT__mem_r__v0 = 1U;
    }
    if (vlSelfRef.tw_wr_en) {
        vlSelfRef.__VdlyVal__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 
            = vlSymsp->TOP.tw_wr_data;
        vlSelfRef.__VdlyDim0__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 
            = vlSymsp->TOP.tw_wr_addr;
        vlSelfRef.__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 1U;
        vlSelfRef.__VdlyVal__u_pmul__DOT__u_ntt__DOT__tw__v0 
            = vlSymsp->TOP.tw_wr_data;
        vlSelfRef.__VdlyDim0__u_pmul__DOT__u_ntt__DOT__tw__v0 
            = vlSymsp->TOP.tw_wr_addr;
        vlSelfRef.__VdlySet__u_pmul__DOT__u_ntt__DOT__tw__v0 = 1U;
    }
    if (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe) {
        vlSelfRef.__VdlyVal__u_pmul__DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata;
        vlSelfRef.__VdlyDim0__u_pmul__DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr;
        vlSelfRef.__VdlySet__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 1U;
    }
    if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe) {
        vlSelfRef.__VdlyVal__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata;
        vlSelfRef.__VdlyDim0__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr;
        vlSelfRef.__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 1U;
    }
    if (((IData)(vlSymsp->TOP.ct_wr_en) & (2U == (IData)(vlSymsp->TOP.lane_sel)))) {
        vlSelfRef.__Vlvbound_hf311d938__0 = vlSymsp->TOP.ct_wr_data;
        if (VL_LIKELY(((0x00011fffU >= (0x0001ffffU 
                                        & ([&]() {
                                    __Vfunc_ct_lin__64__a 
                                        = vlSymsp->TOP.ct_wr_addr;
                                    __Vfunc_ct_lin__64__comp 
                                        = vlSymsp->TOP.ct_sel;
                                    __Vfunc_ct_lin__64__cid 
                                        = vlSymsp->TOP.ct_id;
                                    __Vfunc_ct_lin__64__Vfuncout 
                                        = (VL_SHIFTL_III(32,32,32, 
                                                         (((IData)(3U) 
                                                           * (IData)(__Vfunc_ct_lin__64__cid)) 
                                                          + (IData)(__Vfunc_ct_lin__64__comp)), 0x0000000dU) 
                                           + (IData)(__Vfunc_ct_lin__64__a));
                                }(), __Vfunc_ct_lin__64__Vfuncout)))))) {
            __Vfunc_ct_lin__65__a = vlSymsp->TOP.ct_wr_addr;
            __Vfunc_ct_lin__65__comp = vlSymsp->TOP.ct_sel;
            __Vfunc_ct_lin__65__cid = vlSymsp->TOP.ct_id;
            __Vfunc_ct_lin__65__Vfuncout = (VL_SHIFTL_III(32,32,32, 
                                                          (((IData)(3U) 
                                                            * (IData)(__Vfunc_ct_lin__65__cid)) 
                                                           + (IData)(__Vfunc_ct_lin__65__comp)), 0x0000000dU) 
                                            + (IData)(__Vfunc_ct_lin__65__a));
            __VdlyVal__ct_mem__v0 = vlSelfRef.__Vlvbound_hf311d938__0;
            __VdlyDim0__ct_mem__v0 = (0x0001ffffU & __Vfunc_ct_lin__65__Vfuncout);
            __VdlySet__ct_mem__v0 = 1U;
        }
    }
    if (((2U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__state)) 
         & (2U <= (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx)))) {
        __VdlyVal__u_pmul__DOT__mem_ntt__v0 = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
        __VdlyDim0__u_pmul__DOT__mem_ntt__v0 = (0x00001fffU 
                                                & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__idx) 
                                                   - (IData)(2U)));
        __VdlySet__u_pmul__DOT__mem_ntt__v0 = 1U;
    }
    if (((2U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state)) 
         & (2U <= (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx)))) {
        __VdlyVal__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
        __VdlyDim0__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 
            = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx) 
                              - (IData)(2U)));
        __VdlySet__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 1U;
    }
    if (vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__wvalid) {
        __VdlyVal__u_ch__DOT__u_padd__DOT__mem_r__v0 
            = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__sub_r)
                ? ([&]() {
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__qq 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                             << 0x00000010U) | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                >> 0x00000010U)));
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__b 
                        = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__b_rd;
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__a 
                        = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__a_rd;
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__d 
                        = (0x000001ffffffffffULL & 
                           ((__Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__a 
                             + __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__qq) 
                            - __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__b));
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           ((__Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__d 
                             >= __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__qq)
                             ? (__Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__d 
                                - __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__qq)
                             : __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__d));
                }(), __Vfunc_u_ch__DOT__u_padd__DOT__mod_sub__84__Vfuncout)
                : ([&]() {
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__qq 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                             << 0x00000010U) | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                >> 0x00000010U)));
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__b 
                        = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__b_rd;
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__a 
                        = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__a_rd;
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__s 
                        = (0x000001ffffffffffULL & 
                           (__Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__a 
                            + __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__b));
                    __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           ((__Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__s 
                             >= __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__qq)
                             ? (__Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__s 
                                - __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__qq)
                             : __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__s));
                }(), __Vfunc_u_ch__DOT__u_padd__DOT__mod_add__85__Vfuncout));
        __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_r__v0 
            = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__widx;
        __VdlySet__u_ch__DOT__u_padd__DOT__mem_r__v0 = 1U;
    }
    if (vlSelfRef.__PVT__u_padd__DOT__wvalid) {
        __VdlyVal__u_padd__DOT__mem_r__v0 = ((IData)(vlSelfRef.__PVT__u_padd__DOT__sub_r)
                                              ? ([&]() {
                    __Vfunc_u_padd__DOT__mod_sub__94__qq 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                             << 0x00000010U) | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                >> 0x00000010U)));
                    __Vfunc_u_padd__DOT__mod_sub__94__b 
                        = vlSelfRef.__PVT__u_padd__DOT__b_rd;
                    __Vfunc_u_padd__DOT__mod_sub__94__a 
                        = vlSelfRef.__PVT__u_padd__DOT__a_rd;
                    __Vfunc_u_padd__DOT__mod_sub__94__d 
                        = (0x000001ffffffffffULL & 
                           ((__Vfunc_u_padd__DOT__mod_sub__94__a 
                             + __Vfunc_u_padd__DOT__mod_sub__94__qq) 
                            - __Vfunc_u_padd__DOT__mod_sub__94__b));
                    __Vfunc_u_padd__DOT__mod_sub__94__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           ((__Vfunc_u_padd__DOT__mod_sub__94__d 
                             >= __Vfunc_u_padd__DOT__mod_sub__94__qq)
                             ? (__Vfunc_u_padd__DOT__mod_sub__94__d 
                                - __Vfunc_u_padd__DOT__mod_sub__94__qq)
                             : __Vfunc_u_padd__DOT__mod_sub__94__d));
                }(), __Vfunc_u_padd__DOT__mod_sub__94__Vfuncout)
                                              : ([&]() {
                    __Vfunc_u_padd__DOT__mod_add__95__qq 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                             << 0x00000010U) | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                >> 0x00000010U)));
                    __Vfunc_u_padd__DOT__mod_add__95__b 
                        = vlSelfRef.__PVT__u_padd__DOT__b_rd;
                    __Vfunc_u_padd__DOT__mod_add__95__a 
                        = vlSelfRef.__PVT__u_padd__DOT__a_rd;
                    __Vfunc_u_padd__DOT__mod_add__95__s 
                        = (0x000001ffffffffffULL & 
                           (__Vfunc_u_padd__DOT__mod_add__95__a 
                            + __Vfunc_u_padd__DOT__mod_add__95__b));
                    __Vfunc_u_padd__DOT__mod_add__95__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           ((__Vfunc_u_padd__DOT__mod_add__95__s 
                             >= __Vfunc_u_padd__DOT__mod_add__95__qq)
                             ? (__Vfunc_u_padd__DOT__mod_add__95__s 
                                - __Vfunc_u_padd__DOT__mod_add__95__qq)
                             : __Vfunc_u_padd__DOT__mod_add__95__s));
                }(), __Vfunc_u_padd__DOT__mod_add__95__Vfuncout));
        __VdlyDim0__u_padd__DOT__mem_r__v0 = vlSelfRef.__PVT__u_padd__DOT__widx;
        __VdlySet__u_padd__DOT__mem_r__v0 = 1U;
    }
    if (((3U == (IData)(vlSelfRef.__PVT__state)) & 
         (2U <= (IData)(vlSelfRef.__PVT__idx)))) {
        __VdlyVal__h1__v0 = vlSelfRef.__PVT__ch_rd_data;
        __VdlyDim0__h1__v0 = (0x00001fffU & ((IData)(vlSelfRef.__PVT__idx) 
                                             - (IData)(2U)));
        __VdlySet__h1__v0 = 1U;
    }
    if (((6U == (IData)(vlSelfRef.__PVT__state)) & 
         (2U <= (IData)(vlSelfRef.__PVT__idx)))) {
        __VdlyVal__h2__v0 = vlSelfRef.__PVT__ch_rd_data;
        __VdlyDim0__h2__v0 = (0x00001fffU & ((IData)(vlSelfRef.__PVT__idx) 
                                             - (IData)(2U)));
        __VdlySet__h2__v0 = 1U;
    }
    if (((9U == (IData)(vlSelfRef.__PVT__state)) & 
         (2U <= (IData)(vlSelfRef.__PVT__idx)))) {
        __VdlyVal__h3__v0 = vlSelfRef.__PVT__ch_rd_data;
        __VdlyDim0__h3__v0 = (0x00001fffU & ((IData)(vlSelfRef.__PVT__idx) 
                                             - (IData)(2U)));
        __VdlySet__h3__v0 = 1U;
    }
    if (vlSelfRef.__PVT__pa_b_wr_en) {
        __VdlyVal__u_padd__DOT__mem_b__v0 = vlSelfRef.__PVT__h2_rd;
        __VdlyDim0__u_padd__DOT__mem_b__v0 = vlSelfRef.__PVT__pa_b_wr_addr;
        __VdlySet__u_padd__DOT__mem_b__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__pm_b_wr_en) | ((5U 
                                                  == (IData)(vlSelfRef.__PVT__u_pmul__DOT__state)) 
                                                 & (2U 
                                                    <= (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))))) {
        __VdlyVal__u_pmul__DOT__mem_b__v0 = vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd;
        __VdlyDim0__u_pmul__DOT__mem_b__v0 = (0x00001fffU 
                                              & ((IData)(vlSelfRef.__PVT__pm_b_wr_en)
                                                  ? (IData)(vlSelfRef.__PVT__pm_b_wr_addr)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__u_pmul__DOT__idx) 
                                                  - (IData)(2U))));
        __VdlySet__u_pmul__DOT__mem_b__v0 = 1U;
    }
    if (vlSelfRef.__PVT__pa_a_wr_en) {
        __VdlyVal__u_padd__DOT__mem_a__v0 = vlSelfRef.__PVT__pa_a_wr_data;
        __VdlyDim0__u_padd__DOT__mem_a__v0 = vlSelfRef.__PVT__pa_a_wr_addr;
        __VdlySet__u_padd__DOT__mem_a__v0 = 1U;
    }
    if (vlSelfRef.__PVT__u_ch__DOT__pa_b_wr_en) {
        __VdlyVal__u_ch__DOT__u_padd__DOT__mem_b__v0 
            = vlSelfRef.__PVT__u_ch__DOT__memh_rd;
        __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_b__v0 
            = vlSelfRef.__PVT__u_ch__DOT__pa_b_wr_addr;
        __VdlySet__u_ch__DOT__u_padd__DOT__mem_b__v0 = 1U;
    }
    if (((IData)(vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en) 
         | ((5U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state)) 
            & (2U <= (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))))) {
        __VdlyVal__u_ch__DOT__u_pmul__DOT__mem_b__v0 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd;
        __VdlyDim0__u_ch__DOT__u_pmul__DOT__mem_b__v0 
            = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en)
                               ? (IData)(vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_addr)
                               : ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx) 
                                  - (IData)(2U))));
        __VdlySet__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 1U;
    }
    if (vlSelfRef.__PVT__u_ch__DOT__pa_a_wr_en) {
        __VdlyVal__u_ch__DOT__u_padd__DOT__mem_a__v0 
            = vlSelfRef.__PVT__u_ch__DOT__pa_a_wr_data;
        __VdlyDim0__u_ch__DOT__u_padd__DOT__mem_a__v0 
            = vlSelfRef.__PVT__u_ch__DOT__pa_a_wr_addr;
        __VdlySet__u_ch__DOT__u_padd__DOT__mem_a__v0 = 1U;
    }
    vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_data 
        = vlSelfRef.__PVT__u_pmul__DOT__mem_b[(0x00001fffU 
                                               & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))];
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b
        [(0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))];
    vlSelfRef.__PVT__h1_rd = vlSelfRef.__PVT__h1[(0x00001fffU 
                                                  & (IData)(vlSelfRef.__PVT__idx))];
    vlSelfRef.__PVT__u_ch__DOT__memr_rd = vlSelfRef.__PVT__u_ch__DOT__mem_r
        [(0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))];
    vlSelfRef.__PVT__u_pmul__DOT__mem_ntt_rd = vlSelfRef.__PVT__u_pmul__DOT__mem_ntt
        [vlSelfRef.__PVT__u_pmul__DOT__int_rd_addr];
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt_rd 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt
        [vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__int_rd_addr];
    vlSelfRef.__PVT__u_ch__DOT__pa_rd_data = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__mem_r
        [vlSelfRef.__PVT__u_ch__DOT__pa_rd_addr];
    vlSelfRef.__PVT__u_ch__DOT__ct_rd = vlSelfRef.__PVT__u_ch__DOT__ct
        [vlSelfRef.__PVT__u_ch__DOT__ct_ra];
    if (vlSelfRef.__PVT__ch_ct_wr_en) {
        vlSelfRef.u_ch__DOT____Vlvbound_h7d40fc66__0 
            = vlSelfRef.__PVT__ch_ct_wr_data;
        if (VL_LIKELY(((0x5fffU >= (0x00007fffU & ([&]() {
                                    __Vfunc_u_ch__DOT__ct_lin__74__a 
                                        = vlSelfRef.__PVT__ch_ct_wr_addr;
                                    __Vfunc_u_ch__DOT__ct_lin__74__comp 
                                        = vlSelfRef.__PVT__ch_ct_sel;
                                    __Vfunc_u_ch__DOT__ct_lin__74__Vfuncout 
                                        = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_u_ch__DOT__ct_lin__74__comp), 0x0000000dU) 
                                           + (IData)(__Vfunc_u_ch__DOT__ct_lin__74__a));
                                }(), __Vfunc_u_ch__DOT__ct_lin__74__Vfuncout)))))) {
            __Vfunc_u_ch__DOT__ct_lin__75__a = vlSelfRef.__PVT__ch_ct_wr_addr;
            __Vfunc_u_ch__DOT__ct_lin__75__comp = vlSelfRef.__PVT__ch_ct_sel;
            __Vfunc_u_ch__DOT__ct_lin__75__Vfuncout 
                = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_u_ch__DOT__ct_lin__75__comp), 0x0000000dU) 
                   + (IData)(__Vfunc_u_ch__DOT__ct_lin__75__a));
            __VdlyVal__u_ch__DOT__ct__v0 = vlSelfRef.u_ch__DOT____Vlvbound_h7d40fc66__0;
            __VdlyDim0__u_ch__DOT__ct__v0 = (0x00007fffU 
                                             & __Vfunc_u_ch__DOT__ct_lin__75__Vfuncout);
            __VdlySet__u_ch__DOT__ct__v0 = 1U;
        }
    }
    if (__VdlySet__u_pmul__DOT__mem_b__v0) {
        vlSelfRef.__PVT__u_pmul__DOT__mem_b[__VdlyDim0__u_pmul__DOT__mem_b__v0] 
            = __VdlyVal__u_pmul__DOT__mem_b__v0;
    }
    if (__VdlySet__u_ch__DOT__u_pmul__DOT__mem_b__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b[__VdlyDim0__u_ch__DOT__u_pmul__DOT__mem_b__v0] 
            = __VdlyVal__u_ch__DOT__u_pmul__DOT__mem_b__v0;
    }
    if (__VdlySet__h1__v0) {
        vlSelfRef.__PVT__h1[__VdlyDim0__h1__v0] = __VdlyVal__h1__v0;
    }
    if (__VdlySet__u_ch__DOT__mem_r__v0) {
        vlSelfRef.__PVT__u_ch__DOT__mem_r[__VdlyDim0__u_ch__DOT__mem_r__v0] 
            = __VdlyVal__u_ch__DOT__mem_r__v0;
    }
    if (__VdlySet__u_pmul__DOT__mem_ntt__v0) {
        vlSelfRef.__PVT__u_pmul__DOT__mem_ntt[__VdlyDim0__u_pmul__DOT__mem_ntt__v0] 
            = __VdlyVal__u_pmul__DOT__mem_ntt__v0;
    }
    if (__VdlySet__u_ch__DOT__u_pmul__DOT__mem_ntt__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt[__VdlyDim0__u_ch__DOT__u_pmul__DOT__mem_ntt__v0] 
            = __VdlyVal__u_ch__DOT__u_pmul__DOT__mem_ntt__v0;
    }
    if (__VdlySet__u_ch__DOT__u_padd__DOT__mem_r__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__mem_r[__VdlyDim0__u_ch__DOT__u_padd__DOT__mem_r__v0] 
            = __VdlyVal__u_ch__DOT__u_padd__DOT__mem_r__v0;
    }
    if (__VdlySet__u_ch__DOT__ct__v0) {
        vlSelfRef.__PVT__u_ch__DOT__ct[__VdlyDim0__u_ch__DOT__ct__v0] 
            = __VdlyVal__u_ch__DOT__ct__v0;
    }
    vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__b_rd = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__mem_b
        [vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__radr];
    vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__a_rd = vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__mem_a
        [vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__radr];
    vlSelfRef.__PVT__u_padd__DOT__b_rd = vlSelfRef.__PVT__u_padd__DOT__mem_b
        [vlSelfRef.__PVT__u_padd__DOT__radr];
    vlSelfRef.__PVT__u_padd__DOT__a_rd = vlSelfRef.__PVT__u_padd__DOT__mem_a
        [vlSelfRef.__PVT__u_padd__DOT__radr];
    vlSelfRef.__PVT__ch_rd_data = vlSelfRef.__PVT__u_ch__DOT__mem_h
        [vlSelfRef.__PVT__ch_rd_addr];
    vlSelfRef.__PVT__h2_rd = vlSelfRef.__PVT__h2[(0x00001fffU 
                                                  & ((0x0cU 
                                                      == (IData)(vlSelfRef.__PVT__state))
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__idx) 
                                                      - (IData)(2U))
                                                      : (IData)(vlSelfRef.__PVT__idx)))];
    vlSelfRef.__PVT__u_ch__DOT__memh_rd = vlSelfRef.__PVT__u_ch__DOT__mem_h
        [(0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                         - (IData)(2U)))];
    if (__VdlySet__u_ch__DOT__u_padd__DOT__mem_b__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__mem_b[__VdlyDim0__u_ch__DOT__u_padd__DOT__mem_b__v0] 
            = __VdlyVal__u_ch__DOT__u_padd__DOT__mem_b__v0;
    }
    if (__VdlySet__u_ch__DOT__u_padd__DOT__mem_a__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__mem_a[__VdlyDim0__u_ch__DOT__u_padd__DOT__mem_a__v0] 
            = __VdlyVal__u_ch__DOT__u_padd__DOT__mem_a__v0;
    }
    if (__VdlySet__u_padd__DOT__mem_b__v0) {
        vlSelfRef.__PVT__u_padd__DOT__mem_b[__VdlyDim0__u_padd__DOT__mem_b__v0] 
            = __VdlyVal__u_padd__DOT__mem_b__v0;
    }
    if (__VdlySet__u_padd__DOT__mem_a__v0) {
        vlSelfRef.__PVT__u_padd__DOT__mem_a[__VdlyDim0__u_padd__DOT__mem_a__v0] 
            = __VdlyVal__u_padd__DOT__mem_a__v0;
    }
    if (__VdlySet__h2__v0) {
        vlSelfRef.__PVT__h2[__VdlyDim0__h2__v0] = __VdlyVal__h2__v0;
    }
    if (__VdlySet__u_ch__DOT__mem_h__v0) {
        vlSelfRef.__PVT__u_ch__DOT__mem_h[__VdlyDim0__u_ch__DOT__mem_h__v0] 
            = __VdlyVal__u_ch__DOT__mem_h__v0;
    }
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__pm_start = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pa_a_wr_en = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pa_b_wr_en = 0U;
        __Vdly__u_ch__DOT__pa_start = 0U;
        __Vdly__ch_done = 0U;
        if ((8U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
                __Vdly__u_ch__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
                    __Vdly__u_ch__DOT__state = 0U;
                } else {
                    __Vdly__ch_done = 1U;
                    __Vdly__u_ch__DOT__state = 0U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                    vlSelfRef.__PVT__u_ch__DOT__pm_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                    __Vdly__u_ch__DOT__horner_i = (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_ch__DOT__horner_i) 
                                                      - (IData)(1U)));
                    __Vdly__u_ch__DOT__idx = 0U;
                    __Vdly__u_ch__DOT__state = 2U;
                } else {
                    __Vdly__u_ch__DOT__idx = (0x00003fffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
                }
            } else if (vlSelfRef.__PVT__u_ch__DOT__pm_done) {
                __Vdly__u_ch__DOT__idx = 0U;
                __Vdly__u_ch__DOT__state = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
                    vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en = 1U;
                    vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en = 1U;
                    vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    if ((0x1fffU == (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                        __Vdly__u_ch__DOT__idx = 0U;
                        vlSelfRef.__Vdly__u_ch__DOT__pm_start = 1U;
                        __Vdly__u_ch__DOT__state = 8U;
                    } else {
                        __Vdly__u_ch__DOT__idx = (0x00003fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                        vlSelfRef.__PVT__u_ch__DOT__pa_rd_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    }
                    if ((0x2001U == (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                        __Vdly__u_ch__DOT__idx = 0U;
                        __Vdly__u_ch__DOT__state = 
                            ((0U == (IData)(vlSelfRef.__PVT__u_ch__DOT__horner_i))
                              ? 0x0aU : 7U);
                    } else {
                        __Vdly__u_ch__DOT__idx = (0x00003fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
                if (vlSelfRef.__PVT__u_ch__DOT__pa_done) {
                    __Vdly__u_ch__DOT__idx = 0U;
                    __Vdly__u_ch__DOT__state = 6U;
                }
            } else {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                    vlSelfRef.__PVT__u_ch__DOT__pm_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                }
                if ((2U <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                    vlSelfRef.__PVT__u_ch__DOT__pa_a_wr_en = 1U;
                    vlSelfRef.__PVT__u_ch__DOT__pa_a_wr_addr 
                        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                                          - (IData)(2U)));
                    vlSelfRef.__PVT__u_ch__DOT__pa_a_wr_data 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
                    vlSelfRef.__PVT__u_ch__DOT__pa_b_wr_en = 1U;
                    vlSelfRef.__PVT__u_ch__DOT__pa_b_wr_addr 
                        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                                          - (IData)(2U)));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                    __Vdly__u_ch__DOT__idx = 0U;
                    __Vdly__u_ch__DOT__pa_start = 1U;
                    __Vdly__u_ch__DOT__state = 5U;
                } else {
                    __Vdly__u_ch__DOT__idx = (0x00003fffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
                if (vlSelfRef.__PVT__u_ch__DOT__pm_done) {
                    __Vdly__u_ch__DOT__idx = 0U;
                    __Vdly__u_ch__DOT__state = 4U;
                }
            } else {
                vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en = 1U;
                vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_addr 
                    = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en = 1U;
                vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_addr 
                    = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                if ((0x1fffU == (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                    __Vdly__u_ch__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_ch__DOT__pm_start = 1U;
                    __Vdly__u_ch__DOT__state = 3U;
                } else {
                    __Vdly__u_ch__DOT__idx = (0x00003fffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__state))) {
            if ((0x2000U == (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) {
                __Vdly__u_ch__DOT__idx = 0U;
                __Vdly__u_ch__DOT__horner_i = (3U & 
                                               ((IData)(vlSelfRef.__PVT__u_ch__DOT__ct_last) 
                                                - (IData)(1U)));
                __Vdly__u_ch__DOT__state = ((0U == (IData)(vlSelfRef.__PVT__u_ch__DOT__ct_last))
                                             ? 0x0aU
                                             : 2U);
            } else {
                __Vdly__u_ch__DOT__idx = (0x00003fffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
            }
        } else if (vlSelfRef.__PVT__ch_start) {
            __Vdly__u_ch__DOT__idx = 0U;
            vlSelfRef.__PVT__u_ch__DOT__ct_last = (3U 
                                                   & ((IData)(vlSelfRef.__PVT__ch_ct_count) 
                                                      - (IData)(1U)));
            __Vdly__u_ch__DOT__state = 1U;
        }
    } else {
        __Vdly__u_ch__DOT__idx = 0U;
        __Vdly__u_ch__DOT__horner_i = 0U;
        __Vdly__u_ch__DOT__state = 0U;
        __Vdly__ch_done = 0U;
        vlSelfRef.__PVT__u_ch__DOT__ct_last = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__pm_start = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pa_a_wr_en = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pa_b_wr_en = 0U;
        __Vdly__u_ch__DOT__pa_start = 0U;
    }
    vlSelfRef.__PVT__u_ch__DOT__horner_i = __Vdly__u_ch__DOT__horner_i;
    vlSelfRef.__PVT__u_ch__DOT__idx = __Vdly__u_ch__DOT__idx;
    vlSelfRef.__PVT__u_ch__DOT__state = __Vdly__u_ch__DOT__state;
    if (((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
         & (1U <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)))) {
        vlSelfRef.__PVT__u_ch__DOT__memh_wa = (0x00001fffU 
                                               & ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                                                  - (IData)(1U)));
        vlSelfRef.__PVT__u_ch__DOT__memh_wd = vlSelfRef.__PVT__u_ch__DOT__ct_rd;
    } else {
        vlSelfRef.__PVT__u_ch__DOT__memh_wa = (0x00001fffU 
                                               & (((6U 
                                                    == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                                   & (2U 
                                                      <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                                                   - (IData)(2U))
                                                   : (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
        vlSelfRef.__PVT__u_ch__DOT__memh_wd = vlSelfRef.__PVT__u_ch__DOT__pa_rd_data;
    }
    vlSelfRef.__PVT__u_ch__DOT__memh_we = (((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                            & (1U <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))) 
                                           || ((6U 
                                                == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                               & (2U 
                                                  <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))));
    vlSelfRef.__PVT__u_ch__DOT__ct_ra = (0x00001fffU 
                                         & ((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__state))
                                             ? ([&]() {
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__72__a 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__72__comp 
                        = vlSelfRef.__PVT__u_ch__DOT__ct_last;
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__72__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__72__comp), 0x0000000dU) 
                           + (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__72__a));
                }(), vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__72__Vfuncout)
                                             : ([&]() {
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__73__a 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__73__comp 
                        = vlSelfRef.__PVT__u_ch__DOT__horner_i;
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__73__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__73__comp), 0x0000000dU) 
                           + (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__73__a));
                }(), vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__73__Vfuncout)));
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__wvalid = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pa_done = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state))) {
                vlSelfRef.__PVT__u_ch__DOT__pa_done = 1U;
                __Vdly__u_ch__DOT__u_padd__DOT__state = 0U;
            } else {
                __Vdly__u_ch__DOT__u_padd__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state))) {
            vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__widx 
                = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt));
            vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__wvalid = 1U;
            if ((0x1fffU == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt))) {
                __Vdly__u_ch__DOT__u_padd__DOT__state = 2U;
            } else {
                vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt 
                    = (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt)));
            }
        } else if (vlSelfRef.__PVT__u_ch__DOT__pa_start) {
            vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt = 0U;
            vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__sub_r = 0U;
            __Vdly__u_ch__DOT__u_padd__DOT__state = 1U;
        }
    } else {
        __Vdly__u_ch__DOT__u_padd__DOT__state = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pa_done = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__sub_r = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__widx = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__wvalid = 0U;
    }
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__ch_ct_wr_en = 0U;
        vlSelfRef.__PVT__ch_r_wr_en = 0U;
        vlSelfRef.__PVT__ch_start = 0U;
        if (((IData)(vlSymsp->TOP.r_wr_en) & (2U == (IData)(vlSymsp->TOP.lane_sel)))) {
            vlSelfRef.__PVT__ch_r_wr_en = 1U;
            vlSelfRef.__PVT__ch_r_wr_addr = vlSymsp->TOP.r_wr_addr;
            vlSelfRef.__PVT__ch_r_wr_data = vlSymsp->TOP.r_wr_data;
        }
        vlSelfRef.__PVT__pm_a_wr_en = 0U;
        vlSelfRef.__PVT__pm_b_wr_en = 0U;
        vlSelfRef.__Vdly__pm_start = 0U;
        vlSelfRef.__PVT__pa_a_wr_en = 0U;
        vlSelfRef.__PVT__pa_b_wr_en = 0U;
        __Vdly__pa_start = 0U;
        vlSelfRef.done = 0U;
        if ((8U & (IData)(vlSelfRef.__PVT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__state))) {
                if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                        vlSelfRef.valid = vlSelfRef.__PVT__cmp_ok;
                        vlSelfRef.done = 1U;
                        __Vdly__state = 0U;
                    } else {
                        if ((0x2000U > (IData)(vlSelfRef.__PVT__idx))) {
                            __Vdly__pa_rd_addr = (0x00001fffU 
                                                  & (IData)(vlSelfRef.__PVT__idx));
                        }
                        if ((2U <= (IData)(vlSelfRef.__PVT__idx))) {
                            if ((vlSelfRef.__PVT__pa_rd_data 
                                 != vlSelfRef.__PVT__h3_rd)) {
                                vlSelfRef.__PVT__cmp_ok = 0U;
                            }
                        }
                        if ((0x2001U == (IData)(vlSelfRef.__PVT__idx))) {
                            __Vdly__state = 0x0fU;
                        } else {
                            __Vdly__idx = (0x00003fffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__idx)));
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    if (vlSelfRef.__PVT__pa_done) {
                        __Vdly__idx = 0U;
                        vlSelfRef.__PVT__cmp_ok = 1U;
                        __Vdly__state = 0x0eU;
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.__PVT__idx))) {
                        vlSelfRef.__PVT__pm_rd_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.__PVT__idx));
                    }
                    if ((2U <= (IData)(vlSelfRef.__PVT__idx))) {
                        vlSelfRef.__PVT__pa_a_wr_en = 1U;
                        vlSelfRef.__PVT__pa_a_wr_addr 
                            = (0x00001fffU & ((IData)(vlSelfRef.__PVT__idx) 
                                              - (IData)(2U)));
                        vlSelfRef.__PVT__pa_a_wr_data 
                            = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
                        vlSelfRef.__PVT__pa_b_wr_en = 1U;
                        vlSelfRef.__PVT__pa_b_wr_addr 
                            = (0x00001fffU & ((IData)(vlSelfRef.__PVT__idx) 
                                              - (IData)(2U)));
                    }
                    if ((0x2001U == (IData)(vlSelfRef.__PVT__idx))) {
                        __Vdly__idx = 0U;
                        __Vdly__pa_start = 1U;
                        __Vdly__state = 0x0dU;
                    } else {
                        __Vdly__idx = (0x00003fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__idx)));
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    if (vlSelfRef.__PVT__pm_done) {
                        __Vdly__idx = 0U;
                        __Vdly__state = 0x0cU;
                    }
                } else {
                    vlSelfRef.__PVT__pm_a_wr_en = 1U;
                    vlSelfRef.__PVT__pm_a_wr_addr = 
                        (0x00001fffU & (IData)(vlSelfRef.__PVT__idx));
                    vlSelfRef.__PVT__pm_b_wr_en = 1U;
                    vlSelfRef.__PVT__pm_b_wr_addr = 
                        (0x00001fffU & (IData)(vlSelfRef.__PVT__idx));
                    if ((0x1fffU == (IData)(vlSelfRef.__PVT__idx))) {
                        __Vdly__idx = 0U;
                        vlSelfRef.__Vdly__pm_start = 1U;
                        __Vdly__state = 0x0bU;
                    } else {
                        __Vdly__idx = (0x00003fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__idx))) {
                    vlSelfRef.__PVT__ch_rd_addr = (0x00001fffU 
                                                   & (IData)(vlSelfRef.__PVT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__idx))) {
                    __Vdly__idx = 0U;
                    __Vdly__state = 0x0aU;
                } else {
                    __Vdly__idx = (0x00003fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__idx)));
                }
            } else if (vlSelfRef.__PVT__ch_done) {
                __Vdly__idx = 0U;
                __Vdly__state = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    vlSelfRef.__PVT__ch_ct_wr_en = 1U;
                    vlSelfRef.__PVT__ch_ct_sel = vlSelfRef.__PVT__comp_i;
                    vlSelfRef.__PVT__ch_ct_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__idx));
                    vlSelfRef.__PVT__ch_ct_wr_data 
                        = ((0x00011fffU >= (0x0001ffffU 
                                            & ([&]() {
                                        __Vfunc_ct_lin__66__a 
                                            = (0x00001fffU 
                                               & (IData)(vlSelfRef.__PVT__idx));
                                        __Vfunc_ct_lin__66__comp 
                                            = vlSelfRef.__PVT__comp_i;
                                        __Vfunc_ct_lin__66__Vfuncout 
                                            = (VL_SHIFTL_III(32,32,32, 
                                                             ((IData)(6U) 
                                                              + (IData)(__Vfunc_ct_lin__66__comp)), 0x0000000dU) 
                                               + (IData)(__Vfunc_ct_lin__66__a));
                                    }(), __Vfunc_ct_lin__66__Vfuncout)))
                            ? vlSelfRef.__PVT__ct_mem
                           [(0x0001ffffU & ([&]() {
                                    __Vfunc_ct_lin__67__a 
                                        = (0x00001fffU 
                                           & (IData)(vlSelfRef.__PVT__idx));
                                    __Vfunc_ct_lin__67__comp 
                                        = vlSelfRef.__PVT__comp_i;
                                    __Vfunc_ct_lin__67__Vfuncout 
                                        = (VL_SHIFTL_III(32,32,32, 
                                                         ((IData)(6U) 
                                                          + (IData)(__Vfunc_ct_lin__67__comp)), 0x0000000dU) 
                                           + (IData)(__Vfunc_ct_lin__67__a));
                                }(), __Vfunc_ct_lin__67__Vfuncout))]
                            : 0ULL);
                    if ((0x1fffU == (IData)(vlSelfRef.__PVT__idx))) {
                        __Vdly__idx = 0U;
                        if (((IData)(vlSelfRef.__PVT__comp_i) 
                             == (3U & ((IData)(vlSymsp->TOP.c3_count) 
                                       - (IData)(1U))))) {
                            __Vdly__comp_i = 0U;
                            vlSelfRef.__PVT__ch_ct_count 
                                = vlSymsp->TOP.c3_count;
                            vlSelfRef.__PVT__ch_start = 1U;
                            __Vdly__state = 8U;
                        } else {
                            __Vdly__comp_i = (3U & 
                                              ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__comp_i)));
                        }
                    } else {
                        __Vdly__idx = (0x00003fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__idx)));
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.__PVT__idx))) {
                        vlSelfRef.__PVT__ch_rd_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.__PVT__idx));
                    }
                    if ((0x2001U == (IData)(vlSelfRef.__PVT__idx))) {
                        __Vdly__idx = 0U;
                        __Vdly__comp_i = 0U;
                        __Vdly__state = 7U;
                    } else {
                        __Vdly__idx = (0x00003fffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                if (vlSelfRef.__PVT__ch_done) {
                    __Vdly__idx = 0U;
                    __Vdly__state = 6U;
                }
            } else {
                vlSelfRef.__PVT__ch_ct_wr_en = 1U;
                vlSelfRef.__PVT__ch_ct_sel = vlSelfRef.__PVT__comp_i;
                vlSelfRef.__PVT__ch_ct_wr_addr = (0x00001fffU 
                                                  & (IData)(vlSelfRef.__PVT__idx));
                vlSelfRef.__PVT__ch_ct_wr_data = ((0x00011fffU 
                                                   >= 
                                                   (0x0001ffffU 
                                                    & ([&]() {
                                    __Vfunc_ct_lin__68__a 
                                        = (0x00001fffU 
                                           & (IData)(vlSelfRef.__PVT__idx));
                                    __Vfunc_ct_lin__68__comp 
                                        = vlSelfRef.__PVT__comp_i;
                                    __Vfunc_ct_lin__68__Vfuncout 
                                        = (VL_SHIFTL_III(32,32,32, 
                                                         ((IData)(3U) 
                                                          + (IData)(__Vfunc_ct_lin__68__comp)), 0x0000000dU) 
                                           + (IData)(__Vfunc_ct_lin__68__a));
                                }(), __Vfunc_ct_lin__68__Vfuncout)))
                                                   ? vlSelfRef.__PVT__ct_mem
                                                  [
                                                  (0x0001ffffU 
                                                   & ([&]() {
                                __Vfunc_ct_lin__69__a 
                                    = (0x00001fffU 
                                       & (IData)(vlSelfRef.__PVT__idx));
                                __Vfunc_ct_lin__69__comp 
                                    = vlSelfRef.__PVT__comp_i;
                                __Vfunc_ct_lin__69__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, 
                                                     ((IData)(3U) 
                                                      + (IData)(__Vfunc_ct_lin__69__comp)), 0x0000000dU) 
                                       + (IData)(__Vfunc_ct_lin__69__a));
                            }(), __Vfunc_ct_lin__69__Vfuncout))]
                                                   : 0ULL);
                if ((0x1fffU == (IData)(vlSelfRef.__PVT__idx))) {
                    __Vdly__idx = 0U;
                    if (((IData)(vlSelfRef.__PVT__comp_i) 
                         == (3U & ((IData)(vlSymsp->TOP.c2_count) 
                                   - (IData)(1U))))) {
                        __Vdly__comp_i = 0U;
                        vlSelfRef.__PVT__ch_ct_count 
                            = vlSymsp->TOP.c2_count;
                        vlSelfRef.__PVT__ch_start = 1U;
                        __Vdly__state = 5U;
                    } else {
                        __Vdly__comp_i = (3U & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__comp_i)));
                    }
                } else {
                    __Vdly__idx = (0x00003fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__idx)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__idx))) {
                    vlSelfRef.__PVT__ch_rd_addr = (0x00001fffU 
                                                   & (IData)(vlSelfRef.__PVT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__idx))) {
                    __Vdly__idx = 0U;
                    __Vdly__comp_i = 0U;
                    __Vdly__state = 4U;
                } else {
                    __Vdly__idx = (0x00003fffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__idx)));
                }
            } else if (vlSelfRef.__PVT__ch_done) {
                __Vdly__idx = 0U;
                __Vdly__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
            vlSelfRef.__PVT__ch_ct_wr_en = 1U;
            vlSelfRef.__PVT__ch_ct_sel = vlSelfRef.__PVT__comp_i;
            vlSelfRef.__PVT__ch_ct_wr_addr = (0x00001fffU 
                                              & (IData)(vlSelfRef.__PVT__idx));
            vlSelfRef.__PVT__ch_ct_wr_data = ((0x00011fffU 
                                               >= (0x0001ffffU 
                                                   & ([&]() {
                                __Vfunc_ct_lin__70__a 
                                    = (0x00001fffU 
                                       & (IData)(vlSelfRef.__PVT__idx));
                                __Vfunc_ct_lin__70__comp 
                                    = vlSelfRef.__PVT__comp_i;
                                __Vfunc_ct_lin__70__Vfuncout 
                                    = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_ct_lin__70__comp), 0x0000000dU) 
                                       + (IData)(__Vfunc_ct_lin__70__a));
                            }(), __Vfunc_ct_lin__70__Vfuncout)))
                                               ? vlSelfRef.__PVT__ct_mem
                                              [(0x0001ffffU 
                                                & ([&]() {
                            __Vfunc_ct_lin__71__a = 
                                (0x00001fffU & (IData)(vlSelfRef.__PVT__idx));
                            __Vfunc_ct_lin__71__comp 
                                = vlSelfRef.__PVT__comp_i;
                            __Vfunc_ct_lin__71__Vfuncout 
                                = (VL_SHIFTL_III(32,32,32, (IData)(__Vfunc_ct_lin__71__comp), 0x0000000dU) 
                                   + (IData)(__Vfunc_ct_lin__71__a));
                        }(), __Vfunc_ct_lin__71__Vfuncout))]
                                               : 0ULL);
            if ((0x1fffU == (IData)(vlSelfRef.__PVT__idx))) {
                __Vdly__idx = 0U;
                if (((IData)(vlSelfRef.__PVT__comp_i) 
                     == (3U & ((IData)(vlSymsp->TOP.c1_count) 
                               - (IData)(1U))))) {
                    __Vdly__comp_i = 0U;
                    vlSelfRef.__PVT__ch_ct_count = vlSymsp->TOP.c1_count;
                    vlSelfRef.__PVT__ch_start = 1U;
                    __Vdly__state = 2U;
                } else {
                    __Vdly__comp_i = (3U & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__comp_i)));
                }
            } else {
                __Vdly__idx = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__idx)));
            }
        } else if (vlSymsp->TOP.start) {
            __Vdly__comp_i = 0U;
            __Vdly__idx = 0U;
            __Vdly__state = 1U;
        }
    } else {
        __Vdly__idx = 0U;
        __Vdly__comp_i = 0U;
        __Vdly__state = 0U;
        vlSelfRef.done = 0U;
        vlSelfRef.valid = 0U;
        vlSelfRef.__PVT__ch_ct_wr_en = 0U;
        vlSelfRef.__PVT__ch_r_wr_en = 0U;
        vlSelfRef.__PVT__ch_start = 0U;
        vlSelfRef.__PVT__pm_a_wr_en = 0U;
        vlSelfRef.__PVT__pm_b_wr_en = 0U;
        vlSelfRef.__Vdly__pm_start = 0U;
        vlSelfRef.__PVT__pa_a_wr_en = 0U;
        vlSelfRef.__PVT__pa_b_wr_en = 0U;
        __Vdly__pa_start = 0U;
        vlSelfRef.__PVT__cmp_ok = 1U;
    }
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__u_padd__DOT__wvalid = 0U;
        vlSelfRef.__PVT__pa_done = 0U;
        if ((2U & (IData)(vlSelfRef.__PVT__u_padd__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_padd__DOT__state))) {
                vlSelfRef.__PVT__pa_done = 1U;
                __Vdly__u_padd__DOT__state = 0U;
            } else {
                __Vdly__u_padd__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_padd__DOT__state))) {
            vlSelfRef.__PVT__u_padd__DOT__widx = (0x00001fffU 
                                                  & (IData)(vlSelfRef.__PVT__u_padd__DOT__cnt));
            vlSelfRef.__PVT__u_padd__DOT__wvalid = 1U;
            if ((0x1fffU == (IData)(vlSelfRef.__PVT__u_padd__DOT__cnt))) {
                __Vdly__u_padd__DOT__state = 2U;
            } else {
                vlSelfRef.__PVT__u_padd__DOT__cnt = 
                    (0x00003fffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_padd__DOT__cnt)));
            }
        } else if (vlSelfRef.__PVT__pa_start) {
            vlSelfRef.__PVT__u_padd__DOT__cnt = 0U;
            vlSelfRef.__PVT__u_padd__DOT__sub_r = 0U;
            __Vdly__u_padd__DOT__state = 1U;
        }
    } else {
        __Vdly__u_padd__DOT__state = 0U;
        vlSelfRef.__PVT__u_padd__DOT__cnt = 0U;
        vlSelfRef.__PVT__pa_done = 0U;
        vlSelfRef.__PVT__u_padd__DOT__sub_r = 0U;
        vlSelfRef.__PVT__u_padd__DOT__widx = 0U;
        vlSelfRef.__PVT__u_padd__DOT__wvalid = 0U;
    }
    vlSelfRef.__PVT__u_ch__DOT__pa_start = __Vdly__u_ch__DOT__pa_start;
    vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state 
        = __Vdly__u_ch__DOT__u_padd__DOT__state;
    vlSelfRef.__PVT__ch_done = __Vdly__ch_done;
    vlSelfRef.__PVT__comp_i = __Vdly__comp_i;
    if (__VdlySet__ct_mem__v0) {
        vlSelfRef.__PVT__ct_mem[__VdlyDim0__ct_mem__v0] 
            = __VdlyVal__ct_mem__v0;
    }
    vlSelfRef.__PVT__state = __Vdly__state;
    vlSelfRef.__PVT__idx = __Vdly__idx;
    vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__radr = 
        ((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state))
          ? (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt))
          : 0U);
    vlSelfRef.__PVT__u_ch__DOT__memr_we = ((IData)(vlSelfRef.__PVT__ch_r_wr_en) 
                                           || ((9U 
                                                == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                               & (2U 
                                                  <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))));
    vlSelfRef.__PVT__u_ch__DOT__memr_wa = (0x00001fffU 
                                           & ((IData)(vlSelfRef.__PVT__ch_r_wr_en)
                                               ? (IData)(vlSelfRef.__PVT__ch_r_wr_addr)
                                               : ((
                                                   (9U 
                                                    == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                                   & (2U 
                                                      <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                                                   - (IData)(2U))
                                                   : (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))));
    vlSelfRef.__PVT__pa_rd_data = vlSelfRef.__PVT__u_padd__DOT__mem_r
        [vlSelfRef.__PVT__pa_rd_addr];
    vlSelfRef.__PVT__h3_rd = vlSelfRef.__PVT__h3[vlSelfRef.__PVT__pa_rd_addr];
    if (__VdlySet__u_padd__DOT__mem_r__v0) {
        vlSelfRef.__PVT__u_padd__DOT__mem_r[__VdlyDim0__u_padd__DOT__mem_r__v0] 
            = __VdlyVal__u_padd__DOT__mem_r__v0;
    }
    vlSelfRef.__PVT__pa_rd_addr = __Vdly__pa_rd_addr;
    if (__VdlySet__h3__v0) {
        vlSelfRef.__PVT__h3[__VdlyDim0__h3__v0] = __VdlyVal__h3__v0;
    }
    vlSelfRef.__PVT__pa_start = __Vdly__pa_start;
    vlSelfRef.__PVT__u_padd__DOT__state = __Vdly__u_padd__DOT__state;
    vlSelfRef.__PVT__u_padd__DOT__radr = ((1U == (IData)(vlSelfRef.__PVT__u_padd__DOT__state))
                                           ? (0x00001fffU 
                                              & (IData)(vlSelfRef.__PVT__u_padd__DOT__cnt))
                                           : 0U);
}

void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__1(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__1\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = 0;
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__vw;
    __PVT__u_pmul__DOT__u_ntt__DOT__vw = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_20;
    __VdfgRegularize_hebeb780c_0_20 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_21;
    __VdfgRegularize_hebeb780c_0_21 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_24;
    __VdfgRegularize_hebeb780c_0_24 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_25;
    __VdfgRegularize_hebeb780c_0_25 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_26;
    __VdfgRegularize_hebeb780c_0_26 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_29;
    __VdfgRegularize_hebeb780c_0_29 = 0;
    CData/*3:0*/ __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state;
    __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0;
    SData/*12:0*/ __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k;
    __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = 0;
    CData/*3:0*/ __Vdly__u_pmul__DOT__u_ntt__DOT__state;
    __Vdly__u_pmul__DOT__u_ntt__DOT__state = 0;
    SData/*12:0*/ __Vdly__u_pmul__DOT__u_ntt__DOT__k;
    __Vdly__u_pmul__DOT__u_ntt__DOT__k = 0;
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
    // Body
    vlSelfRef.__Vdly__u_pmul__DOT__ntt_done = vlSelfRef.__PVT__u_pmul__DOT__ntt_done;
    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__ntt_done 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_done;
    __Vdly__u_pmul__DOT__u_ntt__DOT__state = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state;
    __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state;
    __Vdly__u_pmul__DOT__u_ntt__DOT__k = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k;
    vlSelfRef.__Vdly__u_pmul__DOT__u_ntt__DOT__stage 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage;
    __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k;
    vlSelfRef.__Vdly__u_pmul__DOT__u_ntt__DOT__inv_r 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r;
    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage;
    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r;
    if (vlSymsp->TOP.rst_n) {
        if ((8U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else {
                vlSelfRef.__Vdly__u_pmul__DOT__ntt_done = 1U;
                __Vdly__u_pmul__DOT__u_ntt__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                    if ((0x1fffU == (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx))) {
                        __Vdly__u_pmul__DOT__u_ntt__DOT__state = 8U;
                    } else {
                        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx)));
                        __Vdly__u_pmul__DOT__u_ntt__DOT__state = 6U;
                    }
                } else {
                    __Vdly__u_pmul__DOT__u_ntt__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((0x0fffU == (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k))) {
                    __Vdly__u_pmul__DOT__u_ntt__DOT__k = 0U;
                    if ((0x000cU == (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage))) {
                        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx = 0U;
                        __Vdly__u_pmul__DOT__u_ntt__DOT__state 
                            = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                ? 6U : 8U);
                    } else {
                        vlSelfRef.__Vdly__u_pmul__DOT__u_ntt__DOT__stage 
                            = (0x00001fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage)));
                        __Vdly__u_pmul__DOT__u_ntt__DOT__state = 1U;
                    }
                } else {
                    __Vdly__u_pmul__DOT__u_ntt__DOT__k 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k)));
                    __Vdly__u_pmul__DOT__u_ntt__DOT__state = 1U;
                }
            } else {
                __Vdly__u_pmul__DOT__u_ntt__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r 
                    = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
                __Vdly__u_pmul__DOT__u_ntt__DOT__state = 4U;
            } else {
                vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                    = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
                vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r 
                    = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__tdo;
                __Vdly__u_pmul__DOT__u_ntt__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
            __Vdly__u_pmul__DOT__u_ntt__DOT__state = 2U;
        } else {
            vlSelfRef.__Vdly__u_pmul__DOT__ntt_done = 0U;
            if (vlSelfRef.__PVT__u_pmul__DOT__ntt_start) {
                vlSelfRef.__Vdly__u_pmul__DOT__u_ntt__DOT__stage = 0U;
                __Vdly__u_pmul__DOT__u_ntt__DOT__k = 0U;
                vlSelfRef.__Vdly__u_pmul__DOT__u_ntt__DOT__inv_r 
                    = vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse;
                __Vdly__u_pmul__DOT__u_ntt__DOT__state = 1U;
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            } else {
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__ntt_done = 1U;
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                    if ((0x1fffU == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx))) {
                        __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 8U;
                    } else {
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx)));
                        __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 6U;
                    }
                } else {
                    __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((0x0fffU == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k))) {
                    __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
                    if ((0x000cU == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))) {
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = 0U;
                        __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state 
                            = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                ? 6U : 8U);
                    } else {
                        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage 
                            = (0x00001fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)));
                        __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
                    }
                } else {
                    __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k 
                        = (0x00001fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k)));
                    __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
                }
            } else {
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r 
                    = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 4U;
            } else {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                    = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                    = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tdo;
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 2U;
        } else {
            vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__ntt_done = 0U;
            if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start) {
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage = 0U;
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r 
                    = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse;
                __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 1U;
            }
        }
    } else {
        vlSelfRef.__Vdly__u_pmul__DOT__u_ntt__DOT__stage = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx = 0U;
        __Vdly__u_pmul__DOT__u_ntt__DOT__state = 0U;
        vlSelfRef.__Vdly__u_pmul__DOT__ntt_done = 0U;
        __Vdly__u_pmul__DOT__u_ntt__DOT__k = 0U;
        vlSelfRef.__Vdly__u_pmul__DOT__u_ntt__DOT__inv_r = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = 0U;
        __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__ntt_done = 0U;
        __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r = 0U;
    }
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state 
        = __Vdly__u_pmul__DOT__u_ntt__DOT__state;
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k = __Vdly__u_pmul__DOT__u_ntt__DOT__k;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state 
        = __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k 
        = __Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k;
    __VdfgRegularize_hebeb780c_0_26 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                   >> 0x00000010U)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_28 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_2[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a);
    __Vtemp_2[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__a 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b);
    __Vtemp_3[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__b 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_4[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_4[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_4[2U]);
    __Vtemp_5[0U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_5[1U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_5[2U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_9[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_9[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_9[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_9[3U] = 0U;
    __Vtemp_9[4U] = 0U;
    VL_MUL_W(5, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_9);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_11[0U] = (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_11[1U] = (IData)((__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_11[2U] = 0U;
    __Vtemp_12[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq);
    __Vtemp_12[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq 
                              >> 0x00000020U));
    __Vtemp_12[2U] = 0U;
    VL_MUL_W(3, __Vtemp_13, __Vtemp_11, __Vtemp_12);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_13[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_13[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_13[2U]);
    VL_SUB_W(3, __Vtemp_15, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_15[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_15[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_15[2U]);
    __Vtemp_16[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq);
    __Vtemp_16[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq 
                              >> 0x00000020U));
    __Vtemp_16[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16)) {
        __Vtemp_19[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq);
        __Vtemp_19[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__qq 
                                  >> 0x00000020U));
        __Vtemp_19[2U] = 0U;
        VL_SUB_W(3, __Vtemp_20, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_19);
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_20[0U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_20[1U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_20[2U]);
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    __PVT__u_pmul__DOT__u_ntt__DOT__vw = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__87__Vfuncout;
    __VdfgRegularize_hebeb780c_0_21 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                   >> 0x00000010U)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_22[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a);
    __Vtemp_22[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__a 
                              >> 0x00000020U));
    __Vtemp_22[2U] = 0U;
    __Vtemp_23[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b);
    __Vtemp_23[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__b 
                              >> 0x00000020U));
    __Vtemp_23[2U] = 0U;
    VL_MUL_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_24[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_24[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_24[2U]);
    __Vtemp_25[0U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_25[1U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_25[2U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_25[3U] = 0U;
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_29[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_29[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_29[3U] = 0U;
    __Vtemp_29[4U] = 0U;
    VL_MUL_W(5, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_25, __Vtemp_29);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_31[0U] = (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_31[1U] = (IData)((__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_31[2U] = 0U;
    __Vtemp_32[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq);
    __Vtemp_32[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    VL_MUL_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_33[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_33[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_33[2U]);
    VL_SUB_W(3, __Vtemp_35, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_35[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_35[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_35[2U]);
    __Vtemp_36[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq);
    __Vtemp_36[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_36)) {
        __Vtemp_39[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq);
        __Vtemp_39[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__qq 
                                  >> 0x00000020U));
        __Vtemp_39[2U] = 0U;
        VL_SUB_W(3, __Vtemp_40, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_39);
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_40[0U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_40[1U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_40[2U]);
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__77__Vfuncout;
    __VdfgRegularize_hebeb780c_0_29 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_26 
                                          - vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_28 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_28 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_28));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_27 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_26 
                                                    - __PVT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_25 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + __PVT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_24 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_21 
                                          - vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_23 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_23 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_23));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_22 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_21 
                                                    - __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_20 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_29 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_29 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_29));
    __Vtemp_42[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a);
    __Vtemp_42[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__a 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b);
    __Vtemp_43[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__b 
                              >> 0x00000020U));
    __Vtemp_43[2U] = 0U;
    VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_44[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_44[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_44[2U]);
    __Vtemp_45[0U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_45[1U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_45[2U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_45[3U] = 0U;
    __Vtemp_45[4U] = 0U;
    __Vtemp_49[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_49[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_49[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_49[3U] = 0U;
    __Vtemp_49[4U] = 0U;
    VL_MUL_W(5, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_45, __Vtemp_49);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_51[0U] = (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_51[1U] = (IData)((__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_51[2U] = 0U;
    __Vtemp_52[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq);
    __Vtemp_52[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq 
                              >> 0x00000020U));
    __Vtemp_52[2U] = 0U;
    VL_MUL_W(3, __Vtemp_53, __Vtemp_51, __Vtemp_52);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_53[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_53[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_53[2U]);
    VL_SUB_W(3, __Vtemp_55, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_55[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_55[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    __Vtemp_56[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq);
    __Vtemp_56[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq 
                              >> 0x00000020U));
    __Vtemp_56[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_56)) {
        __Vtemp_59[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq);
        __Vtemp_59[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__qq 
                                  >> 0x00000020U));
        __Vtemp_59[2U] = 0U;
        VL_SUB_W(3, __Vtemp_60, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_59);
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_60[0U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_60[1U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_60[2U]);
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__92__Vfuncout;
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_25 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_25 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_25));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_24 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_24 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_24));
    __Vtemp_62[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a);
    __Vtemp_62[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__a 
                              >> 0x00000020U));
    __Vtemp_62[2U] = 0U;
    __Vtemp_63[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b);
    __Vtemp_63[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__b 
                              >> 0x00000020U));
    __Vtemp_63[2U] = 0U;
    VL_MUL_W(3, __Vtemp_64, __Vtemp_62, __Vtemp_63);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_64[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_64[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_64[2U]);
    __Vtemp_65[0U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_65[1U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_65[2U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_65[3U] = 0U;
    __Vtemp_65[4U] = 0U;
    __Vtemp_69[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_69[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_69[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_69[3U] = 0U;
    __Vtemp_69[4U] = 0U;
    VL_MUL_W(5, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_65, __Vtemp_69);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_71[0U] = (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_71[1U] = (IData)((__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_71[2U] = 0U;
    __Vtemp_72[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq);
    __Vtemp_72[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq 
                              >> 0x00000020U));
    __Vtemp_72[2U] = 0U;
    VL_MUL_W(3, __Vtemp_73, __Vtemp_71, __Vtemp_72);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_73[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_73[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_73[2U]);
    VL_SUB_W(3, __Vtemp_75, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_75[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_75[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_75[2U]);
    __Vtemp_76[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq);
    __Vtemp_76[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq 
                              >> 0x00000020U));
    __Vtemp_76[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_76)) {
        __Vtemp_79[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq);
        __Vtemp_79[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__qq 
                                  >> 0x00000020U));
        __Vtemp_79[2U] = 0U;
        VL_SUB_W(3, __Vtemp_80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_79);
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_80[0U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_80[1U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_80[2U]);
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__82__Vfuncout;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_20 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_20 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_20));
}

void Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__2(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___nba_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__2\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq = 0;
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
    // Body
    if (vlSymsp->TOP.rst_n) {
        vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.__PVT__pm_done = 0U;
        if ((4U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
                    if (vlSelfRef.__PVT__u_pmul__DOT__ntt_done) {
                        vlSelfRef.__PVT__pm_done = 1U;
                        vlSelfRef.__Vdly__u_pmul__DOT__state = 0U;
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx));
                    }
                    if ((0x2000U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                        vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse = 1U;
                        vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 1U;
                        vlSelfRef.__Vdly__u_pmul__DOT__state = 7U;
                    } else {
                        vlSelfRef.__Vdly__u_pmul__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                    vlSelfRef.__PVT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                    vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_pmul__DOT__state = 6U;
                } else {
                    vlSelfRef.__Vdly__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx)));
                }
            } else if (vlSelfRef.__PVT__u_pmul__DOT__ntt_done) {
                vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
                vlSelfRef.__Vdly__u_pmul__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
                vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse = 0U;
                vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 1U;
                vlSelfRef.__Vdly__u_pmul__DOT__state = 4U;
            } else {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                    vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx));
                    vlSelfRef.__PVT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx))) {
                    vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_pmul__DOT__state = 3U;
                } else {
                    vlSelfRef.__Vdly__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_pmul__DOT__idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__state))) {
            if (vlSelfRef.__PVT__u_pmul__DOT__ntt_done) {
                vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
                vlSelfRef.__Vdly__u_pmul__DOT__state = 2U;
            }
        } else if (vlSelfRef.__PVT__pm_start) {
            vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse = 0U;
            vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 1U;
            vlSelfRef.__Vdly__u_pmul__DOT__state = 1U;
        }
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pm_done = 0U;
        if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
                    if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                        vlSelfRef.__PVT__u_ch__DOT__pm_done = 1U;
                        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 0U;
                    }
                } else {
                    if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                            = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx));
                    }
                    if ((0x2000U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 1U;
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
                        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 7U;
                    } else {
                        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx 
                            = (0x00003fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx)));
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 6U;
                } else {
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx)));
                }
            } else if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 4U;
            } else {
                if ((0x2000U > (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx));
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__int_rd_addr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx));
                }
                if ((0x2001U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx))) {
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 3U;
                } else {
                    vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx 
                        = (0x00003fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state))) {
            if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_done) {
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
                vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 2U;
            }
        } else if (vlSelfRef.__PVT__u_ch__DOT__pm_start) {
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 1U;
            vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 1U;
        }
    } else {
        vlSelfRef.__Vdly__u_pmul__DOT__state = 0U;
        vlSelfRef.__Vdly__u_pmul__DOT__idx = 0U;
        vlSelfRef.__PVT__pm_done = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_inverse = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_addr = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state = 0U;
        vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0U;
        vlSelfRef.__PVT__u_ch__DOT__pm_done = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 0U;
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr = 0U;
    }
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__tdo = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__tw
        [(0x00003fffU & (((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? 0x2000U : 0U) + ((0x00001fffU 
                                               & VL_SHIFTL_III(13,13,13, (IData)(1U), 
                                                               (0x00001fffU 
                                                                & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                                    ? 
                                                                   ((IData)(0x000cU) 
                                                                    - (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage))
                                                                    : (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage))))) 
                                              + (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__grp))))];
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__coeff
        [vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr];
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tdo 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw
        [(0x00003fffU & (((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? 0x2000U : 0U) + ((0x00001fffU 
                                               & VL_SHIFTL_III(13,13,13, (IData)(1U), 
                                                               (0x00001fffU 
                                                                & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                                                    ? 
                                                                   ((IData)(0x000cU) 
                                                                    - (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))
                                                                    : (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))))) 
                                              + (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp))))];
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff
        [vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr];
    vlSelfRef.__PVT__pm_start = vlSelfRef.__Vdly__pm_start;
    vlSelfRef.__PVT__u_pmul__DOT__idx = vlSelfRef.__Vdly__u_pmul__DOT__idx;
    vlSelfRef.__PVT__u_pmul__DOT__state = vlSelfRef.__Vdly__u_pmul__DOT__state;
    if (vlSelfRef.__VdlySet__u_pmul__DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__tw[vlSelfRef.__VdlyDim0__u_pmul__DOT__u_ntt__DOT__tw__v0] 
            = vlSelfRef.__VdlyVal__u_pmul__DOT__u_ntt__DOT__tw__v0;
    }
    if (vlSelfRef.__VdlySet__u_pmul__DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__coeff[vlSelfRef.__VdlyDim0__u_pmul__DOT__u_ntt__DOT__coeff__v0] 
            = vlSelfRef.__VdlyVal__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    }
    vlSelfRef.__PVT__u_ch__DOT__pm_start = vlSelfRef.__Vdly__u_ch__DOT__pm_start;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__idx = vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__idx;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state 
        = vlSelfRef.__Vdly__u_ch__DOT__u_pmul__DOT__state;
    if (vlSelfRef.__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw[vlSelfRef.__VdlyDim0__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0] 
            = vlSelfRef.__VdlyVal__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0;
    }
    if (vlSelfRef.__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff[vlSelfRef.__VdlyDim0__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0] 
            = vlSelfRef.__VdlyVal__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0;
    }
    vlSelfRef.u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__pm_b_wr_en)));
    if (vlSelfRef.__PVT__pm_b_wr_en) {
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__PVT__h2_rd;
    } else {
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                           >> 0x00000010U)));
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__b 
            = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__a 
            = vlSelfRef.__PVT__u_pmul__DOT__mem_ntt_rd;
        __Vtemp_2[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__a);
        __Vtemp_2[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__a 
                                 >> 0x00000020U));
        __Vtemp_2[2U] = 0U;
        __Vtemp_3[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__b);
        __Vtemp_3[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__b 
                                 >> 0x00000020U));
        __Vtemp_3[2U] = 0U;
        VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[0U] 
            = __Vtemp_4[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[1U] 
            = __Vtemp_4[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[2U] 
            = (0x0000ffffU & __Vtemp_4[2U]);
        __Vtemp_5[0U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[0U];
        __Vtemp_5[1U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[1U];
        __Vtemp_5[2U] = vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p[2U];
        __Vtemp_5[3U] = 0U;
        __Vtemp_5[4U] = 0U;
        __Vtemp_9[0U] = vlSymsp->TOP.barrett_m_all[5U];
        __Vtemp_9[1U] = vlSymsp->TOP.barrett_m_all[6U];
        __Vtemp_9[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
        __Vtemp_9[3U] = 0U;
        __Vtemp_9[4U] = 0U;
        VL_MUL_W(5, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_9);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t 
            = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
        __Vtemp_11[0U] = (IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t);
        __Vtemp_11[1U] = (IData)((vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__t 
                                  >> 0x00000020U));
        __Vtemp_11[2U] = 0U;
        __Vtemp_12[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq);
        __Vtemp_12[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq 
                                  >> 0x00000020U));
        __Vtemp_12[2U] = 0U;
        VL_MUL_W(3, __Vtemp_13, __Vtemp_11, __Vtemp_12);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[0U] 
            = __Vtemp_13[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[1U] 
            = __Vtemp_13[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq[2U] 
            = (0x0000ffffU & __Vtemp_13[2U]);
        VL_SUB_W(3, __Vtemp_15, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__p, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__tq);
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_15[0U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_15[1U];
        vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_15[2U]);
        __Vtemp_16[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq);
        __Vtemp_16[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_16)) {
            __Vtemp_19[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq);
            __Vtemp_19[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__qq 
                                      >> 0x00000020U));
            __Vtemp_19[2U] = 0U;
            VL_SUB_W(3, __Vtemp_20, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_19);
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                = __Vtemp_20[0U];
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                = __Vtemp_20[1U];
            vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                = (0x0000ffffU & __Vtemp_20[2U]);
        }
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__86__Vfuncout;
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.n_inv_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.n_inv_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
    __Vtemp_22[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a);
    __Vtemp_22[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__a 
                              >> 0x00000020U));
    __Vtemp_22[2U] = 0U;
    __Vtemp_23[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b);
    __Vtemp_23[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__b 
                              >> 0x00000020U));
    __Vtemp_23[2U] = 0U;
    VL_MUL_W(3, __Vtemp_24, __Vtemp_22, __Vtemp_23);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_24[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_24[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_24[2U]);
    __Vtemp_25[0U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_25[1U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_25[2U] = __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_25[3U] = 0U;
    __Vtemp_25[4U] = 0U;
    __Vtemp_29[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_29[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_29[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_29[3U] = 0U;
    __Vtemp_29[4U] = 0U;
    VL_MUL_W(5, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_25, __Vtemp_29);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_31[0U] = (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_31[1U] = (IData)((__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_31[2U] = 0U;
    __Vtemp_32[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq);
    __Vtemp_32[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq 
                              >> 0x00000020U));
    __Vtemp_32[2U] = 0U;
    VL_MUL_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_33[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_33[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_33[2U]);
    VL_SUB_W(3, __Vtemp_35, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_35[0U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_35[1U];
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_35[2U]);
    __Vtemp_36[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq);
    __Vtemp_36[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_36)) {
        __Vtemp_39[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq);
        __Vtemp_39[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__qq 
                                  >> 0x00000020U));
        __Vtemp_39[2U] = 0U;
        VL_SUB_W(3, __Vtemp_40, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_39);
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_40[0U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_40[1U];
        __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_40[2U]);
    }
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__93__Vfuncout;
    vlSelfRef.u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en)));
    vlSelfRef.__PVT__u_ch__DOT__memr_wd = ((IData)(vlSelfRef.__PVT__ch_r_wr_en)
                                            ? vlSelfRef.__PVT__ch_r_wr_data
                                            : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo);
    if (vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__PVT__u_ch__DOT__memr_rd;
    } else {
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                           >> 0x00000010U)));
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__b 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__a 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt_rd;
        __Vtemp_42[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__a);
        __Vtemp_42[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__a 
                                  >> 0x00000020U));
        __Vtemp_42[2U] = 0U;
        __Vtemp_43[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__b);
        __Vtemp_43[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__b 
                                  >> 0x00000020U));
        __Vtemp_43[2U] = 0U;
        VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U] 
            = __Vtemp_44[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U] 
            = __Vtemp_44[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U] 
            = (0x0000ffffU & __Vtemp_44[2U]);
        __Vtemp_45[0U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[0U];
        __Vtemp_45[1U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[1U];
        __Vtemp_45[2U] = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p[2U];
        __Vtemp_45[3U] = 0U;
        __Vtemp_45[4U] = 0U;
        __Vtemp_49[0U] = vlSymsp->TOP.barrett_m_all[5U];
        __Vtemp_49[1U] = vlSymsp->TOP.barrett_m_all[6U];
        __Vtemp_49[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
        __Vtemp_49[3U] = 0U;
        __Vtemp_49[4U] = 0U;
        VL_MUL_W(5, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __Vtemp_45, __Vtemp_49);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
            = (0x000001ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm[2U])) 
                                           >> 0x00000010U)));
        __Vtemp_51[0U] = (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t);
        __Vtemp_51[1U] = (IData)((vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t 
                                  >> 0x00000020U));
        __Vtemp_51[2U] = 0U;
        __Vtemp_52[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq);
        __Vtemp_52[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq 
                                  >> 0x00000020U));
        __Vtemp_52[2U] = 0U;
        VL_MUL_W(3, __Vtemp_53, __Vtemp_51, __Vtemp_52);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[0U] 
            = __Vtemp_53[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[1U] 
            = __Vtemp_53[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq[2U] 
            = (0x0000ffffU & __Vtemp_53[2U]);
        VL_SUB_W(3, __Vtemp_55, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq);
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_55[0U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_55[1U];
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_55[2U]);
        __Vtemp_56[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq);
        __Vtemp_56[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq 
                                  >> 0x00000020U));
        __Vtemp_56[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_56)) {
            __Vtemp_59[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq);
            __Vtemp_59[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq 
                                      >> 0x00000020U));
            __Vtemp_59[2U] = 0U;
            VL_SUB_W(3, __Vtemp_60, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_59);
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U] 
                = __Vtemp_60[0U];
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U] 
                = __Vtemp_60[1U];
            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[2U] 
                = (0x0000ffffU & __Vtemp_60[2U]);
        }
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__Vfuncout;
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.n_inv_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSymsp->TOP.n_inv_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
    __Vtemp_62[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a);
    __Vtemp_62[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__a 
                              >> 0x00000020U));
    __Vtemp_62[2U] = 0U;
    __Vtemp_63[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b);
    __Vtemp_63[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__b 
                              >> 0x00000020U));
    __Vtemp_63[2U] = 0U;
    VL_MUL_W(3, __Vtemp_64, __Vtemp_62, __Vtemp_63);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_64[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_64[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_64[2U]);
    __Vtemp_65[0U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_65[1U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_65[2U] = __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_65[3U] = 0U;
    __Vtemp_65[4U] = 0U;
    __Vtemp_69[0U] = vlSymsp->TOP.barrett_m_all[5U];
    __Vtemp_69[1U] = vlSymsp->TOP.barrett_m_all[6U];
    __Vtemp_69[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[7U]);
    __Vtemp_69[3U] = 0U;
    __Vtemp_69[4U] = 0U;
    VL_MUL_W(5, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_65, __Vtemp_69);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_71[0U] = (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_71[1U] = (IData)((__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_71[2U] = 0U;
    __Vtemp_72[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq);
    __Vtemp_72[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq 
                              >> 0x00000020U));
    __Vtemp_72[2U] = 0U;
    VL_MUL_W(3, __Vtemp_73, __Vtemp_71, __Vtemp_72);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_73[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_73[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_73[2U]);
    VL_SUB_W(3, __Vtemp_75, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_75[0U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_75[1U];
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_75[2U]);
    __Vtemp_76[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq);
    __Vtemp_76[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq 
                              >> 0x00000020U));
    __Vtemp_76[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_76)) {
        __Vtemp_79[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq);
        __Vtemp_79[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__qq 
                                  >> 0x00000020U));
        __Vtemp_79[2U] = 0U;
        VL_SUB_W(3, __Vtemp_80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_79);
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_80[0U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_80[1U];
        __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_80[2U]);
    }
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__83__Vfuncout;
}

void Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___nba_comb__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u);
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u);
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua;
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__scaled;
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_27 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                           >> 0x00000010U))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_27 
                                    - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                        << 0x00000030U) 
                                       | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                           << 0x00000010U) 
                                          | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                             >> 0x00000010U))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_27)));
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                        vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                        if (vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en) {
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_data;
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_addr;
                        } else if (vlSelfRef.__PVT__pm_a_wr_en) {
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__h1_rd;
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__pm_a_wr_addr;
                        } else {
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__h2_rd;
                            vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__pm_b_wr_addr;
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua)
                        : (((2U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__state)) 
                            | (5U == (IData)(vlSelfRef.__PVT__u_pmul__DOT__state)))
                            ? (IData)(vlSelfRef.__PVT__u_pmul__DOT__int_rd_addr)
                            : (IData)(vlSelfRef.__PVT__pm_rd_addr)));
            }
        }
    }
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled;
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_22 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                           >> 0x00000010U))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_22 
                                    - (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                        << 0x00000030U) 
                                       | (((QData)((IData)(vlSymsp->TOP.q_all[3U])) 
                                           << 0x00000010U) 
                                          | ((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                             >> 0x00000010U))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_22)));
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 1U;
                        if (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) {
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data;
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr;
                        } else if (vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en) {
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = ((7U == (IData)(vlSelfRef.__PVT__u_ch__DOT__state))
                                    ? vlSelfRef.__PVT__u_ch__DOT__memr_rd
                                    : vlSelfRef.__PVT__u_ch__DOT__ct_rd);
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_addr;
                        } else {
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
                                = vlSelfRef.__PVT__u_ch__DOT__memr_rd;
                            vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr 
                                = vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_addr;
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua)
                        : (((2U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state)) 
                            | (5U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__state)))
                            ? (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__int_rd_addr)
                            : (IData)(vlSelfRef.__PVT__u_ch__DOT__pm_rd_addr)));
            }
        }
    }
}
