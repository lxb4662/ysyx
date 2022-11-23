// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_H_
#define VERILATED_VTOP_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vtop__Syms;
class Vtop___024root;
class VerilatedVcdC;
class Vtop_VerilatedVcd;
class Vtop___024unit;


// This class is the main interface to the Verilated model
class Vtop VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_OUT(&ir,31,0);
    VL_OUT64(&ira,63,0);
    VL_OUT8(&jup,0,0);
    VL_OUT8(&ecall,0,0);
    VL_IN8(&uart_get,0,0);
    VL_OUT8(&uart_en,0,0);
    VL_OUT8(&uart_out,7,0);
    VL_OUT8(&stop_n,0,0);
    VL_OUT8(&skip,0,0);
    VL_OUT64(&pc_dut,63,0);
    VL_OUT8(&axi_0_clk,0,0);
    VL_OUT8(&axi_0_rst_n,0,0);
    VL_OUT8(&axi_0_ar_id,3,0);
    VL_OUT8(&axi_0_ar_brust,1,0);
    VL_OUT8(&axi_0_ar_len,7,0);
    VL_OUT8(&axi_0_ar_size,2,0);
    VL_OUT64(&axi_0_ar_addr,63,0);
    VL_OUT8(&axi_0_ar_valid,0,0);
    VL_IN8(&axi_0_ar_ready,0,0);
    VL_IN(&axi_0_r_data,31,0);
    VL_IN8(&axi_0_r_valid,0,0);
    VL_OUT8(&axi_0_r_ready,0,0);
    VL_IN8(&axi_0_r_id,3,0);
    VL_IN8(&axi_0_r_last,0,0);
    VL_IN8(&axi_0_r_resp,1,0);
    VL_OUT64(&axi_0_aw_addr,63,0);
    VL_OUT8(&axi_0_aw_valid,0,0);
    VL_IN8(&axi_0_aw_ready,0,0);
    VL_OUT8(&axi_0_aw_id,3,0);
    VL_OUT8(&axi_0_aw_brust,1,0);
    VL_OUT8(&axi_0_aw_len,7,0);
    VL_OUT8(&axi_0_aw_size,2,0);
    VL_OUT(&axi_0_w_data,31,0);
    VL_OUT8(&axi_0_w_valid,0,0);
    VL_IN8(&axi_0_w_ready,0,0);
    VL_OUT8(&axi_0_w_last,0,0);
    VL_OUT8(&axi_0_w_strb,3,0);
    VL_OUT8(&axi_0_b_ready,0,0);
    VL_IN8(&axi_0_b_valid,0,0);
    VL_IN8(&axi_0_b_resp,1,0);
    VL_IN8(&axi_0_b_id,3,0);
    VL_OUT8(&axi_1_clk,0,0);
    VL_OUT8(&axi_1_rst_n,0,0);
    VL_OUT8(&axi_1_ar_id,3,0);
    VL_OUT8(&axi_1_ar_brust,1,0);
    VL_OUT8(&axi_1_ar_len,7,0);
    VL_OUT8(&axi_1_ar_size,2,0);
    VL_OUT64(&axi_1_ar_addr,63,0);
    VL_OUT8(&axi_1_ar_valid,0,0);
    VL_IN8(&axi_1_ar_ready,0,0);
    VL_IN(&axi_1_r_data,31,0);
    VL_IN8(&axi_1_r_valid,0,0);
    VL_OUT8(&axi_1_r_ready,0,0);
    VL_IN8(&axi_1_r_id,3,0);
    VL_IN8(&axi_1_r_last,0,0);
    VL_IN8(&axi_1_r_resp,1,0);
    VL_OUT64(&axi_1_aw_addr,63,0);
    VL_OUT8(&axi_1_aw_valid,0,0);
    VL_IN8(&axi_1_aw_ready,0,0);
    VL_OUT8(&axi_1_aw_id,3,0);
    VL_OUT8(&axi_1_aw_brust,1,0);
    VL_OUT8(&axi_1_aw_len,7,0);
    VL_OUT8(&axi_1_aw_size,2,0);
    VL_OUT(&axi_1_w_data,31,0);
    VL_OUT8(&axi_1_w_valid,0,0);
    VL_IN8(&axi_1_w_ready,0,0);
    VL_OUT8(&axi_1_w_last,0,0);
    VL_OUT8(&axi_1_w_strb,3,0);
    VL_OUT8(&axi_1_b_ready,0,0);
    VL_IN8(&axi_1_b_valid,0,0);
    VL_IN8(&axi_1_b_resp,1,0);
    VL_IN8(&axi_1_b_id,3,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop();
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed

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
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
