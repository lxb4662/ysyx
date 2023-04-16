// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_soc.h"
#include "Vtop_soc__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop_soc::Vtop_soc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtop_soc__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , ir{vlSymsp->TOP.ir}
    , ira{vlSymsp->TOP.ira}
    , stop_n{vlSymsp->TOP.stop_n}
    , skip{vlSymsp->TOP.skip}
    , pc_dut{vlSymsp->TOP.pc_dut}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtop_soc::Vtop_soc(const char* _vcname__)
    : Vtop_soc(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtop_soc::~Vtop_soc() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop_soc___024root___eval_initial(Vtop_soc___024root* vlSelf);
void Vtop_soc___024root___eval_settle(Vtop_soc___024root* vlSelf);
void Vtop_soc___024root___eval(Vtop_soc___024root* vlSelf);
QData Vtop_soc___024root___change_request(Vtop_soc___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop_soc___024root___eval_debug_assertions(Vtop_soc___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_soc___024root___final(Vtop_soc___024root* vlSelf);

static void _eval_initial_loop(Vtop_soc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop_soc___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop_soc___024root___eval_settle(&(vlSymsp->TOP));
        Vtop_soc___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop_soc___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lixinbao/ysyx-workbench/npc/vsrc/top_soc.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop_soc___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_soc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_soc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop_soc___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop_soc___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lixinbao/ysyx-workbench/npc/vsrc/top_soc.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop_soc___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtop_soc::final() {
    Vtop_soc___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtop_soc::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtop_soc::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vtop_soc___024root__traceInitTop(Vtop_soc___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_soc___024root*>(voidSelf);
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop_soc___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vtop_soc___024root__traceRegister(Vtop_soc___024root* vlSelf, VerilatedVcd* tracep);

void Vtop_soc::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vtop_soc___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
