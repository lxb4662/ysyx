// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_soc.h for the primary calling header

#include "Vtop_soc___024unit.h"
#include "Vtop_soc__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" long long mem_read(long long a, int len);

VL_INLINE_OPT void Vtop_soc___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ &mem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_soc___024unit____Vdpiimwrap_mem_read_TOP____024unit\n"); );
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

VL_INLINE_OPT void Vtop_soc___024unit____Vdpiimwrap_mem_write_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ data, IData/*31:0*/ &mem_write__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_soc___024unit____Vdpiimwrap_mem_write_TOP____024unit\n"); );
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

extern "C" void status_cpy(int addr, int a1, int a0, int write, int pc, int incache, int valid);

VL_INLINE_OPT void Vtop_soc___024unit____Vdpiimwrap_status_cpy_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ a1, IData/*31:0*/ a0, IData/*31:0*/ write, IData/*31:0*/ pc, IData/*31:0*/ incache, IData/*31:0*/ valid) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_soc___024unit____Vdpiimwrap_status_cpy_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int a1__Vcvt;
    for (size_t a1__Vidx = 0; a1__Vidx < 1; ++a1__Vidx) a1__Vcvt = a1;
    int a0__Vcvt;
    for (size_t a0__Vidx = 0; a0__Vidx < 1; ++a0__Vidx) a0__Vcvt = a0;
    int write__Vcvt;
    for (size_t write__Vidx = 0; write__Vidx < 1; ++write__Vidx) write__Vcvt = write;
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int incache__Vcvt;
    for (size_t incache__Vidx = 0; incache__Vidx < 1; ++incache__Vidx) incache__Vcvt = incache;
    int valid__Vcvt;
    for (size_t valid__Vidx = 0; valid__Vidx < 1; ++valid__Vidx) valid__Vcvt = valid;
    status_cpy(addr__Vcvt, a1__Vcvt, a0__Vcvt, write__Vcvt, pc__Vcvt, incache__Vcvt, valid__Vcvt);
}

extern "C" void mtrace(int pc, int addr, int a0, int a1, int len);

VL_INLINE_OPT void Vtop_soc___024unit____Vdpiimwrap_mtrace_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ addr, IData/*31:0*/ a0, IData/*31:0*/ a1, IData/*31:0*/ len) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_soc___024unit____Vdpiimwrap_mtrace_TOP____024unit\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int a0__Vcvt;
    for (size_t a0__Vidx = 0; a0__Vidx < 1; ++a0__Vidx) a0__Vcvt = a0;
    int a1__Vcvt;
    for (size_t a1__Vidx = 0; a1__Vidx < 1; ++a1__Vidx) a1__Vcvt = a1;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    mtrace(pc__Vcvt, addr__Vcvt, a0__Vcvt, a1__Vcvt, len__Vcvt);
}
