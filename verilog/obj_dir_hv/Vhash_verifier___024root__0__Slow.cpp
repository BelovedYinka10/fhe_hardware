// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhash_verifier.h for the primary calling header

#include "Vhash_verifier__pch.h"

VL_ATTR_COLD void Vhash_verifier___024root___eval_static(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_static\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p, __VscopeHash, 11832411477616420901ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __VscopeHash, 1081090003377770871ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 3771414433921938797ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq, __VscopeHash, 1447919743469740086ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __VscopeHash, 5323299048409142599ull);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p, __VscopeHash, 1289308263340435892ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __VscopeHash, 9672873785459700782ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__t = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 13052977641443434823ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__tq, __VscopeHash, 4227678618073011718ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __VscopeHash, 15292772119880186817ull);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __Vinline__eval_static__TOP_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vhash_verifier___024root___eval_static__TOP(Vhash_verifier___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhash_verifier___024root___eval_static__TOP\n"); );
    Vhash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p, __VscopeHash, 11832411477616420901ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __VscopeHash, 1081090003377770871ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 3771414433921938797ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq, __VscopeHash, 1447919743469740086ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __VscopeHash, 5323299048409142599ull);
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p, __VscopeHash, 1289308263340435892ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __VscopeHash, 9672873785459700782ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__t = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 13052977641443434823ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__tq, __VscopeHash, 4227678618073011718ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __VscopeHash, 15292772119880186817ull);
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
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
    SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va = 0;
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
    SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va = 0;
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VlWide<5>/*159:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
    VL_ZERO_W(160, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    QData/*40:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
    VL_ZERO_W(80, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__a;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__b;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__a;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__a = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__b;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__b = 0;
    QData/*39:0*/ __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq = 0;
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
    // Body
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe_b = 0U;
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cwe_b = 0U;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__radr 
        = ((1U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state))
            ? (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_padd__DOT__cnt))
            : 0U);
    vlSelfRef.hash_verifier__DOT__u_padd__DOT__radr 
        = ((1U == (IData)(vlSelfRef.hash_verifier__DOT__u_padd__DOT__state))
            ? (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_padd__DOT__cnt))
            : 0U);
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a 
                                                   + vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_b));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a 
                                                   + vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_b));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en) 
              | (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_en)));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.hash_verifier__DOT__pm_a_wr_en) 
              | (IData)(vlSelfRef.hash_verifier__DOT__pm_b_wr_en)));
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a 
                                         + vlSelfRef.q));
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a 
                                         + vlSelfRef.q));
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__b 
        = vlSelfRef.n_inv;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__a 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a;
    __Vtemp_2[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__a);
    __Vtemp_2[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__a 
                             >> 0x00000020U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__b);
    __Vtemp_3[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__b 
                             >> 0x00000020U));
    __Vtemp_3[2U] = 0U;
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_4[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_4[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_4[2U]);
    __Vtemp_5[0U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_5[1U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_5[2U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_5[3U] = 0U;
    __Vtemp_5[4U] = 0U;
    __Vtemp_6[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_6[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_6[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    VL_MUL_W(5, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_5, __Vtemp_6);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_8[0U] = (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_8[1U] = (IData)((hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                             >> 0x00000020U));
    __Vtemp_8[2U] = 0U;
    __Vtemp_9[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq);
    __Vtemp_9[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq 
                             >> 0x00000020U));
    __Vtemp_9[2U] = 0U;
    VL_MUL_W(3, __Vtemp_10, __Vtemp_8, __Vtemp_9);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_10[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_10[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_10[2U]);
    VL_SUB_W(3, __Vtemp_12, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_12[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_12[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_12[2U]);
    __Vtemp_13[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq);
    __Vtemp_13[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq 
                              >> 0x00000020U));
    __Vtemp_13[2U] = 0U;
    if (VL_GTE_W(3, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_13)) {
        __Vtemp_16[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq);
        __Vtemp_16[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        VL_SUB_W(3, __Vtemp_17, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_16);
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_17[0U];
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_17[1U];
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_17[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__21__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__b 
        = vlSelfRef.n_inv;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__a 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a;
    __Vtemp_19[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__a);
    __Vtemp_19[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__a 
                              >> 0x00000020U));
    __Vtemp_19[2U] = 0U;
    __Vtemp_20[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__b);
    __Vtemp_20[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__b 
                              >> 0x00000020U));
    __Vtemp_20[2U] = 0U;
    VL_MUL_W(3, __Vtemp_21, __Vtemp_19, __Vtemp_20);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_21[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_21[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_21[2U]);
    __Vtemp_22[0U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_22[1U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_22[2U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_22[3U] = 0U;
    __Vtemp_22[4U] = 0U;
    __Vtemp_23[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_23[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_23[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_23[3U] = 0U;
    __Vtemp_23[4U] = 0U;
    VL_MUL_W(5, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_22, __Vtemp_23);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_25[0U] = (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_25[1U] = (IData)((hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_25[2U] = 0U;
    __Vtemp_26[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq);
    __Vtemp_26[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq 
                              >> 0x00000020U));
    __Vtemp_26[2U] = 0U;
    VL_MUL_W(3, __Vtemp_27, __Vtemp_25, __Vtemp_26);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_27[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_27[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_27[2U]);
    VL_SUB_W(3, __Vtemp_29, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_29[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_29[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_29[2U]);
    __Vtemp_30[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq);
    __Vtemp_30[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq 
                              >> 0x00000020U));
    __Vtemp_30[2U] = 0U;
    if (VL_GTE_W(3, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_30)) {
        __Vtemp_33[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq);
        __Vtemp_33[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__qq 
                                  >> 0x00000020U));
        __Vtemp_33[2U] = 0U;
        VL_SUB_W(3, __Vtemp_34, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_33);
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_34[0U];
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_34[1U];
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_34[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__31__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__b 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tdo;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__a 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_b;
    __Vtemp_36[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__a);
    __Vtemp_36[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__a 
                              >> 0x00000020U));
    __Vtemp_36[2U] = 0U;
    __Vtemp_37[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__b);
    __Vtemp_37[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__b 
                              >> 0x00000020U));
    __Vtemp_37[2U] = 0U;
    VL_MUL_W(3, __Vtemp_38, __Vtemp_36, __Vtemp_37);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_38[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_38[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_38[2U]);
    __Vtemp_39[0U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_39[1U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_39[2U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_39[3U] = 0U;
    __Vtemp_39[4U] = 0U;
    __Vtemp_40[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_40[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_40[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_40[3U] = 0U;
    __Vtemp_40[4U] = 0U;
    VL_MUL_W(5, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_39, __Vtemp_40);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_42[0U] = (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_42[1U] = (IData)((hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq);
    __Vtemp_43[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq 
                              >> 0x00000020U));
    __Vtemp_43[2U] = 0U;
    VL_MUL_W(3, __Vtemp_44, __Vtemp_42, __Vtemp_43);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_44[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_44[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_44[2U]);
    VL_SUB_W(3, __Vtemp_46, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_46[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_46[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_46[2U]);
    __Vtemp_47[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq);
    __Vtemp_47[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq 
                              >> 0x00000020U));
    __Vtemp_47[2U] = 0U;
    if (VL_GTE_W(3, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_47)) {
        __Vtemp_50[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq);
        __Vtemp_50[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__qq 
                                  >> 0x00000020U));
        __Vtemp_50[2U] = 0U;
        VL_SUB_W(3, __Vtemp_51, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_50);
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_51[0U];
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_51[1U];
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_51[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw 
        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__15__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__b 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tdo;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__a 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_b;
    __Vtemp_53[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__a);
    __Vtemp_53[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__a 
                              >> 0x00000020U));
    __Vtemp_53[2U] = 0U;
    __Vtemp_54[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__b);
    __Vtemp_54[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__b 
                              >> 0x00000020U));
    __Vtemp_54[2U] = 0U;
    VL_MUL_W(3, __Vtemp_55, __Vtemp_53, __Vtemp_54);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_55[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_55[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_55[2U]);
    __Vtemp_56[0U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_56[1U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_56[2U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_56[3U] = 0U;
    __Vtemp_56[4U] = 0U;
    __Vtemp_57[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_57[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_57[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_57[3U] = 0U;
    __Vtemp_57[4U] = 0U;
    VL_MUL_W(5, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_56, __Vtemp_57);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_59[0U] = (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_59[1U] = (IData)((hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_59[2U] = 0U;
    __Vtemp_60[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq);
    __Vtemp_60[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq 
                              >> 0x00000020U));
    __Vtemp_60[2U] = 0U;
    VL_MUL_W(3, __Vtemp_61, __Vtemp_59, __Vtemp_60);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_61[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_61[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_61[2U]);
    VL_SUB_W(3, __Vtemp_63, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_63[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_63[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_63[2U]);
    __Vtemp_64[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq);
    __Vtemp_64[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq 
                              >> 0x00000020U));
    __Vtemp_64[2U] = 0U;
    if (VL_GTE_W(3, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_64)) {
        __Vtemp_67[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq);
        __Vtemp_67[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__qq 
                                  >> 0x00000020U));
        __Vtemp_67[2U] = 0U;
        VL_SUB_W(3, __Vtemp_68, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_67);
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_68[0U];
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_68[1U];
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_68[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw 
        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__25__Vfuncout;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = 0U;
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = 0U;
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_b));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_b));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a 
                                                   + vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r) {
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts 
            = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage));
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a 
            = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                         >= vlSelfRef.q)
                                         ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                            - vlSelfRef.q)
                                         : vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    } else {
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts 
            = (0x00001fffU & ((IData)(0x000cU) - (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)));
        vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a 
            = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                         >= vlSelfRef.q)
                                         ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_0 
                                            - vlSelfRef.q)
                                         : vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a 
                                                   + vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r) {
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts 
            = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage));
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a 
            = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                         >= vlSelfRef.q)
                                         ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                            - vlSelfRef.q)
                                         : vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
    } else {
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts 
            = (0x00001fffU & ((IData)(0x000cU) - (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage)));
        vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a 
            = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_5 
                                         >= vlSelfRef.q)
                                         ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_5 
                                            - vlSelfRef.q)
                                         : vlSelfRef.__VdfgRegularize_hebeb780c_0_5));
    }
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__b 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tdo;
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_4 
                                     >= vlSelfRef.q)
                                     ? (__VdfgRegularize_hebeb780c_0_4 
                                        - vlSelfRef.q)
                                     : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_70[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__a);
    __Vtemp_70[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__a 
                              >> 0x00000020U));
    __Vtemp_70[2U] = 0U;
    __Vtemp_71[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__b);
    __Vtemp_71[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__b 
                              >> 0x00000020U));
    __Vtemp_71[2U] = 0U;
    VL_MUL_W(3, __Vtemp_72, __Vtemp_70, __Vtemp_71);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_72[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_72[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_72[2U]);
    __Vtemp_73[0U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_73[1U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_73[2U] = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_73[3U] = 0U;
    __Vtemp_73[4U] = 0U;
    __Vtemp_74[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_74[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_74[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_74[3U] = 0U;
    __Vtemp_74[4U] = 0U;
    VL_MUL_W(5, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_73, __Vtemp_74);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_76[0U] = (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_76[1U] = (IData)((hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_76[2U] = 0U;
    __Vtemp_77[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq);
    __Vtemp_77[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq 
                              >> 0x00000020U));
    __Vtemp_77[2U] = 0U;
    VL_MUL_W(3, __Vtemp_78, __Vtemp_76, __Vtemp_77);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_78[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_78[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_78[2U]);
    VL_SUB_W(3, __Vtemp_80, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_80[0U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_80[1U];
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_80[2U]);
    __Vtemp_81[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq);
    __Vtemp_81[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq 
                              >> 0x00000020U));
    __Vtemp_81[2U] = 0U;
    if (VL_GTE_W(3, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_81)) {
        __Vtemp_84[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq);
        __Vtemp_84[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__qq 
                                  >> 0x00000020U));
        __Vtemp_84[2U] = 0U;
        VL_SUB_W(3, __Vtemp_85, hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_84);
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_85[0U];
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_85[1U];
        hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_85[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__20__Vfuncout;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq 
        = vlSelfRef.q;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__b 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tdo;
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_9 
                                     >= vlSelfRef.q)
                                     ? (__VdfgRegularize_hebeb780c_0_9 
                                        - vlSelfRef.q)
                                     : __VdfgRegularize_hebeb780c_0_9));
    __Vtemp_87[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__a);
    __Vtemp_87[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__a 
                              >> 0x00000020U));
    __Vtemp_87[2U] = 0U;
    __Vtemp_88[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__b);
    __Vtemp_88[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__b 
                              >> 0x00000020U));
    __Vtemp_88[2U] = 0U;
    VL_MUL_W(3, __Vtemp_89, __Vtemp_87, __Vtemp_88);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U] 
        = __Vtemp_89[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U] 
        = __Vtemp_89[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U] 
        = (0x0000ffffU & __Vtemp_89[2U]);
    __Vtemp_90[0U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[0U];
    __Vtemp_90[1U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[1U];
    __Vtemp_90[2U] = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p[2U];
    __Vtemp_90[3U] = 0U;
    __Vtemp_90[4U] = 0U;
    __Vtemp_91[0U] = vlSelfRef.barrett_m[0U];
    __Vtemp_91[1U] = vlSelfRef.barrett_m[1U];
    __Vtemp_91[2U] = vlSelfRef.barrett_m[2U];
    __Vtemp_91[3U] = 0U;
    __Vtemp_91[4U] = 0U;
    VL_MUL_W(5, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm, __Vtemp_90, __Vtemp_91);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
        = (0x000001ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[3U])) 
                                     << 0x00000010U) 
                                    | ((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm[2U])) 
                                       >> 0x00000010U)));
    __Vtemp_93[0U] = (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t);
    __Vtemp_93[1U] = (IData)((hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t 
                              >> 0x00000020U));
    __Vtemp_93[2U] = 0U;
    __Vtemp_94[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq);
    __Vtemp_94[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq 
                              >> 0x00000020U));
    __Vtemp_94[2U] = 0U;
    VL_MUL_W(3, __Vtemp_95, __Vtemp_93, __Vtemp_94);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[0U] 
        = __Vtemp_95[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[1U] 
        = __Vtemp_95[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq[2U] 
        = (0x0000ffffU & __Vtemp_95[2U]);
    VL_SUB_W(3, __Vtemp_97, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
        = __Vtemp_97[0U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
        = __Vtemp_97[1U];
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
        = (0x0000ffffU & __Vtemp_97[2U]);
    __Vtemp_98[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq);
    __Vtemp_98[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq 
                              >> 0x00000020U));
    __Vtemp_98[2U] = 0U;
    if (VL_GTE_W(3, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_98)) {
        __Vtemp_101[0U] = (IData)(__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq);
        __Vtemp_101[1U] = (IData)((__Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__qq 
                                   >> 0x00000020U));
        __Vtemp_101[2U] = 0U;
        VL_SUB_W(3, __Vtemp_102, hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_101);
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U] 
            = __Vtemp_102[0U];
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U] 
            = __Vtemp_102[1U];
        hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[2U] 
            = (0x0000ffffU & __Vtemp_102[2U]);
    }
    __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__30__Vfuncout;
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua 
        = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp), 
                                        (0x00001fffU 
                                         & ((IData)(1U) 
                                            + (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k) 
                             & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua 
        = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp), 
                                        (0x00001fffU 
                                         & ((IData)(1U) 
                                            + (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k) 
                             & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a 
        = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
    if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = 1U;
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a 
                    = vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled;
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a 
                    = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx));
            }
        }
    } else {
        if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = 1U;
            }
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a 
                = (0x00001fffU & ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))
                                   ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx)
                                   : (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua)));
        } else {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = 1U;
                }
            }
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a 
                = (0x00001fffU & ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))
                                   ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua)
                                   : ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en)
                                       ? ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en)
                                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr)
                                           : ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en)
                                               ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_addr)
                                               : (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_addr)))
                                       : (((2U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state)) 
                                           | (5U == (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state)))
                                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__int_rd_addr)
                                           : (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_rd_addr)))));
        }
        if ((1U & (~ ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a 
                        = ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en)
                            ? vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data
                            : ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_en)
                                ? vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_a_wr_data
                                : vlSelfRef.hash_verifier__DOT__u_ch__DOT__pm_b_wr_data));
                }
            }
        }
    }
    hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a 
        = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua;
    if ((4U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = 1U;
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a 
                    = vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__scaled;
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a 
                    = (0x00001fffU & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx));
            }
        }
    } else {
        if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = 1U;
            }
            vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a 
                = (0x00001fffU & ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))
                                   ? (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx)
                                   : (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua)));
        } else {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = 1U;
                }
            }
            vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a 
                = (0x00001fffU & ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))
                                   ? (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua)
                                   : ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en)
                                       ? ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en)
                                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr)
                                           : ((IData)(vlSelfRef.hash_verifier__DOT__pm_a_wr_en)
                                               ? (IData)(vlSelfRef.hash_verifier__DOT__pm_a_wr_addr)
                                               : (IData)(vlSelfRef.hash_verifier__DOT__pm_b_wr_addr)))
                                       : (((2U == (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state)) 
                                           | (5U == (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__state)))
                                           ? (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__int_rd_addr)
                                           : (IData)(vlSelfRef.hash_verifier__DOT__pm_rd_addr)))));
        }
        if ((1U & (~ ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                if (vlSelfRef.hash_verifier__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en) {
                    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a 
                        = ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en)
                            ? vlSelfRef.hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_data
                            : ((IData)(vlSelfRef.hash_verifier__DOT__pm_a_wr_en)
                                ? vlSelfRef.hash_verifier__DOT__pm_a_wr_data
                                : vlSelfRef.hash_verifier__DOT__pm_b_wr_data));
                }
            }
        }
    }
    vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_b 
        = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
    if ((1U & (~ ((IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe_b = 1U;
                vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_b 
                    = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
            }
        } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            vlSelfRef.hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_b 
                = hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
        }
    }
    vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_b 
        = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va;
    if ((1U & (~ ((IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state)))) {
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cwe_b = 1U;
                vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_b 
                    = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va;
            }
        } else if ((1U & (IData)(vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state))) {
            vlSelfRef.hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_b 
                = hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va;
        }
    }
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
    VL_SCOPED_RAND_RESET_W(80, vlSelf->barrett_m, __VscopeHash, 9163698460787631846ull);
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
    vlSelf->hash_verifier__DOT____Vlvbound_hf311d938__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 73728; ++__Vi0) {
        vlSelf->hash_verifier__DOT__ct_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18083252958355453523ull);
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
    vlSelf->hash_verifier__DOT__h3_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13932171687037471134ull);
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
    vlSelf->hash_verifier__DOT__u_ch__DOT____Vlvbound_h7d40fc66__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 24576; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_ch__DOT__ct[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13242640053765893961ull);
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
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 133850178361420287ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3899348665926092083ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10697548622189233628ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7554290092520382926ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16877617317500803062ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 772188790058326800ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4378236712406573395ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3056305171655812740ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8633088237445718484ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__int_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3081971632744796382ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en = 0;
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
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8330464810273575124ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4540726868849674797ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14956290628254765845ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo_b = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10501751593508729033ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 18087984749257363636ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1154617752262077327ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5097812017463807803ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9470531981915665333ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10487790343375881894ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__caddr_b = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6245283011800048623ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13656673188149919640ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10571293908686594041ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6999323046798784301ull);
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
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__cnt = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9155442831498965118ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__widx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16039603022300835128ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14778726476597764719ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__a_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 61824589846285353ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__b_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3165425064306264458ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15761563905443569480ull);
    vlSelf->hash_verifier__DOT__u_ch__DOT__u_padd__DOT__radr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9940673641738269131ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_pmul__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1776268574043012860ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->hash_verifier__DOT__u_pmul__DOT__mem_ntt[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10473293836095787998ull);
    }
    vlSelf->hash_verifier__DOT__u_pmul__DOT__mem_ntt_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3709173886898145476ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3015890349949140473ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2680130297339594348ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14107438484345328093ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16112995040242059283ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9454503165235066382ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3678610638064296056ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1186130959427309648ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__ntt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 680794447086656639ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__int_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6579325779928582493ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en = 0;
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
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17129786321538921950ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2691047186039101073ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_a = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1252379158275795475ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdo_b = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17260306345530204706ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8751477008768405793ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__vw = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1819064158202487255ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1910447900070082019ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17572758360922394183ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_a = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9709430120667414011ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__caddr_b = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11178816145751635590ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cwe_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13353941505088477435ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cwe_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15162052176186454155ull);
    vlSelf->hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__cdi_a = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10721200093221327814ull);
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
    vlSelf->hash_verifier__DOT__u_padd__DOT__cnt = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14351794649699528935ull);
    vlSelf->hash_verifier__DOT__u_padd__DOT__widx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9075179191007012662ull);
    vlSelf->hash_verifier__DOT__u_padd__DOT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9612805205323392371ull);
    vlSelf->hash_verifier__DOT__u_padd__DOT__a_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8686090725063027476ull);
    vlSelf->hash_verifier__DOT__u_padd__DOT__b_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1399549877238456114ull);
    vlSelf->hash_verifier__DOT__u_padd__DOT__sub_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12584529276687946119ull);
    vlSelf->hash_verifier__DOT__u_padd__DOT__radr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4649262826007376852ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__Vdly__hash_verifier__DOT__pa_start = 0;
    vlSelf->__Vdly__hash_verifier__DOT__state = 0;
    vlSelf->__Vdly__hash_verifier__DOT__pa_rd_addr = 0;
    vlSelf->__Vdly__hash_verifier__DOT__idx = 0;
    vlSelf->__Vdly__hash_verifier__DOT__ch_rd_addr = 0;
    vlSelf->__Vdly__hash_verifier__DOT__comp_i = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__pa_start = 0;
    vlSelf->__Vdly__hash_verifier__DOT__ch_done = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__state = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__horner_i = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__idx = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__pa_rd_addr = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__pm_done = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__int_rd_addr = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state = 0;
    vlSelf->__Vdly__hash_verifier__DOT__pm_done = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_pmul__DOT__state = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_pmul__DOT__idx = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_pmul__DOT__int_rd_addr = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_padd__DOT__state = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done = 0;
    vlSelf->__Vdly__hash_verifier__DOT__u_pmul__DOT__ntt_done = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__ct_mem__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__ct_mem__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__ct_mem__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__h3__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__h2__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__h1__v0 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v1 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v1 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b__v1 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r__v0 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_ntt__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_b__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_pmul__DOT__mem_b__v1 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v1 = 0;
    vlSelf->__VdlyVal__hash_verifier__DOT__u_padd__DOT__mem_r__v0 = 0;
    vlSelf->__VdlyDim0__hash_verifier__DOT__u_padd__DOT__mem_r__v0 = 0;
    vlSelf->__VdlySet__hash_verifier__DOT__u_padd__DOT__mem_r__v0 = 0;
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
