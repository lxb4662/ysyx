// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop::Vtop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtop__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , ir{vlSymsp->TOP.ir}
    , ira{vlSymsp->TOP.ira}
    , jup{vlSymsp->TOP.jup}
    , ecall{vlSymsp->TOP.ecall}
    , uart_get{vlSymsp->TOP.uart_get}
    , uart_en{vlSymsp->TOP.uart_en}
    , uart_out{vlSymsp->TOP.uart_out}
    , stop_n{vlSymsp->TOP.stop_n}
    , skip{vlSymsp->TOP.skip}
    , pc_dut{vlSymsp->TOP.pc_dut}
    , axi_0_clk{vlSymsp->TOP.axi_0_clk}
    , axi_0_rst_n{vlSymsp->TOP.axi_0_rst_n}
    , axi_0_ar_id{vlSymsp->TOP.axi_0_ar_id}
    , axi_0_ar_brust{vlSymsp->TOP.axi_0_ar_brust}
    , axi_0_ar_len{vlSymsp->TOP.axi_0_ar_len}
    , axi_0_ar_size{vlSymsp->TOP.axi_0_ar_size}
    , axi_0_ar_addr{vlSymsp->TOP.axi_0_ar_addr}
    , axi_0_ar_valid{vlSymsp->TOP.axi_0_ar_valid}
    , axi_0_ar_ready{vlSymsp->TOP.axi_0_ar_ready}
    , axi_0_r_data{vlSymsp->TOP.axi_0_r_data}
    , axi_0_r_valid{vlSymsp->TOP.axi_0_r_valid}
    , axi_0_r_ready{vlSymsp->TOP.axi_0_r_ready}
    , axi_0_r_id{vlSymsp->TOP.axi_0_r_id}
    , axi_0_r_last{vlSymsp->TOP.axi_0_r_last}
    , axi_0_r_resp{vlSymsp->TOP.axi_0_r_resp}
    , axi_0_aw_addr{vlSymsp->TOP.axi_0_aw_addr}
    , axi_0_aw_valid{vlSymsp->TOP.axi_0_aw_valid}
    , axi_0_aw_ready{vlSymsp->TOP.axi_0_aw_ready}
    , axi_0_aw_id{vlSymsp->TOP.axi_0_aw_id}
    , axi_0_aw_brust{vlSymsp->TOP.axi_0_aw_brust}
    , axi_0_aw_len{vlSymsp->TOP.axi_0_aw_len}
    , axi_0_aw_size{vlSymsp->TOP.axi_0_aw_size}
    , axi_0_w_data{vlSymsp->TOP.axi_0_w_data}
    , axi_0_w_valid{vlSymsp->TOP.axi_0_w_valid}
    , axi_0_w_ready{vlSymsp->TOP.axi_0_w_ready}
    , axi_0_w_last{vlSymsp->TOP.axi_0_w_last}
    , axi_0_w_strb{vlSymsp->TOP.axi_0_w_strb}
    , axi_0_b_ready{vlSymsp->TOP.axi_0_b_ready}
    , axi_0_b_valid{vlSymsp->TOP.axi_0_b_valid}
    , axi_0_b_resp{vlSymsp->TOP.axi_0_b_resp}
    , axi_0_b_id{vlSymsp->TOP.axi_0_b_id}
    , axi_1_clk{vlSymsp->TOP.axi_1_clk}
    , axi_1_rst_n{vlSymsp->TOP.axi_1_rst_n}
    , axi_1_ar_id{vlSymsp->TOP.axi_1_ar_id}
    , axi_1_ar_brust{vlSymsp->TOP.axi_1_ar_brust}
    , axi_1_ar_len{vlSymsp->TOP.axi_1_ar_len}
    , axi_1_ar_size{vlSymsp->TOP.axi_1_ar_size}
    , axi_1_ar_addr{vlSymsp->TOP.axi_1_ar_addr}
    , axi_1_ar_valid{vlSymsp->TOP.axi_1_ar_valid}
    , axi_1_ar_ready{vlSymsp->TOP.axi_1_ar_ready}
    , axi_1_r_data{vlSymsp->TOP.axi_1_r_data}
    , axi_1_r_valid{vlSymsp->TOP.axi_1_r_valid}
    , axi_1_r_ready{vlSymsp->TOP.axi_1_r_ready}
    , axi_1_r_id{vlSymsp->TOP.axi_1_r_id}
    , axi_1_r_last{vlSymsp->TOP.axi_1_r_last}
    , axi_1_r_resp{vlSymsp->TOP.axi_1_r_resp}
    , axi_1_aw_addr{vlSymsp->TOP.axi_1_aw_addr}
    , axi_1_aw_valid{vlSymsp->TOP.axi_1_aw_valid}
    , axi_1_aw_ready{vlSymsp->TOP.axi_1_aw_ready}
    , axi_1_aw_id{vlSymsp->TOP.axi_1_aw_id}
    , axi_1_aw_brust{vlSymsp->TOP.axi_1_aw_brust}
    , axi_1_aw_len{vlSymsp->TOP.axi_1_aw_len}
    , axi_1_aw_size{vlSymsp->TOP.axi_1_aw_size}
    , axi_1_w_data{vlSymsp->TOP.axi_1_w_data}
    , axi_1_w_valid{vlSymsp->TOP.axi_1_w_valid}
    , axi_1_w_ready{vlSymsp->TOP.axi_1_w_ready}
    , axi_1_w_last{vlSymsp->TOP.axi_1_w_last}
    , axi_1_w_strb{vlSymsp->TOP.axi_1_w_strb}
    , axi_1_b_ready{vlSymsp->TOP.axi_1_b_ready}
    , axi_1_b_valid{vlSymsp->TOP.axi_1_b_valid}
    , axi_1_b_resp{vlSymsp->TOP.axi_1_b_resp}
    , axi_1_b_id{vlSymsp->TOP.axi_1_b_id}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtop::Vtop(const char* _vcname__)
    : Vtop(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);
QData Vtop___024root___change_request(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___final(Vtop___024root* vlSelf);

static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
        Vtop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lixinbao/ysyx-workbench/npc/vsrc/top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lixinbao/ysyx-workbench/npc/vsrc/top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtop::final() {
    Vtop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtop::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vtop___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
