// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrns_ntt.h for the primary calling header

#ifndef VERILATED_VRNS_NTT___024ROOT_H_
#define VERILATED_VRNS_NTT___024ROOT_H_  // guard

#include "verilated.h"


class Vrns_ntt__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrns_ntt___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(lane_sel,1,0);
        VL_IN8(coeff_wr_en,0,0);
        VL_IN8(coeff_wr_addr,3,0);
        VL_IN8(tw_lane_sel,1,0);
        VL_IN8(tw_wr_en,0,0);
        VL_IN8(tw_wr_addr,4,0);
        VL_IN8(start,0,0);
        VL_IN8(inverse,0,0);
        VL_IN8(rd_lane,1,0);
        VL_IN8(rd_addr,3,0);
        VL_OUT8(lane_done,2,0);
        VL_OUT8(done,0,0);
        CData/*0:0*/ rns_ntt__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done;
        CData/*0:0*/ rns_ntt__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en;
        CData/*0:0*/ rns_ntt__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done;
        CData/*0:0*/ rns_ntt__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en;
        CData/*0:0*/ rns_ntt__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done;
        CData/*0:0*/ rns_ntt__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k;
        CData/*0:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r;
        CData/*4:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr;
        CData/*0:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k;
        CData/*0:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r;
        CData/*4:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr;
        CData/*0:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k;
        CData/*0:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r;
        CData/*4:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr;
        CData/*3:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr;
        CData/*0:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe;
        CData/*3:0*/ __Vdly__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage;
        CData/*0:0*/ __Vdly__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r;
        CData/*3:0*/ __Vdly__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage;
        CData/*0:0*/ __Vdly__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r;
        CData/*3:0*/ __Vdly__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage;
        CData/*0:0*/ __Vdly__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r;
        CData/*3:0*/ __VdlyDim0__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*0:0*/ __VdlySet__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*4:0*/ __VdlyDim0__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*0:0*/ __VdlySet__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*3:0*/ __VdlyDim0__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0;
    };
    struct {
        CData/*0:0*/ __VdlySet__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*4:0*/ __VdlyDim0__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*0:0*/ __VdlySet__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*3:0*/ __VdlyDim0__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*0:0*/ __VdlySet__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*4:0*/ __VdlyDim0__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*0:0*/ __VdlySet__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_INW(q_all,119,0,4);
        VL_INW(n_inv_all,119,0,4);
        VL_INW(barrett_m_all,239,0,8);
        IData/*31:0*/ __VactIterCount;
        VL_IN64(coeff_wr_data,39,0);
        VL_IN64(tw_wr_data,39,0);
        VL_OUT64(rd_data,39,0);
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tdo;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tdo;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tdo;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled;
        QData/*39:0*/ rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_2;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_3;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_7;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_8;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_12;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_13;
        QData/*39:0*/ __VdlyVal__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0;
        QData/*39:0*/ __VdlyVal__rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0;
        QData/*39:0*/ __VdlyVal__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0;
        QData/*39:0*/ __VdlyVal__rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0;
        QData/*39:0*/ __VdlyVal__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0;
        QData/*39:0*/ __VdlyVal__rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0;
    };
    struct {
        VlUnpacked<QData/*39:0*/, 16> rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff;
        VlUnpacked<QData/*39:0*/, 32> rns_ntt__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw;
        VlUnpacked<QData/*39:0*/, 16> rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff;
        VlUnpacked<QData/*39:0*/, 32> rns_ntt__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw;
        VlUnpacked<QData/*39:0*/, 16> rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff;
        VlUnpacked<QData/*39:0*/, 32> rns_ntt__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vrns_ntt__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrns_ntt___024root(Vrns_ntt__Syms* symsp, const char* namep);
    ~Vrns_ntt___024root();
    VL_UNCOPYABLE(Vrns_ntt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
