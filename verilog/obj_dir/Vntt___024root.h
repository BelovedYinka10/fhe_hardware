// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vntt.h for the primary calling header

#ifndef VERILATED_VNTT___024ROOT_H_
#define VERILATED_VNTT___024ROOT_H_  // guard

#include "verilated.h"


class Vntt__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vntt___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(coeff_wr_en,0,0);
    VL_IN8(tw_wr_en,0,0);
    VL_IN8(start,0,0);
    VL_IN8(inverse,0,0);
    VL_OUT8(done,0,0);
    CData/*2:0*/ ntt__DOT__state;
    CData/*0:0*/ ntt__DOT__inv_r;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN16(coeff_wr_addr,12,0);
    VL_IN16(tw_wr_addr,13,0);
    VL_IN16(rd_addr,12,0);
    SData/*12:0*/ ntt__DOT__stage;
    SData/*12:0*/ ntt__DOT__k;
    SData/*13:0*/ ntt__DOT__sc_idx;
    SData/*12:0*/ ntt__DOT__ua;
    SData/*12:0*/ ntt__DOT__va;
    SData/*13:0*/ ntt__DOT__tw_idx;
    VL_INW(barrett_m,79,0,3);
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__p;
    VlWide<5>/*159:0*/ ntt__DOT__mod_mul__Vstatic__pm;
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__tq;
    VlWide<3>/*79:0*/ ntt__DOT__mod_mul__Vstatic__r;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(q,39,0);
    VL_IN64(n_inv,39,0);
    VL_IN64(coeff_wr_data,39,0);
    VL_IN64(tw_wr_data,39,0);
    VL_OUT64(rd_data,39,0);
    QData/*39:0*/ ntt__DOT__u_r;
    QData/*39:0*/ ntt__DOT__v_r;
    QData/*39:0*/ ntt__DOT__w_r;
    QData/*40:0*/ ntt__DOT__mod_mul__Vstatic__t;
    QData/*39:0*/ ntt__DOT__gs_v;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_0;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_2;
    QData/*40:0*/ __VdfgRegularize_hebeb780c_0_3;
    VlUnpacked<QData/*39:0*/, 8192> ntt__DOT__coeff;
    VlUnpacked<QData/*39:0*/, 16384> ntt__DOT__tw;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vntt__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vntt___024root(Vntt__Syms* symsp, const char* namep);
    ~Vntt___024root();
    VL_UNCOPYABLE(Vntt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
