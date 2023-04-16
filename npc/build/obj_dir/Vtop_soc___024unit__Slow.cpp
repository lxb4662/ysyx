// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_soc.h for the primary calling header

#include "Vtop_soc___024unit.h"
#include "Vtop_soc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop_soc___024unit___ctor_var_reset(Vtop_soc___024unit* vlSelf);

Vtop_soc___024unit::Vtop_soc___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_soc___024unit___ctor_var_reset(this);
}

void Vtop_soc___024unit::__Vconfigure(Vtop_soc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop_soc___024unit::~Vtop_soc___024unit() {
}

void Vtop_soc___024unit___ctor_var_reset(Vtop_soc___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_soc___024unit___ctor_var_reset\n"); );
}
