// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rns_ntt.h for the primary calling header

#include "Vtb_rns_ntt__pch.h"

void Vtb_rns_ntt___024root___timing_ready(Vtb_rns_ntt___024root* vlSelf);

VL_ATTR_COLD void Vtb_rns_ntt___024root___eval_static(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_static\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    // Body
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__clk__0 
        = vlSelfRef.tb_rns_ntt__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__rst_n__0 
        = vlSelfRef.tb_rns_ntt__DOT__rst_n;
    Vtb_rns_ntt___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vtb_rns_ntt___024root___eval_static__TOP(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_static__TOP\n"); );
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
    // Body
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
}

VL_ATTR_COLD void Vtb_rns_ntt___024root___eval_final(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_final\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rns_ntt___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_rns_ntt___024root___eval_phase__stl(Vtb_rns_ntt___024root* vlSelf);

VL_ATTR_COLD void Vtb_rns_ntt___024root___eval_settle(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_settle\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_rns_ntt___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb_rns_ntt.v", 19, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtb_rns_ntt___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtb_rns_ntt___024root___eval_triggers_vec__stl(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_triggers_vec__stl\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtb_rns_ntt___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rns_ntt___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_rns_ntt___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_rns_ntt___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_rns_ntt___024root___stl_sequent__TOP__0(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___stl_sequent__TOP__0\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts = 0;
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
    CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts = 0;
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
    CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts;
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts = 0;
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r));
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
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 0U;
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
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts));
    tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage))));
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts));
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
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u);
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
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u);
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
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u);
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
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
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
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
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
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
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
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
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
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
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
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
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

VL_ATTR_COLD void Vtb_rns_ntt___024root___eval_stl(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_stl\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_rns_ntt___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_rns_ntt___024root___eval_phase__stl(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___eval_phase__stl\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_rns_ntt___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rns_ntt___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_rns_ntt___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_rns_ntt___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_rns_ntt___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rns_ntt___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_rns_ntt___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_rns_ntt.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_rns_ntt.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_rns_ntt___024root___ctor_var_reset(Vtb_rns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rns_ntt___024root___ctor_var_reset\n"); );
    Vtb_rns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_rns_ntt__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8794433773278690870ull);
    vlSelf->tb_rns_ntt__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18438855440831568799ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->tb_rns_ntt__DOT__q_all, __VscopeHash, 1723479881093501404ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->tb_rns_ntt__DOT__n_inv_all, __VscopeHash, 14555673278787656837ull);
    VL_SCOPED_RAND_RESET_W(240, vlSelf->tb_rns_ntt__DOT__barrett_m_all, __VscopeHash, 8684446655160832230ull);
    vlSelf->tb_rns_ntt__DOT__lane_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6727829078377318714ull);
    vlSelf->tb_rns_ntt__DOT__coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14225707661461981123ull);
    vlSelf->tb_rns_ntt__DOT__coeff_wr_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18361997127781698627ull);
    vlSelf->tb_rns_ntt__DOT__coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11997956936372916155ull);
    vlSelf->tb_rns_ntt__DOT__tw_lane_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15385670033045902291ull);
    vlSelf->tb_rns_ntt__DOT__tw_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8072131758159199550ull);
    vlSelf->tb_rns_ntt__DOT__tw_wr_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12982982542427396024ull);
    vlSelf->tb_rns_ntt__DOT__tw_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1092068056511398487ull);
    vlSelf->tb_rns_ntt__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4372926627684352507ull);
    vlSelf->tb_rns_ntt__DOT__inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 814210475540796906ull);
    vlSelf->tb_rns_ntt__DOT__rd_lane = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14196742657045303120ull);
    vlSelf->tb_rns_ntt__DOT__rd_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16077492215800334763ull);
    vlSelf->tb_rns_ntt__DOT__rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10380060927746400420ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(80, vlSelf->tb_rns_ntt__DOT__params0[__Vi0], __VscopeHash, 18310063615034032750ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(80, vlSelf->tb_rns_ntt__DOT__params1[__Vi0], __VscopeHash, 2805594109990909793ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(80, vlSelf->tb_rns_ntt__DOT__params2[__Vi0], __VscopeHash, 17553670245981511951ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__tw_fwd0[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16935156643680665524ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__tw_inv0[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4878029758499682751ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__tw_fwd1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15204766934121482132ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__tw_inv1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11663973913294086193ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__tw_fwd2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17555344288001123979ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__tw_inv2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 820534729397340347ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__input0[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8294424050699945438ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__input1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9521587271557454545ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__input2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11500351658360257619ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__ntt_exp0[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8086865954645076545ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__ntt_exp1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17414972598218579799ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__ntt_exp2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 164683739234989085ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__intt_exp0[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2698697883806351851ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__intt_exp1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16211776881688022483ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__intt_exp2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2555889917739469772ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__hw_ntt0[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11707092713891632113ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__hw_ntt1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5242194340192733795ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__hw_ntt2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3781268439804551840ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__hw_intt0[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16480753406131032632ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__hw_intt1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8402782829179974540ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__hw_intt2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18097701998175023207ull);
    }
    vlSelf->tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done = 0;
    vlSelf->tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en = 0;
    vlSelf->tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done = 0;
    vlSelf->tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en = 0;
    vlSelf->tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done = 0;
    vlSelf->tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 444313115343015959ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12011805330462622417ull);
    }
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17929703490665546914ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1426208289043617481ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15243575409880447162ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11247916021544974908ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2384362418583977397ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9209943951809777784ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4024709038061681529ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16521848485329845321ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2731584296120541888ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2626585637095665220ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9531144590364879385ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17663462222677335275ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10813322357950331663ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4844877489591496581ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5652330053489545276ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17536175201837064747ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6899451330744835729ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1786041456332868822ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10464453224204409246ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17046084647276208706ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13626696500834250270ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10469772004103943028ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4678790746110792435ull);
    }
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18051776902677747799ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12861062763251654562ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11486336203081357891ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17473690566335473599ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11368686598305283129ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9289692650934767827ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4433032891426407298ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4495955738815231472ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1525740898239537222ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12437777269077757446ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12545826733752313697ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18046952622568199527ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4038106491924381841ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6203619400276294271ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3066591851556859493ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5103247060035699016ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14892713437543502136ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5786602783256879860ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11865182886224443347ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9335043317879098315ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14719356956578957144ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18352727291013295488ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1002468275108954848ull);
    }
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6163857225736456411ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18041397806895520024ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4405139303620269476ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3326423976311087978ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16961629244314708064ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2825460723580096601ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10382226863533547549ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12813040345740859390ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17967223325992103480ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8531958284173687609ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11653199761476052136ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15843944489616248250ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13572778226418443074ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17691883511089533329ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8866493458032844749ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9860702912949521307ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4094868480767769976ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15671372367507808936ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12026374942489680319ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1067144742544385826ull);
    vlSelf->tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8521554719606754839ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_12 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage = 0;
    vlSelf->__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r = 0;
    vlSelf->__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage = 0;
    vlSelf->__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r = 0;
    vlSelf->__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage = 0;
    vlSelf->__Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r = 0;
    vlSelf->__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_rns_ntt__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
