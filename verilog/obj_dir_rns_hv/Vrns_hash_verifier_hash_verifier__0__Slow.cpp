// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrns_hash_verifier.h for the primary calling header

#include "Vrns_hash_verifier__pch.h"

VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___eval_static__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___eval_static__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv\n"); );
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
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p, __VscopeHash, 1034611176244758871ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm, __VscopeHash, 13703071379861632200ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 11284896952768481104ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq, __VscopeHash, 353420976431208885ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __VscopeHash, 18033520772238114411ull);
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__u_pmul__DOT__mod_mul__Vstatic__p, __VscopeHash, 12513095404963405755ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->__PVT__u_pmul__DOT__mod_mul__Vstatic__pm, __VscopeHash, 15952251248288005900ull);
    vlSelf->__PVT__u_pmul__DOT__mod_mul__Vstatic__t = VL_SCOPED_RAND_RESET_Q(41, __VscopeHash, 15399035518116143369ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__u_pmul__DOT__mod_mul__Vstatic__tq, __VscopeHash, 8979405773366520821ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __VscopeHash, 15430953585974930699ull);
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p);
    VL_ZERO_W(160, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm);
    __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t = 0;
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq);
    VL_ZERO_W(80, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r);
}

VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv__0\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
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
    SData/*12:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__ts;
    __PVT__u_pmul__DOT__u_ntt__DOT__ts = 0;
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
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq = 0;
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
    vlSelfRef.tw_wr_en = ((IData)(vlSymsp->TOP.tw_wr_en) 
                          & (0U == (IData)(vlSymsp->TOP.tw_lane_sel)));
    vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__radr = 
        ((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state))
          ? (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt))
          : 0U);
    vlSelfRef.__PVT__u_padd__DOT__radr = ((1U == (IData)(vlSelfRef.__PVT__u_padd__DOT__state))
                                           ? (0x00001fffU 
                                              & (IData)(vlSelfRef.__PVT__u_padd__DOT__cnt))
                                           : 0U);
    if (vlSelfRef.__PVT__ch_r_wr_en) {
        vlSelfRef.__PVT__u_ch__DOT__memr_wd = vlSelfRef.__PVT__ch_r_wr_data;
        vlSelfRef.__PVT__u_ch__DOT__memr_wa = (0x00001fffU 
                                               & (IData)(vlSelfRef.__PVT__ch_r_wr_addr));
    } else {
        vlSelfRef.__PVT__u_ch__DOT__memr_wd = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__PVT__u_ch__DOT__memr_wa = (0x00001fffU 
                                               & (((9U 
                                                    == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                                   & (2U 
                                                      <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                                                   - (IData)(2U))
                                                   : (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
    }
    vlSelfRef.__PVT__u_ch__DOT__memr_we = ((IData)(vlSelfRef.__PVT__ch_r_wr_en) 
                                           || ((9U 
                                                == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                               & (2U 
                                                  <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))));
    vlSelfRef.__PVT__u_ch__DOT__ct_ra = (0x00001fffU 
                                         & ((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__state))
                                             ? ([&]() {
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__8__a 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__8__comp 
                        = vlSelfRef.__PVT__u_ch__DOT__ct_last;
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__8__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__8__comp), 0x0000000dU) 
                           + (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__8__a));
                }(), vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__8__Vfuncout)
                                             : ([&]() {
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__9__a 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__9__comp 
                        = vlSelfRef.__PVT__u_ch__DOT__horner_i;
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__9__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__9__comp), 0x0000000dU) 
                           + (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__9__a));
                }(), vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__9__Vfuncout)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x000001ffffffffffULL 
                                                & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                   + vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    if (vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en) {
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__PVT__u_ch__DOT__memr_rd;
    } else {
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__qq 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.q_all[0U]))));
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__b 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__a 
            = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt_rd;
        __Vtemp_2[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__a);
        __Vtemp_2[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__a 
                                 >> 0x00000020U));
        __Vtemp_2[2U] = 0U;
        __Vtemp_3[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__b);
        __Vtemp_3[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__b 
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
        __Vtemp_9[0U] = vlSymsp->TOP.barrett_m_all[0U];
        __Vtemp_9[1U] = vlSymsp->TOP.barrett_m_all[1U];
        __Vtemp_9[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[2U]);
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
        __Vtemp_12[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__qq);
        __Vtemp_12[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__qq 
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
        __Vtemp_16[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__qq);
        __Vtemp_16[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_16)) {
            __Vtemp_19[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__qq);
            __Vtemp_19[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__qq 
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
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__Vfuncout;
    }
    if (vlSelfRef.__PVT__pm_b_wr_en) {
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__PVT__h2_rd;
    } else {
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__qq 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.q_all[0U]))));
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__b 
            = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__a 
            = vlSelfRef.__PVT__u_pmul__DOT__mem_ntt_rd;
        __Vtemp_22[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__a);
        __Vtemp_22[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__a 
                                  >> 0x00000020U));
        __Vtemp_22[2U] = 0U;
        __Vtemp_23[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__b);
        __Vtemp_23[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__b 
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
        __Vtemp_29[0U] = vlSymsp->TOP.barrett_m_all[0U];
        __Vtemp_29[1U] = vlSymsp->TOP.barrett_m_all[1U];
        __Vtemp_29[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[2U]);
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
        __Vtemp_32[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__qq);
        __Vtemp_32[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__qq 
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
        __Vtemp_36[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__qq);
        __Vtemp_36[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__qq 
                                  >> 0x00000020U));
        __Vtemp_36[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_36)) {
            __Vtemp_39[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__qq);
            __Vtemp_39[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__qq 
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
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__22__Vfuncout;
    }
    vlSelfRef.u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__pm_b_wr_en)));
    vlSelfRef.u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP.q_all[0U]))));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.n_inv_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP.n_inv_all[0U]))));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__a 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cdo;
    __Vtemp_42[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__a);
    __Vtemp_42[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__a 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__b);
    __Vtemp_43[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__b 
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
    __Vtemp_49[0U] = vlSymsp->TOP.barrett_m_all[0U];
    __Vtemp_49[1U] = vlSymsp->TOP.barrett_m_all[1U];
    __Vtemp_49[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[2U]);
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
    __Vtemp_52[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq);
    __Vtemp_52[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq 
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
    __Vtemp_56[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq);
    __Vtemp_56[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq 
                              >> 0x00000020U));
    __Vtemp_56[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_56)) {
        __Vtemp_59[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq);
        __Vtemp_59[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__qq 
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
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__29__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP.q_all[0U]))));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__b 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.n_inv_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP.n_inv_all[0U]))));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__a 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
    __Vtemp_62[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__a);
    __Vtemp_62[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__a 
                              >> 0x00000020U));
    __Vtemp_62[2U] = 0U;
    __Vtemp_63[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__b);
    __Vtemp_63[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__b 
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
    __Vtemp_69[0U] = vlSymsp->TOP.barrett_m_all[0U];
    __Vtemp_69[1U] = vlSymsp->TOP.barrett_m_all[1U];
    __Vtemp_69[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[2U]);
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
    __Vtemp_72[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq);
    __Vtemp_72[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq 
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
    __Vtemp_76[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq);
    __Vtemp_76[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq 
                              >> 0x00000020U));
    __Vtemp_76[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_76)) {
        __Vtemp_79[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq);
        __Vtemp_79[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__qq 
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
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__19__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP.q_all[0U]))));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__b 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__a 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_82[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__a);
    __Vtemp_82[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__a 
                              >> 0x00000020U));
    __Vtemp_82[2U] = 0U;
    __Vtemp_83[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__b);
    __Vtemp_83[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__b 
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
    __Vtemp_89[0U] = vlSymsp->TOP.barrett_m_all[0U];
    __Vtemp_89[1U] = vlSymsp->TOP.barrett_m_all[1U];
    __Vtemp_89[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[2U]);
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
    __Vtemp_92[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq);
    __Vtemp_92[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq 
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
    __Vtemp_96[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq);
    __Vtemp_96[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq 
                              >> 0x00000020U));
    __Vtemp_96[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_96)) {
        __Vtemp_99[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq);
        __Vtemp_99[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__qq 
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
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    __PVT__u_pmul__DOT__u_ntt__DOT__vw = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__23__Vfuncout;
    __VdfgRegularize_hebeb780c_0_6 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + (0x000000ffffffffffULL 
                                            & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP.q_all[0U]))));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__b 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__a 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_102[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__a);
    __Vtemp_102[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__a 
                               >> 0x00000020U));
    __Vtemp_102[2U] = 0U;
    __Vtemp_103[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__b);
    __Vtemp_103[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__b 
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
    __Vtemp_109[0U] = vlSymsp->TOP.barrett_m_all[0U];
    __Vtemp_109[1U] = vlSymsp->TOP.barrett_m_all[1U];
    __Vtemp_109[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[2U]);
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
    __Vtemp_112[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq);
    __Vtemp_112[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq 
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
    __Vtemp_116[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq);
    __Vtemp_116[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq 
                               >> 0x00000020U));
    __Vtemp_116[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_116)) {
        __Vtemp_119[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq);
        __Vtemp_119[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__qq 
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
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__13__Vfuncout;
    __VdfgRegularize_hebeb780c_0_1 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + (0x000000ffffffffffULL 
                                            & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSymsp->TOP.q_all[0U])))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_8 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_8));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSymsp->TOP.q_all[0U])))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_3 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    __VdfgRegularize_hebeb780c_0_5 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + __PVT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_6 
                                                   - __PVT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_9 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_6 
                                         - vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r));
    __VdfgRegularize_hebeb780c_0_0 = (0x000001ffffffffffULL 
                                      & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                         + __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x000001ffffffffffULL 
                                                & (__VdfgRegularize_hebeb780c_0_1 
                                                   - __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_4 = (0x000001ffffffffffULL 
                                      & (__VdfgRegularize_hebeb780c_0_1 
                                         - vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts = 
        (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                         ? (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                         : ((IData)(0x000cU) - (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    __PVT__u_pmul__DOT__u_ntt__DOT__ts = (0x00001fffU 
                                          & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                              ? (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage)
                                              : ((IData)(0x000cU) 
                                                 - (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__grp = 
        VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_5 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSymsp->TOP.q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_5 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_5));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u);
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP.q_all[0U]))));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__b 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_9 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSymsp->TOP.q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_9 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_9));
    __Vtemp_122[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__a);
    __Vtemp_122[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__a 
                               >> 0x00000020U));
    __Vtemp_122[2U] = 0U;
    __Vtemp_123[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__b);
    __Vtemp_123[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__b 
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
    __Vtemp_129[0U] = vlSymsp->TOP.barrett_m_all[0U];
    __Vtemp_129[1U] = vlSymsp->TOP.barrett_m_all[1U];
    __Vtemp_129[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[2U]);
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
    __Vtemp_132[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq);
    __Vtemp_132[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq 
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
    __Vtemp_136[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq);
    __Vtemp_136[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq 
                               >> 0x00000020U));
    __Vtemp_136[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_136)) {
        __Vtemp_139[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq);
        __Vtemp_139[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__qq 
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
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__28__Vfuncout;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_0 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSymsp->TOP.q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_0 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u);
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSymsp->TOP.q_all[0U]))));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__b 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_4 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSymsp->TOP.q_all[0U])))))
                                     ? (__VdfgRegularize_hebeb780c_0_4 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                            << 0x00000020U) 
                                           | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))
                                     : __VdfgRegularize_hebeb780c_0_4));
    __Vtemp_142[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__a);
    __Vtemp_142[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__a 
                               >> 0x00000020U));
    __Vtemp_142[2U] = 0U;
    __Vtemp_143[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__b);
    __Vtemp_143[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__b 
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
    __Vtemp_149[0U] = vlSymsp->TOP.barrett_m_all[0U];
    __Vtemp_149[1U] = vlSymsp->TOP.barrett_m_all[1U];
    __Vtemp_149[2U] = (0x0000ffffU & vlSymsp->TOP.barrett_m_all[2U]);
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
    __Vtemp_152[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq);
    __Vtemp_152[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq 
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
    __Vtemp_156[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq);
    __Vtemp_156[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq 
                               >> 0x00000020U));
    __Vtemp_156[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_156)) {
        __Vtemp_159[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq);
        __Vtemp_159[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__qq 
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
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__18__Vfuncout;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua 
        = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp), 
                                        (0x00001fffU 
                                         & ((IData)(1U) 
                                            + (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k) 
                             & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua = 
        (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__grp), 
                                      (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                        | ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k) 
                           & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts)) 
                              - (IData)(1U)))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__va = 
        (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua) 
                        | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts))));
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
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.q_all[0U])))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_2 
                                    - (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
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
                             : ((vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                 >= (0x000000ffffffffffULL 
                                     & (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSymsp->TOP.q_all[0U])))))
                                 ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_7 
                                    - (((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(vlSymsp->TOP.q_all[0U]))))
                                 : vlSelfRef.__VdfgRegularize_hebeb780c_0_7)));
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
}

VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv__0\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
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
    SData/*12:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__ts;
    __PVT__u_pmul__DOT__u_ntt__DOT__ts = 0;
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
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__Vfuncout;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__a;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__a = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__b;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__b = 0;
    QData/*39:0*/ __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__51__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__Vfuncout;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__Vfuncout = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b = 0;
    QData/*39:0*/ __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_14;
    __VdfgRegularize_hebeb780c_0_14 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_15;
    __VdfgRegularize_hebeb780c_0_15 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_19;
    __VdfgRegularize_hebeb780c_0_19 = 0;
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
    vlSelfRef.tw_wr_en = ((IData)(vlSymsp->TOP.tw_wr_en) 
                          & (1U == (IData)(vlSymsp->TOP.tw_lane_sel)));
    vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__radr = 
        ((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state))
          ? (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt))
          : 0U);
    vlSelfRef.__PVT__u_padd__DOT__radr = ((1U == (IData)(vlSelfRef.__PVT__u_padd__DOT__state))
                                           ? (0x00001fffU 
                                              & (IData)(vlSelfRef.__PVT__u_padd__DOT__cnt))
                                           : 0U);
    if (vlSelfRef.__PVT__ch_r_wr_en) {
        vlSelfRef.__PVT__u_ch__DOT__memr_wd = vlSelfRef.__PVT__ch_r_wr_data;
        vlSelfRef.__PVT__u_ch__DOT__memr_wa = (0x00001fffU 
                                               & (IData)(vlSelfRef.__PVT__ch_r_wr_addr));
    } else {
        vlSelfRef.__PVT__u_ch__DOT__memr_wd = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__PVT__u_ch__DOT__memr_wa = (0x00001fffU 
                                               & (((9U 
                                                    == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                                   & (2U 
                                                      <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                                                   - (IData)(2U))
                                                   : (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
    }
    vlSelfRef.__PVT__u_ch__DOT__memr_we = ((IData)(vlSelfRef.__PVT__ch_r_wr_en) 
                                           || ((9U 
                                                == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                               & (2U 
                                                  <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx))));
    vlSelfRef.__PVT__u_ch__DOT__ct_ra = (0x00001fffU 
                                         & ((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__state))
                                             ? ([&]() {
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__40__a 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__40__comp 
                        = vlSelfRef.__PVT__u_ch__DOT__ct_last;
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__40__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__40__comp), 0x0000000dU) 
                           + (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__40__a));
                }(), vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__40__Vfuncout)
                                             : ([&]() {
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__41__a 
                        = (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__idx));
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__41__comp 
                        = vlSelfRef.__PVT__u_ch__DOT__horner_i;
                    vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__41__Vfuncout 
                        = (VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__41__comp), 0x0000000dU) 
                           + (IData)(vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__41__a));
                }(), vlSelfRef.__Vfunc_u_ch__DOT__ct_lin__41__Vfuncout)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_18 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
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
        __Vtemp_2[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__a);
        __Vtemp_2[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__a 
                                 >> 0x00000020U));
        __Vtemp_2[2U] = 0U;
        __Vtemp_3[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__b);
        __Vtemp_3[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__b 
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
        __Vtemp_12[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq);
        __Vtemp_12[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq 
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
        __Vtemp_16[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq);
        __Vtemp_16[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq 
                                  >> 0x00000020U));
        __Vtemp_16[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_16)) {
            __Vtemp_19[0U] = (IData)(vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq);
            __Vtemp_19[1U] = (IData)((vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq 
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
        vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd 
            = vlSelfRef.__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__Vfuncout;
    }
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
        __Vtemp_22[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__a);
        __Vtemp_22[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__a 
                                  >> 0x00000020U));
        __Vtemp_22[2U] = 0U;
        __Vtemp_23[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__b);
        __Vtemp_23[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__b 
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
        __Vtemp_32[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq);
        __Vtemp_32[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq 
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
        __Vtemp_36[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq);
        __Vtemp_36[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq 
                                  >> 0x00000020U));
        __Vtemp_36[2U] = 0U;
        if (VL_GTE_W(3, vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r, __Vtemp_36)) {
            __Vtemp_39[0U] = (IData)(vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq);
            __Vtemp_39[1U] = (IData)((vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__qq 
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
        vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__Vfuncout 
            = (0x000000ffffffffffULL & (((QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.__PVT__u_pmul__DOT__mod_mul__Vstatic__r[0U]))));
        vlSelfRef.__PVT__u_pmul__DOT__mem_b_wd = vlSelfRef.__Vfunc_u_pmul__DOT__mod_mul__54__Vfuncout;
    }
    vlSelfRef.u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__pm_b_wr_en)));
    vlSelfRef.u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en)));
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
    __Vtemp_42[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a);
    __Vtemp_42[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__a 
                              >> 0x00000020U));
    __Vtemp_42[2U] = 0U;
    __Vtemp_43[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b);
    __Vtemp_43[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__b 
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
    __Vtemp_52[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq);
    __Vtemp_52[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq 
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
    __Vtemp_56[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq);
    __Vtemp_56[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq 
                              >> 0x00000020U));
    __Vtemp_56[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_56)) {
        __Vtemp_59[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq);
        __Vtemp_59[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__qq 
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
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__scaled 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__61__Vfuncout;
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
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__b 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__a 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_82[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__a);
    __Vtemp_82[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__a 
                              >> 0x00000020U));
    __Vtemp_82[2U] = 0U;
    __Vtemp_83[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__b);
    __Vtemp_83[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__b 
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
    __Vtemp_89[0U] = ((vlSymsp->TOP.barrett_m_all[3U] 
                       << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[2U] 
                                          >> 0x00000010U));
    __Vtemp_89[1U] = ((vlSymsp->TOP.barrett_m_all[4U] 
                       << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[3U] 
                                          >> 0x00000010U));
    __Vtemp_89[2U] = (vlSymsp->TOP.barrett_m_all[4U] 
                      >> 0x00000010U);
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
    __Vtemp_92[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq);
    __Vtemp_92[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq 
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
    __Vtemp_96[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq);
    __Vtemp_96[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq 
                              >> 0x00000020U));
    __Vtemp_96[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_96)) {
        __Vtemp_99[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq);
        __Vtemp_99[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__qq 
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
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    __PVT__u_pmul__DOT__u_ntt__DOT__vw = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__55__Vfuncout;
    __VdfgRegularize_hebeb780c_0_16 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 << 0x00000018U) 
                                                | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                   >> 8U)))));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__b 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__a 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
    __Vtemp_102[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__a);
    __Vtemp_102[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__a 
                               >> 0x00000020U));
    __Vtemp_102[2U] = 0U;
    __Vtemp_103[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__b);
    __Vtemp_103[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__b 
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
    __Vtemp_109[0U] = ((vlSymsp->TOP.barrett_m_all[3U] 
                        << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[2U] 
                                           >> 0x00000010U));
    __Vtemp_109[1U] = ((vlSymsp->TOP.barrett_m_all[4U] 
                        << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[3U] 
                                           >> 0x00000010U));
    __Vtemp_109[2U] = (vlSymsp->TOP.barrett_m_all[4U] 
                       >> 0x00000010U);
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
    __Vtemp_112[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq);
    __Vtemp_112[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq 
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
    __Vtemp_116[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq);
    __Vtemp_116[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq 
                               >> 0x00000020U));
    __Vtemp_116[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_116)) {
        __Vtemp_119[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq);
        __Vtemp_119[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__qq 
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
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__45__Vfuncout;
    __VdfgRegularize_hebeb780c_0_11 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + (0x000000ffffffffffULL 
                                             & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                                 << 0x00000018U) 
                                                | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                   >> 8U)))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_18 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                               >> 8U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_18 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                 >> 8U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_18));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u 
        = (0x000000ffffffffffULL & ((vlSelfRef.__VdfgRegularize_hebeb780c_0_13 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                               >> 8U))))
                                     ? (vlSelfRef.__VdfgRegularize_hebeb780c_0_13 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                 >> 8U))))
                                     : vlSelfRef.__VdfgRegularize_hebeb780c_0_13));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    __VdfgRegularize_hebeb780c_0_15 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + __PVT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_17 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_16 
                                                    - __PVT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_19 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_16 
                                          - vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r));
    __VdfgRegularize_hebeb780c_0_10 = (0x000001ffffffffffULL 
                                       & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                          + __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = (0x000001ffffffffffULL 
                                                 & (__VdfgRegularize_hebeb780c_0_11 
                                                    - __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__vw));
    __VdfgRegularize_hebeb780c_0_14 = (0x000001ffffffffffULL 
                                       & (__VdfgRegularize_hebeb780c_0_11 
                                          - vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts = 
        (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                         ? (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                         : ((IData)(0x000cU) - (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    __PVT__u_pmul__DOT__u_ntt__DOT__ts = (0x00001fffU 
                                          & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                              ? (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage)
                                              : ((IData)(0x000cU) 
                                                 - (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__grp = 
        VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_15 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_15 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_15));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u);
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__b 
        = vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_19 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_19 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_19));
    __Vtemp_122[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__a);
    __Vtemp_122[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__a 
                               >> 0x00000020U));
    __Vtemp_122[2U] = 0U;
    __Vtemp_123[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__b);
    __Vtemp_123[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__b 
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
    __Vtemp_129[0U] = ((vlSymsp->TOP.barrett_m_all[3U] 
                        << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[2U] 
                                           >> 0x00000010U));
    __Vtemp_129[1U] = ((vlSymsp->TOP.barrett_m_all[4U] 
                        << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[3U] 
                                           >> 0x00000010U));
    __Vtemp_129[2U] = (vlSymsp->TOP.barrett_m_all[4U] 
                       >> 0x00000010U);
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
    __Vtemp_132[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq);
    __Vtemp_132[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq 
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
    __Vtemp_136[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq);
    __Vtemp_136[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq 
                               >> 0x00000020U));
    __Vtemp_136[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_136)) {
        __Vtemp_139[0U] = (IData)(__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq);
        __Vtemp_139[1U] = (IData)((__Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__qq 
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
    __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_u_pmul__DOT__u_ntt__DOT__mod_mul__60__Vfuncout;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_10 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_10 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_10));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u);
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq 
        = (0x000000ffffffffffULL & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                     << 0x00000018U) 
                                    | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                       >> 8U)));
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__b 
        = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__a 
        = (0x000000ffffffffffULL & ((__VdfgRegularize_hebeb780c_0_14 
                                     >= (0x000000ffffffffffULL 
                                         & (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                             << 0x00000018U) 
                                            | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                               >> 8U))))
                                     ? (__VdfgRegularize_hebeb780c_0_14 
                                        - (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                            << 0x00000038U) 
                                           | (((QData)((IData)(vlSymsp->TOP.q_all[2U])) 
                                               << 0x00000018U) 
                                              | ((QData)((IData)(vlSymsp->TOP.q_all[1U])) 
                                                 >> 8U))))
                                     : __VdfgRegularize_hebeb780c_0_14));
    __Vtemp_142[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__a);
    __Vtemp_142[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__a 
                               >> 0x00000020U));
    __Vtemp_142[2U] = 0U;
    __Vtemp_143[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__b);
    __Vtemp_143[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__b 
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
    __Vtemp_149[0U] = ((vlSymsp->TOP.barrett_m_all[3U] 
                        << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[2U] 
                                           >> 0x00000010U));
    __Vtemp_149[1U] = ((vlSymsp->TOP.barrett_m_all[4U] 
                        << 0x00000010U) | (vlSymsp->TOP.barrett_m_all[3U] 
                                           >> 0x00000010U));
    __Vtemp_149[2U] = (vlSymsp->TOP.barrett_m_all[4U] 
                       >> 0x00000010U);
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
    __Vtemp_152[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq);
    __Vtemp_152[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq 
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
    __Vtemp_156[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq);
    __Vtemp_156[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq 
                               >> 0x00000020U));
    __Vtemp_156[2U] = 0U;
    if (VL_GTE_W(3, __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r, __Vtemp_156)) {
        __Vtemp_159[0U] = (IData)(__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq);
        __Vtemp_159[1U] = (IData)((__Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__qq 
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
    __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__Vfuncout 
        = (0x000000ffffffffffULL & (((QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r[0U]))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v 
        = __Vfunc_u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__50__Vfuncout;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua 
        = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp), 
                                        (0x00001fffU 
                                         & ((IData)(1U) 
                                            + (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k) 
                             & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua = 
        (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__grp), 
                                      (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                        | ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k) 
                           & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts)) 
                              - (IData)(1U)))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__va = 
        (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua) 
                        | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts))));
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
}

VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___stl_sequent__TOP__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv__0\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*12:0*/ __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts;
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts = 0;
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
    SData/*12:0*/ __PVT__u_pmul__DOT__u_ntt__DOT__ts;
    __PVT__u_pmul__DOT__u_ntt__DOT__ts = 0;
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
    vlSelfRef.tw_wr_en = ((IData)(vlSymsp->TOP.tw_wr_en) 
                          & (2U == (IData)(vlSymsp->TOP.tw_lane_sel)));
    vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__radr = 
        ((1U == (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__state))
          ? (0x00001fffU & (IData)(vlSelfRef.__PVT__u_ch__DOT__u_padd__DOT__cnt))
          : 0U);
    vlSelfRef.__PVT__u_padd__DOT__radr = ((1U == (IData)(vlSelfRef.__PVT__u_padd__DOT__state))
                                           ? (0x00001fffU 
                                              & (IData)(vlSelfRef.__PVT__u_padd__DOT__cnt))
                                           : 0U);
    if (vlSelfRef.__PVT__ch_r_wr_en) {
        vlSelfRef.__PVT__u_ch__DOT__memr_wd = vlSelfRef.__PVT__ch_r_wr_data;
        vlSelfRef.__PVT__u_ch__DOT__memr_wa = (0x00001fffU 
                                               & (IData)(vlSelfRef.__PVT__ch_r_wr_addr));
    } else {
        vlSelfRef.__PVT__u_ch__DOT__memr_wd = vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo;
        vlSelfRef.__PVT__u_ch__DOT__memr_wa = (0x00001fffU 
                                               & (((9U 
                                                    == (IData)(vlSelfRef.__PVT__u_ch__DOT__state)) 
                                                   & (2U 
                                                      <= (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)))
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__u_ch__DOT__idx) 
                                                   - (IData)(2U))
                                                   : (IData)(vlSelfRef.__PVT__u_ch__DOT__idx)));
    }
    vlSelfRef.__PVT__u_ch__DOT__memr_we = ((IData)(vlSelfRef.__PVT__ch_r_wr_en) 
                                           || ((9U 
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
    vlSelfRef.__VdfgRegularize_hebeb780c_0_28 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__v_r));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_23 = (0x000001ffffffffffULL 
                                                 & (vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r 
                                                    + vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r));
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
    vlSelfRef.u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__pm_b_wr_en)));
    vlSelfRef.u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en) 
           | ((IData)(vlSelfRef.__PVT__u_ch__DOT__pm_a_wr_en) 
              | (IData)(vlSelfRef.__PVT__u_ch__DOT__pm_b_wr_en)));
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
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = 0U;
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
    __PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts = 
        (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
                         ? (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage)
                         : ((IData)(0x000cU) - (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp 
        = VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts));
    __PVT__u_pmul__DOT__u_ntt__DOT__ts = (0x00001fffU 
                                          & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
                                              ? (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage)
                                              : ((IData)(0x000cU) 
                                                 - (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__stage))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__grp = 
        VL_SHIFTR_III(13,13,13, (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts));
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
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ct_u);
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
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata 
        = ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r)
            ? vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u
            : vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u);
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
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua 
        = (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp), 
                                        (0x00001fffU 
                                         & ((IData)(1U) 
                                            + (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                          | ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k) 
                             & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts)) 
                                - (IData)(1U)))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua = 
        (0x00001fffU & (VL_SHIFTL_III(13,13,13, (IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__grp), 
                                      (0x00001fffU 
                                       & ((IData)(1U) 
                                          + (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts)))) 
                        | ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__k) 
                           & (VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts)) 
                              - (IData)(1U)))));
    vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va 
        = (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua) 
                          | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ts))));
    vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__va = 
        (0x00001fffU & ((IData)(vlSelfRef.__PVT__u_pmul__DOT__u_ntt__DOT__ua) 
                        | VL_SHIFTL_III(13,13,13, (IData)(1U), (IData)(__PVT__u_pmul__DOT__u_ntt__DOT__ts))));
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
}

