// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_soc.h for the primary calling header

#ifndef VERILATED_VTOP_SOC___024UNIT_H_
#define VERILATED_VTOP_SOC___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop_soc__Syms;
class Vtop_soc_VerilatedVcd;


//----------

VL_MODULE(Vtop_soc___024unit) {
  public:

    // INTERNAL VARIABLES
    Vtop_soc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop_soc___024unit);  ///< Copying not allowed
  public:
    Vtop_soc___024unit(const char* name);
    ~Vtop_soc___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vtop_soc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
