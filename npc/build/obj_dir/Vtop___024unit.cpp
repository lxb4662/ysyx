// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024unit.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" long long mem_read(long long a, int len);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ &mem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_mem_read_TOP____024unit\n"); );
    // Body
    long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    long long mem_read__Vfuncrtn__Vcvt;
    mem_read__Vfuncrtn__Vcvt = mem_read(a__Vcvt, len__Vcvt);
    mem_read__Vfuncrtn = mem_read__Vfuncrtn__Vcvt;
}

extern "C" int mem_write(long long a, int len, long long data);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_mem_write_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ data, IData/*31:0*/ &mem_write__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_mem_write_TOP____024unit\n"); );
    // Body
    long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    long long data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int mem_write__Vfuncrtn__Vcvt;
    mem_write__Vfuncrtn__Vcvt = mem_write(a__Vcvt, len__Vcvt, data__Vcvt);
    mem_write__Vfuncrtn = mem_write__Vfuncrtn__Vcvt;
}

extern "C" int mem_skip(long long a);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_mem_skip_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ &mem_skip__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_mem_skip_TOP____024unit\n"); );
    // Body
    long long a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    int mem_skip__Vfuncrtn__Vcvt;
    mem_skip__Vfuncrtn__Vcvt = mem_skip(a__Vcvt);
    mem_skip__Vfuncrtn = mem_skip__Vfuncrtn__Vcvt;
}

extern "C" void reg_cpy(int adder, int a, int b);

VL_INLINE_OPT void Vtop___024unit____Vdpiimwrap_reg_cpy_TOP____024unit(IData/*31:0*/ adder, IData/*31:0*/ a, IData/*31:0*/ b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_reg_cpy_TOP____024unit\n"); );
    // Body
    int adder__Vcvt;
    for (size_t adder__Vidx = 0; adder__Vidx < 1; ++adder__Vidx) adder__Vcvt = adder;
    int a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    int b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    reg_cpy(adder__Vcvt, a__Vcvt, b__Vcvt);
}
