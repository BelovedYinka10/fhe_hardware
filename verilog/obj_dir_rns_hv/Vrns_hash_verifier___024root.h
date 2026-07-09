// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrns_hash_verifier.h for the primary calling header

#ifndef VERILATED_VRNS_HASH_VERIFIER___024ROOT_H_
#define VERILATED_VRNS_HASH_VERIFIER___024ROOT_H_  // guard

#include "verilated.h"
class Vrns_hash_verifier_hash_verifier;


class Vrns_hash_verifier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrns_hash_verifier___024root final {
  public:
    // CELLS
    Vrns_hash_verifier_hash_verifier* __PVT__rns_hash_verifier__DOT__lane__BRA__0__KET____DOT__u_hv;
    Vrns_hash_verifier_hash_verifier* __PVT__rns_hash_verifier__DOT__lane__BRA__1__KET____DOT__u_hv;
    Vrns_hash_verifier_hash_verifier* __PVT__rns_hash_verifier__DOT__lane__BRA__2__KET____DOT__u_hv;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(lane_sel,1,0);
    VL_IN8(ct_id,1,0);
    VL_IN8(ct_sel,1,0);
    VL_IN8(ct_wr_en,0,0);
    VL_IN8(r_wr_en,0,0);
    VL_IN8(tw_lane_sel,1,0);
    VL_IN8(tw_wr_en,0,0);
    VL_IN8(c1_count,1,0);
    VL_IN8(c2_count,1,0);
    VL_IN8(c3_count,1,0);
    VL_IN8(start,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(valid,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_IN16(ct_wr_addr,12,0);
    VL_IN16(r_wr_addr,12,0);
    VL_IN16(tw_wr_addr,13,0);
    VL_INW(q_all,119,0,4);
    VL_INW(n_inv_all,119,0,4);
    VL_INW(barrett_m_all,239,0,8);
    IData/*31:0*/ __VactIterCount;
    VL_IN64(ct_wr_data,39,0);
    VL_IN64(r_wr_data,39,0);
    VL_IN64(tw_wr_data,39,0);
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrns_hash_verifier__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrns_hash_verifier___024root(Vrns_hash_verifier__Syms* symsp, const char* namep);
    ~Vrns_hash_verifier___024root();
    VL_UNCOPYABLE(Vrns_hash_verifier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
