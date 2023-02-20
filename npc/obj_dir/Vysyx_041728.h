// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_041728_H_
#define VERILATED_VYSYX_041728_H_  // guard

#include "verilated_heavy.h"
#include "svdpi.h"

class Vysyx_041728__Syms;
class Vysyx_041728___024root;
class VerilatedVcdC;
class Vysyx_041728_VerilatedVcd;
class Vysyx_041728_mem;


// This class is the main interface to the Verilated model
class Vysyx_041728 VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_041728__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&io_dmaster_awready,0,0);
    VL_OUT8(&io_dmaster_awvalid,0,0);
    VL_OUT8(&io_dmaster_awid,3,0);
    VL_OUT(&io_dmaster_awaddr,31,0);
    VL_OUT8(&io_dmaster_awlen,7,0);
    VL_OUT8(&io_dmaster_awsize,2,0);
    VL_OUT8(&io_dmaster_awburst,1,0);
    VL_IN8(&io_dmaster_wready,0,0);
    VL_OUT8(&io_dmaster_wvalid,0,0);
    VL_OUT64(&io_dmaster_wdata,63,0);
    VL_OUT8(&io_dmaster_wstrb,7,0);
    VL_OUT8(&io_dmaster_wlast,0,0);
    VL_OUT8(&io_dmaster_bready,0,0);
    VL_IN8(&io_dmaster_bvalid,0,0);
    VL_IN8(&io_dmaster_bid,3,0);
    VL_IN8(&io_dmaster_bresp,1,0);
    VL_IN8(&io_dmaster_arready,0,0);
    VL_OUT8(&io_dmaster_arvalid,0,0);
    VL_OUT8(&io_dmaster_arid,3,0);
    VL_OUT(&io_dmaster_araddr,31,0);
    VL_OUT8(&io_dmaster_arlen,7,0);
    VL_OUT8(&io_dmaster_arsize,2,0);
    VL_OUT8(&io_dmaster_arburst,1,0);
    VL_OUT8(&io_dmaster_rready,0,0);
    VL_IN8(&io_dmaster_rvalid,0,0);
    VL_IN8(&io_dmaster_rid,3,0);
    VL_IN8(&io_dmaster_rresp,1,0);
    VL_IN64(&io_dmaster_rdata,63,0);
    VL_IN8(&io_dmaster_rlast,0,0);
    VL_OUT8(&io_mmio_valid,0,0);
    VL_IN8(&io_mmio_ready,0,0);
    VL_IN64(&io_mmio_data_read,63,0);
    VL_OUT64(&io_mmio_data_write,63,0);
    VL_OUT8(&io_mmio_wen,0,0);
    VL_OUT(&io_mmio_addr,31,0);
    VL_OUT8(&io_mmio_rsize,1,0);
    VL_OUT8(&io_mmio_mask,7,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vysyx_041728_mem* const __PVT__ysyx_041728__DOT__imem;
    Vysyx_041728_mem* const __PVT__ysyx_041728__DOT__dmem;
    Vysyx_041728_mem* const __PVT__ysyx_041728__DOT__imem_1;
    Vysyx_041728_mem* const __PVT__ysyx_041728__DOT__dmem_1;
    Vysyx_041728_mem* const __PVT__ysyx_041728__DOT__imem_2;
    Vysyx_041728_mem* const __PVT__ysyx_041728__DOT__dmem_2;
    Vysyx_041728_mem* const __PVT__ysyx_041728__DOT__imem_3;
    Vysyx_041728_mem* const __PVT__ysyx_041728__DOT__dmem_3;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_041728___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_041728(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_041728(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_041728();
  private:
    VL_UNCOPYABLE(Vysyx_041728);  ///< Copying not allowed

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

    /// DPI Export functions
    static void difftestcommit(svBit* commit);
    static void getabort(svBit* abor);
    static void getintr(svBit* commit);
    static void getskip(svBit* commit);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
