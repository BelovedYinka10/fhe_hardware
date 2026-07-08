// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rns_ntt.h for the primary calling header

#ifndef VERILATED_VTB_RNS_NTT___024ROOT_H_
#define VERILATED_VTB_RNS_NTT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_rns_ntt__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rns_ntt___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_rns_ntt__DOT__clk;
        CData/*0:0*/ tb_rns_ntt__DOT__rst_n;
        CData/*1:0*/ tb_rns_ntt__DOT__lane_sel;
        CData/*0:0*/ tb_rns_ntt__DOT__coeff_wr_en;
        CData/*3:0*/ tb_rns_ntt__DOT__coeff_wr_addr;
        CData/*1:0*/ tb_rns_ntt__DOT__tw_lane_sel;
        CData/*0:0*/ tb_rns_ntt__DOT__tw_wr_en;
        CData/*4:0*/ tb_rns_ntt__DOT__tw_wr_addr;
        CData/*0:0*/ tb_rns_ntt__DOT__start;
        CData/*0:0*/ tb_rns_ntt__DOT__inverse;
        CData/*1:0*/ tb_rns_ntt__DOT__rd_lane;
        CData/*3:0*/ tb_rns_ntt__DOT__rd_addr;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__0__KET____DOT__u_ntt__done;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__0__KET____DOT__u_ntt__coeff_wr_en;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__1__KET____DOT__u_ntt__done;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__1__KET____DOT__u_ntt__coeff_wr_en;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT____Vcellout__lane__BRA__2__KET____DOT__u_ntt__done;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT____Vcellinp__lane__BRA__2__KET____DOT__u_ntt__coeff_wr_en;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__state;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__k;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r;
        CData/*4:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__sc_idx;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__grp;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ua;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__va;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__craddr;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwaddr;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwe;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__state;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__k;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r;
        CData/*4:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__sc_idx;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__grp;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ua;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__va;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__craddr;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwaddr;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwe;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__state;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__k;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r;
        CData/*4:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__sc_idx;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__grp;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ua;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__va;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__craddr;
        CData/*3:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwaddr;
        CData/*0:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwe;
        CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__stage;
        CData/*0:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__inv_r;
        CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__stage;
        CData/*0:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__inv_r;
        CData/*3:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__stage;
        CData/*0:0*/ __Vdly__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__inv_r;
        CData/*3:0*/ __VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*0:0*/ __VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*4:0*/ __VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*0:0*/ __VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*3:0*/ __VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*0:0*/ __VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*4:0*/ __VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0;
    };
    struct {
        CData/*0:0*/ __VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*3:0*/ __VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*0:0*/ __VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0;
        CData/*4:0*/ __VdlyDim0__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*0:0*/ __VdlySet__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rns_ntt__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rns_ntt__DOT__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VlWide<4>/*119:0*/ tb_rns_ntt__DOT__q_all;
        VlWide<4>/*119:0*/ tb_rns_ntt__DOT__n_inv_all;
        VlWide<8>/*239:0*/ tb_rns_ntt__DOT__barrett_m_all;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        QData/*39:0*/ tb_rns_ntt__DOT__coeff_wr_data;
        QData/*39:0*/ tb_rns_ntt__DOT__tw_wr_data;
        QData/*39:0*/ tb_rns_ntt__DOT__rd_data;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cdo;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tdo;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__u_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__v_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__w_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__ct_u;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_u;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__gs_v;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__scaled;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__cwdata;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cdo;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tdo;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__u_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__v_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__w_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__ct_u;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_u;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__gs_v;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__scaled;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__cwdata;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cdo;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tdo;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__u_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__v_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__w_r;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__ct_u;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_u;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__gs_v;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__scaled;
        QData/*39:0*/ tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__cwdata;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_2;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_3;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_7;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_8;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_12;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_13;
        QData/*39:0*/ __VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff__v0;
        QData/*39:0*/ __VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw__v0;
        QData/*39:0*/ __VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff__v0;
        QData/*39:0*/ __VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw__v0;
        QData/*39:0*/ __VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff__v0;
        QData/*39:0*/ __VdlyVal__tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw__v0;
        VlUnpacked<VlWide<3>/*79:0*/, 3> tb_rns_ntt__DOT__params0;
    };
    struct {
        VlUnpacked<VlWide<3>/*79:0*/, 3> tb_rns_ntt__DOT__params1;
        VlUnpacked<VlWide<3>/*79:0*/, 3> tb_rns_ntt__DOT__params2;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__tw_fwd0;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__tw_inv0;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__tw_fwd1;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__tw_inv1;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__tw_fwd2;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__tw_inv2;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__input0;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__input1;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__input2;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__ntt_exp0;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__ntt_exp1;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__ntt_exp2;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__intt_exp0;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__intt_exp1;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__intt_exp2;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__hw_ntt0;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__hw_ntt1;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__hw_ntt2;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__hw_intt0;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__hw_intt1;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__hw_intt2;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__coeff;
        VlUnpacked<QData/*39:0*/, 32> tb_rns_ntt__DOT__dut__DOT__lane__BRA__0__KET____DOT__u_ntt__DOT__tw;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__coeff;
        VlUnpacked<QData/*39:0*/, 32> tb_rns_ntt__DOT__dut__DOT__lane__BRA__1__KET____DOT__u_ntt__DOT__tw;
        VlUnpacked<QData/*39:0*/, 16> tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__coeff;
        VlUnpacked<QData/*39:0*/, 32> tb_rns_ntt__DOT__dut__DOT__lane__BRA__2__KET____DOT__u_ntt__DOT__tw;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h057f82d5__0;

    // INTERNAL VARIABLES
    Vtb_rns_ntt__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rns_ntt___024root(Vtb_rns_ntt__Syms* symsp, const char* namep);
    ~Vtb_rns_ntt___024root();
    VL_UNCOPYABLE(Vtb_rns_ntt___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
