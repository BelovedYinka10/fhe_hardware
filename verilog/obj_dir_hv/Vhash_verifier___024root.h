// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhash_verifier.h for the primary calling header

#ifndef VERILATED_VHASH_VERIFIER___024ROOT_H_
#define VERILATED_VHASH_VERIFIER___024ROOT_H_  // guard

#include "verilated.h"


class Vhash_verifier__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhash_verifier___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(ct_id,1,0);
        VL_IN8(ct_sel,1,0);
        VL_IN8(ct_wr_en,0,0);
        VL_IN8(r_wr_en,0,0);
        VL_IN8(tw_wr_en,0,0);
        VL_IN8(c1_count,1,0);
        VL_IN8(c2_count,1,0);
        VL_IN8(c3_count,1,0);
        VL_IN8(start,0,0);
        VL_OUT8(done,0,0);
        VL_OUT8(valid,0,0);
        CData/*0:0*/ hash_verifier__DOT__ch_ct_wr_en;
        CData/*1:0*/ hash_verifier__DOT__ch_ct_sel;
        CData/*0:0*/ hash_verifier__DOT__ch_r_wr_en;
        CData/*1:0*/ hash_verifier__DOT__ch_ct_count;
        CData/*0:0*/ hash_verifier__DOT__ch_start;
        CData/*0:0*/ hash_verifier__DOT__ch_done;
        CData/*0:0*/ hash_verifier__DOT__pm_a_wr_en;
        CData/*0:0*/ hash_verifier__DOT__pm_b_wr_en;
        CData/*0:0*/ hash_verifier__DOT__pm_start;
        CData/*0:0*/ hash_verifier__DOT__pm_done;
        CData/*0:0*/ hash_verifier__DOT__pa_a_wr_en;
        CData/*0:0*/ hash_verifier__DOT__pa_b_wr_en;
        CData/*0:0*/ hash_verifier__DOT__pa_start;
        CData/*0:0*/ hash_verifier__DOT__pa_done;
        CData/*3:0*/ hash_verifier__DOT__state;
        CData/*1:0*/ hash_verifier__DOT__comp_i;
        CData/*0:0*/ hash_verifier__DOT__cmp_ok;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__pm_a_wr_en;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__pm_b_wr_en;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__pm_start;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__pm_done;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__pa_a_wr_en;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__pa_b_wr_en;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__pa_start;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__pa_done;
        CData/*3:0*/ hash_verifier__DOT__u_ch__DOT__state;
        CData/*1:0*/ hash_verifier__DOT__u_ch__DOT__horner_i;
        CData/*1:0*/ hash_verifier__DOT__u_ch__DOT__ct_last;
        CData/*2:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__state;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_en;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_start;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_inverse;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_done;
        CData/*2:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__state;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__inv_r;
        CData/*1:0*/ hash_verifier__DOT__u_ch__DOT__u_padd__DOT__state;
        CData/*0:0*/ hash_verifier__DOT__u_ch__DOT__u_padd__DOT__sub_r;
        CData/*2:0*/ hash_verifier__DOT__u_pmul__DOT__state;
        CData/*0:0*/ hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_en;
        CData/*0:0*/ hash_verifier__DOT__u_pmul__DOT__ntt_start;
        CData/*0:0*/ hash_verifier__DOT__u_pmul__DOT__ntt_inverse;
        CData/*0:0*/ hash_verifier__DOT__u_pmul__DOT__ntt_done;
        CData/*2:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__state;
        CData/*0:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__inv_r;
        CData/*1:0*/ hash_verifier__DOT__u_padd__DOT__state;
        CData/*0:0*/ hash_verifier__DOT__u_padd__DOT__sub_r;
        CData/*1:0*/ __VdlyDim1__hash_verifier__DOT__ct_mem__v0;
        CData/*1:0*/ __VdlyDim2__hash_verifier__DOT__ct_mem__v0;
        CData/*0:0*/ __VdlySet__hash_verifier__DOT__ct_mem__v0;
        CData/*1:0*/ __VdlyDim1__hash_verifier__DOT__u_ch__DOT__ct__v0;
        CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__ct__v0;
    };
    struct {
        CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v0;
        CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__mem_r__v1;
        CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v0;
        CData/*0:0*/ __VdlySet__hash_verifier__DOT__u_ch__DOT__mem_h__v1;
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
        SData/*12:0*/ hash_verifier__DOT__ch_ct_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__ch_r_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__ch_rd_addr;
        SData/*12:0*/ hash_verifier__DOT__pm_a_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__pm_b_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__pm_rd_addr;
        SData/*12:0*/ hash_verifier__DOT__pa_a_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__pa_b_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__pa_rd_addr;
        SData/*13:0*/ hash_verifier__DOT__idx;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__pm_a_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__pm_b_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__pm_rd_addr;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__pa_a_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__pa_b_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__pa_rd_addr;
        SData/*13:0*/ hash_verifier__DOT__u_ch__DOT__idx;
        SData/*13:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__idx;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__int_rd_addr;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__stage;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__k;
        SData/*13:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__ua;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__va;
        SData/*13:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw_idx;
        SData/*12:0*/ hash_verifier__DOT__u_ch__DOT__u_padd__DOT__idx;
        SData/*13:0*/ hash_verifier__DOT__u_pmul__DOT__idx;
        SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_addr;
        SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__int_rd_addr;
        SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__stage;
        SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__k;
        SData/*13:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__sc_idx;
        SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__ua;
        SData/*12:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__va;
        SData/*13:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw_idx;
        SData/*12:0*/ hash_verifier__DOT__u_padd__DOT__idx;
        SData/*12:0*/ __Vdly__hash_verifier__DOT__ch_rd_addr;
        SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__ct_mem__v0;
        SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__ct__v0;
        SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v0;
        SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_r__v1;
        SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v0;
        SData/*12:0*/ __VdlyDim0__hash_verifier__DOT__u_ch__DOT__mem_h__v1;
        VL_INW(barrett_m,79,0,3);
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__p;
        VlWide<5>/*159:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__pm;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__tq;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__r;
    };
    struct {
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
        VlWide<5>/*159:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__p;
        VlWide<5>/*159:0*/ hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__pm;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__tq;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__r;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__p;
        VlWide<5>/*159:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__pm;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__tq;
        VlWide<3>/*79:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__r;
        IData/*31:0*/ __VactIterCount;
        VL_IN64(q,39,0);
        VL_IN64(n_inv,39,0);
        VL_IN64(ct_wr_data,39,0);
        VL_IN64(r_wr_data,39,0);
        VL_IN64(tw_wr_data,39,0);
        QData/*39:0*/ hash_verifier__DOT____Vlvbound_h957a2f4a__0;
        QData/*39:0*/ hash_verifier__DOT__ch_ct_wr_data;
        QData/*39:0*/ hash_verifier__DOT__ch_r_wr_data;
        QData/*39:0*/ hash_verifier__DOT__ch_rd_data;
        QData/*39:0*/ hash_verifier__DOT__pm_a_wr_data;
        QData/*39:0*/ hash_verifier__DOT__pm_b_wr_data;
        QData/*39:0*/ hash_verifier__DOT__pa_a_wr_data;
        QData/*39:0*/ hash_verifier__DOT__pa_b_wr_data;
        QData/*39:0*/ hash_verifier__DOT__pa_rd_data;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT____Vlvbound_h67fe0f0a__0;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__pm_a_wr_data;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__pm_b_wr_data;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__pa_a_wr_data;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__pa_b_wr_data;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__pa_rd_data;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_coeff_wr_data;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__ntt_rd_data;
        QData/*40:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mod_mul__Vstatic__t;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__u_r;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
        QData/*40:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
        QData/*39:0*/ hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__gs_v;
        QData/*39:0*/ hash_verifier__DOT__u_pmul__DOT__ntt_coeff_wr_data;
        QData/*39:0*/ hash_verifier__DOT__u_pmul__DOT__ntt_rd_data;
        QData/*40:0*/ hash_verifier__DOT__u_pmul__DOT__mod_mul__Vstatic__t;
        QData/*39:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__u_r;
        QData/*39:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__v_r;
        QData/*39:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__w_r;
        QData/*40:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__mod_mul__Vstatic__t;
        QData/*39:0*/ hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__gs_v;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_0;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_2;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_3;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_5;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_7;
        QData/*40:0*/ __VdfgRegularize_hebeb780c_0_8;
        QData/*39:0*/ __VdlyVal__hash_verifier__DOT__ct_mem__v0;
        QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__ct__v0;
        QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v0;
        QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_r__v1;
        QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v0;
        QData/*39:0*/ __VdlyVal__hash_verifier__DOT__u_ch__DOT__mem_h__v1;
        VlUnpacked<VlUnpacked<VlUnpacked<QData/*39:0*/, 8192>, 3>, 3> hash_verifier__DOT__ct_mem;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__h1;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__h2;
    };
    struct {
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__h3;
        VlUnpacked<VlUnpacked<QData/*39:0*/, 8192>, 3> hash_verifier__DOT__u_ch__DOT__ct;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_ch__DOT__mem_r;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_ch__DOT__mem_h;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_b;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__mem_ntt;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__coeff;
        VlUnpacked<QData/*39:0*/, 16384> hash_verifier__DOT__u_ch__DOT__u_pmul__DOT__u_ntt__DOT__tw;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_a;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_b;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_ch__DOT__u_padd__DOT__mem_r;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_pmul__DOT__mem_b;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_pmul__DOT__mem_ntt;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__coeff;
        VlUnpacked<QData/*39:0*/, 16384> hash_verifier__DOT__u_pmul__DOT__u_ntt__DOT__tw;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_padd__DOT__mem_a;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_padd__DOT__mem_b;
        VlUnpacked<QData/*39:0*/, 8192> hash_verifier__DOT__u_padd__DOT__mem_r;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vhash_verifier__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vhash_verifier___024root(Vhash_verifier__Syms* symsp, const char* namep);
    ~Vhash_verifier___024root();
    VL_UNCOPYABLE(Vhash_verifier___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
