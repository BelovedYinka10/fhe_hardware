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
    SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
    SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq = 0;
    VlWide<3>/*79:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__p;
    VL_ZERO_W(80, __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__p);
    VlWide<3>/*79:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__r;
    VL_ZERO_W(80, __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__r);
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq = 0;
    VlWide<3>/*79:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__p;
    VL_ZERO_W(80, __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__p);
    VlWide<3>/*79:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__r;
    VL_ZERO_W(80, __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__r);
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
    VlWide<3>/*79:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__p;
    VL_ZERO_W(80, __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__p);
    VlWide<3>/*79:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__r;
    VL_ZERO_W(80, __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__r);
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq = 0;
    VlWide<3>/*79:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__p;
    VL_ZERO_W(80, __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__p);
    VlWide<3>/*79:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__r;
    VL_ZERO_W(80, __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__r);
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
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
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
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_45;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_49;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_59;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    // Body
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0U;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state;
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__state 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state;
    __Vdly__hash_verifier__DOT__u_pmul__DOT__idx = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 0U;
    vlSelfRef.__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0 = 0U;
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
    __Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a__v0 = 0U;
    __VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b__v0 = 0U;
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
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__p[0U] 
                        = __Vtemp_4[0U];
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__p[1U] 
                        = __Vtemp_4[1U];
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__p[2U] 
                        = (0x0000ffffU & __Vtemp_4[2U]);
                    __Vtemp_6[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq);
                    __Vtemp_6[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__qq 
                                             >> 0x00000020U));
                    __Vtemp_6[2U] = 0U;
                    VL_MODDIV_WWW(80, __Vtemp_7, __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__p, __Vtemp_6);
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__r[0U] 
                        = __Vtemp_7[0U];
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__r[1U] 
                        = __Vtemp_7[1U];
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__r[2U] 
                        = (0x0000ffffU & __Vtemp_7[2U]);
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__r[1U])) 
                             << 0x00000020U) | (QData)((IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__17__r[0U]))));
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
                    __Vtemp_9[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a);
                    __Vtemp_9[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__a 
                                             >> 0x00000020U));
                    __Vtemp_9[2U] = 0U;
                    __Vtemp_10[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b);
                    __Vtemp_10[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__b 
                                              >> 0x00000020U));
                    __Vtemp_10[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_11, __Vtemp_9, __Vtemp_10);
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__p[0U] 
                        = __Vtemp_11[0U];
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__p[1U] 
                        = __Vtemp_11[1U];
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__p[2U] 
                        = (0x0000ffffU & __Vtemp_11[2U]);
                    __Vtemp_13[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq);
                    __Vtemp_13[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__qq 
                                              >> 0x00000020U));
                    __Vtemp_13[2U] = 0U;
                    VL_MODDIV_WWW(80, __Vtemp_14, __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__p, __Vtemp_13);
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__r[0U] 
                        = __Vtemp_14[0U];
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__r[1U] 
                        = __Vtemp_14[1U];
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__r[2U] 
                        = (0x0000ffffU & __Vtemp_14[2U]);
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__r[1U])) 
                             << 0x00000020U) | (QData)((IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__7__r[0U]))));
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
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx) 
                                          - (IData)(2U)));
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a 
                        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt
                        [(0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx) 
                                         - (IData)(2U)))];
                    __Vtemp_52[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a);
                    __Vtemp_52[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__a 
                                              >> 0x00000020U));
                    __Vtemp_52[2U] = 0U;
                    __Vtemp_53[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b);
                    __Vtemp_53[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__b 
                                              >> 0x00000020U));
                    __Vtemp_53[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_54, __Vtemp_52, __Vtemp_53);
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__p[0U] 
                        = __Vtemp_54[0U];
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__p[1U] 
                        = __Vtemp_54[1U];
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__p[2U] 
                        = (0x0000ffffU & __Vtemp_54[2U]);
                    __Vtemp_56[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq);
                    __Vtemp_56[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__qq 
                                              >> 0x00000020U));
                    __Vtemp_56[2U] = 0U;
                    VL_MODDIV_WWW(80, __Vtemp_57, __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__p, __Vtemp_56);
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__r[0U] 
                        = __Vtemp_57[0U];
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__r[1U] 
                        = __Vtemp_57[1U];
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__r[2U] 
                        = (0x0000ffffU & __Vtemp_57[2U]);
                    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__r[1U])) 
                             << 0x00000020U) | (QData)((IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__0__r[0U]))));
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
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__b 
                        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_rd_data;
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en = 1U;
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr 
                        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx) 
                                          - (IData)(2U)));
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__a 
                        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__mem_ntt
                        [(0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__idx) 
                                         - (IData)(2U)))];
                    __Vtemp_59[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__a);
                    __Vtemp_59[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__a 
                                              >> 0x00000020U));
                    __Vtemp_59[2U] = 0U;
                    __Vtemp_60[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__b);
                    __Vtemp_60[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__b 
                                              >> 0x00000020U));
                    __Vtemp_60[2U] = 0U;
                    VL_MUL_W(3, __Vtemp_61, __Vtemp_59, __Vtemp_60);
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__p[0U] 
                        = __Vtemp_61[0U];
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__p[1U] 
                        = __Vtemp_61[1U];
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__p[2U] 
                        = (0x0000ffffU & __Vtemp_61[2U]);
                    __Vtemp_63[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq);
                    __Vtemp_63[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__qq 
                                              >> 0x00000020U));
                    __Vtemp_63[2U] = 0U;
                    VL_MODDIV_WWW(80, __Vtemp_64, __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__p, __Vtemp_63);
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__r[0U] 
                        = __Vtemp_64[0U];
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__r[1U] 
                        = __Vtemp_64[1U];
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__r[2U] 
                        = (0x0000ffffU & __Vtemp_64[2U]);
                    __Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__Vfuncout 
                        = (0x000000ffffffffffULL & 
                           (((QData)((IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__r[1U])) 
                             << 0x00000020U) | (QData)((IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__mod_mul__10__r[0U]))));
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
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + vlSelfRef.q));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __Vtemp_17[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r);
    __Vtemp_17[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r 
                              >> 0x00000020U));
    __Vtemp_17[2U] = 0U;
    __Vtemp_18[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r);
    __Vtemp_18[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                              >> 0x00000020U));
    __Vtemp_18[2U] = 0U;
    VL_MUL_W(3, __Vtemp_19, __Vtemp_17, __Vtemp_18);
    __Vtemp_20[0U] = __Vtemp_19[0U];
    __Vtemp_20[1U] = __Vtemp_19[1U];
    __Vtemp_20[2U] = (0x0000ffffU & __Vtemp_19[2U]);
    __Vtemp_21[0U] = (IData)(vlSelfRef.q);
    __Vtemp_21[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_21[2U] = 0U;
    VL_MODDIV_WWW(80, __Vtemp_22, __Vtemp_20, __Vtemp_21);
    __VdfgRegularize_hebeb780c_0_11 = (0x000000ffffffffffULL 
                                       & (((QData)((IData)(__Vtemp_22[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(__Vtemp_22[0U]))));
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                           : ((IData)(0x000cU) - (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + vlSelfRef.q));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __Vtemp_26[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r);
    __Vtemp_26[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r 
                              >> 0x00000020U));
    __Vtemp_26[2U] = 0U;
    __Vtemp_27[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r);
    __Vtemp_27[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                              >> 0x00000020U));
    __Vtemp_27[2U] = 0U;
    VL_MUL_W(3, __Vtemp_28, __Vtemp_26, __Vtemp_27);
    __Vtemp_29[0U] = __Vtemp_28[0U];
    __Vtemp_29[1U] = __Vtemp_28[1U];
    __Vtemp_29[2U] = (0x0000ffffU & __Vtemp_28[2U]);
    __Vtemp_30[0U] = (IData)(vlSelfRef.q);
    __Vtemp_30[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_30[2U] = 0U;
    VL_MODDIV_WWW(80, __Vtemp_31, __Vtemp_29, __Vtemp_30);
    __VdfgRegularize_hebeb780c_0_16 = (0x000000ffffffffffULL 
                                       & (((QData)((IData)(__Vtemp_31[1U])) 
                                           << 0x00000020U) 
                                          | (QData)((IData)(__Vtemp_31[0U]))));
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                           : ((IData)(0x000cU) - (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + __VdfgRegularize_hebeb780c_0_11));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - __VdfgRegularize_hebeb780c_0_11));
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + __VdfgRegularize_hebeb780c_0_16));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - __VdfgRegularize_hebeb780c_0_16));
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_rd_data 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__pa_rd_data;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__pa_done 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__pa_done;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__state 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__state;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__horner_i 
        = __Vdly__hash_verifier__DOT__u_ch__DOT__horner_i;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__idx = __Vdly__hash_verifier__DOT__u_ch__DOT__idx;
    __Vtemp_35[0U] = (IData)((0x000000ffffffffffULL 
                              & ((__VdfgRegularize_hebeb780c_0_9 
                                  >= vlSelfRef.q) ? 
                                 (__VdfgRegularize_hebeb780c_0_9 
                                  - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_9)));
    __Vtemp_35[1U] = (IData)(((0x000000ffffffffffULL 
                               & ((__VdfgRegularize_hebeb780c_0_9 
                                   >= vlSelfRef.q) ? 
                                  (__VdfgRegularize_hebeb780c_0_9 
                                   - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_9)) 
                              >> 0x00000020U));
    __Vtemp_35[2U] = 0U;
    __Vtemp_36[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r);
    __Vtemp_36[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    VL_MUL_W(3, __Vtemp_37, __Vtemp_35, __Vtemp_36);
    __Vtemp_38[0U] = __Vtemp_37[0U];
    __Vtemp_38[1U] = __Vtemp_37[1U];
    __Vtemp_38[2U] = (0x0000ffffU & __Vtemp_37[2U]);
    __Vtemp_39[0U] = (IData)(vlSelfRef.q);
    __Vtemp_39[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_39[2U] = 0U;
    VL_MODDIV_WWW(80, __Vtemp_40, __Vtemp_38, __Vtemp_39);
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = (0x000000ffffffffffULL & (((QData)((IData)(__Vtemp_40[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__Vtemp_40[0U]))));
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
    __Vtemp_44[0U] = (IData)((0x000000ffffffffffULL 
                              & ((__VdfgRegularize_hebeb780c_0_4 
                                  >= vlSelfRef.q) ? 
                                 (__VdfgRegularize_hebeb780c_0_4 
                                  - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_4)));
    __Vtemp_44[1U] = (IData)(((0x000000ffffffffffULL 
                               & ((__VdfgRegularize_hebeb780c_0_4 
                                   >= vlSelfRef.q) ? 
                                  (__VdfgRegularize_hebeb780c_0_4 
                                   - vlSelfRef.q) : __VdfgRegularize_hebeb780c_0_4)) 
                              >> 0x00000020U));
    __Vtemp_44[2U] = 0U;
    __Vtemp_45[0U] = (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r);
    __Vtemp_45[1U] = (IData)((vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r 
                              >> 0x00000020U));
    __Vtemp_45[2U] = 0U;
    VL_MUL_W(3, __Vtemp_46, __Vtemp_44, __Vtemp_45);
    __Vtemp_47[0U] = __Vtemp_46[0U];
    __Vtemp_47[1U] = __Vtemp_46[1U];
    __Vtemp_47[2U] = (0x0000ffffU & __Vtemp_46[2U]);
    __Vtemp_48[0U] = (IData)(vlSelfRef.q);
    __Vtemp_48[1U] = (IData)((vlSelfRef.q >> 0x00000020U));
    __Vtemp_48[2U] = 0U;
    VL_MODDIV_WWW(80, __Vtemp_49, __Vtemp_47, __Vtemp_48);
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = (0x000000ffffffffffULL & (((QData)((IData)(__Vtemp_49[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__Vtemp_49[0U]))));
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