VL_ATTR_COLD void Vrns_hash_verifier_hash_verifier___ctor_var_reset(Vrns_hash_verifier_hash_verifier* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrns_hash_verifier_hash_verifier___ctor_var_reset\n"); );
    Vrns_hash_verifier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__Vlvbound_hf311d938__0 = 0;
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
    for (int __Vi0 = 0; __Vi0 < 73728; ++__Vi0) {
        vlSelf->__PVT__ct_mem[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12424770948409681495ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__h1[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11963777243077303141ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__h2[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5791773007859922414ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__h3[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13982605120927364216ull);
    }
    vlSelf->__PVT__h3_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3325722967814349953ull);
    vlSelf->__PVT__ch_ct_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13085060911099083982ull);
    vlSelf->__PVT__ch_ct_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14030057504707041112ull);
    vlSelf->__PVT__ch_ct_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17296319576644486190ull);
    vlSelf->__PVT__ch_ct_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7051930814257669663ull);
    vlSelf->__PVT__ch_r_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16452636193905876135ull);
    vlSelf->__PVT__ch_r_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4468594720963629388ull);
    vlSelf->__PVT__ch_r_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3123687016869404884ull);
    vlSelf->__PVT__ch_ct_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16915067192829759424ull);
    vlSelf->__PVT__ch_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2727793007376714725ull);
    vlSelf->__PVT__ch_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4980464661032137194ull);
    vlSelf->__PVT__ch_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4196804331841289198ull);
    vlSelf->__PVT__ch_rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14472593528545506389ull);
    vlSelf->__PVT__pm_a_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11657779973926488561ull);
    vlSelf->__PVT__pm_a_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3583965590382602637ull);
    vlSelf->__PVT__pm_b_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14858664656466379850ull);
    vlSelf->__PVT__pm_b_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8475663925040810846ull);
    vlSelf->__PVT__pm_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18414315784638104659ull);
    vlSelf->__PVT__pm_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12708512072304697562ull);
    vlSelf->__PVT__pm_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13434937968779085409ull);
    vlSelf->__PVT__pa_a_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5414823932236987081ull);
    vlSelf->__PVT__pa_a_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11723436481969803817ull);
    vlSelf->__PVT__pa_a_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5725386982886478116ull);
    vlSelf->__PVT__pa_b_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6168320804241414728ull);
    vlSelf->__PVT__pa_b_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10205566771567571673ull);
    vlSelf->__PVT__pa_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11205993337686480513ull);
    vlSelf->__PVT__pa_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10277385875368263035ull);
    vlSelf->__PVT__pa_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10587531415342046508ull);
    vlSelf->__PVT__pa_rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2215249509268257293ull);
    vlSelf->__PVT__h1_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9398872042383633946ull);
    vlSelf->__PVT__h2_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3502728098995377464ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4549807374266684455ull);
    vlSelf->__PVT__comp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4112720428740400463ull);
    vlSelf->__PVT__cmp_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5869525900302176935ull);
    vlSelf->u_ch__DOT____Vlvbound_h7d40fc66__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 24576; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__ct[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16617003715324492064ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__mem_r[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1037210355437883650ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__mem_h[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11474949703018064347ull);
    }
    vlSelf->__PVT__u_ch__DOT__pm_a_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10434307238035205164ull);
    vlSelf->__PVT__u_ch__DOT__pm_a_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2089251441470061747ull);
    vlSelf->__PVT__u_ch__DOT__pm_b_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8026207031133989002ull);
    vlSelf->__PVT__u_ch__DOT__pm_b_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7001911016424231282ull);
    vlSelf->__PVT__u_ch__DOT__pm_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14269832304008099863ull);
    vlSelf->__PVT__u_ch__DOT__pm_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4836096399786700262ull);
    vlSelf->__PVT__u_ch__DOT__pm_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 3623137302975746506ull);
    vlSelf->__PVT__u_ch__DOT__pa_a_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 49091511404474650ull);
    vlSelf->__PVT__u_ch__DOT__pa_a_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16783567872178413125ull);
    vlSelf->__PVT__u_ch__DOT__pa_a_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7173662580419946177ull);
    vlSelf->__PVT__u_ch__DOT__pa_b_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11861268152854306974ull);
    vlSelf->__PVT__u_ch__DOT__pa_b_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 17897244185851947184ull);
    vlSelf->__PVT__u_ch__DOT__pa_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1171391721101662283ull);
    vlSelf->__PVT__u_ch__DOT__pa_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4446061580081174253ull);
    vlSelf->__PVT__u_ch__DOT__pa_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15599225254105266667ull);
    vlSelf->__PVT__u_ch__DOT__pa_rd_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15823155097379427752ull);
    vlSelf->__PVT__u_ch__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7100877211971042181ull);
    vlSelf->__PVT__u_ch__DOT__horner_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17879970040825160892ull);
    vlSelf->__PVT__u_ch__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11392775713519196596ull);
    vlSelf->__PVT__u_ch__DOT__ct_last = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3629805942645547163ull);
    vlSelf->__PVT__u_ch__DOT__ct_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5328311818371798058ull);
    vlSelf->__PVT__u_ch__DOT__memr_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17891914521786250219ull);
    vlSelf->__PVT__u_ch__DOT__memh_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4617266151568728752ull);
    vlSelf->__PVT__u_ch__DOT__ct_ra = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7315210091191966894ull);
    vlSelf->__PVT__u_ch__DOT__memr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7163766581182976283ull);
    vlSelf->__PVT__u_ch__DOT__memh_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14344773513762382134ull);
    vlSelf->__PVT__u_ch__DOT__memr_wa = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16025507531459898172ull);
    vlSelf->__PVT__u_ch__DOT__memh_wa = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14338127928903234367ull);
    vlSelf->__PVT__u_ch__DOT__memr_wd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9582034016865055554ull);
    vlSelf->__PVT__u_ch__DOT__memh_wd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1022315821634583844ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1865637530541620654ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13806156434119043191ull);
    }
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mem_ntt_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17451516985492367285ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__mem_b_wd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10341641031967903967ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1846905362118453344ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1970859905408191922ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3175046498313612835ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 11395474567663691226ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16139173454579759005ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__ntt_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7777099117040520564ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__ntt_inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14056840883394576234ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__ntt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13715186072817965635ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__int_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 538268173024411086ull);
    vlSelf->u_ch__DOT__u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 10485823704248715107ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7927666638587600600ull);
    }
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7662465693609712336ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4766573089700225334ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2425162198893942487ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6135775818207800141ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10859937506384812647ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16150428476325529804ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 10329135411574608423ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4107444612728492728ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9717087160620035414ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15103361949685283224ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8672818417138531417ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17625925380517363252ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 9520884735014396743ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 656572702607387336ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11450545749869210817ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1752509694498989285ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3935567835049545974ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8399667040948193800ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9091471228779682096ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17276411397569377213ull);
    vlSelf->__PVT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15919907830649496713ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__u_padd__DOT__mem_a[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1180661144939677252ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__u_padd__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 6793717218730612062ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_ch__DOT__u_padd__DOT__mem_r[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2074970951599675794ull);
    }
    vlSelf->__PVT__u_ch__DOT__u_padd__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14882241901556535556ull);
    vlSelf->__PVT__u_ch__DOT__u_padd__DOT__cnt = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 18062449513954207347ull);
    vlSelf->__PVT__u_ch__DOT__u_padd__DOT__widx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 8137853942259198399ull);
    vlSelf->__PVT__u_ch__DOT__u_padd__DOT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13829577970937007827ull);
    vlSelf->__PVT__u_ch__DOT__u_padd__DOT__a_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1894997072241120150ull);
    vlSelf->__PVT__u_ch__DOT__u_padd__DOT__b_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8936630866889507875ull);
    vlSelf->__PVT__u_ch__DOT__u_padd__DOT__sub_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10366493633500732965ull);
    vlSelf->__PVT__u_ch__DOT__u_padd__DOT__radr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 13567288708829966081ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_pmul__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 3562034037852789023ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_pmul__DOT__mem_ntt[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12276550170071388213ull);
    }
    vlSelf->__PVT__u_pmul__DOT__mem_ntt_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12595712914559569221ull);
    vlSelf->__PVT__u_pmul__DOT__mem_b_wd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13671389163458798565ull);
    vlSelf->__PVT__u_pmul__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16876919325721722663ull);
    vlSelf->__PVT__u_pmul__DOT__idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12850806996657001637ull);
    vlSelf->__PVT__u_pmul__DOT__ntt_coeff_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10418333627875107741ull);
    vlSelf->__PVT__u_pmul__DOT__ntt_coeff_wr_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6493234531904821559ull);
    vlSelf->__PVT__u_pmul__DOT__ntt_coeff_wr_data = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 5019587446606109311ull);
    vlSelf->__PVT__u_pmul__DOT__ntt_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16606283628117986095ull);
    vlSelf->__PVT__u_pmul__DOT__ntt_inverse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5102187204114910050ull);
    vlSelf->__PVT__u_pmul__DOT__ntt_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3322223523210281654ull);
    vlSelf->__PVT__u_pmul__DOT__int_rd_addr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2661141631779586117ull);
    vlSelf->u_pmul__DOT____Vcellinp__u_ntt__coeff_wr_en = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__coeff[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7509112851494030606ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__tw[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 15788946628752493454ull);
    }
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4988229421410091361ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__stage = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 4123367781510431497ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__k = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15455302275875856732ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__inv_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13303506973305975912ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__sc_idx = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7531638494485062143ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__grp = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 210043401027307554ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__ua = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5156667200343773784ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__va = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2296125098976297021ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__cdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4622650852269166724ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__tdo = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14128221367293833474ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__u_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14776033760345962467ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__v_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 17307496563764972373ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__w_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 8985039045077633210ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__ct_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 13681837062580162834ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__gs_u = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14159899840378077791ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__gs_v = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 7783862883441292383ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__scaled = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 14493934044939648356ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__craddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 14518642360688083320ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__cwaddr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7398202379173077703ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__cwe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17541026724564628125ull);
    vlSelf->__PVT__u_pmul__DOT__u_ntt__DOT__cwdata = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 12361954776768031777ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_padd__DOT__mem_a[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 2215887549193002439ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_padd__DOT__mem_b[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16561070658550077589ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->__PVT__u_padd__DOT__mem_r[__Vi0] = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 11486143096425192942ull);
    }
    vlSelf->__PVT__u_padd__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3419885416281798330ull);
    vlSelf->__PVT__u_padd__DOT__cnt = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14278082701419101910ull);
    vlSelf->__PVT__u_padd__DOT__widx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9563478340767158177ull);
    vlSelf->__PVT__u_padd__DOT__wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 588128832203320124ull);
    vlSelf->__PVT__u_padd__DOT__a_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4447532083496557247ull);
    vlSelf->__PVT__u_padd__DOT__b_rd = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 1617765632945346359ull);
    vlSelf->__PVT__u_padd__DOT__sub_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11157666622625197088ull);
    vlSelf->__PVT__u_padd__DOT__radr = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 2797694357522547065ull);
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__8__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__8__comp = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__8__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__9__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__9__comp = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__9__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__b = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__12__qq = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__22__Vfuncout = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__22__a = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__22__b = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__22__qq = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__40__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__40__comp = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__40__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__41__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__41__comp = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__41__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__b = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__44__qq = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__54__Vfuncout = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__54__a = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__54__b = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__54__qq = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__72__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__72__comp = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__72__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__73__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__73__comp = 0;
    vlSelf->__Vfunc_u_ch__DOT__ct_lin__73__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__Vfuncout = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__a = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__b = 0;
    vlSelf->__Vfunc_u_ch__DOT__u_pmul__DOT__mod_mul__76__qq = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__86__Vfuncout = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__86__a = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__86__b = 0;
    vlSelf->__Vfunc_u_pmul__DOT__mod_mul__86__qq = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_12 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_17 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_18 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_22 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_23 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_27 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_28 = 0;
    vlSelf->__Vdly__pm_start = 0;
    vlSelf->__Vdly__u_ch__DOT__pm_start = 0;
    vlSelf->__Vdly__u_ch__DOT__u_pmul__DOT__state = 0;
    vlSelf->__Vdly__u_ch__DOT__u_pmul__DOT__idx = 0;
    vlSelf->__Vdly__u_pmul__DOT__state = 0;
    vlSelf->__Vdly__u_pmul__DOT__idx = 0;
    vlSelf->__Vdly__u_ch__DOT__u_pmul__DOT__ntt_done = 0;
    vlSelf->__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage = 0;
    vlSelf->__Vdly__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r = 0;
    vlSelf->__Vdly__u_pmul__DOT__ntt_done = 0;
    vlSelf->__Vdly__u_pmul__DOT__u_ntt__DOT__stage = 0;
    vlSelf->__Vdly__u_pmul__DOT__u_ntt__DOT__inv_r = 0;
    vlSelf->__VdlyVal__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyVal__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyDim0__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlySet__u_pmul__DOT__u_ntt__DOT__coeff__v0 = 0;
    vlSelf->__VdlyVal__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlyDim0__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
    vlSelf->__VdlySet__u_pmul__DOT__u_ntt__DOT__tw__v0 = 0;
}
