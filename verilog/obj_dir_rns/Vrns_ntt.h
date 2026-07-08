// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRNS_NTT_H_
#define VERILATED_VRNS_NTT_H_  // guard

#include "verilated.h"

class Vrns_ntt__Syms;
class Vrns_ntt___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vrns_ntt VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vrns_ntt__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&lane_sel,1,0);
    VL_IN8(&coeff_wr_en,0,0);
    VL_IN8(&coeff_wr_addr,3,0);
    VL_IN8(&tw_lane_sel,1,0);
    VL_IN8(&tw_wr_en,0,0);
    VL_IN8(&tw_wr_addr,4,0);
    VL_IN8(&start,0,0);
    VL_IN8(&inverse,0,0);
    VL_IN8(&rd_lane,1,0);
    VL_IN8(&rd_addr,3,0);
    VL_OUT8(&lane_done,2,0);
    VL_OUT8(&done,0,0);
    VL_INW(&q_all,119,0,4);
    VL_INW(&n_inv_all,119,0,4);
    VL_INW(&barrett_m_all,239,0,8);
    VL_IN64(&coeff_wr_data,39,0);
    VL_IN64(&tw_wr_data,39,0);
    VL_OUT64(&rd_data,39,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vrns_ntt___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vrns_ntt(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vrns_ntt(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vrns_ntt();
  private:
    VL_UNCOPYABLE(Vrns_ntt);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
