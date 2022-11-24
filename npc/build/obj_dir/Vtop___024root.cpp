// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop___024unit____Vdpiimwrap_mem_write_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ data, IData/*31:0*/ &mem_write__Vfuncrtn);
void Vtop___024unit____Vdpiimwrap_reg_cpy_TOP____024unit(IData/*31:0*/ adder, IData/*31:0*/ a, IData/*31:0*/ b);
extern const VlUnpacked<VlWide<4>/*127:0*/, 4> Vtop__ConstPool__TABLE_a3cf4ec3_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_4de49e0a_0;
void Vtop___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ &mem_read__Vfuncrtn);
extern const VlUnpacked<CData/*6:0*/, 256> Vtop__ConstPool__TABLE_0a033294_0;
void Vtop___024unit____Vdpiimwrap_mem_skip_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ &mem_skip__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_4eab332a_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_0c1793d2_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_b959db56_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx8;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__stage1__DOT__regs__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__stage1__DOT__regs__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__stage1__DOT__regs__DOT__regs__v1;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__icache__DOT__cache0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__icache__DOT__cache0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__icache__DOT__cache1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__icache__DOT__cache1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__icache__DOT__cache2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__icache__DOT__cache2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__icache__DOT__cache3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__icache__DOT__cache3__DOT__ram__v0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0;
    CData/*6:0*/ __Vdlyvdim0__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dcache__DOT__cache0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dcache__DOT__cache0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dcache__DOT__cache1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dcache__DOT__cache1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dcache__DOT__cache2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dcache__DOT__cache2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__dcache__DOT__cache3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dcache__DOT__cache3__DOT__ram__v0;
    CData/*0:0*/ __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready;
    CData/*0:0*/ __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en;
    CData/*0:0*/ __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready;
    CData/*0:0*/ __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid;
    CData/*0:0*/ __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid;
    SData/*9:0*/ __Vtableidx4;
    SData/*9:0*/ __Vtableidx5;
    SData/*9:0*/ __Vtableidx6;
    SData/*9:0*/ __Vtableidx7;
    IData/*31:0*/ __Vtask_mem_write__3__Vfuncout;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0;
    VlWide<3>/*95:0*/ __Vtemp173;
    VlWide<3>/*95:0*/ __Vtemp174;
    VlWide<4>/*127:0*/ __Vtemp190;
    VlWide<3>/*95:0*/ __Vtemp192;
    VlWide<4>/*127:0*/ __Vtemp196;
    VlWide<4>/*127:0*/ __Vtemp197;
    VlWide<4>/*127:0*/ __Vtemp237;
    VlWide<4>/*127:0*/ __Vtemp238;
    VlWide<4>/*127:0*/ __Vtemp239;
    VlWide<4>/*127:0*/ __Vtemp240;
    VlWide<4>/*127:0*/ __Vtemp243;
    VlWide<4>/*127:0*/ __Vtemp244;
    VlWide<4>/*127:0*/ __Vtemp245;
    VlWide<4>/*127:0*/ __Vtemp246;
    VlWide<4>/*127:0*/ __Vtemp247;
    VlWide<4>/*127:0*/ __Vtemp251;
    VlWide<4>/*127:0*/ __Vtemp252;
    VlWide<4>/*127:0*/ __Vtemp253;
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<4>/*127:0*/ __Vtemp257;
    VlWide<4>/*127:0*/ __Vtemp258;
    VlWide<4>/*127:0*/ __Vtemp262;
    VlWide<4>/*127:0*/ __Vtemp263;
    VlWide<4>/*127:0*/ __Vtemp264;
    VlWide<4>/*127:0*/ __Vtemp265;
    VlWide<4>/*127:0*/ __Vtemp291;
    VlWide<4>/*127:0*/ __Vtemp292;
    VlWide<4>/*127:0*/ __Vtemp295;
    VlWide<4>/*127:0*/ __Vtemp296;
    VlWide<4>/*127:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp302;
    VlWide<4>/*127:0*/ __Vtemp305;
    VlWide<4>/*127:0*/ __Vtemp306;
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp314;
    VlWide<4>/*127:0*/ __Vtemp317;
    VlWide<4>/*127:0*/ __Vtemp318;
    VlWide<4>/*127:0*/ __Vtemp323;
    VlWide<4>/*127:0*/ __Vtemp324;
    VlWide<4>/*127:0*/ __Vtemp327;
    VlWide<4>/*127:0*/ __Vtemp335;
    VlWide<4>/*127:0*/ __Vtemp362;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp365;
    VlWide<3>/*95:0*/ __Vtemp367;
    VlWide<3>/*95:0*/ __Vtemp371;
    VlWide<3>/*95:0*/ __Vtemp373;
    VlWide<4>/*127:0*/ __Vtemp379;
    VlWide<4>/*127:0*/ __Vtemp381;
    VlWide<4>/*127:0*/ __Vtemp385;
    VlWide<4>/*127:0*/ __Vtemp387;
    VlWide<4>/*127:0*/ __Vtemp393;
    VlWide<4>/*127:0*/ __Vtemp395;
    QData/*63:0*/ __Vdlyvval__top__DOT__stage1__DOT__regs__DOT__regs__v0;
    QData/*54:0*/ __Vdlyvval__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0;
    QData/*54:0*/ __Vdlyvval__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0;
    QData/*54:0*/ __Vdlyvval__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0;
    QData/*54:0*/ __Vdlyvval__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0;
    QData/*63:0*/ __Vtemp189;
    // Body
    __Vdlyvset__top__DOT__icache__DOT__cache3__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__icache__DOT__cache2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__icache__DOT__cache1__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__icache__DOT__cache0__DOT__ram__v0 = 0U;
    __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready 
        = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready;
    __Vdlyvset__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0 = 0U;
    __Vdlyvset__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0 = 0U;
    __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en 
        = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en;
    __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready 
        = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready;
    __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid 
        = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid;
    __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid 
        = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid;
    __Vdlyvset__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0 = 0U;
    __Vdlyvset__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0 = 0U;
    __Vdlyvset__top__DOT__dcache__DOT__cache3__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__dcache__DOT__cache2__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__dcache__DOT__cache1__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__dcache__DOT__cache0__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__stage1__DOT__regs__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__stage1__DOT__regs__DOT__regs__v1 = 0U;
    if ((((((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready) 
            & (IData)(vlSelf->top__DOT__axi_3_w_valid)) 
           & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
          & (IData)(vlSelf->top__DOT__axi_3_aw_valid)) 
         & (IData)(vlSelf->clk))) {
        Vtop___024unit____Vdpiimwrap_mem_write_TOP____024unit(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awaddr, 4U, (QData)((IData)(vlSelf->top__DOT__axi_3_w_data)), __Vtask_mem_write__3__Vfuncout);
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x80U, vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__i)) {
            vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__data[(0x7fU 
                                                                  & vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__i)] = 0ULL;
            vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__i);
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x80U, vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__i)) {
            vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__data[(0x7fU 
                                                                  & vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__i)] = 0ULL;
            vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__i);
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x80U, vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__i)) {
            vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__data[(0x7fU 
                                                                  & vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__i)] = 0ULL;
            vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__i);
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x80U, vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__i)) {
            vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__data[(0x7fU 
                                                                  & vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__i)] = 0ULL;
            vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__i);
        }
    }
    if (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
         & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__dividend_r 
            = vlSelf->top__DOT__exu__DOT__alu_in1_w1;
    }
    if (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
         & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__divisor_r 
            = vlSelf->top__DOT__exu__DOT__alu_in2_w1;
    }
    if (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
         & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r 
            = (1U & ((IData)(vlSelf->top__DOT__alu_opcode) 
                     >> 6U));
    }
    if (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
         & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_signed_r 
            = (0x1cU == (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode)));
    }
    if ((1U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r 
            = ((2U & (((0x1cU != (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode))) 
                       | ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                           ? (((~ (IData)((vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                           >> 0x1fU))) 
                               & (~ (IData)((vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                             >> 0x1fU)))) 
                              | ((IData)((vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                          >> 0x1fU)) 
                                 & (~ (IData)((vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                               >> 0x1fU)))))
                           : (((~ (IData)((vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                           >> 0x3fU))) 
                               & (~ (IData)((vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                             >> 0x3fU)))) 
                              | ((IData)((vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                          >> 0x3fU)) 
                                 & (~ (IData)((vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                               >> 0x3fU))))))) 
                      << 1U)) | (1U & ((0x1cU != (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))) 
                                       | ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                           ? (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                        >> 0x1fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                          >> 0x1fU))) 
                                              | ((~ (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                             >> 0x1fU))) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                               >> 0x1fU)))))
                                           : (((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                        >> 0x3fU)) 
                                               & (IData)(
                                                         (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                          >> 0x3fU))) 
                                              | ((~ (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                             >> 0x3fU))) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                               >> 0x3fU)))))))));
    }
    if (VL_UNLIKELY((((IData)(vlSelf->top__DOT__icache_valid_o) 
                      & (0x100073U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                     & (1U != (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))))) {
        VL_WRITEF("reg a0 is %20# \n\n",64,vlSelf->top__DOT__stage1__DOT__regs__DOT__regs
                  [0xaU]);
        VL_FINISH_MT("/home/lixinbao/ysyx-workbench/npc/vsrc/first_stage.v", 321, "");
    }
    if ((((IData)(vlSelf->top__DOT__rd_w_o_exu) | (IData)(vlSelf->top__DOT__rd_w_o_lsu)) 
         | (IData)(vlSelf->top__DOT__rd_w_o_pri))) {
        Vtop___024unit____Vdpiimwrap_reg_cpy_TOP____024unit(
                                                            ((IData)(vlSelf->top__DOT__rd_w_o_exu)
                                                              ? (IData)(vlSelf->top__DOT__rdr_o_exu)
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                                               ? (IData)(vlSelf->top__DOT__rdr_o_lsu)
                                                               : (IData)(vlSelf->top__DOT__rdr_o_pri))), (IData)(
                                                                                (((IData)(vlSelf->top__DOT__rd_w_o_exu)
                                                                                 ? vlSelf->top__DOT__rd_o_exu
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                                                                 ? vlSelf->top__DOT__rd_o_lsu
                                                                                 : vlSelf->top__DOT__rd_o_pri)) 
                                                                                >> 0x20U)), (IData)(
                                                                                ((IData)(vlSelf->top__DOT__rd_w_o_exu)
                                                                                 ? vlSelf->top__DOT__rd_o_exu
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                                                                 ? vlSelf->top__DOT__rd_o_lsu
                                                                                 : vlSelf->top__DOT__rd_o_pri))));
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__stage_valid_1 = 0U;
    }
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__dcache__DOT__write_respone_fsm 
            = vlSelf->top__DOT__dcache__DOT__write_respone_fsm_next;
        vlSelf->top__DOT__icache__DOT__write_respone_fsm 
            = vlSelf->top__DOT__icache__DOT__write_respone_fsm_next;
    } else {
        vlSelf->top__DOT__dcache__DOT__write_respone_fsm = 0U;
        vlSelf->top__DOT__icache__DOT__write_respone_fsm = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__icache__DOT____Vcellinp__cache3__WEN)))) {
        __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[0U];
        __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[1U];
        __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[2U];
        __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[3U];
        __Vdlyvset__top__DOT__icache__DOT__cache3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__icache__DOT__cache3__DOT__ram__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__icache__DOT____Vcellinp__cache2__WEN)))) {
        __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[0U];
        __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[1U];
        __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[2U];
        __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[3U];
        __Vdlyvset__top__DOT__icache__DOT__cache2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__icache__DOT__cache2__DOT__ram__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__icache__DOT____Vcellinp__cache1__WEN)))) {
        __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[0U];
        __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[1U];
        __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[2U];
        __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[3U];
        __Vdlyvset__top__DOT__icache__DOT__cache1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__icache__DOT__cache1__DOT__ram__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr));
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__icache__DOT____Vcellinp__cache0__WEN)))) {
        __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0[0U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[0U];
        __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0[1U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[1U];
        __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0[2U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[2U];
        __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0[3U] 
            = vlSelf->top__DOT__icache__DOT__cache_in[3U];
        __Vdlyvset__top__DOT__icache__DOT__cache0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__icache__DOT__cache0__DOT__ram__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr));
    }
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__skip_2 = vlSelf->top__DOT__skip_1;
        vlSelf->skip = vlSelf->top__DOT__skip_1;
    } else {
        vlSelf->skip = 0U;
        vlSelf->top__DOT__skip_2 = 0U;
    }
    if (((IData)(vlSelf->top__DOT__dcache__DOT__read_fsm_next) 
         != (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm))) {
        __Vtemp173[1U] = (IData)(((((QData)((IData)(
                                                    vlSelf->top__DOT__dcache__DOT__read_line[2U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__dcache__DOT__read_line[1U]))) 
                                  >> 0x20U));
        vlSelf->top__DOT__dcache__DOT__read_line[0U] 
            = (IData)((((QData)((IData)(vlSelf->top__DOT__dcache__DOT__read_line[2U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__dcache__DOT__read_line[1U]))));
        vlSelf->top__DOT__dcache__DOT__read_line[1U] 
            = __Vtemp173[1U];
        vlSelf->top__DOT__dcache__DOT__read_line[2U] 
            = vlSelf->top__DOT__axi_1_r_data;
    }
    if (((IData)(vlSelf->top__DOT__icache__DOT__read_fsm_next) 
         != (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        __Vtemp174[1U] = (IData)(((((QData)((IData)(
                                                    vlSelf->top__DOT__icache__DOT__read_line[2U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__icache__DOT__read_line[1U]))) 
                                  >> 0x20U));
        vlSelf->top__DOT__icache__DOT__read_line[0U] 
            = (IData)((((QData)((IData)(vlSelf->top__DOT__icache__DOT__read_line[2U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top__DOT__icache__DOT__read_line[1U]))));
        vlSelf->top__DOT__icache__DOT__read_line[1U] 
            = __Vtemp174[1U];
        vlSelf->top__DOT__icache__DOT__read_line[2U] 
            = vlSelf->top__DOT__axi_0_r_data;
    }
    __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready 
        = ((IData)(vlSelf->rst_n) & ((((~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready)) 
                                       & (IData)(vlSelf->top__DOT__axi_3_w_valid)) 
                                      & (IData)(vlSelf->top__DOT__axi_3_aw_valid)) 
                                     & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en)));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__icache_valid) {
            vlSelf->top__DOT__icache__DOT__random = 
                (1U & (~ (IData)(vlSelf->top__DOT__icache__DOT__random)));
        }
    } else {
        vlSelf->top__DOT__icache__DOT__random = 0U;
    }
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__icache__DOT__cache_addr_r 
            = (3U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_addr) 
                     >> 6U));
        vlSelf->top__DOT__icache__DOT__tag_a_o1 = vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1;
        vlSelf->top__DOT__icache__DOT__write_fsm = vlSelf->top__DOT__icache__DOT__write_fsm_next;
        vlSelf->top__DOT__dcache__DOT__write_fsm = vlSelf->top__DOT__dcache__DOT__write_fsm_next;
    } else {
        vlSelf->top__DOT__icache__DOT__cache_addr_r = 0U;
        vlSelf->top__DOT__icache__DOT__tag_a_o1 = 0ULL;
        vlSelf->top__DOT__icache__DOT__write_fsm = 0U;
        vlSelf->top__DOT__dcache__DOT__write_fsm = 0U;
    }
    if (vlSelf->top__DOT__icache__DOT____Vcellinp__cache3__WEN) {
        vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[0U] 
            = vlSelf->top__DOT__icache__DOT__cache3__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][0U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[1U] 
            = vlSelf->top__DOT__icache__DOT__cache3__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][1U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[2U] 
            = vlSelf->top__DOT__icache__DOT__cache3__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][2U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[3U] 
            = vlSelf->top__DOT__icache__DOT__cache3__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][3U];
    } else {
        vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->top__DOT__icache__DOT____Vcellinp__cache2__WEN) {
        vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[0U] 
            = vlSelf->top__DOT__icache__DOT__cache2__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][0U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[1U] 
            = vlSelf->top__DOT__icache__DOT__cache2__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][1U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[2U] 
            = vlSelf->top__DOT__icache__DOT__cache2__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][2U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[3U] 
            = vlSelf->top__DOT__icache__DOT__cache2__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][3U];
    } else {
        vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->top__DOT__icache__DOT____Vcellinp__cache1__WEN) {
        vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[0U] 
            = vlSelf->top__DOT__icache__DOT__cache1__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][0U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[1U] 
            = vlSelf->top__DOT__icache__DOT__cache1__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][1U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[2U] 
            = vlSelf->top__DOT__icache__DOT__cache1__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][2U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[3U] 
            = vlSelf->top__DOT__icache__DOT__cache1__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][3U];
    } else {
        vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->top__DOT__icache__DOT____Vcellinp__cache0__WEN) {
        vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[0U] 
            = vlSelf->top__DOT__icache__DOT__cache0__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][0U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[1U] 
            = vlSelf->top__DOT__icache__DOT__cache0__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][1U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[2U] 
            = vlSelf->top__DOT__icache__DOT__cache0__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][2U];
        vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[3U] 
            = vlSelf->top__DOT__icache__DOT__cache0__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))][3U];
    } else {
        vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    vlSelf->top__DOT__peripheral__DOT__write_fsm = 
        ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__peripheral__DOT__write_fsm_next)
          : 0U);
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__icache__DOT__tag_arry_en) 
             & (~ (IData)(vlSelf->top__DOT__icache__DOT__tag_arry_sel)))) {
            __Vdlyvval__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0 
                = vlSelf->top__DOT__icache__DOT__tag_arry_data_in;
            __Vdlyvset__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0 = 1U;
            __Vdlyvdim0__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0 
                = vlSelf->top__DOT__icache__DOT__tag_arry_addr;
        }
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__icache__DOT__tag_arry_en) 
             & (IData)(vlSelf->top__DOT__icache__DOT__tag_arry_sel))) {
            __Vdlyvval__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0 
                = vlSelf->top__DOT__icache__DOT__tag_arry_data_in;
            __Vdlyvset__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0 = 1U;
            __Vdlyvdim0__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0 
                = vlSelf->top__DOT__icache__DOT__tag_arry_addr;
        }
    }
    vlSelf->top__DOT__icache__DOT__addr_r = ((IData)(vlSelf->rst_n)
                                              ? (0xfU 
                                                 & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                              : 0U);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__stage1__DOT__w = vlSelf->top__DOT__stage1__DOT__w_type;
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__func7 = (0x7fU & (IData)(
                                                       (vlSelf->top__DOT__icache__DOT__read_shift 
                                                        >> 0x19U)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__mret = (0x30200073U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__lsu_w = (0x23U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)));
        }
    } else {
        vlSelf->top__DOT__lsu_w = 0U;
    }
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
             & (IData)(vlSelf->top__DOT__icache__DOT__miss))) {
            vlSelf->top__DOT__icache__DOT__tag_ar = 
                (vlSelf->top__DOT__stage1__DOT__next_pc 
                 >> 0xbU);
        }
    } else {
        vlSelf->top__DOT__icache__DOT__tag_ar = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
             & (IData)(vlSelf->top__DOT__icache__DOT__miss))) {
            vlSelf->top__DOT__icache__DOT__index_ar 
                = (0x7fU & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                    >> 4U)));
        }
    } else {
        vlSelf->top__DOT__icache__DOT__index_ar = 0U;
    }
    vlSelf->top__DOT__pipe3_allowin = ((IData)(vlSelf->rst_n) 
                                       & (IData)(vlSelf->top__DOT__pipe3_allowin_lsu));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__dcache_valid) {
            vlSelf->top__DOT__dcache__DOT__random = 
                (1U & (~ (IData)(vlSelf->top__DOT__dcache__DOT__random)));
        }
    } else {
        vlSelf->top__DOT__dcache__DOT__random = 0U;
    }
    __Vtemp189 = ((IData)(vlSelf->rst_n) ? ((0x40U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                 ? 0ULL
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                  ? 0ULL
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                   ? 0ULL
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 0ULL
                                                      : 
                                                     ((0xfffffffffffffffeULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                             >> 0x1fU))))))))))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xfffffffffffffffcULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (2U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 1U)))))
                                                      : 
                                                     ((0xfffffffffffffff8ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (4U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 2U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xfffffffffffffff0ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (8U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 3U)))))
                                                      : 
                                                     ((0xffffffffffffffe0ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x10U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 4U)))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xffffffffffffffc0ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x20U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 5U)))))
                                                      : 
                                                     ((0xffffffffffffff80ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x40U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 6U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xffffffffffffff00ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x80U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 7U)))))
                                                      : 
                                                     ((0xfffffffffffffe00ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x100U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 8U))))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xfffffffffffffc00ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x200U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 9U)))))
                                                      : 
                                                     ((0xfffffffffffff800ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x400U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0xaU))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xfffffffffffff000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x800U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0xbU)))))
                                                      : 
                                                     ((0xffffffffffffe000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x1000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0xcU)))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xffffffffffffc000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x2000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0xdU)))))
                                                      : 
                                                     ((0xffffffffffff8000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x4000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0xeU))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xffffffffffff0000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x8000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0xfU)))))
                                                      : 
                                                     ((0xfffffffffffe0000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x10000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x10U)))))))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xfffffffffffc0000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x20000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x11U)))))
                                                      : 
                                                     ((0xfffffffffff80000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x40000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x12U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xfffffffffff00000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x80000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x13U)))))
                                                      : 
                                                     ((0xffffffffffe00000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x100000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x14U)))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xffffffffffc00000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x200000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x15U)))))
                                                      : 
                                                     ((0xffffffffff800000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x400000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x16U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xffffffffff000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x800000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x17U)))))
                                                      : 
                                                     ((0xfffffffffe000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x1000000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x18U))))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xfffffffffc000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x2000000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x19U)))))
                                                      : 
                                                     ((0xfffffffff8000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x4000000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x1aU))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xfffffffff0000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x8000000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x1bU)))))
                                                      : 
                                                     ((0xffffffffe0000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x10000000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x1cU)))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((0xffffffffc0000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x20000000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x1dU)))))
                                                      : 
                                                     ((0xffffffff80000000ULL 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (0x40000000U 
                                                                         & ((~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)) 
                                                                            << 0x1eU))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                        >> 0x20U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((~ 
                                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                           >> 0x1fU)) 
                                                                         << 0x1fU))))
                                                      : 
                                                     ((QData)((IData)(
                                                                      (((IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x21U)) 
                                                                        << 1U) 
                                                                       | (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU)))))) 
                                                      << 0x20U))))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x3fffffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x22U))))) 
                                                       << 0x22U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x21U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x1fffffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x23U))))) 
                                                       << 0x23U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x22U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0xfffffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x24U))))) 
                                                       << 0x24U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x23U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7ffffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x25U))))) 
                                                       << 0x25U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x24U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x3ffffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x26U))))) 
                                                       << 0x26U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x25U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x1ffffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x27U))))) 
                                                       << 0x27U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x26U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0xffffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x28U))))) 
                                                       << 0x28U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x27U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7fffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x29U))))) 
                                                       << 0x29U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x28U)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x3fffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x2aU))))) 
                                                       << 0x2aU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x29U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x1fffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x2bU))))) 
                                                       << 0x2bU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x2aU)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0xfffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x2cU))))) 
                                                       << 0x2cU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x2bU))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7ffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x2dU))))) 
                                                       << 0x2dU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x2cU))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x3ffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x2eU))))) 
                                                       << 0x2eU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x2dU))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x1ffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x2fU))))) 
                                                       << 0x2fU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x2eU)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x30U))))) 
                                                       << 0x30U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x2fU))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7fffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x31U))))) 
                                                       << 0x31U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x30U))))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x3fffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x32U))))) 
                                                       << 0x32U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x31U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x1fffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x33U))))) 
                                                       << 0x33U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x32U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0xfffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x34U))))) 
                                                       << 0x34U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x33U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7ffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x35U))))) 
                                                       << 0x35U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x34U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x3ffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x36U))))) 
                                                       << 0x36U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x35U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x1ffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x37U))))) 
                                                       << 0x37U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x36U)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x38U))))) 
                                                       << 0x38U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x37U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x7fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x39U))))) 
                                                       << 0x39U) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x38U)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0x3fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x3aU))))) 
                                                       << 0x3aU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x39U))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x3bU))))) 
                                                       << 0x3bU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x3aU)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (0xfU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x3cU))))) 
                                                       << 0x3cU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x3bU))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (7U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x3dU))))) 
                                                       << 0x3dU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x3cU))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (3U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x3eU))))) 
                                                       << 0x3eU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x3dU))
                                                      : 
                                                     (((QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
                                                                                >> 0x3fU))))) 
                                                       << 0x3fU) 
                                                      | ((QData)((IData)(
                                                                         (1U 
                                                                          & (~ 
                                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                              >> 0x1fU))))) 
                                                         << 0x3eU)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (1U 
                                                                       & (~ 
                                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                                                                           >> 0x1fU))))) 
                                                      << 0x3fU)
                                                      : 0ULL)))))))
                   : 0ULL);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans 
        = __Vtemp189;
    if (vlSelf->rst_n) {
        if (((((~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
               & (IData)(vlSelf->top__DOT__axi_3_aw_valid)) 
              & (IData)(vlSelf->top__DOT__axi_3_w_valid)) 
             & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en))) {
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 1U;
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en = 0U;
        } else if (((IData)(vlSelf->top__DOT__axi_3_b_ready) 
                    & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid))) {
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en = 1U;
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 0U;
        } else {
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 0U;
        }
    } else {
        __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 0U;
        __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en = 1U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__pri_en) & ((0x300U 
                                                   == (IData)(vlSelf->top__DOT__csr_addr)) 
                                                  & (IData)(vlSelf->top__DOT__csrr)))) {
            vlSelf->top__DOT__csr_reg__DOT__mstatus 
                = (((0x300U == (IData)(vlSelf->top__DOT__csr_addr)) 
                    & (IData)(vlSelf->top__DOT__csrr))
                    ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                    : 0ULL);
        }
    } else {
        vlSelf->top__DOT__csr_reg__DOT__mstatus = 0xa00001800ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__pri_en) & ((IData)(vlSelf->ecall) 
                                                  | ((0x342U 
                                                      == (IData)(vlSelf->top__DOT__csr_addr)) 
                                                     & (IData)(vlSelf->top__DOT__csrr))))) {
            vlSelf->top__DOT__csr_reg__DOT__mcause 
                = ((IData)(vlSelf->ecall) ? 0xbULL : 
                   (((0x342U == (IData)(vlSelf->top__DOT__csr_addr)) 
                     & (IData)(vlSelf->top__DOT__csrr))
                     ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                     : 0ULL));
        }
    } else {
        vlSelf->top__DOT__csr_reg__DOT__mcause = 0ULL;
    }
    vlSelf->top__DOT__dcache__DOT__tag_a_o1 = ((IData)(vlSelf->rst_n)
                                                ? vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1
                                                : 0ULL);
    if (vlSelf->rst_n) {
        if ((((((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready) 
                & (IData)(vlSelf->top__DOT__axi_3_aw_valid)) 
               & (~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid))) 
              & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready)) 
             & (IData)(vlSelf->top__DOT__axi_3_w_valid))) {
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid = 1U;
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid 
                = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awid;
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__axi_3_b_ready) 
                    & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid))) {
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid = 0U;
        vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready) 
              & (IData)(vlSelf->top__DOT__axi_3_ar_valid)) 
             & (~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid)))) {
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid = 1U;
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp = 0U;
        } else if (((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid) 
                    & ((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                       | ((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                          | ((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                             & (2U == (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm))))))) {
            __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid = 0U;
        }
    } else {
        __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid = 0U;
        vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp = 0U;
    }
    if (vlSelf->rst_n) {
        vlSelf->stop_n = vlSelf->top__DOT__stop_1;
        vlSelf->top__DOT__stop_2 = vlSelf->top__DOT__stop_1;
    } else {
        vlSelf->stop_n = 0U;
        vlSelf->top__DOT__stop_2 = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_en) 
             & (~ (IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_sel)))) {
            __Vdlyvval__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0 
                = vlSelf->top__DOT__dcache__DOT__tag_arry_data_in;
            __Vdlyvset__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0 = 1U;
            __Vdlyvdim0__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0 
                = vlSelf->top__DOT__dcache__DOT__tag_arry_addr;
        }
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_en) 
             & (IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_sel))) {
            __Vdlyvval__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0 
                = vlSelf->top__DOT__dcache__DOT__tag_arry_data_in;
            __Vdlyvset__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0 = 1U;
            __Vdlyvdim0__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0 
                = vlSelf->top__DOT__dcache__DOT__tag_arry_addr;
        }
    }
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
             & (IData)(vlSelf->top__DOT__dcache__DOT__miss))) {
            vlSelf->top__DOT__dcache__DOT__tag_ar = 
                (vlSelf->top__DOT__dcache_addr >> 0xbU);
        }
    } else {
        vlSelf->top__DOT__dcache__DOT__tag_ar = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
             & (IData)(vlSelf->top__DOT__dcache__DOT__miss))) {
            vlSelf->top__DOT__dcache__DOT__index_ar 
                = (0x7fU & (IData)((vlSelf->top__DOT__dcache_addr 
                                    >> 4U)));
        }
    } else {
        vlSelf->top__DOT__dcache__DOT__index_ar = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__alu_in1_sel = ((0x6fU 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                             | (0x63U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
        }
    }
    vlSelf->top__DOT__pc_dut4 = ((IData)(vlSelf->rst_n)
                                  ? vlSelf->top__DOT__pc_dut3
                                  : 0ULL);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__alu_in2_sel = (((((0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                                | (0x1bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                               | (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                             | (0x63U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
        }
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
             & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))) {
            VL_EXTEND_WQ(128,64, __Vtemp190, ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                               ? ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__alu_opcode)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                               >> 0x1fU)))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->top__DOT__exu__DOT__alu_in1_w1))
                                                    : vlSelf->top__DOT__exu__DOT__alu_in1_w1)
                                                   : vlSelf->top__DOT__exu__DOT__alu_in1_w1)
                                               : ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__alu_opcode)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                               >> 0x3fU)))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->top__DOT__exu__DOT__alu_in1_w1))
                                                    : vlSelf->top__DOT__exu__DOT__alu_in1_w1)
                                                   : vlSelf->top__DOT__exu__DOT__alu_in1_w1)));
            vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U] 
                = __Vtemp190[0U];
            vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U] 
                = __Vtemp190[1U];
            vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[2U] 
                = __Vtemp190[2U];
            vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[3U] 
                = __Vtemp190[3U];
        } else if ((1U & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
                             >> 0x1fU)))) {
            vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U] 
                = vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[0U];
            vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U] 
                = vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[1U];
            vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[2U] 
                = vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[2U];
            vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[3U] 
                = vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U];
        }
    } else {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U] = 0U;
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U] = 0U;
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[2U] = 0U;
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[3U] = 0U;
    }
    VL_EXTEND_WQ(65,64, __Vtemp192, ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                      ? ((0x1cU == 
                                          (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                            >> 0x1fU)))
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__exu__DOT__alu_in2_w1))
                                              : vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                          : vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                      : ((0x1cU == 
                                          (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                            >> 0x3fU)))
                                              ? (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__exu__DOT__alu_in2_w1))
                                              : vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                          : vlSelf->top__DOT__exu__DOT__alu_in2_w1)));
    __Vtemp196[0U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[1U] 
                       << 0x1fU) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[0U] 
                                    >> 1U));
    __Vtemp196[1U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[2U] 
                       << 0x1fU) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[1U] 
                                    >> 1U));
    __Vtemp196[2U] = ((vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[3U] 
                       << 0x1fU) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[2U] 
                                    >> 1U));
    __Vtemp196[3U] = (vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[3U] 
                      >> 1U);
    VL_EXTEND_WW(128,127, __Vtemp197, __Vtemp196);
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[0U] 
            = (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
                & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))
                ? 0U : __Vtemp197[0U]);
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[1U] 
            = (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
                & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))
                ? (__Vtemp192[0U] << 0x1fU) : __Vtemp197[1U]);
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[2U] 
            = (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
                & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))
                ? ((__Vtemp192[0U] >> 1U) | (__Vtemp192[1U] 
                                             << 0x1fU))
                : __Vtemp197[2U]);
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[3U] 
            = (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
                & (0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)))
                ? ((__Vtemp192[1U] >> 1U) | (__Vtemp192[2U] 
                                             << 0x1fU))
                : __Vtemp197[3U]);
    } else {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[0U] = 0U;
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[1U] = 0U;
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[2U] = 0U;
        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[3U] = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->jup) {
            vlSelf->top__DOT__jup_addr_c = ((IData)(vlSelf->top__DOT__jup_exu)
                                             ? (((IData)(vlSelf->top__DOT__b) 
                                                 | (IData)(vlSelf->top__DOT__jal))
                                                 ? 
                                                (vlSelf->top__DOT__pc_out 
                                                 + vlSelf->top__DOT__imm)
                                                 : 
                                                (vlSelf->top__DOT__lsu__DOT__rs1 
                                                 + vlSelf->top__DOT__imm))
                                             : ((IData)(vlSelf->ecall)
                                                 ? vlSelf->top__DOT__mtvec_wire
                                                 : vlSelf->top__DOT__csr_reg__DOT__mepc));
        }
    } else {
        vlSelf->top__DOT__jup_addr_c = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__rs1_addr = ((0x73U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift))
                                           ? 0x11U : 
                                          (0x1fU & (IData)(
                                                           (vlSelf->top__DOT__icache__DOT__read_shift 
                                                            >> 0xfU))));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__rs2_addr = (0x1fU & (IData)(
                                                          (vlSelf->top__DOT__icache__DOT__read_shift 
                                                           >> 0x14U)));
        }
    }
    vlSelf->top__DOT__lsu__DOT__func3_r = ((IData)(vlSelf->rst_n)
                                            ? (IData)(vlSelf->top__DOT__func3)
                                            : 0U);
    if (vlSelf->rst_n) {
        if ((((2U == (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm)) 
              & (IData)(vlSelf->top__DOT__axi_2_r_valid)) 
             | ((IData)(vlSelf->top__DOT__axi_2_w_ready) 
                & (IData)(vlSelf->top__DOT__axi_2_aw_ready)))) {
            vlSelf->top__DOT__data_read_o = ((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                              ? vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata
                                              : 0U);
        }
    }
    vlSelf->top__DOT__lsu__DOT__rd_sel1 = (1U & ((~ (IData)(vlSelf->rst_n)) 
                                                 | (0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__dcache_addr 
                                                                >> 0x1cU))))));
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__dcache__DOT__addr_r = (0xfU 
                                                 & (IData)(vlSelf->top__DOT__dcache_addr));
        vlSelf->top__DOT__dcache__DOT__cache_addr_r 
            = (3U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_addr) 
                     >> 6U));
    } else {
        vlSelf->top__DOT__dcache__DOT__addr_r = 0U;
        vlSelf->top__DOT__dcache__DOT__cache_addr_r = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                  | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                     >> 3U))))) {
        __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[0U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[0U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][0U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[0U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[1U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[1U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][1U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[1U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[2U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[2U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][2U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[2U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[3U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[3U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][3U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[3U])));
        __Vdlyvset__top__DOT__dcache__DOT__cache3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__dcache__DOT__cache3__DOT__ram__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
               | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                  >> 3U)))) {
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[0U] 
            = vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][0U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[1U] 
            = vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][1U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[2U] 
            = vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][2U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[3U] 
            = vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][3U];
    } else {
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                  | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                     >> 2U))))) {
        __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[0U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[0U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][0U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[0U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[1U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[1U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][1U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[1U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[2U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[2U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][2U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[2U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[3U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[3U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][3U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[3U])));
        __Vdlyvset__top__DOT__dcache__DOT__cache2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__dcache__DOT__cache2__DOT__ram__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
               | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                  >> 2U)))) {
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[0U] 
            = vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][0U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[1U] 
            = vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][1U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[2U] 
            = vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][2U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[3U] 
            = vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][3U];
    } else {
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                  | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                     >> 1U))))) {
        __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[0U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[0U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][0U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[0U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[1U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[1U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][1U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[1U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[2U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[2U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][2U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[2U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[3U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[3U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][3U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[3U])));
        __Vdlyvset__top__DOT__dcache__DOT__cache1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__dcache__DOT__cache1__DOT__ram__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
               | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                  >> 1U)))) {
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[0U] 
            = vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][0U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[1U] 
            = vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][1U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[2U] 
            = vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][2U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[3U] 
            = vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][3U];
    } else {
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                  | (IData)(vlSelf->top__DOT__dcache__DOT__cache_sel))))) {
        __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0[0U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[0U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[0U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][0U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[0U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0[1U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[1U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[1U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][1U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[1U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0[2U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[2U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[2U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][2U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[2U])));
        __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0[3U] 
            = ((vlSelf->top__DOT__dcache__DOT__cache_in[3U] 
                & vlSelf->top__DOT__dcache__DOT__cache_bwen[3U]) 
               | (vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram
                  [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][3U] 
                  & (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[3U])));
        __Vdlyvset__top__DOT__dcache__DOT__cache0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__dcache__DOT__cache0__DOT__ram__v0 
            = (0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
               | (IData)(vlSelf->top__DOT__dcache__DOT__cache_sel)))) {
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[0U] 
            = vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][0U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[1U] 
            = vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][1U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[2U] 
            = vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][2U];
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[3U] 
            = vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram
            [(0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))][3U];
    } else {
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->rst_n) {
        if ((((IData)(vlSelf->top__DOT__rd_w_o_exu) 
              | (IData)(vlSelf->top__DOT__rd_w_o_lsu)) 
             | (IData)(vlSelf->top__DOT__rd_w_o_pri))) {
            __Vdlyvval__top__DOT__stage1__DOT__regs__DOT__regs__v0 
                = ((IData)(vlSelf->top__DOT__rd_w_o_exu)
                    ? vlSelf->top__DOT__rd_o_exu : 
                   ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                     ? vlSelf->top__DOT__rd_o_lsu : vlSelf->top__DOT__rd_o_pri));
            __Vdlyvset__top__DOT__stage1__DOT__regs__DOT__regs__v0 = 1U;
            __Vdlyvdim0__top__DOT__stage1__DOT__regs__DOT__regs__v0 
                = ((IData)(vlSelf->top__DOT__rd_w_o_exu)
                    ? (IData)(vlSelf->top__DOT__rdr_o_exu)
                    : ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                        ? (IData)(vlSelf->top__DOT__rdr_o_lsu)
                        : (IData)(vlSelf->top__DOT__rdr_o_pri)));
        }
    } else {
        __Vdlyvset__top__DOT__stage1__DOT__regs__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__top__DOT__icache__DOT__cache3__DOT__ram__v0) {
        vlSelf->top__DOT__icache__DOT__cache3__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache3__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0[0U];
        vlSelf->top__DOT__icache__DOT__cache3__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache3__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0[1U];
        vlSelf->top__DOT__icache__DOT__cache3__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache3__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0[2U];
        vlSelf->top__DOT__icache__DOT__cache3__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache3__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__icache__DOT__cache2__DOT__ram__v0) {
        vlSelf->top__DOT__icache__DOT__cache2__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache2__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0[0U];
        vlSelf->top__DOT__icache__DOT__cache2__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache2__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0[1U];
        vlSelf->top__DOT__icache__DOT__cache2__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache2__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0[2U];
        vlSelf->top__DOT__icache__DOT__cache2__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache2__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__icache__DOT__cache1__DOT__ram__v0) {
        vlSelf->top__DOT__icache__DOT__cache1__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache1__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0[0U];
        vlSelf->top__DOT__icache__DOT__cache1__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache1__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0[1U];
        vlSelf->top__DOT__icache__DOT__cache1__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache1__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0[2U];
        vlSelf->top__DOT__icache__DOT__cache1__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache1__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__icache__DOT__cache0__DOT__ram__v0) {
        vlSelf->top__DOT__icache__DOT__cache0__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache0__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0[0U];
        vlSelf->top__DOT__icache__DOT__cache0__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache0__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0[1U];
        vlSelf->top__DOT__icache__DOT__cache0__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache0__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0[2U];
        vlSelf->top__DOT__icache__DOT__cache0__DOT__ram[__Vdlyvdim0__top__DOT__icache__DOT__cache0__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__icache__DOT__cache0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0) {
        vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__data[__Vdlyvdim0__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0] 
            = __Vdlyvval__top__DOT__icache__DOT__tag_arry_0__DOT__data__v0;
    }
    if (__Vdlyvset__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0) {
        vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__data[__Vdlyvdim0__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0] 
            = __Vdlyvval__top__DOT__icache__DOT__tag_arry_1__DOT__data__v0;
    }
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready 
        = __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid 
        = __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid 
        = __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid;
    if (__Vdlyvset__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0) {
        vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__data[__Vdlyvdim0__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0] 
            = __Vdlyvval__top__DOT__dcache__DOT__tag_arry_0__DOT__data__v0;
    }
    if (__Vdlyvset__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0) {
        vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__data[__Vdlyvdim0__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0] 
            = __Vdlyvval__top__DOT__dcache__DOT__tag_arry_1__DOT__data__v0;
    }
    if (__Vdlyvset__top__DOT__dcache__DOT__cache3__DOT__ram__v0) {
        vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache3__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0[0U];
        vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache3__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0[1U];
        vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache3__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0[2U];
        vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache3__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__dcache__DOT__cache2__DOT__ram__v0) {
        vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache2__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0[0U];
        vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache2__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0[1U];
        vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache2__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0[2U];
        vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache2__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__dcache__DOT__cache1__DOT__ram__v0) {
        vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache1__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0[0U];
        vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache1__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0[1U];
        vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache1__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0[2U];
        vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache1__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__dcache__DOT__cache0__DOT__ram__v0) {
        vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache0__DOT__ram__v0][0U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0[0U];
        vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache0__DOT__ram__v0][1U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0[1U];
        vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache0__DOT__ram__v0][2U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0[2U];
        vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram[__Vdlyvdim0__top__DOT__dcache__DOT__cache0__DOT__ram__v0][3U] 
            = __Vdlyvval__top__DOT__dcache__DOT__cache0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top__DOT__stage1__DOT__regs__DOT__regs__v0) {
        vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[__Vdlyvdim0__top__DOT__stage1__DOT__regs__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__stage1__DOT__regs__DOT__regs__v0;
    }
    if (__Vdlyvset__top__DOT__stage1__DOT__regs__DOT__regs__v1) {
        vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[0U] = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((((~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
               & (IData)(vlSelf->top__DOT__axi_3_aw_valid)) 
              & (IData)(vlSelf->top__DOT__axi_3_w_valid)) 
             & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en))) {
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awaddr 
                = vlSelf->top__DOT__axi_3_aw_addr;
        }
    } else {
        vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awaddr = 0ULL;
    }
    vlSelf->top__DOT__skip_1 = ((IData)(vlSelf->rst_n) 
                                & (IData)(vlSelf->top__DOT__skip_ref));
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__dcache__DOT__read_fsm = vlSelf->top__DOT__dcache__DOT__read_fsm_next;
        vlSelf->top__DOT__icache__DOT__read_fsm = vlSelf->top__DOT__icache__DOT__read_fsm_next;
    } else {
        vlSelf->top__DOT__dcache__DOT__read_fsm = 0U;
        vlSelf->top__DOT__icache__DOT__read_fsm = 0U;
    }
    vlSelf->top__DOT__axi_0_w_valid = ((((1U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)) 
                                         | (2U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))) 
                                        | (3U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))) 
                                       | (4U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)));
    vlSelf->top__DOT__axi_1_w_valid = ((((1U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm)) 
                                         | (2U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))) 
                                        | (3U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))) 
                                       | (4U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm)));
    vlSelf->top__DOT__icache__DOT__Q[3U][0U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[0U];
    vlSelf->top__DOT__icache__DOT__Q[3U][1U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[1U];
    vlSelf->top__DOT__icache__DOT__Q[3U][2U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[2U];
    vlSelf->top__DOT__icache__DOT__Q[3U][3U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[3U];
    vlSelf->top__DOT__icache__DOT__Q[2U][0U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[0U];
    vlSelf->top__DOT__icache__DOT__Q[2U][1U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[1U];
    vlSelf->top__DOT__icache__DOT__Q[2U][2U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[2U];
    vlSelf->top__DOT__icache__DOT__Q[2U][3U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[3U];
    vlSelf->top__DOT__icache__DOT__Q[1U][0U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[0U];
    vlSelf->top__DOT__icache__DOT__Q[1U][1U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[1U];
    vlSelf->top__DOT__icache__DOT__Q[1U][2U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[2U];
    vlSelf->top__DOT__icache__DOT__Q[1U][3U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[3U];
    vlSelf->top__DOT__icache__DOT__Q[0U][0U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[0U];
    vlSelf->top__DOT__icache__DOT__Q[0U][1U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[1U];
    vlSelf->top__DOT__icache__DOT__Q[0U][2U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[2U];
    vlSelf->top__DOT__icache__DOT__Q[0U][3U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[3U];
    vlSelf->top__DOT__icache__DOT__status = ((IData)(vlSelf->rst_n)
                                              ? (IData)(vlSelf->top__DOT__icache__DOT__next_status)
                                              : 0U);
    VL_EXTEND_WQ(128,64, __Vtemp237, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans);
    __Vtemp238[0U] = 1U;
    __Vtemp238[1U] = 0U;
    __Vtemp238[2U] = 0U;
    __Vtemp238[3U] = 0U;
    VL_EXTEND_WQ(128,64, __Vtemp239, (0xffffffff00000000ULL 
                                      | (QData)((IData)(
                                                        (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans))))));
    VL_ADD_W(4, __Vtemp240, __Vtemp238, __Vtemp239);
    VL_EXTEND_WQ(128,64, __Vtemp243, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans);
    __Vtemp244[0U] = 1U;
    __Vtemp244[1U] = 0U;
    __Vtemp244[2U] = 0U;
    __Vtemp244[3U] = 0U;
    VL_EXTEND_WQ(128,64, __Vtemp245, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans);
    __Vtemp246[0U] = (~ __Vtemp245[0U]);
    __Vtemp246[1U] = (~ __Vtemp245[1U]);
    __Vtemp246[2U] = (~ __Vtemp245[2U]);
    __Vtemp246[3U] = (~ __Vtemp245[3U]);
    VL_ADD_W(4, __Vtemp247, __Vtemp244, __Vtemp246);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__q_signed 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                              ? ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                  ? __Vtemp237[1U] : 
                                 __Vtemp240[1U]) : 
                             ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                               ? __Vtemp243[1U] : __Vtemp247[1U])))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                          ? ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                              ? __Vtemp237[0U]
                                              : __Vtemp240[0U])
                                          : ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                              ? __Vtemp243[0U]
                                              : __Vtemp247[0U])))));
    if (vlSelf->rst_n) {
        if (((((~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
               & (IData)(vlSelf->top__DOT__axi_3_aw_valid)) 
              & (IData)(vlSelf->top__DOT__axi_3_w_valid)) 
             & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en))) {
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awid 
                = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                    ? 1U : ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                             ? 1U : ((1U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                      ? 3U : 0U)));
        }
    }
    vlSelf->top__DOT__axi_3_b_ready = ((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)) 
                                       | ((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)) 
                                          | (3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid))));
    vlSelf->top__DOT__axi_2_b_valid = ((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid));
    vlSelf->top__DOT__stop_1 = ((IData)(vlSelf->rst_n) 
                                & (((((IData)(vlSelf->top__DOT__stall) 
                                      >> 2U) & (((IData)(vlSelf->top__DOT__lsu_en) 
                                                 | (IData)(vlSelf->top__DOT__pri_en)) 
                                                | (IData)(vlSelf->top__DOT__exu_en))) 
                                    & (IData)(vlSelf->top__DOT__pipe3_allowin_lsu)) 
                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d)));
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__dcache__DOT__status = vlSelf->top__DOT__dcache__DOT__next_status;
        vlSelf->top__DOT__pc_dut3 = vlSelf->top__DOT__pc_dut2;
    } else {
        vlSelf->top__DOT__dcache__DOT__status = 0U;
        vlSelf->top__DOT__pc_dut3 = 0ULL;
    }
    __Vtemp251[0U] = 1U;
    __Vtemp251[1U] = 0U;
    __Vtemp251[2U] = 0U;
    __Vtemp251[3U] = 0U;
    VL_EXTEND_WQ(128,64, __Vtemp252, (0xffffffff00000000ULL 
                                      | (QData)((IData)(
                                                        (~ 
                                                         vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U])))));
    VL_ADD_W(4, __Vtemp253, __Vtemp251, __Vtemp252);
    __Vtemp256[0U] = 1U;
    __Vtemp256[1U] = 0U;
    __Vtemp256[2U] = 0U;
    __Vtemp256[3U] = 0U;
    __Vtemp257[0U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U]);
    __Vtemp257[1U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U]);
    __Vtemp257[2U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[2U]);
    __Vtemp257[3U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[3U]);
    VL_ADD_W(4, __Vtemp258, __Vtemp256, __Vtemp257);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__r_signed 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                              ? ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                  ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U]
                                  : __Vtemp253[1U])
                              : ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                  ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U]
                                  : __Vtemp258[1U])))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                          ? ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                              ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U]
                                              : __Vtemp253[0U])
                                          : ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                              ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U]
                                              : __Vtemp258[0U])))));
    __Vtemp262[0U] = 1U;
    __Vtemp262[1U] = 0U;
    __Vtemp262[2U] = 0U;
    __Vtemp262[3U] = 0U;
    __Vtemp263[0U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[0U]);
    __Vtemp263[1U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[1U]);
    __Vtemp263[2U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[2U]);
    __Vtemp263[3U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[3U]);
    VL_ADD_W(4, __Vtemp264, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r, __Vtemp263);
    VL_ADD_W(4, __Vtemp265, __Vtemp262, __Vtemp264);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[0U] 
        = __Vtemp265[0U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[1U] 
        = __Vtemp265[1U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[2U] 
        = __Vtemp265[2U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
        = __Vtemp265[3U];
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__b = (0x63U == (0x7fU 
                                             & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)));
        }
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__pri_en) & ((0x305U 
                                                   == (IData)(vlSelf->top__DOT__csr_addr)) 
                                                  & (IData)(vlSelf->top__DOT__csrr)))) {
            vlSelf->top__DOT__mtvec_wire = (((0x305U 
                                              == (IData)(vlSelf->top__DOT__csr_addr)) 
                                             & (IData)(vlSelf->top__DOT__csrr))
                                             ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                                             : 0ULL);
        }
    } else {
        vlSelf->top__DOT__mtvec_wire = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__pri_en) & ((IData)(vlSelf->ecall) 
                                                  | ((0x341U 
                                                      == (IData)(vlSelf->top__DOT__csr_addr)) 
                                                     & (IData)(vlSelf->top__DOT__csrr))))) {
            vlSelf->top__DOT__csr_reg__DOT__mepc = 
                ((IData)(vlSelf->ecall) ? vlSelf->top__DOT__pc_out
                  : (((0x341U == (IData)(vlSelf->top__DOT__csr_addr)) 
                      & (IData)(vlSelf->top__DOT__csrr))
                      ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                      : 0ULL));
        }
    } else {
        vlSelf->top__DOT__csr_reg__DOT__mepc = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__func3 = (7U & (IData)(
                                                    (vlSelf->top__DOT__icache__DOT__read_shift 
                                                     >> 0xcU)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden) {
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata 
                = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__reg_data_out;
        }
    } else {
        vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata = 0U;
    }
    vlSelf->top__DOT__peripheral__DOT__read_fsm = ((IData)(vlSelf->rst_n)
                                                    ? (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm_next)
                                                    : 0U);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden) {
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid 
                = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arid;
        }
    }
    vlSelf->top__DOT__dcache__DOT__Q[3U][0U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[0U];
    vlSelf->top__DOT__dcache__DOT__Q[3U][1U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[1U];
    vlSelf->top__DOT__dcache__DOT__Q[3U][2U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[2U];
    vlSelf->top__DOT__dcache__DOT__Q[3U][3U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[3U];
    vlSelf->top__DOT__dcache__DOT__Q[2U][0U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[0U];
    vlSelf->top__DOT__dcache__DOT__Q[2U][1U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[1U];
    vlSelf->top__DOT__dcache__DOT__Q[2U][2U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[2U];
    vlSelf->top__DOT__dcache__DOT__Q[2U][3U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[3U];
    vlSelf->top__DOT__dcache__DOT__Q[1U][0U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[0U];
    vlSelf->top__DOT__dcache__DOT__Q[1U][1U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[1U];
    vlSelf->top__DOT__dcache__DOT__Q[1U][2U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[2U];
    vlSelf->top__DOT__dcache__DOT__Q[1U][3U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[3U];
    vlSelf->top__DOT__dcache__DOT__Q[0U][0U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[0U];
    vlSelf->top__DOT__dcache__DOT__Q[0U][1U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[1U];
    vlSelf->top__DOT__dcache__DOT__Q[0U][2U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[2U];
    vlSelf->top__DOT__dcache__DOT__Q[0U][3U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[3U];
    vlSelf->top__DOT__stage1__DOT__rs1_w = ((0U == (IData)(vlSelf->top__DOT__rs1_addr))
                                             ? 0ULL
                                             : vlSelf->top__DOT__stage1__DOT__regs__DOT__regs
                                            [vlSelf->top__DOT__rs1_addr]);
    vlSelf->top__DOT__stage1__DOT__rs2_w = ((0U == (IData)(vlSelf->top__DOT__rs2_addr))
                                             ? 0ULL
                                             : vlSelf->top__DOT__stage1__DOT__regs__DOT__regs
                                            [vlSelf->top__DOT__rs2_addr]);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__pri_en) {
            vlSelf->top__DOT__rd_o_pri = vlSelf->top__DOT__csr_reg__DOT__csrr_csr;
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d) {
            vlSelf->top__DOT__rd_w_o_exu = (((IData)(vlSelf->top__DOT__rd_w_en) 
                                             & (IData)(vlSelf->top__DOT____Vcellinp__exu__exu_en)) 
                                            & ((~ (
                                                   (((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__alu_opcode))) 
                                                     | (0x1dU 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->top__DOT__alu_opcode)))) 
                                                    | (0x1eU 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->top__DOT__alu_opcode)))) 
                                                   | (0x1fU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->top__DOT__alu_opcode))))) 
                                               | (0x41U 
                                                  == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))));
        }
    } else {
        vlSelf->top__DOT__rd_w_o_exu = vlSelf->top__DOT__rd_w_en;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d) {
            vlSelf->top__DOT__rd_o_exu = ((IData)(vlSelf->top__DOT__auipc)
                                           ? (vlSelf->top__DOT__imm 
                                              + vlSelf->top__DOT__pc_out)
                                           : ((IData)(vlSelf->top__DOT__lui)
                                               ? vlSelf->top__DOT__imm
                                               : (((IData)(vlSelf->top__DOT__jal) 
                                                   | (IData)(vlSelf->top__DOT__jalr))
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__pc_out)
                                                   : 
                                                  ((0x40U 
                                                    & (IData)(vlSelf->top__DOT__alu_opcode))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r)))
                                                    : vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r))));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d) {
            vlSelf->top__DOT__rdr_o_exu = vlSelf->top__DOT__rd_addr;
        }
    }
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__rdr_o_lsu = vlSelf->top__DOT__rd_addr;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__pri_en) {
            vlSelf->top__DOT__rdr_o_pri = vlSelf->top__DOT__rd_addr;
        }
    }
    vlSelf->top__DOT__rd_w_o_lsu = ((IData)(vlSelf->rst_n) 
                                    & (((IData)(vlSelf->top__DOT__rd_w_en) 
                                        & ((IData)(vlSelf->top__DOT__dcache_valid) 
                                           | (IData)(vlSelf->top__DOT__rw_valid_o))) 
                                       & (IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en)));
    vlSelf->top__DOT__rd_w_o_pri = ((IData)(vlSelf->rst_n) 
                                    & ((IData)(vlSelf->top__DOT__pri_en) 
                                       & (IData)(vlSelf->top__DOT__rd_w_en)));
    vlSelf->top__DOT__interconnect1__DOT__w_sel = ((IData)(vlSelf->top__DOT__axi_0_w_valid)
                                                    ? 4U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__axi_1_w_valid)
                                                     ? 2U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->top__DOT__peripheral__DOT__write_fsm))
                                                      ? 1U
                                                      : 0U)));
    if ((2U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))) {
        vlSelf->top__DOT__icache__DOT__cache_out[0U] 
            = ((1U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__icache__DOT__Q[3U][0U]
                : vlSelf->top__DOT__icache__DOT__Q[2U][0U]);
        vlSelf->top__DOT__icache__DOT__cache_out[1U] 
            = ((1U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__icache__DOT__Q[3U][1U]
                : vlSelf->top__DOT__icache__DOT__Q[2U][1U]);
        vlSelf->top__DOT__icache__DOT__cache_out[2U] 
            = ((1U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__icache__DOT__Q[3U][2U]
                : vlSelf->top__DOT__icache__DOT__Q[2U][2U]);
        vlSelf->top__DOT__icache__DOT__cache_out[3U] 
            = ((1U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__icache__DOT__Q[3U][3U]
                : vlSelf->top__DOT__icache__DOT__Q[2U][3U]);
    } else {
        vlSelf->top__DOT__icache__DOT__cache_out[0U] 
            = ((1U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__icache__DOT__Q[1U][0U]
                : vlSelf->top__DOT__icache__DOT__Q[0U][0U]);
        vlSelf->top__DOT__icache__DOT__cache_out[1U] 
            = ((1U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__icache__DOT__Q[1U][1U]
                : vlSelf->top__DOT__icache__DOT__Q[0U][1U]);
        vlSelf->top__DOT__icache__DOT__cache_out[2U] 
            = ((1U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__icache__DOT__Q[1U][2U]
                : vlSelf->top__DOT__icache__DOT__Q[0U][2U]);
        vlSelf->top__DOT__icache__DOT__cache_out[3U] 
            = ((1U & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__icache__DOT__Q[1U][3U]
                : vlSelf->top__DOT__icache__DOT__Q[0U][3U]);
    }
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en 
        = __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready 
        = __Vdly__top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready;
    if ((2U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))) {
        vlSelf->top__DOT__dcache__DOT__cache_out[0U] 
            = ((1U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__dcache__DOT__Q[3U][0U]
                : vlSelf->top__DOT__dcache__DOT__Q[2U][0U]);
        vlSelf->top__DOT__dcache__DOT__cache_out[1U] 
            = ((1U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__dcache__DOT__Q[3U][1U]
                : vlSelf->top__DOT__dcache__DOT__Q[2U][1U]);
        vlSelf->top__DOT__dcache__DOT__cache_out[2U] 
            = ((1U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__dcache__DOT__Q[3U][2U]
                : vlSelf->top__DOT__dcache__DOT__Q[2U][2U]);
        vlSelf->top__DOT__dcache__DOT__cache_out[3U] 
            = ((1U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__dcache__DOT__Q[3U][3U]
                : vlSelf->top__DOT__dcache__DOT__Q[2U][3U]);
    } else {
        vlSelf->top__DOT__dcache__DOT__cache_out[0U] 
            = ((1U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__dcache__DOT__Q[1U][0U]
                : vlSelf->top__DOT__dcache__DOT__Q[0U][0U]);
        vlSelf->top__DOT__dcache__DOT__cache_out[1U] 
            = ((1U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__dcache__DOT__Q[1U][1U]
                : vlSelf->top__DOT__dcache__DOT__Q[0U][1U]);
        vlSelf->top__DOT__dcache__DOT__cache_out[2U] 
            = ((1U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__dcache__DOT__Q[1U][2U]
                : vlSelf->top__DOT__dcache__DOT__Q[0U][2U]);
        vlSelf->top__DOT__dcache__DOT__cache_out[3U] 
            = ((1U & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr_r))
                ? vlSelf->top__DOT__dcache__DOT__Q[1U][3U]
                : vlSelf->top__DOT__dcache__DOT__Q[0U][3U]);
    }
    vlSelf->top__DOT__axi_3_w_valid = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                        ? (IData)(vlSelf->top__DOT__axi_0_w_valid)
                                        : ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                            ? (IData)(vlSelf->top__DOT__axi_1_w_valid)
                                            : ((1U 
                                                == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel)) 
                                               & (1U 
                                                  == (IData)(vlSelf->top__DOT__peripheral__DOT__write_fsm)))));
    vlSelf->top__DOT__axi_2_w_ready = ((1U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready));
    vlSelf->top__DOT__axi_0_w_ready = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready));
    vlSelf->top__DOT__axi_1_w_ready = ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready));
    vlSelf->top__DOT__axi_0_aw_valid = ((((8U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
                                          | (9U == (IData)(vlSelf->top__DOT__icache__DOT__status))) 
                                         | (0xaU == (IData)(vlSelf->top__DOT__icache__DOT__status))) 
                                        | (0xbU == (IData)(vlSelf->top__DOT__icache__DOT__status)));
    vlSelf->top__DOT__axi_0_ar_valid = ((((0x10U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
                                          | (0x11U 
                                             == (IData)(vlSelf->top__DOT__icache__DOT__status))) 
                                         | (0x12U == (IData)(vlSelf->top__DOT__icache__DOT__status))) 
                                        | (0x13U == (IData)(vlSelf->top__DOT__icache__DOT__status)));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__exu_en = ((((((((IData)(vlSelf->top__DOT__stage1__DOT__i_type) 
                                              | (IData)(vlSelf->top__DOT__stage1__DOT__r_type)) 
                                             | (0x63U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                            | (0x6fU 
                                               == (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                           | (0x67U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                          | (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__u_type)) 
                                         & (1U != (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))) 
                                        & (IData)(vlSelf->top__DOT__icache_valid_o));
        }
    } else {
        vlSelf->top__DOT__exu_en = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__lsu_en = ((((3U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                          | (0x23U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                         & (1U != (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))) 
                                        & (IData)(vlSelf->top__DOT__icache_valid_o));
        }
    } else {
        vlSelf->top__DOT__lsu_en = 0U;
    }
    vlSelf->top__DOT__axi_1_aw_valid = ((((8U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
                                          | (9U == (IData)(vlSelf->top__DOT__dcache__DOT__status))) 
                                         | (0xaU == (IData)(vlSelf->top__DOT__dcache__DOT__status))) 
                                        | (0xbU == (IData)(vlSelf->top__DOT__dcache__DOT__status)));
    vlSelf->top__DOT__axi_1_ar_valid = ((((0x10U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
                                          | (0x11U 
                                             == (IData)(vlSelf->top__DOT__dcache__DOT__status))) 
                                         | (0x12U == (IData)(vlSelf->top__DOT__dcache__DOT__status))) 
                                        | (0x13U == (IData)(vlSelf->top__DOT__dcache__DOT__status)));
    vlSelf->top__DOT__pc_dut2 = ((IData)(vlSelf->rst_n)
                                  ? vlSelf->top__DOT__pc_dut1
                                  : 0ULL);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__csrr = vlSelf->top__DOT__stage1__DOT__csrr_wire;
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__csr_addr = (0xfffU & (IData)(
                                                           (vlSelf->top__DOT__icache__DOT__read_shift 
                                                            >> 0x14U)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->ecall = (0x73U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift));
        }
    }
    __Vtableidx8 = (3U & (IData)(vlSelf->top__DOT__func3));
    vlSelf->top__DOT__dcache__DOT__mask[0U] = Vtop__ConstPool__TABLE_a3cf4ec3_0
        [__Vtableidx8][0U];
    vlSelf->top__DOT__dcache__DOT__mask[1U] = Vtop__ConstPool__TABLE_a3cf4ec3_0
        [__Vtableidx8][1U];
    vlSelf->top__DOT__dcache__DOT__mask[2U] = Vtop__ConstPool__TABLE_a3cf4ec3_0
        [__Vtableidx8][2U];
    vlSelf->top__DOT__dcache__DOT__mask[3U] = Vtop__ConstPool__TABLE_a3cf4ec3_0
        [__Vtableidx8][3U];
    if (vlSelf->rst_n) {
        if (((~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready)) 
             & (IData)(vlSelf->top__DOT__axi_3_ar_valid))) {
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready = 1U;
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr 
                = vlSelf->top__DOT__axi_3_ar_addr;
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arid 
                = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                    ? 1U : ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                             ? 2U : ((1U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                      ? 3U : 0U)));
        } else {
            vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready = 0U;
        }
    } else {
        vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready = 0U;
        vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr = 0ULL;
    }
    vlSelf->top__DOT__axi_0_r_data = ((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                       ? vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata
                                       : 0U);
    if ((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))) {
        vlSelf->top__DOT__axi_1_r_data = vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata;
        vlSelf->top__DOT__axi_1_r_valid = ((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid) 
                                           & 1U);
    } else {
        vlSelf->top__DOT__axi_1_r_data = 0U;
        vlSelf->top__DOT__axi_1_r_valid = 0U;
    }
    vlSelf->top__DOT__axi_0_r_valid = ((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid));
    vlSelf->top__DOT__axi_2_r_valid = ((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid));
    vlSelf->top__DOT__dcache__DOT__read_shift = ((8U 
                                                  & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                     ? (QData)((IData)(
                                                                       (vlSelf->top__DOT__dcache__DOT__cache_out[3U] 
                                                                        >> 0x18U)))
                                                     : (QData)((IData)(
                                                                       (vlSelf->top__DOT__dcache__DOT__cache_out[3U] 
                                                                        >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                     ? (QData)((IData)(
                                                                       (vlSelf->top__DOT__dcache__DOT__cache_out[3U] 
                                                                        >> 8U)))
                                                     : (QData)((IData)(
                                                                       vlSelf->top__DOT__dcache__DOT__cache_out[3U]))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                     ? 
                                                    (0xffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[3U])) 
                                                         << 8U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                           >> 0x18U)))
                                                     : 
                                                    (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[3U])) 
                                                         << 0x10U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                     ? 
                                                    (0xffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[3U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                           >> 8U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__dcache__DOT__cache_out[2U]))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[3U])) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                         << 8U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[1U])) 
                                                           >> 0x18U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[3U])) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                         << 0x10U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[1U])) 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[3U])) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[1U])) 
                                                           >> 8U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__dcache__DOT__cache_out[1U])))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[1U])) 
                                                         << 8U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[0U])) 
                                                           >> 0x18U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[1U])) 
                                                         << 0x10U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[0U])) 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__addr_r))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[2U])) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__dcache__DOT__cache_out[1U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__dcache__DOT__cache_out[0U])) 
                                                           >> 8U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__dcache__DOT__cache_out[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__dcache__DOT__cache_out[0U])))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm_next)
            : 0U);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__auipc = (0x17U == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__lui = (0x37U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__jalr = (0x67U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__jal = (0x6fU == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__imm = ((8U & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                      ? 0ULL : ((4U 
                                                 & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                                   ? 0ULL
                                                   : (QData)((IData)(
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode__DOT__ext_imm_iljalr)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__icache__DOT__read_shift 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(
                                                                              (vlSelf->top__DOT__icache__DOT__read_shift 
                                                                               >> 0xcU)) 
                                                                      << 0xcU))))
                                                   : 
                                                  ((((0x80000U 
                                                      & vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_jal)
                                                      ? 0x7ffffffffffULL
                                                      : 0ULL) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_jal 
                                                                      << 1U))))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                                   ? 
                                                  ((((0x800U 
                                                      & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_b))
                                                      ? 0x7ffffffffffffULL
                                                      : 0ULL) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_b) 
                                                                      << 1U))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_s) 
                                                                           >> 0xbU))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_s))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                                   ? vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode__DOT__ext_imm_iljalr
                                                   : 0ULL))));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__alu_opcode = ((0x17U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))
                                             ? 0x20U
                                             : (((IData)(vlSelf->top__DOT__stage1__DOT__w_type) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->top__DOT__stage1__DOT__i_type) 
                                                    << 5U) 
                                                   | (((((IData)(
                                                                 (0x40000033ULL 
                                                                  == 
                                                                  (0xfe00707fULL 
                                                                   & vlSelf->top__DOT__icache__DOT__read_shift))) 
                                                         | (IData)(
                                                                   (0x4000003bULL 
                                                                    == 
                                                                    (0xfe00707fULL 
                                                                     & vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                                        | (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__m)) 
                                                       << 4U) 
                                                      | (((((IData)(
                                                                    (0x40005000ULL 
                                                                     == 
                                                                     (0xfc007000ULL 
                                                                      & vlSelf->top__DOT__icache__DOT__read_shift))) 
                                                            & ((((0x33U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                                                 | (0x3bU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                                                | (0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                                               | (0x1bU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))))) 
                                                           | (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__m)) 
                                                          << 3U) 
                                                         | (7U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__icache__DOT__read_shift 
                                                                       >> 0xcU))))))));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__rd_addr = (0x1fU & (IData)(
                                                         (vlSelf->top__DOT__icache__DOT__read_shift 
                                                          >> 7U)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__rd_w_en = (((((((((IData)(vlSelf->top__DOT__stage1__DOT__i_type) 
                                                | (IData)(vlSelf->top__DOT__stage1__DOT__r_type)) 
                                               | (3U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                             | (0x67U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                            | (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__u_type)) 
                                           | (IData)(vlSelf->top__DOT__stage1__DOT__w_type)) 
                                          | (IData)(vlSelf->top__DOT__stage1__DOT__csrr_wire)) 
                                         & (1U != (IData)(vlSelf->top__DOT__ctl1__DOT__fsm)));
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__pri_en = (((((0x73U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift)) 
                                           | (0x30200073U 
                                              == (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                          | (IData)(vlSelf->top__DOT__stage1__DOT__csrr_wire)) 
                                         & (1U != (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))) 
                                        & (IData)(vlSelf->top__DOT__icache_valid_o));
        }
    } else {
        vlSelf->top__DOT__pri_en = 0U;
    }
    vlSelf->top__DOT__rdr_second_stage = ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                           ? (IData)(vlSelf->top__DOT__rdr_o_lsu)
                                           : ((IData)(vlSelf->top__DOT__rd_w_o_pri)
                                               ? (IData)(vlSelf->top__DOT__rdr_o_pri)
                                               : (IData)(vlSelf->top__DOT__rdr_o_exu)));
    __Vtableidx4 = (((IData)(vlSelf->top__DOT__icache__DOT__status) 
                     << 5U) | (((IData)(vlSelf->top__DOT__axi_0_w_ready) 
                                << 4U) | (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)));
    vlSelf->top__DOT__icache__DOT__write_fsm_next = 
        Vtop__ConstPool__TABLE_4de49e0a_0[__Vtableidx4];
    __Vtableidx6 = (((IData)(vlSelf->top__DOT__dcache__DOT__status) 
                     << 5U) | (((IData)(vlSelf->top__DOT__axi_1_w_ready) 
                                << 4U) | (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm)));
    vlSelf->top__DOT__dcache__DOT__write_fsm_next = 
        Vtop__ConstPool__TABLE_4de49e0a_0[__Vtableidx6];
    vlSelf->top__DOT__interconnect1__DOT__aw_sel = 
        ((IData)(vlSelf->top__DOT__axi_0_aw_valid) ? 4U
          : ((IData)(vlSelf->top__DOT__axi_1_aw_valid)
              ? 2U : ((1U == (IData)(vlSelf->top__DOT__peripheral__DOT__write_fsm))
                       ? 1U : 0U)));
    vlSelf->top__DOT__interconnect1__DOT__ar_sel = 
        ((IData)(vlSelf->top__DOT__axi_0_ar_valid) ? 4U
          : ((IData)(vlSelf->top__DOT__axi_1_ar_valid)
              ? 2U : ((1U == (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm))
                       ? 1U : 0U)));
    vlSelf->top__DOT__icache__DOT__tag_arry_en = ((
                                                   (4U 
                                                    == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)) 
                                                   & (IData)(vlSelf->top__DOT__axi_0_w_ready)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm)) 
                                                     & (IData)(vlSelf->top__DOT__axi_0_r_valid)));
    if (((4U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm)) 
         & (IData)(vlSelf->top__DOT__axi_0_r_valid))) {
        vlSelf->top__DOT__icache__DOT__cache_in[0U] 
            = vlSelf->top__DOT__icache__DOT__read_line[0U];
        vlSelf->top__DOT__icache__DOT__cache_in[1U] 
            = vlSelf->top__DOT__icache__DOT__read_line[1U];
        vlSelf->top__DOT__icache__DOT__cache_in[2U] 
            = vlSelf->top__DOT__icache__DOT__read_line[2U];
        vlSelf->top__DOT__icache__DOT__cache_in[3U] 
            = vlSelf->top__DOT__axi_0_r_data;
    } else {
        vlSelf->top__DOT__icache__DOT__cache_in[0U] = 0U;
        vlSelf->top__DOT__icache__DOT__cache_in[1U] = 0U;
        vlSelf->top__DOT__icache__DOT__cache_in[2U] = 0U;
        vlSelf->top__DOT__icache__DOT__cache_in[3U] = 0U;
    }
    vlSelf->top__DOT__icache__DOT__cache_wen = (1U 
                                                & (~ 
                                                   ((4U 
                                                     == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm)) 
                                                    & (IData)(vlSelf->top__DOT__axi_0_r_valid))));
    vlSelf->top__DOT__rw_valid_o = ((IData)(vlSelf->top__DOT__axi_2_b_valid) 
                                    | (IData)(vlSelf->top__DOT__axi_2_r_valid));
    vlSelf->top__DOT__lsu__DOT__load_ext_in = ((IData)(vlSelf->top__DOT__lsu__DOT__rd_sel1)
                                                ? (QData)((IData)(vlSelf->top__DOT__data_read_o))
                                                : vlSelf->top__DOT__dcache__DOT__read_shift);
    vlSelf->top__DOT__icache__DOT__read_shift = ((8U 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                     ? (QData)((IData)(
                                                                       (vlSelf->top__DOT__icache__DOT__cache_out[3U] 
                                                                        >> 0x18U)))
                                                     : (QData)((IData)(
                                                                       (vlSelf->top__DOT__icache__DOT__cache_out[3U] 
                                                                        >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                     ? (QData)((IData)(
                                                                       (vlSelf->top__DOT__icache__DOT__cache_out[3U] 
                                                                        >> 8U)))
                                                     : (QData)((IData)(
                                                                       vlSelf->top__DOT__icache__DOT__cache_out[3U]))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                     ? 
                                                    (0xffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[3U])) 
                                                         << 8U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                           >> 0x18U)))
                                                     : 
                                                    (0xffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[3U])) 
                                                         << 0x10U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                     ? 
                                                    (0xffffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[3U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                           >> 8U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__icache__DOT__cache_out[2U]))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[3U])) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                         << 8U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[1U])) 
                                                           >> 0x18U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[3U])) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                         << 0x10U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[1U])) 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[3U])) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[1U])) 
                                                           >> 8U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__icache__DOT__cache_out[1U])))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[1U])) 
                                                         << 8U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[0U])) 
                                                           >> 0x18U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[1U])) 
                                                         << 0x10U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[0U])) 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__addr_r))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[2U])) 
                                                      << 0x38U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->top__DOT__icache__DOT__cache_out[1U])) 
                                                         << 0x18U) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->top__DOT__icache__DOT__cache_out[0U])) 
                                                           >> 8U)))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__icache__DOT__cache_out[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__icache__DOT__cache_out[0U])))))));
    vlSelf->top__DOT__rs1_sel = (((IData)(vlSelf->top__DOT__rdr_second_stage) 
                                  == (IData)(vlSelf->top__DOT__rs1_addr)) 
                                 & (((IData)(vlSelf->top__DOT__rd_w_o_lsu) 
                                     | (IData)(vlSelf->top__DOT__rd_w_o_exu)) 
                                    | (IData)(vlSelf->top__DOT__rd_w_o_pri)));
    vlSelf->top__DOT__rs2_sel = (((IData)(vlSelf->top__DOT__rdr_second_stage) 
                                  == (IData)(vlSelf->top__DOT__rs2_addr)) 
                                 & (((IData)(vlSelf->top__DOT__rd_w_o_lsu) 
                                     | (IData)(vlSelf->top__DOT__rd_w_o_exu)) 
                                    | (IData)(vlSelf->top__DOT__rd_w_o_pri)));
    vlSelf->top__DOT__axi_3_aw_valid = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                         ? (IData)(vlSelf->top__DOT__axi_0_aw_valid)
                                         : ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                             ? (IData)(vlSelf->top__DOT__axi_1_aw_valid)
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel)) 
                                                & (1U 
                                                   == (IData)(vlSelf->top__DOT__peripheral__DOT__write_fsm)))));
    vlSelf->top__DOT__axi_2_aw_ready = ((1U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel)) 
                                        & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready));
    vlSelf->top__DOT__axi_0_aw_ready = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel)) 
                                        & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready));
    vlSelf->top__DOT__axi_1_aw_ready = ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel)) 
                                        & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready));
    vlSelf->pc_dut = vlSelf->top__DOT__pc_dut2;
    vlSelf->top__DOT__pc_dut1 = ((IData)(vlSelf->rst_n)
                                  ? vlSelf->top__DOT__pc_out
                                  : 0ULL);
    vlSelf->top__DOT__csr_reg__DOT__csrr_csr = ((0x342U 
                                                 == (IData)(vlSelf->top__DOT__csr_addr))
                                                 ? 0xbULL
                                                 : 
                                                ((0x300U 
                                                  == (IData)(vlSelf->top__DOT__csr_addr))
                                                  ? vlSelf->top__DOT__csr_reg__DOT__mstatus
                                                  : 
                                                 ((0x341U 
                                                   == (IData)(vlSelf->top__DOT__csr_addr))
                                                   ? vlSelf->top__DOT__csr_reg__DOT__mepc
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->top__DOT__csr_addr))
                                                    ? vlSelf->top__DOT__mtvec_wire
                                                    : 0ULL))));
    Vtop___024unit____Vdpiimwrap_mem_read_TOP____024unit(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr, 4U, vlSelf->__Vfunc_mem_read__2__Vfuncout);
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__reg_data_out 
        = (IData)(vlSelf->__Vfunc_mem_read__2__Vfuncout);
    if ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))) {
        vlSelf->top__DOT__axi_3_ar_valid = vlSelf->top__DOT__axi_0_ar_valid;
        vlSelf->top__DOT__axi_0_ar_ready = ((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready) 
                                            & 1U);
    } else {
        vlSelf->top__DOT__axi_3_ar_valid = ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                             ? (IData)(vlSelf->top__DOT__axi_1_ar_valid)
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel)) 
                                                & (1U 
                                                   == (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm))));
        vlSelf->top__DOT__axi_0_ar_ready = 0U;
    }
    vlSelf->top__DOT__axi_1_ar_ready = ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel)) 
                                        & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready));
    vlSelf->top__DOT__rd_o_lsu = ((4U & (IData)(vlSelf->top__DOT__lsu__DOT__func3_r))
                                   ? ((2U & (IData)(vlSelf->top__DOT__lsu__DOT__func3_r))
                                       ? ((1U & (IData)(vlSelf->top__DOT__lsu__DOT__func3_r))
                                           ? 0ULL : (QData)((IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in)))
                                       : ((1U & (IData)(vlSelf->top__DOT__lsu__DOT__func3_r))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in))))
                                           : (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in))))))
                                   : ((2U & (IData)(vlSelf->top__DOT__lsu__DOT__func3_r))
                                       ? ((1U & (IData)(vlSelf->top__DOT__lsu__DOT__func3_r))
                                           ? vlSelf->top__DOT__lsu__DOT__load_ext_in
                                           : (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__lsu__DOT__load_ext_in 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in))))
                                       : ((1U & (IData)(vlSelf->top__DOT__lsu__DOT__func3_r))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__lsu__DOT__load_ext_in 
                                                                              >> 0xfU)))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in)))))
                                           : (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__lsu__DOT__load_ext_in 
                                                                              >> 7U)))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in))))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid 
        = ((3U == (3U & ((IData)(vlSelf->top__DOT__alu_opcode) 
                         >> 3U))) & ((((0x1cU == (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))) 
                                       | (0x1dU == 
                                          (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode)))) 
                                      | (0x1eU == (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__alu_opcode)))) 
                                     | (0x1fU == (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d 
        = (((0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)) 
            & (~ ((((0x1cU == (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode))) 
                    | (0x1dU == (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode)))) 
                   | (0x1eU == (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode)))) 
                  | (0x1fU == (0x1fU & (IData)(vlSelf->top__DOT__alu_opcode)))))) 
           | (0x41U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm)));
    vlSelf->top__DOT__stage1__DOT__w_type = ((0x3bU 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                             | (0x1bU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
    vlSelf->top__DOT__stage1__DOT__r_type = ((0x33U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                             | (0x3bU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
    vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_jal 
        = ((0x80000U & ((IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                                 >> 0x1fU)) << 0x13U)) 
           | ((0x7f800U & ((IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                                    >> 0xcU)) << 0xbU)) 
              | ((0x400U & ((IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                                     >> 0x14U)) << 0xaU)) 
                 | (0x3ffU & (IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                                      >> 0x15U))))));
    vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_b 
        = ((0x800U & ((IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                               >> 0x1fU)) << 0xbU)) 
           | ((0x400U & ((IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                                  >> 7U)) << 0xaU)) 
              | ((0x3f0U & ((IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                                     >> 0x19U)) << 4U)) 
                 | (0xfU & (IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                                    >> 8U))))));
    vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_s 
        = ((0xfe0U & ((IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                               >> 0x19U)) << 5U)) | 
           (0x1fU & (IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                             >> 7U))));
    vlSelf->top__DOT__stage1__DOT__csrr_wire = ((0x73U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                                & (0U 
                                                   != 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__icache__DOT__read_shift 
                                                               >> 0xcU)))));
    vlSelf->top__DOT__stage1__DOT__decode__DOT__m = 
        ((IData)((0x2000033ULL == (0xfe00007fULL & vlSelf->top__DOT__icache__DOT__read_shift))) 
         | (IData)((0x200003bULL == (0xfe00007fULL 
                                     & vlSelf->top__DOT__icache__DOT__read_shift))));
    vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode__DOT__ext_imm_iljalr 
        = (((- (QData)((IData)((1U & (IData)((vlSelf->top__DOT__icache__DOT__read_shift 
                                              >> 0x1fU)))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(
                                                         (vlSelf->top__DOT__icache__DOT__read_shift 
                                                          >> 0x14U))))));
    vlSelf->top__DOT__stage1__DOT__i_type = ((0x13U 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                             | (0x1bU 
                                                == 
                                                (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
    vlSelf->top__DOT__stage1__DOT__decode__DOT__u_type 
        = ((0x17U == (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
           | (0x37U == (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__icache_valid_o = vlSelf->top__DOT__icache_valid;
        }
    } else {
        vlSelf->top__DOT__icache_valid_o = 0U;
    }
    vlSelf->top__DOT__ctl1__DOT__fsm = ((IData)(vlSelf->rst_n)
                                         ? (IData)(vlSelf->top__DOT__ctl1__DOT__fsm_next)
                                         : 0U);
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden 
        = (((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready) 
            & (IData)(vlSelf->top__DOT__axi_3_ar_valid)) 
           & (~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid)));
    vlSelf->top__DOT__rd_second_stage = ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                          ? vlSelf->top__DOT__rd_o_lsu
                                          : ((IData)(vlSelf->top__DOT__rd_w_o_pri)
                                              ? vlSelf->top__DOT__rd_o_pri
                                              : vlSelf->top__DOT__rd_o_exu));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
                     << 7U) | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm_next 
        = Vtop__ConstPool__TABLE_0a033294_0[__Vtableidx1];
    vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel 
        = ((((IData)(vlSelf->top__DOT__stage1__DOT__i_type) 
             | (3U == (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
            | (0x67U == (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))))
            ? 1U : ((0x23U == (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))
                     ? 2U : ((0x63U == (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))
                              ? 3U : ((0x6fU == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))
                                       ? 4U : ((IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__u_type)
                                                ? 5U
                                                : 0U)))));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) {
            vlSelf->top__DOT__pc_out = vlSelf->top__DOT__pc;
        }
    }
    vlSelf->top__DOT__lsu__DOT__rs2 = ((IData)(vlSelf->top__DOT__rs2_sel)
                                        ? vlSelf->top__DOT__rd_second_stage
                                        : vlSelf->top__DOT__stage1__DOT__rs2_w);
    vlSelf->top__DOT__lsu__DOT__rs1 = ((IData)(vlSelf->top__DOT__rs1_sel)
                                        ? vlSelf->top__DOT__rd_second_stage
                                        : vlSelf->top__DOT__stage1__DOT__rs1_w);
    vlSelf->top__DOT__exu__DOT__rs2 = ((IData)(vlSelf->top__DOT__rs2_sel)
                                        ? vlSelf->top__DOT__rd_second_stage
                                        : vlSelf->top__DOT__stage1__DOT__rs2_w);
    vlSelf->top__DOT__stall = ((0U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                ? 0xfU : ((1U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                           ? 0xbU : 
                                          ((2U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                            ? 0xcU : 0xfU)));
    vlSelf->top__DOT__axi_3_w_data = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                       ? ((8U & (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                           ? 0U : (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                                      ? 0U
                                                      : 
                                                     vlSelf->top__DOT__icache__DOT__cache_out[3U]))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                                      ? 
                                                     vlSelf->top__DOT__icache__DOT__cache_out[2U]
                                                      : 
                                                     vlSelf->top__DOT__icache__DOT__cache_out[1U])
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                                      ? 
                                                     vlSelf->top__DOT__icache__DOT__cache_out[0U]
                                                      : 0U))))
                                       : ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                           ? ((8U & (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                               ? 0U
                                               : ((4U 
                                                   & (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                                     ? 0U
                                                     : 
                                                    vlSelf->top__DOT__dcache__DOT__cache_out[3U]))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                                     ? 
                                                    vlSelf->top__DOT__dcache__DOT__cache_out[2U]
                                                     : 
                                                    vlSelf->top__DOT__dcache__DOT__cache_out[1U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                                     ? 
                                                    vlSelf->top__DOT__dcache__DOT__cache_out[0U]
                                                     : 0U))))
                                           : ((1U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                               ? (IData)(vlSelf->top__DOT__lsu__DOT__rs2)
                                               : 0U)));
    vlSelf->top__DOT__csr_reg__DOT__csrr_ = ((1U == (IData)(vlSelf->top__DOT__func3))
                                              ? vlSelf->top__DOT__lsu__DOT__rs1
                                              : ((2U 
                                                  == (IData)(vlSelf->top__DOT__func3))
                                                  ? 
                                                 ((~ vlSelf->top__DOT__lsu__DOT__rs1) 
                                                  & vlSelf->top__DOT__csr_reg__DOT__csrr_csr)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__func3))
                                                   ? 
                                                  (vlSelf->top__DOT__lsu__DOT__rs1 
                                                   | vlSelf->top__DOT__csr_reg__DOT__csrr_csr)
                                                   : 0ULL)));
    vlSelf->top__DOT__dcache_addr = (vlSelf->top__DOT__lsu__DOT__rs1 
                                     + vlSelf->top__DOT__imm);
    vlSelf->top__DOT__exu__DOT__eq_b = ((vlSelf->top__DOT__lsu__DOT__rs1 
                                         == vlSelf->top__DOT__exu__DOT__rs2)
                                         ? 1ULL : 0ULL);
    vlSelf->top__DOT__exu__DOT__slt_b = (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__lsu__DOT__rs1, vlSelf->top__DOT__exu__DOT__rs2)
                                          ? 1ULL : 0ULL);
    vlSelf->top__DOT__exu__DOT__alu_in2_w1 = ((IData)(vlSelf->top__DOT__alu_in2_sel)
                                               ? vlSelf->top__DOT__imm
                                               : vlSelf->top__DOT__exu__DOT__rs2);
    vlSelf->top__DOT____Vcellinp__exu__exu_en = ((IData)(vlSelf->top__DOT__exu_en) 
                                                 & ((IData)(vlSelf->top__DOT__stall) 
                                                    >> 2U));
    vlSelf->top__DOT____Vcellinp__lsu__lsu_en = ((IData)(vlSelf->top__DOT__lsu_en) 
                                                 & ((IData)(vlSelf->top__DOT__stall) 
                                                    >> 2U));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin) 
             & (IData)(vlSelf->top__DOT__icache_valid))) {
            vlSelf->top__DOT__pc = vlSelf->top__DOT__stage1__DOT__next_pc;
        }
    } else {
        vlSelf->top__DOT__pc = 0x7ffffffcULL;
    }
    vlSelf->top__DOT__exu__DOT__alu_in1_w1 = ((IData)(vlSelf->top__DOT__alu_in1_sel)
                                               ? vlSelf->top__DOT__pc_out
                                               : vlSelf->top__DOT__lsu__DOT__rs1);
    VL_SHIFTL_WWI(128,128,32, __Vtemp291, vlSelf->top__DOT__dcache__DOT__mask, 0x78U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp292, vlSelf->top__DOT__dcache__DOT__mask, 0x70U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp295, vlSelf->top__DOT__dcache__DOT__mask, 0x68U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp296, vlSelf->top__DOT__dcache__DOT__mask, 0x60U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp301, vlSelf->top__DOT__dcache__DOT__mask, 0x58U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp302, vlSelf->top__DOT__dcache__DOT__mask, 0x50U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp305, vlSelf->top__DOT__dcache__DOT__mask, 0x48U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp306, vlSelf->top__DOT__dcache__DOT__mask, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp313, vlSelf->top__DOT__dcache__DOT__mask, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp314, vlSelf->top__DOT__dcache__DOT__mask, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp317, vlSelf->top__DOT__dcache__DOT__mask, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp318, vlSelf->top__DOT__dcache__DOT__mask, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp323, vlSelf->top__DOT__dcache__DOT__mask, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp324, vlSelf->top__DOT__dcache__DOT__mask, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp327, vlSelf->top__DOT__dcache__DOT__mask, 8U);
    if ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                       >> 3U)))) {
        __Vtemp335[0U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? __Vtemp291[0U] : __Vtemp292[0U])
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? __Vtemp295[0U] : 
                               __Vtemp296[0U])) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__dcache_addr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp301[0U]
                                                     : 
                                                    __Vtemp302[0U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp305[0U]
                                                     : 
                                                    __Vtemp306[0U])));
        __Vtemp335[1U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? __Vtemp291[1U] : __Vtemp292[1U])
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? __Vtemp295[1U] : 
                               __Vtemp296[1U])) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__dcache_addr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp301[1U]
                                                     : 
                                                    __Vtemp302[1U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp305[1U]
                                                     : 
                                                    __Vtemp306[1U])));
        __Vtemp335[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? __Vtemp291[2U] : __Vtemp292[2U])
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? __Vtemp295[2U] : 
                               __Vtemp296[2U])) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__dcache_addr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp301[2U]
                                                     : 
                                                    __Vtemp302[2U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp305[2U]
                                                     : 
                                                    __Vtemp306[2U])));
        __Vtemp335[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? __Vtemp291[3U] : __Vtemp292[3U])
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? __Vtemp295[3U] : 
                               __Vtemp296[3U])) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__dcache_addr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp301[3U]
                                                     : 
                                                    __Vtemp302[3U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp305[3U]
                                                     : 
                                                    __Vtemp306[3U])));
    } else {
        __Vtemp335[0U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? __Vtemp313[0U] : __Vtemp314[0U])
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? __Vtemp317[0U] : 
                               __Vtemp318[0U])) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__dcache_addr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp323[0U]
                                                     : 
                                                    __Vtemp324[0U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp327[0U]
                                                     : 
                                                    vlSelf->top__DOT__dcache__DOT__mask[0U])));
        __Vtemp335[1U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? __Vtemp313[1U] : __Vtemp314[1U])
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? __Vtemp317[1U] : 
                               __Vtemp318[1U])) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__dcache_addr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp323[1U]
                                                     : 
                                                    __Vtemp324[1U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp327[1U]
                                                     : 
                                                    vlSelf->top__DOT__dcache__DOT__mask[1U])));
        __Vtemp335[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? __Vtemp313[2U] : __Vtemp314[2U])
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? __Vtemp317[2U] : 
                               __Vtemp318[2U])) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__dcache_addr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp323[2U]
                                                     : 
                                                    __Vtemp324[2U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp327[2U]
                                                     : 
                                                    vlSelf->top__DOT__dcache__DOT__mask[2U])));
        __Vtemp335[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 2U))) ? 
                          ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? __Vtemp313[3U] : __Vtemp314[3U])
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? __Vtemp317[3U] : 
                               __Vtemp318[3U])) : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__dcache_addr 
                                                               >> 1U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp323[3U]
                                                     : 
                                                    __Vtemp324[3U])
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__dcache_addr))
                                                     ? 
                                                    __Vtemp327[3U]
                                                     : 
                                                    vlSelf->top__DOT__dcache__DOT__mask[3U])));
    }
    vlSelf->top__DOT__dcache__DOT__cache_write_bwen[0U] 
        = __Vtemp335[0U];
    vlSelf->top__DOT__dcache__DOT__cache_write_bwen[1U] 
        = __Vtemp335[1U];
    vlSelf->top__DOT__dcache__DOT__cache_write_bwen[2U] 
        = __Vtemp335[2U];
    vlSelf->top__DOT__dcache__DOT__cache_write_bwen[3U] 
        = __Vtemp335[3U];
    __Vtemp362[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                     >> 1U))) ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__dcache_addr))
                                                  ? 
                                                 (((IData)(
                                                           (0xffffffffffULL 
                                                            & vlSelf->top__DOT__lsu__DOT__rs2)) 
                                                   >> 8U) 
                                                  | ((IData)(
                                                             ((0xffffffffffULL 
                                                               & vlSelf->top__DOT__lsu__DOT__rs2) 
                                                              >> 0x20U)) 
                                                     << 0x18U))
                                                  : 
                                                 (((IData)(
                                                           (0xffffffffffffULL 
                                                            & vlSelf->top__DOT__lsu__DOT__rs2)) 
                                                   >> 0x10U) 
                                                  | ((IData)(
                                                             ((0xffffffffffffULL 
                                                               & vlSelf->top__DOT__lsu__DOT__rs2) 
                                                              >> 0x20U)) 
                                                     << 0x10U)))
                       : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                           ? (((IData)((0xffffffffffffffULL 
                                        & vlSelf->top__DOT__lsu__DOT__rs2)) 
                               >> 0x18U) | ((IData)(
                                                    ((0xffffffffffffffULL 
                                                      & vlSelf->top__DOT__lsu__DOT__rs2) 
                                                     >> 0x20U)) 
                                            << 8U))
                           : (IData)((vlSelf->top__DOT__lsu__DOT__rs2 
                                      >> 0x20U))));
    __Vtemp364[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                     >> 2U))) ? 0U : 
                      ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                      >> 1U))) ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__dcache_addr))
                                                   ? 
                                                  ((IData)(
                                                           (0xffffffffffULL 
                                                            & vlSelf->top__DOT__lsu__DOT__rs2)) 
                                                   << 0x18U)
                                                   : 
                                                  ((IData)(
                                                           (0xffffffffffffULL 
                                                            & vlSelf->top__DOT__lsu__DOT__rs2)) 
                                                   << 0x10U))
                        : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((IData)((0xffffffffffffffULL 
                                        & vlSelf->top__DOT__lsu__DOT__rs2)) 
                               << 8U) : (IData)(vlSelf->top__DOT__lsu__DOT__rs2))));
    VL_EXTEND_WQ(72,64, __Vtemp365, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(80,64, __Vtemp367, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(88,64, __Vtemp371, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(96,64, __Vtemp373, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(104,64, __Vtemp379, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(112,64, __Vtemp381, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(120,64, __Vtemp385, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(128,64, __Vtemp387, vlSelf->top__DOT__lsu__DOT__rs2);
    if ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                       >> 2U)))) {
        __Vtemp393[1U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? (__Vtemp365[0U] << 0x18U)
                            : (__Vtemp367[0U] << 0x10U))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? (__Vtemp371[0U] << 8U)
                               : __Vtemp373[0U]));
        __Vtemp393[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp365[0U] >> 8U) 
                               | (__Vtemp365[1U] << 0x18U))
                            : ((__Vtemp367[0U] >> 0x10U) 
                               | (__Vtemp367[1U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp371[0U] >> 0x18U) 
                                  | (__Vtemp371[1U] 
                                     << 8U)) : __Vtemp373[1U]));
        __Vtemp393[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp365[1U] >> 8U) 
                               | (__Vtemp365[2U] << 0x18U))
                            : ((__Vtemp367[1U] >> 0x10U) 
                               | (__Vtemp367[2U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp371[1U] >> 0x18U) 
                                  | (__Vtemp371[2U] 
                                     << 8U)) : __Vtemp373[2U]));
    } else {
        __Vtemp393[1U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp379[0U] >> 8U) 
                               | (__Vtemp379[1U] << 0x18U))
                            : ((__Vtemp381[0U] >> 0x10U) 
                               | (__Vtemp381[1U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp385[0U] >> 0x18U) 
                                  | (__Vtemp385[1U] 
                                     << 8U)) : __Vtemp387[1U]));
        __Vtemp393[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp379[1U] >> 8U) 
                               | (__Vtemp379[2U] << 0x18U))
                            : ((__Vtemp381[1U] >> 0x10U) 
                               | (__Vtemp381[2U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp385[1U] >> 0x18U) 
                                  | (__Vtemp385[2U] 
                                     << 8U)) : __Vtemp387[2U]));
        __Vtemp393[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp379[2U] >> 8U) 
                               | (__Vtemp379[3U] << 0x18U))
                            : ((__Vtemp381[2U] >> 0x10U) 
                               | (__Vtemp381[3U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp385[2U] >> 0x18U) 
                                  | (__Vtemp385[3U] 
                                     << 8U)) : __Vtemp387[3U]));
    }
    __Vtemp395[0U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                     >> 3U))) ? 0U : 
                      ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                      >> 2U))) ? 0U
                        : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? (__Vtemp379[0U] << 0x18U)
                             : (__Vtemp381[0U] << 0x10U))
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? (__Vtemp385[0U] << 8U)
                                : __Vtemp387[0U]))));
    vlSelf->top__DOT__dcache__DOT__write_shift[0U] 
        = __Vtemp395[0U];
    if ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                       >> 3U)))) {
        vlSelf->top__DOT__dcache__DOT__write_shift[1U] = 0U;
        vlSelf->top__DOT__dcache__DOT__write_shift[2U] 
            = __Vtemp364[2U];
        vlSelf->top__DOT__dcache__DOT__write_shift[3U] 
            = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                              >> 2U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__dcache_addr 
                                                         >> 1U)))
                                           ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                               ? ((IData)(vlSelf->top__DOT__lsu__DOT__rs2) 
                                                  << 0x18U)
                                               : ((IData)(vlSelf->top__DOT__lsu__DOT__rs2) 
                                                  << 0x10U))
                                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                               ? ((IData)(vlSelf->top__DOT__lsu__DOT__rs2) 
                                                  << 8U)
                                               : (IData)(vlSelf->top__DOT__lsu__DOT__rs2)))
                : __Vtemp362[3U]);
    } else {
        vlSelf->top__DOT__dcache__DOT__write_shift[1U] 
            = __Vtemp393[1U];
        vlSelf->top__DOT__dcache__DOT__write_shift[2U] 
            = __Vtemp393[2U];
        vlSelf->top__DOT__dcache__DOT__write_shift[3U] 
            = __Vtemp393[3U];
    }
    vlSelf->top__DOT__axi_2_ar_addr = ((0xffffffff00000000ULL 
                                        & vlSelf->top__DOT__axi_2_ar_addr) 
                                       | (IData)((IData)(vlSelf->top__DOT__dcache_addr)));
    vlSelf->top__DOT__dcache__DOT__tag_arry_addr = 
        (0x7fU & ((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status))
                   ? (IData)((vlSelf->top__DOT__dcache_addr 
                              >> 4U)) : (IData)(vlSelf->top__DOT__dcache__DOT__index_ar)));
    if ((0x40U & (IData)(vlSelf->top__DOT__alu_opcode))) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel 
            = (QData)((IData)(vlSelf->top__DOT__exu__DOT__alu_in2_w1));
        vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2_w_sel 
            = (QData)((IData)(vlSelf->top__DOT__exu__DOT__alu_in2_w1));
    } else {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel 
            = vlSelf->top__DOT__exu__DOT__alu_in2_w1;
        vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2_w_sel 
            = vlSelf->top__DOT__exu__DOT__alu_in2_w1;
    }
    vlSelf->top__DOT__jup_exu = (((((IData)(vlSelf->top__DOT__jal) 
                                    | (IData)(vlSelf->top__DOT__jalr)) 
                                   | ((IData)(vlSelf->top__DOT__b) 
                                      & (1ULL == ((4U 
                                                   & (IData)(vlSelf->top__DOT__func3))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__func3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__func3))
                                                     ? 
                                                    ((vlSelf->top__DOT__lsu__DOT__rs1 
                                                      < vlSelf->top__DOT__exu__DOT__rs2)
                                                      ? 0ULL
                                                      : 1ULL)
                                                     : 
                                                    ((vlSelf->top__DOT__lsu__DOT__rs1 
                                                      < vlSelf->top__DOT__exu__DOT__rs2)
                                                      ? 1ULL
                                                      : 0ULL))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__func3))
                                                     ? 
                                                    ((1ULL 
                                                      == vlSelf->top__DOT__exu__DOT__slt_b)
                                                      ? 0ULL
                                                      : 1ULL)
                                                     : vlSelf->top__DOT__exu__DOT__slt_b))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__func3))
                                                    ? 0ULL
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__func3))
                                                     ? 
                                                    ((1ULL 
                                                      == vlSelf->top__DOT__exu__DOT__eq_b)
                                                      ? 0ULL
                                                      : 1ULL)
                                                     : vlSelf->top__DOT__exu__DOT__eq_b)))))) 
                                  & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d)) 
                                 & (IData)(vlSelf->top__DOT____Vcellinp__exu__exu_en));
    Vtop___024unit____Vdpiimwrap_mem_skip_TOP____024unit(
                                                         (vlSelf->top__DOT__lsu__DOT__rs1 
                                                          + vlSelf->top__DOT__imm), vlSelf->__Vfunc_mem_skip__1__Vfuncout);
    vlSelf->top__DOT__skip_ref = ((IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en) 
                                  & (1U == vlSelf->__Vfunc_mem_skip__1__Vfuncout));
    vlSelf->top__DOT__rw_valid_i = ((IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en) 
                                    & (0xaU == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__dcache_addr 
                                                           >> 0x1cU)))));
    vlSelf->top__DOT__rw_write_i = (((IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en) 
                                     & (0xaU == (0xfU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__dcache_addr 
                                                            >> 0x1cU))))) 
                                    & (IData)(vlSelf->top__DOT__lsu_w));
    vlSelf->top__DOT__dcache_read = (((IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en) 
                                      & (~ (IData)(vlSelf->top__DOT__lsu_w))) 
                                     & (8U == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__dcache_addr 
                                                          >> 0x1cU)))));
    vlSelf->top__DOT__dcache_write = (((IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en) 
                                       & (IData)(vlSelf->top__DOT__lsu_w)) 
                                      & (8U == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__dcache_addr 
                                                           >> 0x1cU)))));
    if ((0x40U & (IData)(vlSelf->top__DOT__alu_opcode))) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
            = (QData)((IData)(vlSelf->top__DOT__exu__DOT__alu_in1_w1));
        vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
            = (QData)((IData)(vlSelf->top__DOT__exu__DOT__alu_in1_w1));
    } else {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
            = vlSelf->top__DOT__exu__DOT__alu_in1_w1;
        vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
            = vlSelf->top__DOT__exu__DOT__alu_in1_w1;
    }
    vlSelf->top__DOT__axi_3_ar_addr = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                        ? ((0x10U & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                            ? ((8U 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                ? 0ULL
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                      ? 
                                                     ((vlSelf->top__DOT__icache__DOT__tag_ar 
                                                       << 0xbU) 
                                                      | (QData)((IData)(
                                                                        (0xcU 
                                                                         | ((IData)(vlSelf->top__DOT__icache__DOT__index_ar) 
                                                                            << 4U)))))
                                                      : 
                                                     ((vlSelf->top__DOT__icache__DOT__tag_ar 
                                                       << 0xbU) 
                                                      | (QData)((IData)(
                                                                        (8U 
                                                                         | ((IData)(vlSelf->top__DOT__icache__DOT__index_ar) 
                                                                            << 4U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                      ? 
                                                     ((vlSelf->top__DOT__icache__DOT__tag_ar 
                                                       << 0xbU) 
                                                      | (QData)((IData)(
                                                                        (4U 
                                                                         | ((IData)(vlSelf->top__DOT__icache__DOT__index_ar) 
                                                                            << 4U)))))
                                                      : 
                                                     ((vlSelf->top__DOT__icache__DOT__tag_ar 
                                                       << 0xbU) 
                                                      | (QData)((IData)(
                                                                        ((IData)(vlSelf->top__DOT__icache__DOT__index_ar) 
                                                                         << 4U))))))))
                                            : 0ULL)
                                        : ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                            ? (QData)((IData)(
                                                              ((0x10U 
                                                                & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                ? 
                                                               ((8U 
                                                                 & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                 ? 0ULL
                                                                 : 
                                                                ((4U 
                                                                  & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                   ? 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                    ? 
                                                                   ((vlSelf->top__DOT__dcache__DOT__tag_ar 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                (0xcU 
                                                                                | ((IData)(vlSelf->top__DOT__dcache__DOT__index_ar) 
                                                                                << 4U)))))
                                                                    : 
                                                                   ((vlSelf->top__DOT__dcache__DOT__tag_ar 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                (8U 
                                                                                | ((IData)(vlSelf->top__DOT__dcache__DOT__index_ar) 
                                                                                << 4U))))))
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                    ? 
                                                                   ((vlSelf->top__DOT__dcache__DOT__tag_ar 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                (4U 
                                                                                | ((IData)(vlSelf->top__DOT__dcache__DOT__index_ar) 
                                                                                << 4U)))))
                                                                    : 
                                                                   ((vlSelf->top__DOT__dcache__DOT__tag_ar 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                ((IData)(vlSelf->top__DOT__dcache__DOT__index_ar) 
                                                                                << 4U))))))))
                                                                : 0ULL)))
                                            : ((1U 
                                                == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                                ? (QData)((IData)(vlSelf->top__DOT__axi_2_ar_addr))
                                                : 0ULL)));
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0 
        = vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__data
        [vlSelf->top__DOT__dcache__DOT__tag_arry_addr];
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1 
        = vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__data
        [vlSelf->top__DOT__dcache__DOT__tag_arry_addr];
    vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
        = (vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel 
           & ((0x40U & (IData)(vlSelf->top__DOT__alu_opcode))
               ? 0x1fULL : 0x3fULL));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
        = ((0x10U & (IData)(vlSelf->top__DOT__alu_opcode))
            ? (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2_w_sel)
            : vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2_w_sel);
    vlSelf->jup = ((((IData)(vlSelf->top__DOT__mret) 
                     | (IData)(vlSelf->ecall)) & (IData)(vlSelf->top__DOT__pri_en)) 
                   | (IData)(vlSelf->top__DOT__jup_exu));
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__rw_write_i) 
                     << 7U) | (((IData)(vlSelf->top__DOT__rw_valid_i) 
                                << 6U) | (((IData)(vlSelf->top__DOT__axi_2_w_ready) 
                                           << 5U) | 
                                          (((IData)(vlSelf->top__DOT__axi_2_aw_ready) 
                                            << 4U) 
                                           | (((IData)(vlSelf->top__DOT__axi_2_b_valid) 
                                               << 3U) 
                                              | (IData)(vlSelf->top__DOT__peripheral__DOT__write_fsm))))));
    vlSelf->top__DOT__peripheral__DOT__write_fsm_next 
        = Vtop__ConstPool__TABLE_4eab332a_0[__Vtableidx2];
    __Vtableidx3 = (((IData)(vlSelf->top__DOT__rw_write_i) 
                     << 6U) | (((IData)(vlSelf->top__DOT__rw_valid_i) 
                                << 5U) | ((((1U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel)) 
                                            & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready)) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__axi_2_r_valid) 
                                            << 3U) 
                                           | (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm)))));
    vlSelf->top__DOT__peripheral__DOT__read_fsm_next 
        = Vtop__ConstPool__TABLE_0c1793d2_0[__Vtableidx3];
    if (((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
         & (IData)(vlSelf->top__DOT__dcache_write))) {
        vlSelf->top__DOT__dcache__DOT__cache_bwen[0U] 
            = vlSelf->top__DOT__dcache__DOT__cache_write_bwen[0U];
        vlSelf->top__DOT__dcache__DOT__cache_bwen[1U] 
            = vlSelf->top__DOT__dcache__DOT__cache_write_bwen[1U];
        vlSelf->top__DOT__dcache__DOT__cache_bwen[2U] 
            = vlSelf->top__DOT__dcache__DOT__cache_write_bwen[2U];
        vlSelf->top__DOT__dcache__DOT__cache_bwen[3U] 
            = vlSelf->top__DOT__dcache__DOT__cache_write_bwen[3U];
        vlSelf->top__DOT__dcache__DOT__cache_in[0U] 
            = vlSelf->top__DOT__dcache__DOT__write_shift[0U];
        vlSelf->top__DOT__dcache__DOT__cache_in[1U] 
            = vlSelf->top__DOT__dcache__DOT__write_shift[1U];
        vlSelf->top__DOT__dcache__DOT__cache_in[2U] 
            = vlSelf->top__DOT__dcache__DOT__write_shift[2U];
        vlSelf->top__DOT__dcache__DOT__cache_in[3U] 
            = vlSelf->top__DOT__dcache__DOT__write_shift[3U];
    } else {
        vlSelf->top__DOT__dcache__DOT__cache_bwen[0U] = 0xffffffffU;
        vlSelf->top__DOT__dcache__DOT__cache_bwen[1U] = 0xffffffffU;
        vlSelf->top__DOT__dcache__DOT__cache_bwen[2U] = 0xffffffffU;
        vlSelf->top__DOT__dcache__DOT__cache_bwen[3U] = 0xffffffffU;
        vlSelf->top__DOT__dcache__DOT__cache_in[0U] 
            = (((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                & (IData)(vlSelf->top__DOT__axi_1_r_valid))
                ? vlSelf->top__DOT__dcache__DOT__read_line[0U]
                : 0U);
        vlSelf->top__DOT__dcache__DOT__cache_in[1U] 
            = (((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                & (IData)(vlSelf->top__DOT__axi_1_r_valid))
                ? vlSelf->top__DOT__dcache__DOT__read_line[1U]
                : 0U);
        vlSelf->top__DOT__dcache__DOT__cache_in[2U] 
            = (((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                & (IData)(vlSelf->top__DOT__axi_1_r_valid))
                ? vlSelf->top__DOT__dcache__DOT__read_line[2U]
                : 0U);
        vlSelf->top__DOT__dcache__DOT__cache_in[3U] 
            = (((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                & (IData)(vlSelf->top__DOT__axi_1_r_valid))
                ? vlSelf->top__DOT__axi_1_r_data : 0U);
    }
    vlSelf->top__DOT__dcache__DOT__hit0 = (((0x1fffffffffffffULL 
                                             & vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0) 
                                            == (vlSelf->top__DOT__dcache_addr 
                                                >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0 
                                                      >> 0x35U)));
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_miss 
        = ((IData)(vlSelf->top__DOT__dcache__DOT__random)
            ? vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1
            : vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0);
    vlSelf->top__DOT__dcache__DOT__hit1 = (((0x1fffffffffffffULL 
                                             & vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1) 
                                            == (vlSelf->top__DOT__dcache_addr 
                                                >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1 
                                                      >> 0x35U)));
    if ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                       >> 5U)))) {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__isrl 
            = ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))
                                                    : (QData)((IData)(
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3eU))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3dU)))))
                                                    : (QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3cU)))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3bU)))))
                                                    : (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3aU))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x7fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x39U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x38U))))))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x1ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x37U)))))
                                                    : (QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x36U))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x35U)))))
                                                    : (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x34U)))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x1fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x33U)))))
                                                    : (QData)((IData)(
                                                                      (0x3fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x32U))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x7fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x31U)))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x30U)))))))))
                : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2fU)))))
                                                    : (QData)((IData)(
                                                                      (0x3ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2eU))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x7ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2dU)))))
                                                    : (QData)((IData)(
                                                                      (0xfffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2cU)))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x1fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2bU)))))
                                                    : (QData)((IData)(
                                                                      (0x3fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2aU))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x29U)))))
                                                    : (QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x28U))))))))
                    : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x1ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x27U)))))
                                                    : (QData)((IData)(
                                                                      (0x3ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x26U))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? (QData)((IData)(
                                                                      (0x7ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x25U)))))
                                                    : (QData)((IData)(
                                                                      (0xfffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x24U)))))))
                        : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? (QData)((IData)((0x1fffffffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                           >> 0x23U)))))
                             : (QData)((IData)((0x3fffffffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                           >> 0x22U))))))
                            : ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                ? (QData)((IData)((0x7fffffffU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                              >> 0x21U)))))
                                : (QData)((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                   >> 0x20U))))))));
        vlSelf->top__DOT__exu__DOT__aluf__DOT__isll 
            = ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x3fU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (3U 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x3eU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x3dU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x3cU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x3bU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x3aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x39U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x38U))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1ffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x37U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x36U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x35U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x34U)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1fffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x33U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3fffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x32U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x31U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x30U)))))
                : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x2fU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x2eU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7ffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x2dU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xfffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x2cU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1fffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x2bU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x2aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x29U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x28U))))
                    : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x27U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3ffffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x26U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x25U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xfffffffU 
                                                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                                    << 0x24U)))
                        : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? ((QData)((IData)((0x1fffffffU 
                                                 & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                << 0x23U) : ((QData)((IData)(
                                                             (0x3fffffffU 
                                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                             << 0x22U))
                            : ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                ? ((QData)((IData)(
                                                   (0x7fffffffU 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))) 
                                   << 0x21U) : ((QData)((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)) 
                                                << 0x20U))))));
        vlSelf->top__DOT__exu__DOT__aluf__DOT__isar_l 
            = ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 1U) 
                                                    | (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 2U) 
                                                    | (QData)((IData)(
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3eU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 3U) 
                                                    | (QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3dU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3cU))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3bU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 6U) 
                                                    | (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3aU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      (0x7fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x39U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x38U)))))))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x37U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0xaU) 
                                                    | (QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x36U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0xbU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x35U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x34U))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      (0x1fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x33U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0xeU) 
                                                    | (QData)((IData)(
                                                                      (0x3fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x32U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0xfU) 
                                                    | (QData)((IData)(
                                                                      (0x7fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x31U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x30U))))))))))
                : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2fU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2eU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2dU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      (0xfffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2cU))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      (0x1fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2bU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x16U) 
                                                    | (QData)((IData)(
                                                                      (0x3fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x2aU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x17U) 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x29U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x28U)))))))))
                    : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x19U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x27U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x1aU) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x26U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x1bU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x25U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (0xfffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x24U))))))))
                        : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? (((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                >> 0x3fU)))))) 
                                 << 0x1dU) | (QData)((IData)(
                                                             (0x1fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                         >> 0x23U))))))
                             : (((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                >> 0x3fU)))))) 
                                 << 0x1eU) | (QData)((IData)(
                                                             (0x3fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                         >> 0x22U)))))))
                            : ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                   >> 0x3fU)))))) 
                                    << 0x1fU) | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                            >> 0x21U))))))
                                : (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                           >> 0x3fU))))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                 >> 0x20U)))))))));
        vlSelf->top__DOT__exu__DOT__aluf__DOT__israw = 0ULL;
    } else {
        vlSelf->top__DOT__exu__DOT__aluf__DOT__isrl 
            = ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x1eU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x1dU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x1cU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x1bU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x1aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x19U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x18U))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x17U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x16U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x15U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x14U)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x13U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x12U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x11U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0x10U)))))
                : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0xfU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0xeU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0xdU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0xcU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0xbU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 0xaU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 9U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 8U))))
                    : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 7U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 6U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 5U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    >> 4U)))
                        : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                >> 3U) : (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                          >> 2U)) : 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                >> 1U) : vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))));
        vlSelf->top__DOT__exu__DOT__aluf__DOT__isll 
            = ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x1fU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x1eU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x1dU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x1cU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x1bU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x1aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x19U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x18U))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x17U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x16U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x15U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x14U)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x13U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x12U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x11U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0x10U)))))
                : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0xfU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0xeU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0xdU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0xcU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0xbU)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 0xaU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 9U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 8U))))
                    : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 7U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 6U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 5U)
                                                    : 
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                    << 4U)))
                        : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                << 3U) : (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                          << 2U)) : 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                << 1U) : vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))));
        vlSelf->top__DOT__exu__DOT__aluf__DOT__isar_l 
            = ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x21U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x1fU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x22U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x1eU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x23U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x1dU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x24U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x1cU))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x25U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x1bU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x26U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x1aU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x27U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x19U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x28U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x18U)))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x29U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x17U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x2aU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x16U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x2bU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x15U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x2cU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x14U))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x2dU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x13U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x2eU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x12U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x2fU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x11U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x30U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0x10U))))))
                : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x31U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0xfU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x32U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0xeU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x33U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0xdU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x34U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0xcU))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x35U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0xbU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x36U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 0xaU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x37U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 9U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x38U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 8U)))))
                    : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x39U) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 7U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x3aU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 6U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x3bU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 5U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x3fU)))))))) 
                                                     << 0x3cU) 
                                                    | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                       >> 4U))))
                        : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? (((QData)((IData)((7U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                           >> 0x3fU)))))))) 
                                 << 0x3dU) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                              >> 3U))
                             : (((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                           >> 0x3fU)))))))) 
                                 << 0x3eU) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                              >> 2U)))
                            : ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                ? (((QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                >> 0x3fU))))) 
                                    << 0x3fU) | (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                 >> 1U))
                                : vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel)))));
        vlSelf->top__DOT__exu__DOT__aluf__DOT__israw 
            = ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 1U) 
                                                    | (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 2U) 
                                                    | (QData)((IData)(
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1eU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 3U) 
                                                    | (QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1dU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1cU))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1bU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 6U) 
                                                    | (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1aU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      (0x7fU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x19U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x18U)))))))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x17U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0xaU) 
                                                    | (QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x16U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0xbU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x15U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x14U))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      (0x1fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x13U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0xeU) 
                                                    | (QData)((IData)(
                                                                      (0x3fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x12U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0xfU) 
                                                    | (QData)((IData)(
                                                                      (0x7fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x11U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x10U))))))))))
                : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0xfU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0xeU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0xdU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      (0xfffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0xcU))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      (0x1fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0xbU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x16U) 
                                                    | (QData)((IData)(
                                                                      (0x3fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0xaU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x17U) 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 9U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 8U)))))))))
                    : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x19U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 7U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x1aU) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 6U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x1bU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 5U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 0x1fU)))))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (0xfffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                                >> 4U))))))))
                        : ((1U & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                             ? (((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                >> 0x1fU)))))) 
                                 << 0x1dU) | (QData)((IData)(
                                                             (0x1fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                         >> 3U))))))
                             : (((- (QData)((IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                >> 0x1fU)))))) 
                                 << 0x1eU) | (QData)((IData)(
                                                             (0x3fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                         >> 2U)))))))
                            : ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                   >> 0x1fU)))))) 
                                    << 0x1fU) | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                            >> 1U))))))
                                : (((QData)((IData)(
                                                    (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                                                           >> 0x1fU))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel))))))));
    }
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | (IData)((IData)((1U & ((((((~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1)) 
                                        & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))) 
                                       & ((IData)(vlSelf->top__DOT__alu_opcode) 
                                          >> 4U)) | 
                                      (((~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2)) 
                                       & (~ ((IData)(vlSelf->top__DOT__alu_opcode) 
                                             >> 4U)))) 
                                     | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))) 
                                        & (~ ((IData)(vlSelf->top__DOT__alu_opcode) 
                                              >> 4U)))) 
                                    | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2)) 
                                       & ((IData)(vlSelf->top__DOT__alu_opcode) 
                                          >> 4U)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | (IData)((IData)((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                    & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffffffeULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | (IData)((IData)((1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                    | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 1U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 1U)))))) 
              << 1U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 1U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 1U)))))) 
              << 1U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 2U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 2U)))))) 
              << 2U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 2U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 2U)))))) 
              << 2U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 3U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 3U)))))) 
              << 3U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 3U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 3U)))))) 
              << 3U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 4U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 4U)))))) 
              << 4U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 4U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 4U)))))) 
              << 4U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 5U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 5U)))))) 
              << 5U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 5U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 5U)))))) 
              << 5U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 6U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 6U)))))) 
              << 6U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 6U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 6U)))))) 
              << 6U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 7U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 7U)))))) 
              << 7U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 7U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 7U)))))) 
              << 7U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 8U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 8U)))))) 
              << 8U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 8U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 8U)))))) 
              << 8U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 9U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 9U)))))) 
              << 9U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 9U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 9U)))))) 
              << 9U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xaU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xaU)))))) 
              << 0xaU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xaU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xaU)))))) 
              << 0xaU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xbU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xbU)))))) 
              << 0xbU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xbU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xbU)))))) 
              << 0xbU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xcU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xcU)))))) 
              << 0xcU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xcU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xcU)))))) 
              << 0xcU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xdU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xdU)))))) 
              << 0xdU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xdU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xdU)))))) 
              << 0xdU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xeU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xeU)))))) 
              << 0xeU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xeU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xeU)))))) 
              << 0xeU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xfU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xfU)))))) 
              << 0xfU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0xfU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0xfU)))))) 
              << 0xfU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x10U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x10U)))))) 
              << 0x10U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x10U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x10U)))))) 
              << 0x10U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x11U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x11U)))))) 
              << 0x11U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x11U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x11U)))))) 
              << 0x11U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x12U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x12U)))))) 
              << 0x12U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x12U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x12U)))))) 
              << 0x12U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x13U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x13U)))))) 
              << 0x13U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x13U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x13U)))))) 
              << 0x13U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x14U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x14U)))))) 
              << 0x14U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x14U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x14U)))))) 
              << 0x14U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x15U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x15U)))))) 
              << 0x15U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x15U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x15U)))))) 
              << 0x15U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x16U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x16U)))))) 
              << 0x16U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x16U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x16U)))))) 
              << 0x16U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x17U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x17U)))))) 
              << 0x17U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x17U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x17U)))))) 
              << 0x17U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x18U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x18U)))))) 
              << 0x18U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x18U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x18U)))))) 
              << 0x18U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x19U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x19U)))))) 
              << 0x19U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x19U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x19U)))))) 
              << 0x19U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1aU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1aU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1aU)))))) 
              << 0x1aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1bU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1bU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1bU)))))) 
              << 0x1bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1cU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1cU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1cU)))))) 
              << 0x1cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1dU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1dU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1dU)))))) 
              << 0x1dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1eU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1eU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1eU)))))) 
              << 0x1eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1fU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x1fU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x1fU)))))) 
              << 0x1fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x20U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x20U)))))) 
              << 0x20U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x20U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x20U)))))) 
              << 0x20U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x21U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x21U)))))) 
              << 0x21U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x21U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x21U)))))) 
              << 0x21U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x22U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x22U)))))) 
              << 0x22U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x22U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x22U)))))) 
              << 0x22U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x23U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x23U)))))) 
              << 0x23U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x23U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x23U)))))) 
              << 0x23U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x24U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x24U)))))) 
              << 0x24U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x24U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x24U)))))) 
              << 0x24U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x25U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x25U)))))) 
              << 0x25U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x25U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x25U)))))) 
              << 0x25U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x26U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x26U)))))) 
              << 0x26U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x26U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x26U)))))) 
              << 0x26U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x27U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x27U)))))) 
              << 0x27U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x27U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x27U)))))) 
              << 0x27U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x28U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x28U)))))) 
              << 0x28U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x28U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x28U)))))) 
              << 0x28U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x29U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x29U)))))) 
              << 0x29U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x29U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x29U)))))) 
              << 0x29U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2aU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2aU)))))) 
              << 0x2aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2aU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2aU)))))) 
              << 0x2aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2bU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2bU)))))) 
              << 0x2bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2bU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2bU)))))) 
              << 0x2bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2cU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2cU)))))) 
              << 0x2cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2cU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2cU)))))) 
              << 0x2cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2dU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2dU)))))) 
              << 0x2dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2dU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2dU)))))) 
              << 0x2dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2eU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2eU)))))) 
              << 0x2eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2eU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2eU)))))) 
              << 0x2eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2fU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2fU)))))) 
              << 0x2fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x2fU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x2fU)))))) 
              << 0x2fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x30U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x30U)))))) 
              << 0x30U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x30U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x30U)))))) 
              << 0x30U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x31U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x31U)))))) 
              << 0x31U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x31U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x31U)))))) 
              << 0x31U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x32U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x32U)))))) 
              << 0x32U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x32U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x32U)))))) 
              << 0x32U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x33U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x33U)))))) 
              << 0x33U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x33U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x33U)))))) 
              << 0x33U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x34U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x34U)))))) 
              << 0x34U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x34U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x34U)))))) 
              << 0x34U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x35U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x35U)))))) 
              << 0x35U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x35U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x35U)))))) 
              << 0x35U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x36U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x36U)))))) 
              << 0x36U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x36U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x36U)))))) 
              << 0x36U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x37U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x37U)))))) 
              << 0x37U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x37U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x37U)))))) 
              << 0x37U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x38U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x38U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x38U)))))) 
              << 0x38U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x39U)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x39U)))))) 
              << 0x39U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x39U)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x39U)))))) 
              << 0x39U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3aU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3aU)))))) 
              << 0x3aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3aU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3aU)))))) 
              << 0x3aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3bU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3bU)))))) 
              << 0x3bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3bU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3bU)))))) 
              << 0x3bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3cU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3cU)))))) 
              << 0x3cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3cU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3cU)))))) 
              << 0x3cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3dU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3dU)))))) 
              << 0x3dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3dU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3dU)))))) 
              << 0x3dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3eU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3eU)))))) 
              << 0x3eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3eU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3eU)))))) 
              << 0x3eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3fU)) 
                                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3fU)))))) 
              << 0x3fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                              >> 0x3fU)) 
                                     | (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                >> 0x3fU)))))) 
              << 0x3fU));
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_in 
        = (((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
            & (IData)(vlSelf->top__DOT__dcache_write))
            ? (0x40000000000000ULL | (0x3fffffffffffffULL 
                                      & ((IData)(vlSelf->top__DOT__dcache__DOT__hit1)
                                          ? vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1
                                          : vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0)))
            : ((4U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                ? (0x3fffffffffffffULL & vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_miss)
                : ((4U == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm))
                    ? (0x20000000000000ULL | vlSelf->top__DOT__dcache__DOT__tag_ar)
                    : 0ULL)));
    vlSelf->top__DOT__dcache__DOT__miss = (1U & (~ 
                                                 ((IData)(vlSelf->top__DOT__dcache__DOT__hit1) 
                                                  | (IData)(vlSelf->top__DOT__dcache__DOT__hit0))));
    vlSelf->top__DOT__dcache__DOT__hit = ((IData)(vlSelf->top__DOT__dcache__DOT__hit0) 
                                          | (IData)(vlSelf->top__DOT__dcache__DOT__hit1));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1 
        = (1U & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g) 
                 | ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p) 
                    & ((IData)(vlSelf->top__DOT__alu_opcode) 
                       >> 4U))));
    vlSelf->top__DOT__dcache__DOT__next_status = ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       ? 0U
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm))
                                                        ? 0U
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axi_1_ar_ready)
                                                        ? 0x14U
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__axi_1_ar_ready)
                                                        ? 0x13U
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axi_1_ar_ready)
                                                        ? 0x12U
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__axi_1_ar_ready)
                                                        ? 0x11U
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status))))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       ? 0U
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                                        ? 0U
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axi_1_aw_ready)
                                                        ? 0xcU
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__axi_1_aw_ready)
                                                        ? 0xbU
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axi_1_aw_ready)
                                                        ? 0xaU
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__axi_1_aw_ready)
                                                        ? 9U
                                                        : (IData)(vlSelf->top__DOT__dcache__DOT__status)))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                       ? 0U
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__dcache__DOT__miss) 
                                                        & ((IData)(vlSelf->top__DOT__dcache__DOT__random)
                                                            ? (IData)(
                                                                      (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1 
                                                                       >> 0x36U))
                                                            : (IData)(
                                                                      (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0 
                                                                       >> 0x36U))))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__dcache__DOT__miss)
                                                         ? 
                                                        (((IData)(vlSelf->top__DOT__dcache_read) 
                                                          | (IData)(vlSelf->top__DOT__dcache_write))
                                                          ? 8U
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__dcache__DOT__miss)
                                                         ? 
                                                        (((IData)(vlSelf->top__DOT__dcache_read) 
                                                          | (IData)(vlSelf->top__DOT__dcache_write))
                                                          ? 0x10U
                                                          : 0U)
                                                         : 0U)))))));
    vlSelf->top__DOT__dcache__DOT__tag_arry_sel = ((IData)(vlSelf->top__DOT__dcache__DOT__hit)
                                                    ? (IData)(vlSelf->top__DOT__dcache__DOT__hit1)
                                                    : (IData)(vlSelf->top__DOT__dcache__DOT__random));
    vlSelf->top__DOT__dcache__DOT__cache_wen = (1U 
                                                & (~ 
                                                   ((((0U 
                                                       == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
                                                      & (IData)(vlSelf->top__DOT__dcache_write)) 
                                                     & (IData)(vlSelf->top__DOT__dcache__DOT__hit)) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                                                       & (IData)(vlSelf->top__DOT__axi_1_r_valid)))));
    vlSelf->top__DOT__dcache__DOT__tag_arry_en = ((
                                                   (((0U 
                                                      == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
                                                     & (IData)(vlSelf->top__DOT__dcache_write)) 
                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__hit)) 
                                                   | ((4U 
                                                       == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm)) 
                                                      & (IData)(vlSelf->top__DOT__axi_1_w_ready))) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)) 
                                                     & (IData)(vlSelf->top__DOT__axi_1_r_valid)));
    if ((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status))) {
        vlSelf->top__DOT__dcache__DOT__cache_addr = 
            ((IData)(vlSelf->top__DOT__dcache__DOT__hit)
              ? (((IData)(vlSelf->top__DOT__dcache__DOT__hit1) 
                  << 7U) | (0x7fU & (IData)((vlSelf->top__DOT__dcache_addr 
                                             >> 4U))))
              : (((IData)(vlSelf->top__DOT__dcache__DOT__random) 
                  << 7U) | (0x7fU & (IData)((vlSelf->top__DOT__dcache_addr 
                                             >> 4U)))));
        vlSelf->top__DOT__dcache_valid = ((IData)(vlSelf->top__DOT__dcache__DOT__hit) 
                                          & 1U);
    } else {
        vlSelf->top__DOT__dcache__DOT__cache_addr = 
            ((IData)(vlSelf->top__DOT__dcache__DOT__hit)
              ? (((IData)(vlSelf->top__DOT__dcache__DOT__hit1) 
                  << 7U) | (IData)(vlSelf->top__DOT__dcache__DOT__index_ar))
              : (((IData)(vlSelf->top__DOT__dcache__DOT__random) 
                  << 7U) | (IData)(vlSelf->top__DOT__dcache__DOT__index_ar)));
        vlSelf->top__DOT__dcache_valid = 0U;
    }
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffffdULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 1U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 1U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 1U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 1U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 1U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 1U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 1U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 1U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1)))))) 
              << 1U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 1U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 1U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1))));
    __Vtableidx7 = (((IData)(vlSelf->top__DOT__dcache__DOT__next_status) 
                     << 5U) | (((IData)(vlSelf->top__DOT__axi_1_r_valid) 
                                << 4U) | (IData)(vlSelf->top__DOT__dcache__DOT__read_fsm)));
    vlSelf->top__DOT__dcache__DOT__read_fsm_next = 
        Vtop__ConstPool__TABLE_b959db56_0[__Vtableidx7];
    vlSelf->top__DOT__dcache__DOT__cache_sel = ((0x80U 
                                                 & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))
                                                 ? 
                                                ((0x40U 
                                                  & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))
                                                  ? 7U
                                                  : 0xbU)
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))
                                                  ? 0xdU
                                                  : 0xeU));
    vlSelf->top__DOT__pipe3_allowin_lsu = (1U & (((
                                                   ((IData)(vlSelf->top__DOT__dcache_valid) 
                                                    & (IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en)) 
                                                   & (8U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__dcache_addr 
                                                                  >> 0x1cU))))) 
                                                  | (~ (IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en))) 
                                                 | (((0xaU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__dcache_addr 
                                                                  >> 0x1cU)))) 
                                                     & (IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en)) 
                                                    & (IData)(vlSelf->top__DOT__rw_valid_o))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffffbULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 2U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 2U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 2U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 2U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 2U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 2U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 2U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 2U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2)))))) 
              << 2U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 2U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 2U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2))));
    vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin 
        = ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d) 
           & (IData)(vlSelf->top__DOT__pipe3_allowin_lsu));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffff7ULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 3U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 3U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 3U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 3U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 3U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 3U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 3U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 3U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3)))))) 
              << 3U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 3U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 3U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3))));
    vlSelf->top__DOT__stage1__DOT__next_pc = ((IData)(vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin)
                                               ? ((1U 
                                                   == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                                   ? vlSelf->top__DOT__jup_addr_c
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__pc))
                                               : vlSelf->top__DOT__pc);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffffefULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 4U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 4U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 4U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 4U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 4U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 4U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 4U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 4U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4)))))) 
              << 4U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 4U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 4U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4))));
    vlSelf->top__DOT__icache__DOT__tag_arry_addr = 
        (0x7fU & ((0U == (IData)(vlSelf->top__DOT__icache__DOT__status))
                   ? (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                              >> 4U)) : (IData)(vlSelf->top__DOT__icache__DOT__index_ar)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffffdfULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 5U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 5U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 5U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 5U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 5U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 5U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 5U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 5U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5)))))) 
              << 5U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 5U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 5U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5))));
    vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
        = vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__data
        [vlSelf->top__DOT__icache__DOT__tag_arry_addr];
    vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
        = vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__data
        [vlSelf->top__DOT__icache__DOT__tag_arry_addr];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffffbfULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 6U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 6U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 6U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 6U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 6U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 6U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 6U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 6U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6)))))) 
              << 6U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 6U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 6U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6))));
    vlSelf->top__DOT__icache__DOT__hit0 = (((0x1fffffffffffffULL 
                                             & vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0) 
                                            == (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
                                                      >> 0x35U)));
    vlSelf->top__DOT__icache__DOT__tag_arry_data_out_miss 
        = ((IData)(vlSelf->top__DOT__icache__DOT__random)
            ? vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1
            : vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0);
    vlSelf->top__DOT__icache__DOT__hit1 = (((0x1fffffffffffffULL 
                                             & vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1) 
                                            == (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
                                                      >> 0x35U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffff7fULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 7U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 7U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 7U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 7U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 7U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 7U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 7U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 7U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7)))))) 
              << 7U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 7U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 7U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7))));
    vlSelf->top__DOT__icache__DOT__tag_arry_data_in 
        = ((4U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
            ? (0x3fffffffffffffULL & vlSelf->top__DOT__icache__DOT__tag_arry_data_out_miss)
            : ((4U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))
                ? (0x20000000000000ULL | vlSelf->top__DOT__icache__DOT__tag_ar)
                : 0ULL));
    vlSelf->top__DOT__axi_3_aw_addr = ((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                        ? ((0x10U & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                            ? 0ULL : 
                                           ((8U & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                             ? ((4U 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                 ? 0ULL
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                   ? 
                                                  ((vlSelf->top__DOT__icache__DOT__tag_arry_data_out_miss 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (0xcU 
                                                                      | (0x7f0U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U)) 
                                                                            << 4U))))))
                                                   : 
                                                  ((vlSelf->top__DOT__icache__DOT__tag_arry_data_out_miss 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (8U 
                                                                      | (0x7f0U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U)) 
                                                                            << 4U)))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                   ? 
                                                  ((vlSelf->top__DOT__icache__DOT__tag_arry_data_out_miss 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (4U 
                                                                      | (0x7f0U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U)) 
                                                                            << 4U))))))
                                                   : 
                                                  ((vlSelf->top__DOT__icache__DOT__tag_arry_data_out_miss 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (0x7f0U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U)) 
                                                                         << 4U))))))))
                                             : 0ULL))
                                        : ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                            ? (QData)((IData)(
                                                              ((0x10U 
                                                                & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                ? 0ULL
                                                                : 
                                                               ((8U 
                                                                 & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                 ? 
                                                                ((4U 
                                                                  & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                   ? 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                    ? 
                                                                   ((vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_miss 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                (0xcU 
                                                                                | (0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__dcache_addr 
                                                                                >> 4U)) 
                                                                                << 4U))))))
                                                                    : 
                                                                   ((vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_miss 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                (8U 
                                                                                | (0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__dcache_addr 
                                                                                >> 4U)) 
                                                                                << 4U)))))))
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                                                    ? 
                                                                   ((vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_miss 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                (4U 
                                                                                | (0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__dcache_addr 
                                                                                >> 4U)) 
                                                                                << 4U))))))
                                                                    : 
                                                                   ((vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_miss 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                (0x7f0U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__dcache_addr 
                                                                                >> 4U)) 
                                                                                << 4U))))))))
                                                                 : 0ULL))))
                                            : ((1U 
                                                == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                                ? (QData)((IData)(vlSelf->top__DOT__dcache_addr))
                                                : 0ULL)));
    vlSelf->top__DOT__icache__DOT__miss = (1U & (~ 
                                                 ((IData)(vlSelf->top__DOT__icache__DOT__hit1) 
                                                  | (IData)(vlSelf->top__DOT__icache__DOT__hit0))));
    vlSelf->top__DOT__icache__DOT__hit = ((IData)(vlSelf->top__DOT__icache__DOT__hit0) 
                                          | (IData)(vlSelf->top__DOT__icache__DOT__hit1));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffeffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 8U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 8U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 8U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 8U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 8U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 8U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 8U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 8U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8)))))) 
              << 8U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 8U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 8U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8))));
    vlSelf->top__DOT__icache__DOT__next_status = ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       ? 0U
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))
                                                        ? 0U
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axi_0_ar_ready)
                                                        ? 0x14U
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__axi_0_ar_ready)
                                                        ? 0x13U
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axi_0_ar_ready)
                                                        ? 0x12U
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__axi_0_ar_ready)
                                                        ? 0x11U
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status))))))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       ? 0U
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                                        ? 0U
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axi_0_aw_ready)
                                                        ? 0xcU
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__axi_0_aw_ready)
                                                        ? 0xbU
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status)))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axi_0_aw_ready)
                                                        ? 0xaU
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__axi_0_aw_ready)
                                                        ? 9U
                                                        : (IData)(vlSelf->top__DOT__icache__DOT__status)))))
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                       ? 0U
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__icache__DOT__miss) 
                                                        & ((IData)(vlSelf->top__DOT__icache__DOT__random)
                                                            ? (IData)(
                                                                      (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
                                                                       >> 0x36U))
                                                            : (IData)(
                                                                      (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
                                                                       >> 0x36U))))
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__icache__DOT__miss)
                                                         ? 
                                                        ((IData)(vlSelf->jup)
                                                          ? 0U
                                                          : 8U)
                                                         : 0U)
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__icache__DOT__miss)
                                                         ? 
                                                        ((IData)(vlSelf->jup)
                                                          ? 0U
                                                          : 0x10U)
                                                         : 0U)))))));
    if (vlSelf->top__DOT__icache__DOT__hit) {
        vlSelf->top__DOT__icache__DOT__tag_arry_sel 
            = vlSelf->top__DOT__icache__DOT__hit1;
        vlSelf->top__DOT__icache_valid = ((0U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
                                          & 1U);
    } else {
        vlSelf->top__DOT__icache__DOT__tag_arry_sel 
            = vlSelf->top__DOT__icache__DOT__random;
        vlSelf->top__DOT__icache_valid = 0U;
    }
    vlSelf->top__DOT__icache__DOT__cache_addr = ((0U 
                                                  == (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__icache__DOT__hit)
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__icache__DOT__hit1) 
                                                    << 7U) 
                                                   | (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                 >> 4U))))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__icache__DOT__random) 
                                                    << 7U) 
                                                   | (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                 >> 4U)))))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__icache__DOT__hit)
                                                   ? 
                                                  (((IData)(vlSelf->top__DOT__icache__DOT__hit1) 
                                                    << 7U) 
                                                   | (IData)(vlSelf->top__DOT__icache__DOT__index_ar))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__icache__DOT__random) 
                                                    << 7U) 
                                                   | (IData)(vlSelf->top__DOT__icache__DOT__index_ar))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffdffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 9U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 9U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 9U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 9U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 9U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 9U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 9U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 9U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9)))))) 
              << 9U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 9U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                              >> 9U)) 
                                     & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9))));
    __Vtableidx5 = (((IData)(vlSelf->top__DOT__icache__DOT__next_status) 
                     << 5U) | (((IData)(vlSelf->top__DOT__axi_0_r_valid) 
                                << 4U) | (IData)(vlSelf->top__DOT__icache__DOT__read_fsm)));
    vlSelf->top__DOT__icache__DOT__read_fsm_next = 
        Vtop__ConstPool__TABLE_b959db56_0[__Vtableidx5];
    vlSelf->top__DOT__ctl1__DOT__fsm_next = ((0U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                              ? ((IData)(vlSelf->jup)
                                                  ? 1U
                                                  : 0U)
                                              : ((1U 
                                                  == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__icache_valid) 
                                                   & (IData)(vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin))
                                                   ? 0U
                                                   : 1U)
                                                  : 0U));
    vlSelf->top__DOT__icache__DOT__cache_sel = ((0x80U 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))
                                                 ? 
                                                ((0x40U 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))
                                                  ? 7U
                                                  : 0xbU)
                                                 : 
                                                ((0x40U 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))
                                                  ? 0xdU
                                                  : 0xeU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffffbffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xaU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xaU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xaU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xaU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xaU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xaU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xaU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xaU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10)))))) 
              << 0xaU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0xaU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                >> 0xaU)) 
                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10))));
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache0__WEN 
        = (1U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_wen) 
                 | (IData)(vlSelf->top__DOT__icache__DOT__cache_sel)));
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache1__WEN 
        = (1U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_wen) 
                 | ((IData)(vlSelf->top__DOT__icache__DOT__cache_sel) 
                    >> 1U)));
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache2__WEN 
        = (1U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_wen) 
                 | ((IData)(vlSelf->top__DOT__icache__DOT__cache_sel) 
                    >> 2U)));
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache3__WEN 
        = (1U & ((IData)(vlSelf->top__DOT__icache__DOT__cache_wen) 
                 | ((IData)(vlSelf->top__DOT__icache__DOT__cache_sel) 
                    >> 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffff7ffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xbU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xbU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xbU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xbU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xbU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xbU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xbU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xbU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11)))))) 
              << 0xbU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0xbU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                >> 0xbU)) 
                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffefffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xcU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xcU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xcU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xcU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xcU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xcU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xcU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xcU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12)))))) 
              << 0xcU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0xcU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                >> 0xcU)) 
                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffdfffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xdU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xdU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xdU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xdU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xdU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xdU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xdU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xdU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13)))))) 
              << 0xdU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0xdU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                >> 0xdU)) 
                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffffbfffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xeU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xeU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xeU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xeU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xeU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xeU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xeU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xeU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14)))))) 
              << 0xeU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0xeU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                >> 0xeU)) 
                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffff7fffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0xfU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0xfU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0xfU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0xfU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0xfU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xfU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0xfU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xfU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15)))))) 
              << 0xfU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0xfU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                >> 0xfU)) 
                                       & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffeffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x10U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x10U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x10U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x10U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x10U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x10U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x10U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x10U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16)))))) 
              << 0x10U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x10U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x10U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffdffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x11U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x11U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x11U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x11U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x11U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x11U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x11U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x11U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17)))))) 
              << 0x11U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x11U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x11U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffffbffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x12U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x12U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x12U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x12U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x12U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x12U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x12U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x12U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18)))))) 
              << 0x12U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x12U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x12U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffff7ffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x13U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x13U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x13U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x13U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x13U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x13U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x13U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x13U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19)))))) 
              << 0x13U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x13U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x13U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffefffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x14U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x14U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x14U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x14U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x14U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x14U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x14U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20)))))) 
              << 0x14U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x14U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x14U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffdfffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x15U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x15U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x15U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x15U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x15U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x15U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x15U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21)))))) 
              << 0x15U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x15U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x15U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffffbfffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x16U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x16U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x16U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x16U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x16U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x16U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x16U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x16U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22)))))) 
              << 0x16U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x16U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x16U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffff7fffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x17U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x17U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x17U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x17U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x17U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x17U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x17U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x17U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23)))))) 
              << 0x17U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x17U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x17U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffeffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x18U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x18U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x18U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x18U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x18U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x18U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x18U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x18U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24)))))) 
              << 0x18U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x18U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x18U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffdffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x19U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x19U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x19U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x19U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x19U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x19U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x19U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x19U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25)))))) 
              << 0x19U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x19U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x19U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffffbffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1aU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1aU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1aU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1aU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1aU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1aU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1aU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26)))))) 
              << 0x1aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x1aU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x1aU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffff7ffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1bU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1bU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1bU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1bU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1bU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1bU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1bU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27)))))) 
              << 0x1bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x1bU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x1bU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffefffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1cU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1cU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1cU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1cU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1cU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1cU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1cU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28)))))) 
              << 0x1cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x1cU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x1cU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffdfffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1dU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1dU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1dU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1dU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1dU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1dU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1dU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29)))))) 
              << 0x1dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x1dU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x1dU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffffbfffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1eU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1eU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1eU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1eU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1eU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1eU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1eU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30)))))) 
              << 0x1eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x1eU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x1eU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffff7fffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x1fU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x1fU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x1fU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x1fU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x1fU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1fU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x1fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1fU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31)))))) 
              << 0x1fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x1fU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x1fU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffeffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x20U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x20U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x20U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x20U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x20U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x20U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x20U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x20U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32)))))) 
              << 0x20U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x20U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x20U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffdffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x21U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x21U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x21U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x21U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x21U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x21U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x21U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x21U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33)))))) 
              << 0x21U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x21U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x21U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffffbffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x22U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x22U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x22U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x22U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x22U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x22U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x22U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x22U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34)))))) 
              << 0x22U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x22U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x22U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffff7ffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x23U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x23U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x23U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x23U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x23U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x23U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x23U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x23U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35)))))) 
              << 0x23U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x23U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x23U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffefffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x24U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x24U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x24U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x24U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x24U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x24U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x24U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x24U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36)))))) 
              << 0x24U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x24U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x24U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffdfffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x25U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x25U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x25U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x25U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x25U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x25U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x25U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x25U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37)))))) 
              << 0x25U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x25U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x25U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffffbfffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x26U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x26U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x26U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x26U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x26U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x26U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x26U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x26U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38)))))) 
              << 0x26U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x26U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x26U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffff7fffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x27U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x27U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x27U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x27U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x27U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x27U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x27U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x27U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39)))))) 
              << 0x27U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x27U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x27U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffeffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x28U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x28U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x28U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x28U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x28U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x28U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x28U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x28U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40)))))) 
              << 0x28U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x28U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x28U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffdffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x29U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x29U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x29U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x29U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x29U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x29U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x29U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x29U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41)))))) 
              << 0x29U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x29U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x29U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffffbffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2aU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2aU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2aU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2aU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2aU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2aU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2aU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42)))))) 
              << 0x2aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x2aU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x2aU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffff7ffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2bU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2bU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2bU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2bU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2bU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2bU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2bU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43)))))) 
              << 0x2bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x2bU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x2bU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffefffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2cU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2cU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2cU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2cU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2cU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2cU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2cU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44)))))) 
              << 0x2cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x2cU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x2cU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffdfffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2dU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2dU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2dU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2dU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2dU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2dU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2dU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45)))))) 
              << 0x2dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x2dU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x2dU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffffbfffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2eU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2eU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2eU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2eU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2eU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2eU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2eU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46)))))) 
              << 0x2eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x2eU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x2eU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffff7fffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x2fU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x2fU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x2fU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x2fU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x2fU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2fU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x2fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2fU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47)))))) 
              << 0x2fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x2fU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x2fU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47))));
}
