// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_SOC__SYMS_H_
#define VERILATED_VTOP_SOC__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vtop_soc.h"

// INCLUDE MODULE CLASSES
#include "Vtop_soc___024root.h"
#include "Vtop_soc___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vtop_soc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_soc* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_soc___024root             TOP;
    Vtop_soc___024unit             TOP____024unit;

    // CONSTRUCTORS
    Vtop_soc__Syms(VerilatedContext* contextp, const char* namep, Vtop_soc* modelp);
    ~Vtop_soc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
