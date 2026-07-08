// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrns_ntt.h for the primary calling header

#include "Vrns_ntt__pch.h"

VL_ATTR_COLD void Vrns_ntt___024root___eval_static(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___eval_static\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    // Body
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vrns_ntt___024root___eval_static__TOP(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___eval_static__TOP\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    // Body
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
}

VL_ATTR_COLD void Vrns_ntt___024root___eval_initial(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___eval_initial\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vrns_ntt___024root___eval_final(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___eval_final\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_ntt___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrns_ntt___024root___eval_phase__stl(Vrns_ntt___024root* vlSelf);

VL_ATTR_COLD void Vrns_ntt___024root___eval_settle(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___eval_settle\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrns_ntt___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rns_ntt.v", 44, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vrns_ntt___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vrns_ntt___024root___eval_triggers_vec__stl(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___eval_triggers_vec__stl\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vrns_ntt___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_ntt___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vrns_ntt___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vrns_ntt___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vrns_ntt___024root___stl_sequent__TOP__0(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___stl_sequent__TOP__0\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts;
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw;
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw = 0;
    CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts;
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw;
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw = 0;
    CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts;
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw;
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__a;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__a = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__b;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__b = 0;
    QData/*39:0*/ __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq = 0;
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
    __Vtemp_2[0U] = (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo);
    __Vtemp_2[1U] = (((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo) 
                      << 8U) | (IData)((vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo) 
                      << 0x00000010U) | (((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo) 
                                          >> 0x00000018U) 
                                         | ((IData)(
                                                    (vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo 
                                                     >> 0x00000020U)) 
                                            << 8U)));
    __Vtemp_2[3U] = (((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo) 
                      >> 0x00000010U) | ((IData)((vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo 
                                                  >> 0x00000020U)) 
                                         << 0x00000010U));
    vlSelfRef.rd_data = ((0x77U >= (0x0000007fU & ((IData)(0x00000028U) 
                                                   * (IData)(vlSelfRef.rd_lane))))
                          ? (0x000000ffffffffffULL 
                             & (((QData)((IData)(__Vtemp_2
                                                 [(
                                                   ((IData)(0x00000027U) 
                                                    + 
                                                    (0x0000007fU 
                                                     & ((IData)(0x00000028U) 
                                                        * (IData)(vlSelfRef.rd_lane)))) 
                                                   >> 5U)])) 
                                 << ((0U == (0x0000001fU 
                                             & ((IData)(0x00000028U) 
                                                * (IData)(vlSelfRef.rd_lane))))
                                      ? 0x00000020U
                                      : ((IData)(0x00000040U) 
                                         - (0x0000001fU 
                                            & ((IData)(0x00000028U) 
                                               * (IData)(vlSelfRef.rd_lane)))))) 
                                | (((0U == (0x0000001fU 
                                            & ((IData)(0x00000028U) 
                                               * (IData)(vlSelfRef.rd_lane))))
                                     ? 0ULL : ((QData)((IData)(__Vtemp_2
                                                               [
                                                               (((IData)(0x0000001fU) 
                                                                 + 
                                                                 (0x0000007fU 
                                                                  & ((IData)(0x00000028U) 
                                                                     * (IData)(vlSelfRef.rd_lane)))) 
                                                                >> 5U)])) 
                                               << ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & ((IData)(0x00000028U) 
                                                       * (IData)(vlSelfRef.rd_lane)))))) 
                                   | ((QData)((IData)(__Vtemp_2
                                                      [
                                                      (3U 
                                                       & (((IData)(0x00000028U) 
                                                           * (IData)(vlSelfRef.rd_lane)) 
                                                          >> 5U))])) 
                                      >> (0x0000001fU 
                                          & ((IData)(0x00000028U) 
                                             * (IData)(vlSelfRef.rd_lane)))))))
                          : 0ULL);
    vlSelfRef.lane_done = (((IData)(vlSelfRef.rns_ntt__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done) 
                            << 2U) | (((IData)(vlSelfRef.rns_ntt__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done) 
                                       << 1U) | (IData)(vlSelfRef.rns_ntt__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.rns_ntt__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.coeff_wr_en) & (0U == (IData)(vlSelfRef.lane_sel)));
    vlSelfRef.rns_ntt__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.coeff_wr_en) & (1U == (IData)(vlSelfRef.lane_sel)));
    vlSelfRef.rns_ntt__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.coeff_wr_en) & (2U == (IData)(vlSelfRef.lane_sel)));
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.q_all[0U]))));
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.n_inv_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.n_inv_all[0U]))));
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__a 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_4[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__a);
    __Vtemp_4[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__a 
                             >> 0x00000020U));
    __Vtemp_4[2U] = 0U;
    __Vtemp_5[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__b);
    __Vtemp_5[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__b 
                             >> 0x00000020U));
    __Vtemp_5[2U] = 0U;
    VL_MUL_W(3, __Vtemp_6, __Vtemp_4, __Vtemp_5);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_6[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_6[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_6[2U]);
    __Vtemp_7[0U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_7[1U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_7[2U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_7[3U] = 0U;
    __Vtemp_7[4U] = 0U;
    __Vtemp_11[0U] = vlSelfRef.barrett_m_all[0U];
    __Vtemp_11[1U] = vlSelfRef.barrett_m_all[1U];
    __Vtemp_11[2U] = (0x0000ffffU & vlSelfRef.barrett_m_all[2U]);
    __Vtemp_11[3U] = 0U;
    __Vtemp_11[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_7, __Vtemp_11);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_13[0U] = (IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_13[1U] = (IData)((rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_13[2U] = 0U;
    __Vtemp_14[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq);
    __Vtemp_14[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq 
                              >> 0x00000020U));
    __Vtemp_14[2U] = 0U;
    VL_MUL_W(3, __Vtemp_15, __Vtemp_13, __Vtemp_14);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_15[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_15[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_15[2U]);
    VL_SUB_W(3, __Vtemp_17, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_17[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_17[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_17[2U]);
    __Vtemp_18[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq);
    __Vtemp_18[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq 
                              >> 0x00000020U));
    __Vtemp_18[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_18)) {
        __Vtemp_21[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq);
        __Vtemp_21[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__qq 
                                  >> 0x00000020U));
        __Vtemp_21[2U] = 0U;
        VL_SUB_W(3, __Vtemp_22, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_21);
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_22[0U];
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_22[1U];
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_22[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__6__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.n_inv_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.n_inv_all[1U])) 
                                       >> 8U)));
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__a 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_24[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__a);
    __Vtemp_24[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__a 
                              >> 0x00000020U));
    __Vtemp_24[2U] = 0U;
    __Vtemp_25[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__b);
    __Vtemp_25[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__b 
                              >> 0x00000020U));
    __Vtemp_25[2U] = 0U;
    VL_MUL_W(3, __Vtemp_26, __Vtemp_24, __Vtemp_25);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_26[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_26[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_26[2U]);
    __Vtemp_27[0U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_27[1U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_27[2U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_27[3U] = 0U;
    __Vtemp_27[4U] = 0U;
    __Vtemp_31[0U] = ((vlSelfRef.barrett_m_all[3U] 
                       << 0x00000010U) | (vlSelfRef.barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_31[1U] = ((vlSelfRef.barrett_m_all[4U] 
                       << 0x00000010U) | (vlSelfRef.barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_31[2U] = (vlSelfRef.barrett_m_all[4U] >> 0x00000010U);
    __Vtemp_31[3U] = 0U;
    __Vtemp_31[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_27, __Vtemp_31);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_33[0U] = (IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_33[1U] = (IData)((rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_33[2U] = 0U;
    __Vtemp_34[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
    __Vtemp_34[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                              >> 0x00000020U));
    __Vtemp_34[2U] = 0U;
    VL_MUL_W(3, __Vtemp_35, __Vtemp_33, __Vtemp_34);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_35[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_35[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_35[2U]);
    VL_SUB_W(3, __Vtemp_37, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_37[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_37[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_37[2U]);
    __Vtemp_38[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
    __Vtemp_38[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                              >> 0x00000020U));
    __Vtemp_38[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_38)) {
        __Vtemp_41[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq);
        __Vtemp_41[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__qq 
                                  >> 0x00000020U));
        __Vtemp_41[2U] = 0U;
        VL_SUB_W(3, __Vtemp_42, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_41);
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_42[0U];
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_42[1U];
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_42[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__13__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.n_inv_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.n_inv_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__a 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo;
    __Vtemp_44[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__a);
    __Vtemp_44[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__a 
                              >> 0x00000020U));
    __Vtemp_44[2U] = 0U;
    __Vtemp_45[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__b);
    __Vtemp_45[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__b 
                              >> 0x00000020U));
    __Vtemp_45[2U] = 0U;
    VL_MUL_W(3, __Vtemp_46, __Vtemp_44, __Vtemp_45);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_46[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_46[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_46[2U]);
    __Vtemp_47[0U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_47[1U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_47[2U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_47[3U] = 0U;
    __Vtemp_47[4U] = 0U;
    __Vtemp_51[0U] = vlSelfRef.barrett_m_all[5U];
    __Vtemp_51[1U] = vlSelfRef.barrett_m_all[6U];
    __Vtemp_51[2U] = (0x0000ffffU & vlSelfRef.barrett_m_all[7U]);
    __Vtemp_51[3U] = 0U;
    __Vtemp_51[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_47, __Vtemp_51);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_53[0U] = (IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_53[1U] = (IData)((rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_53[2U] = 0U;
    __Vtemp_54[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
    __Vtemp_54[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                              >> 0x00000020U));
    __Vtemp_54[2U] = 0U;
    VL_MUL_W(3, __Vtemp_55, __Vtemp_53, __Vtemp_54);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_55[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_55[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    VL_SUB_W(3, __Vtemp_57, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_57[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_57[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_57[2U]);
    __Vtemp_58[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
    __Vtemp_58[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                              >> 0x00000020U));
    __Vtemp_58[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_58)) {
        __Vtemp_61[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq);
        __Vtemp_61[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__qq 
                                  >> 0x00000020U));
        __Vtemp_61[2U] = 0U;
        VL_SUB_W(3, __Vtemp_62, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_61);
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_62[0U];
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_62[1U];
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_62[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled 
        = __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__20__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.q_all[0U]))));
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__b 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__a 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_64[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__a);
    __Vtemp_64[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__a 
                              >> 0x00000020U));
    __Vtemp_64[2U] = 0U;
    __Vtemp_65[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__b);
    __Vtemp_65[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__b 
                              >> 0x00000020U));
    __Vtemp_65[2U] = 0U;
    VL_MUL_W(3, __Vtemp_66, __Vtemp_64, __Vtemp_65);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_66[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_66[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_66[2U]);
    __Vtemp_67[0U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_67[1U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_67[2U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_67[3U] = 0U;
    __Vtemp_67[4U] = 0U;
    __Vtemp_71[0U] = vlSelfRef.barrett_m_all[0U];
    __Vtemp_71[1U] = vlSelfRef.barrett_m_all[1U];
    __Vtemp_71[2U] = (0x0000ffffU & vlSelfRef.barrett_m_all[2U]);
    __Vtemp_71[3U] = 0U;
    __Vtemp_71[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_67, __Vtemp_71);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_73[0U] = (IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_73[1U] = (IData)((rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_73[2U] = 0U;
    __Vtemp_74[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq);
    __Vtemp_74[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq 
                              >> 0x00000020U));
    __Vtemp_74[2U] = 0U;
    VL_MUL_W(3, __Vtemp_75, __Vtemp_73, __Vtemp_74);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_75[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_75[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_75[2U]);
    VL_SUB_W(3, __Vtemp_77, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_77[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_77[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_77[2U]);
    __Vtemp_78[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq);
    __Vtemp_78[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq 
                              >> 0x00000020U));
    __Vtemp_78[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_78)) {
        __Vtemp_81[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq);
        __Vtemp_81[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__qq 
                                  >> 0x00000020U));
        __Vtemp_81[2U] = 0U;
        VL_SUB_W(3, __Vtemp_82, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_81);
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_82[0U];
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_82[1U];
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_82[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__0__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__b 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__a 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_84[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__a);
    __Vtemp_84[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__a 
                              >> 0x00000020U));
    __Vtemp_84[2U] = 0U;
    __Vtemp_85[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__b);
    __Vtemp_85[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__b 
                              >> 0x00000020U));
    __Vtemp_85[2U] = 0U;
    VL_MUL_W(3, __Vtemp_86, __Vtemp_84, __Vtemp_85);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_86[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_86[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_86[2U]);
    __Vtemp_87[0U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_87[1U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_87[2U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_87[3U] = 0U;
    __Vtemp_87[4U] = 0U;
    __Vtemp_91[0U] = ((vlSelfRef.barrett_m_all[3U] 
                       << 0x00000010U) | (vlSelfRef.barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_91[1U] = ((vlSelfRef.barrett_m_all[4U] 
                       << 0x00000010U) | (vlSelfRef.barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_91[2U] = (vlSelfRef.barrett_m_all[4U] >> 0x00000010U);
    __Vtemp_91[3U] = 0U;
    __Vtemp_91[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_87, __Vtemp_91);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_93[0U] = (IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_93[1U] = (IData)((rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_93[2U] = 0U;
    __Vtemp_94[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq);
    __Vtemp_94[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq 
                              >> 0x00000020U));
    __Vtemp_94[2U] = 0U;
    VL_MUL_W(3, __Vtemp_95, __Vtemp_93, __Vtemp_94);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_95[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_95[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_95[2U]);
    VL_SUB_W(3, __Vtemp_97, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_97[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_97[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_97[2U]);
    __Vtemp_98[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq);
    __Vtemp_98[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq 
                              >> 0x00000020U));
    __Vtemp_98[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_98)) {
        __Vtemp_101[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq);
        __Vtemp_101[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__qq 
                                   >> 0x00000020U));
        __Vtemp_101[2U] = 0U;
        VL_SUB_W(3, __Vtemp_102, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_101);
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_102[0U];
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_102[1U];
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_102[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__7__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__b 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__a 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r;
    __Vtemp_104[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__a);
    __Vtemp_104[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__a 
                               >> 0x00000020U));
    __Vtemp_104[2U] = 0U;
    __Vtemp_105[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__b);
    __Vtemp_105[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__b 
                               >> 0x00000020U));
    __Vtemp_105[2U] = 0U;
    VL_MUL_W(3, __Vtemp_106, __Vtemp_104, __Vtemp_105);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_106[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_106[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_106[2U]);
    __Vtemp_107[0U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_107[1U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_107[2U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_107[3U] = 0U;
    __Vtemp_107[4U] = 0U;
    __Vtemp_111[0U] = vlSelfRef.barrett_m_all[5U];
    __Vtemp_111[1U] = vlSelfRef.barrett_m_all[6U];
    __Vtemp_111[2U] = (0x0000ffffU & vlSelfRef.barrett_m_all[7U]);
    __Vtemp_111[3U] = 0U;
    __Vtemp_111[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_107, __Vtemp_111);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_113[0U] = (IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_113[1U] = (IData)((rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_113[2U] = 0U;
    __Vtemp_114[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
    __Vtemp_114[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                               >> 0x00000020U));
    __Vtemp_114[2U] = 0U;
    VL_MUL_W(3, __Vtemp_115, __Vtemp_113, __Vtemp_114);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_115[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_115[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_115[2U]);
    VL_SUB_W(3, __Vtemp_117, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_117[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_117[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_117[2U]);
    __Vtemp_118[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
    __Vtemp_118[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                               >> 0x00000020U));
    __Vtemp_118[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_118)) {
        __Vtemp_121[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq);
        __Vtemp_121[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__qq 
                                   >> 0x00000020U));
        __Vtemp_121[2U] = 0U;
        VL_SUB_W(3, __Vtemp_122, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_121);
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_122[0U];
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_122[1U];
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_122[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw 
        = __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__14__Vfuncout;
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                         + (0x000000ffffffffffULL 
                                            & (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSelfRef.q_all[0U]))))));
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                         + (0x000000ffffffffffULL 
                                            & (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                                << 0x00000018U) 
                                               | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                                  >> 8U)))));
    __VdfgRegularize_hebeb780c_0_11 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                                 << 0x00000010U) 
                                                | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                                   >> 0x00000010U)))));
    vlSelfRef.done = (7U == (IData)(vlSelfRef.lane_done));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.q_all[0U])))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                        - (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.q_all[0U]))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                               >> 8U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                        - (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                                 >> 8U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_13 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_13 
                                        - (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_13));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 0U;
    __VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r 
                                         + rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r 
                                         + rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_10 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r 
                                          + rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_11 
                                                    - rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_14 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_11 
                                          - vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r));
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts));
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts));
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts 
        = (0x0000000fU & ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                           ? (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage)
                           : ((IData)(3U) - (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp 
        = ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k) 
           >> (IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_0 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_0 
                                        - (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u);
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_5 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_5 
                                        - (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u);
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_10 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_10 
                                        - (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_10));
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u
            : vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u);
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.q_all[0U]))));
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__b 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_4 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_4 
                                        - (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSelfRef.q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_124[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__a);
    __Vtemp_124[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__a 
                               >> 0x00000020U));
    __Vtemp_124[2U] = 0U;
    __Vtemp_125[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__b);
    __Vtemp_125[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__b 
                               >> 0x00000020U));
    __Vtemp_125[2U] = 0U;
    VL_MUL_W(3, __Vtemp_126, __Vtemp_124, __Vtemp_125);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_126[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_126[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_126[2U]);
    __Vtemp_127[0U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_127[1U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_127[2U] = rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_127[3U] = 0U;
    __Vtemp_127[4U] = 0U;
    __Vtemp_131[0U] = vlSelfRef.barrett_m_all[0U];
    __Vtemp_131[1U] = vlSelfRef.barrett_m_all[1U];
    __Vtemp_131[2U] = (0x0000ffffU & vlSelfRef.barrett_m_all[2U]);
    __Vtemp_131[3U] = 0U;
    __Vtemp_131[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_127, __Vtemp_131);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_133[0U] = (IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_133[1U] = (IData)((rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_133[2U] = 0U;
    __Vtemp_134[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq);
    __Vtemp_134[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq 
                               >> 0x00000020U));
    __Vtemp_134[2U] = 0U;
    VL_MUL_W(3, __Vtemp_135, __Vtemp_133, __Vtemp_134);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_135[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_135[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_135[2U]);
    VL_SUB_W(3, __Vtemp_137, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_137[0U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_137[1U];
    rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_137[2U]);
    __Vtemp_138[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq);
    __Vtemp_138[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq 
                               >> 0x00000020U));
    __Vtemp_138[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_138)) {
        __Vtemp_141[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq);
        __Vtemp_141[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__qq 
                                   >> 0x00000020U));
        __Vtemp_141[2U] = 0U;
        VL_SUB_W(3, __Vtemp_142, rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_141);
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_142[0U];
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_142[1U];
        rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_142[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__mod_mul__5__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__b 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_9 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_9 
                                        - (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_9));
    __Vtemp_144[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__a);
    __Vtemp_144[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__a 
                               >> 0x00000020U));
    __Vtemp_144[2U] = 0U;
    __Vtemp_145[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__b);
    __Vtemp_145[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__b 
                               >> 0x00000020U));
    __Vtemp_145[2U] = 0U;
    VL_MUL_W(3, __Vtemp_146, __Vtemp_144, __Vtemp_145);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_146[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_146[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_146[2U]);
    __Vtemp_147[0U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_147[1U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_147[2U] = rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_147[3U] = 0U;
    __Vtemp_147[4U] = 0U;
    __Vtemp_151[0U] = ((vlSelfRef.barrett_m_all[3U] 
                        << 0x00000010U) | (vlSelfRef.barrett_m_all[2U] 
                                           >> 0x00000010U));
    __Vtemp_151[1U] = ((vlSelfRef.barrett_m_all[4U] 
                        << 0x00000010U) | (vlSelfRef.barrett_m_all[3U] 
                                           >> 0x00000010U));
    __Vtemp_151[2U] = (vlSelfRef.barrett_m_all[4U] 
                       >> 0x00000010U);
    __Vtemp_151[3U] = 0U;
    __Vtemp_151[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_147, __Vtemp_151);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_153[0U] = (IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_153[1U] = (IData)((rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_153[2U] = 0U;
    __Vtemp_154[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq);
    __Vtemp_154[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq 
                               >> 0x00000020U));
    __Vtemp_154[2U] = 0U;
    VL_MUL_W(3, __Vtemp_155, __Vtemp_153, __Vtemp_154);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_155[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_155[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_155[2U]);
    VL_SUB_W(3, __Vtemp_157, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_157[0U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_157[1U];
    rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_157[2U]);
    __Vtemp_158[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq);
    __Vtemp_158[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq 
                               >> 0x00000020U));
    __Vtemp_158[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_158)) {
        __Vtemp_161[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq);
        __Vtemp_161[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__qq 
                                   >> 0x00000020U));
        __Vtemp_161[2U] = 0U;
        VL_SUB_W(3, __Vtemp_162, rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_161);
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_162[0U];
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_162[1U];
        rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_162[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__mod_mul__12__Vfuncout;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                       >> 0x00000010U)));
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__b 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r;
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_14 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                             << 0x00000010U) 
                                            | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                               >> 0x00000010U))))
                                     ? (__VdfgRegularize_hebeb780c_0_14 
                                        - (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                            << 0x00000030U) 
                                           | (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                               << 0x00000010U) 
                                              | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                                 >> 0x00000010U))))
                                     : __VdfgRegularize_hebeb780c_0_14));
    __Vtemp_164[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__a);
    __Vtemp_164[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__a 
                               >> 0x00000020U));
    __Vtemp_164[2U] = 0U;
    __Vtemp_165[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__b);
    __Vtemp_165[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__b 
                               >> 0x00000020U));
    __Vtemp_165[2U] = 0U;
    VL_MUL_W(3, __Vtemp_166, __Vtemp_164, __Vtemp_165);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_166[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_166[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_166[2U]);
    __Vtemp_167[0U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_167[1U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_167[2U] = rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_167[3U] = 0U;
    __Vtemp_167[4U] = 0U;
    __Vtemp_171[0U] = vlSelfRef.barrett_m_all[5U];
    __Vtemp_171[1U] = vlSelfRef.barrett_m_all[6U];
    __Vtemp_171[2U] = (0x0000ffffU & vlSelfRef.barrett_m_all[7U]);
    __Vtemp_171[3U] = 0U;
    __Vtemp_171[4U] = 0U;
    VL_MUL_W(5, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_167, __Vtemp_171);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_173[0U] = (IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_173[1U] = (IData)((rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                               >> 0x00000020U));
    __Vtemp_173[2U] = 0U;
    __Vtemp_174[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq);
    __Vtemp_174[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq 
                               >> 0x00000020U));
    __Vtemp_174[2U] = 0U;
    VL_MUL_W(3, __Vtemp_175, __Vtemp_173, __Vtemp_174);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_175[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_175[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_175[2U]);
    VL_SUB_W(3, __Vtemp_177, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__p, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_177[0U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_177[1U];
    rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_177[2U]);
    __Vtemp_178[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq);
    __Vtemp_178[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq 
                               >> 0x00000020U));
    __Vtemp_178[2U] = 0U;
    if (VL_GTE_W(3, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_178)) {
        __Vtemp_181[0U] = (IData)(__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq);
        __Vtemp_181[1U] = (IData)((__Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__qq 
                                   >> 0x00000020U));
        __Vtemp_181[2U] = 0U;
        VL_SUB_W(3, __Vtemp_182, rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_181);
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_182[0U];
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_182[1U];
        rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_182[2U]);
    }
    __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v 
        = __Vfunc_rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__mod_mul__19__Vfuncout;
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua 
        = (0x0000000fU & (((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp) 
                           << (0x0000000fU & ((IData)(1U) 
                                              + (IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k) 
                             & (((IData)(1U) << (IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua 
        = (0x0000000fU & (((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp) 
                           << (0x0000000fU & ((IData)(1U) 
                                              + (IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k) 
                             & (((IData)(1U) << (IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua 
        = (0x0000000fU & (((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp) 
                           << (0x0000000fU & ((IData)(1U) 
                                              + (IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k) 
                             & (((IData)(1U) << (IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va 
        = (0x0000000fU & ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua) 
                          | ((IData)(1U) << (IData)(rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ts))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va 
        = (0x0000000fU & ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua) 
                          | ((IData)(1U) << (IData)(rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ts))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va 
        = (0x0000000fU & ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua) 
                          | ((IData)(1U) << (IData)(rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ts))));
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.q_all[0U])))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                    - (((QData)((IData)(vlSelfRef.q_all[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSelfRef.q_all[0U]))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.rns_ntt__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = 1U;
                        vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.coeff_wr_data;
                        vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.coeff_wr_addr;
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.rd_addr));
            }
        }
    }
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                         << 0x00000018U) 
                                        | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                           >> 8U))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                    - (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                        << 0x00000038U) 
                                       | (((QData)((IData)(vlSelfRef.q_all[2U])) 
                                           << 0x00000018U) 
                                          | ((QData)((IData)(vlSelfRef.q_all[1U])) 
                                             >> 8U))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.rns_ntt__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = 1U;
                        vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.coeff_wr_data;
                        vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.coeff_wr_addr;
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.rd_addr));
            }
        }
    }
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
    if ((1U & (~ ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled;
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = (0x0000000fU & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx));
                }
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                        = (0x0000000fU & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx));
                }
            } else {
                vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                if ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_12 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                         << 0x00000010U) 
                                        | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                           >> 0x00000010U))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_12 
                                    - (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                        << 0x00000030U) 
                                       | (((QData)((IData)(vlSelfRef.q_all[3U])) 
                                           << 0x00000010U) 
                                          | ((QData)((IData)(vlSelfRef.q_all[2U])) 
                                             >> 0x00000010U))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_12)));
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
                } else {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                        = (0x000000ffffffffffULL & 
                           ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r)
                             ? vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u
                             : vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u));
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    if (vlSelfRef.rns_ntt__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en) {
                        vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = 1U;
                        vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata 
                            = vlSelfRef.coeff_wr_data;
                        vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr 
                            = vlSelfRef.coeff_wr_addr;
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state)))) {
                    vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                        = vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
                }
            } else {
                vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr 
                    = ((1U & (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state))
                        ? (IData)(vlSelfRef.rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua)
                        : (IData)(vlSelfRef.rd_addr));
            }
        }
    }
}

VL_ATTR_COLD void Vrns_ntt___024root___eval_stl(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___eval_stl\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vrns_ntt___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vrns_ntt___024root___eval_phase__stl(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___eval_phase__stl\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrns_ntt___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrns_ntt___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vrns_ntt___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vrns_ntt___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vrns_ntt___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_ntt___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vrns_ntt___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vrns_ntt___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrns_ntt___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vrns_ntt___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vrns_ntt___024root___ctor_var_reset(Vrns_ntt___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrns_ntt___024root___ctor_var_reset\n"); );
    Vrns_ntt__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->q_all, __VscopeHash, 3522688321782256014ull);
    VL_SCOPED_RAND_RESET_W(120, vlSelf->n_inv_all, __VscopeHash, 16093554444120912415ull);
    VL_SCOPED_RAND_RESET_W(240, vlSelf->barrett_m_all, __VscopeHash, 1049357579205823727ull);
    vlSelf->lane_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2947586351289412895ull);
    vlSelf->coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13018687539275992020ull);
    vlSelf->coeff_wr_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11746289273846781034ull);
    vlSelf->coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10803392500267065075ull);
    vlSelf->tw_lane_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3695761493199107826ull);
    vlSelf->tw_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1923444488897307551ull);
    vlSelf->tw_wr_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17355659617915903897ull);
    vlSelf->tw_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2389558324345623160ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1159024208945578495ull);
    vlSelf->rd_lane = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15079623797645494125ull);
    vlSelf->rd_addr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7950012703377089919ull);
    vlSelf->rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17824471296722538975ull);
    vlSelf->lane_done = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18083463011461707502ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->rns_ntt__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done = 0;
    vlSelf->rns_ntt__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en = 0;
    vlSelf->rns_ntt__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done = 0;
    vlSelf->rns_ntt__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en = 0;
    vlSelf->rns_ntt__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done = 0;
    vlSelf->rns_ntt__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16639975601176849534ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3248403346674248456ull);
    }
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17391226190538872770ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13460227914017359124ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3996687047131914817ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13452084479132430242ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2248533537170473217ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9620950034295897543ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16216773627638753510ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10741401349149856726ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4090443610531052400ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6985932991177177834ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4378463788720723050ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16358163223660531109ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8963969338843198951ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9054331509790761471ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11233819149353041635ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11453451036126374221ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 355937300857430438ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4051277841350718761ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4748885055132183920ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4485425858551922968ull);
    vlSelf->rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14599949544230223802ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13509868757973135270ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16949776614849687834ull);
    }
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7154850825683074653ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7062468579437526345ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12983725746485786148ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1749734977246759605ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5719801857530261755ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3862004287093774236ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6393265310368712898ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18143248848380779071ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6631380436413791306ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6449195104807665080ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 494468213092717090ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8779301816196263097ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16468849889917647480ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9152027973580611254ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15262045074401263144ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 114363644617675938ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12361028426090368762ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13869663747760027729ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1049202602440813878ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10785554389635475948ull);
    vlSelf->rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1531654270090885216ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8589039021017485584ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13742252425257391413ull);
    }
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12947553952837582852ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14910038392005323119ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9284344362452172264ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16867517926818954703ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12159006185981905584ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2764377482360205163ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6102278281268463759ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13316689879546713500ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2210742754277551247ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10299692238533831479ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15764488319859290201ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7085185325455356059ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16769811898485075456ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13131974007106864667ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 122404938528779827ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17225069561211969738ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15438327655681216762ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12167483216818201923ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6781828504327192885ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8409599558721391414ull);
    vlSelf->rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3528889010376764557ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_12 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__Vdly__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage = 0;
    vlSelf->__Vdly__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r = 0;
    vlSelf->__Vdly__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage = 0;
    vlSelf->__Vdly__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r = 0;
    vlSelf->__Vdly__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage = 0;
    vlSelf->__Vdly__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r = 0;
    vlSelf->__VdlyVal__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyVal__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyVal__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0 = 0;
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
