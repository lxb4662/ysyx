// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_soc.h for the primary calling header

#include "Vtop_soc___024root.h"
#include "Vtop_soc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop_soc___024unit____Vdpiimwrap_mem_write_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ data, IData/*31:0*/ &mem_write__Vfuncrtn);
void Vtop_soc___024unit____Vdpiimwrap_mtrace_TOP____024unit(IData/*31:0*/ pc, IData/*31:0*/ addr, IData/*31:0*/ a0, IData/*31:0*/ a1, IData/*31:0*/ len);
void Vtop_soc___024unit____Vdpiimwrap_status_cpy_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ a1, IData/*31:0*/ a0, IData/*31:0*/ write, IData/*31:0*/ pc, IData/*31:0*/ incache, IData/*31:0*/ valid);
extern const VlUnpacked<VlWide<4>/*127:0*/, 4> Vtop_soc__ConstPool__TABLE_a3cf4ec3_0;
void Vtop_soc___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ &mem_read__Vfuncrtn);
extern const VlUnpacked<CData/*7:0*/, 16> Vtop_soc__ConstPool__TABLE_58b3a3a7_0;
extern const VlUnpacked<CData/*6:0*/, 256> Vtop_soc__ConstPool__TABLE_0a033294_0;
extern const VlWide<32>/*1023:0*/ Vtop_soc__ConstPool__CONST_26258237_0;

VL_INLINE_OPT void Vtop_soc___024root___sequent__TOP__1(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*1:0*/ __Vtableidx4;
    CData/*1:0*/ __Vtableidx6;
    CData/*3:0*/ __Vtableidx7;
    CData/*3:0*/ __Vtableidx10;
    CData/*4:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v1;
    CData/*2:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v1;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v3;
    CData/*0:0*/ __Vdly__top_soc__DOT__top__DOT__icache__DOT__abort;
    CData/*5:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0;
    CData/*0:0*/ __Vdly__top_soc__DOT__top__DOT__dcache__DOT__abort;
    CData/*5:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0;
    CData/*7:0*/ __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt;
    CData/*7:0*/ __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt;
    CData/*7:0*/ __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt;
    CData/*0:0*/ __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready;
    CData/*0:0*/ __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en;
    CData/*0:0*/ __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready;
    CData/*0:0*/ __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid;
    CData/*0:0*/ __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready;
    CData/*0:0*/ __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid;
    IData/*31:0*/ __Vtask_mem_write__3__Vfuncout;
    VlWide<4>/*127:0*/ __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg;
    VlWide<4>/*127:0*/ __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0;
    VlWide<5>/*159:0*/ __Vtemp1;
    VlWide<5>/*159:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp53;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp113;
    VlWide<4>/*127:0*/ __Vtemp133;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp144;
    VlWide<4>/*127:0*/ __Vtemp148;
    VlWide<6>/*191:0*/ __Vtemp150;
    VlWide<8>/*255:0*/ __Vtemp152;
    VlWide<8>/*255:0*/ __Vtemp156;
    VlWide<9>/*287:0*/ __Vtemp157;
    VlWide<32>/*1023:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp165;
    VlWide<4>/*127:0*/ __Vtemp166;
    VlWide<4>/*127:0*/ __Vtemp188;
    VlWide<4>/*127:0*/ __Vtemp193;
    VlWide<4>/*127:0*/ __Vtemp195;
    VlWide<3>/*95:0*/ __Vtemp198;
    VlWide<3>/*95:0*/ __Vtemp200;
    VlWide<3>/*95:0*/ __Vtemp204;
    VlWide<3>/*95:0*/ __Vtemp206;
    VlWide<4>/*127:0*/ __Vtemp212;
    VlWide<4>/*127:0*/ __Vtemp214;
    VlWide<4>/*127:0*/ __Vtemp218;
    VlWide<4>/*127:0*/ __Vtemp220;
    VlWide<4>/*127:0*/ __Vtemp226;
    VlWide<4>/*127:0*/ __Vtemp228;
    VlWide<4>/*127:0*/ __Vtemp249;
    VlWide<4>/*127:0*/ __Vtemp254;
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<3>/*95:0*/ __Vtemp259;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp267;
    VlWide<4>/*127:0*/ __Vtemp273;
    VlWide<4>/*127:0*/ __Vtemp275;
    VlWide<4>/*127:0*/ __Vtemp279;
    VlWide<4>/*127:0*/ __Vtemp281;
    VlWide<4>/*127:0*/ __Vtemp287;
    VlWide<4>/*127:0*/ __Vtemp289;
    VlWide<4>/*127:0*/ __Vtemp291;
    VlWide<4>/*127:0*/ __Vtemp292;
    VlWide<4>/*127:0*/ __Vtemp293;
    VlWide<4>/*127:0*/ __Vtemp294;
    VlWide<4>/*127:0*/ __Vtemp296;
    VlWide<4>/*127:0*/ __Vtemp297;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp301;
    VlWide<4>/*127:0*/ __Vtemp306;
    VlWide<4>/*127:0*/ __Vtemp307;
    VlWide<4>/*127:0*/ __Vtemp310;
    VlWide<4>/*127:0*/ __Vtemp311;
    VlWide<4>/*127:0*/ __Vtemp318;
    VlWide<4>/*127:0*/ __Vtemp319;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp323;
    VlWide<4>/*127:0*/ __Vtemp328;
    VlWide<4>/*127:0*/ __Vtemp329;
    VlWide<4>/*127:0*/ __Vtemp332;
    VlWide<4>/*127:0*/ __Vtemp340;
    VlWide<4>/*127:0*/ __Vtemp341;
    VlWide<4>/*127:0*/ __Vtemp342;
    VlWide<4>/*127:0*/ __Vtemp345;
    VlWide<4>/*127:0*/ __Vtemp346;
    VlWide<4>/*127:0*/ __Vtemp351;
    VlWide<4>/*127:0*/ __Vtemp352;
    VlWide<4>/*127:0*/ __Vtemp355;
    VlWide<4>/*127:0*/ __Vtemp356;
    VlWide<4>/*127:0*/ __Vtemp363;
    VlWide<4>/*127:0*/ __Vtemp364;
    VlWide<4>/*127:0*/ __Vtemp367;
    VlWide<4>/*127:0*/ __Vtemp368;
    VlWide<4>/*127:0*/ __Vtemp373;
    VlWide<4>/*127:0*/ __Vtemp374;
    VlWide<4>/*127:0*/ __Vtemp377;
    VlWide<4>/*127:0*/ __Vtemp385;
    VlWide<5>/*159:0*/ __Vtemp390;
    VlWide<5>/*159:0*/ __Vtemp391;
    VlWide<5>/*159:0*/ __Vtemp392;
    VlWide<5>/*159:0*/ __Vtemp393;
    VlWide<3>/*95:0*/ __Vtemp397;
    VlWide<32>/*1023:0*/ __Vtemp415;
    VlWide<32>/*1023:0*/ __Vtemp416;
    VlWide<4>/*127:0*/ __Vtemp424;
    VlWide<4>/*127:0*/ __Vtemp425;
    VlWide<4>/*127:0*/ __Vtemp426;
    VlWide<4>/*127:0*/ __Vtemp430;
    VlWide<4>/*127:0*/ __Vtemp431;
    VlWide<4>/*127:0*/ __Vtemp432;
    QData/*63:0*/ __Vdlyvval__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0;
    QData/*63:0*/ __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg;
    QData/*63:0*/ __Vdlyvval__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0;
    QData/*63:0*/ __Vdlyvval__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v1;
    QData/*63:0*/ __Vtemp52;
    // Body
    __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en 
        = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en;
    __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready 
        = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready;
    __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready 
        = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready;
    __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid 
        = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid;
    __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0 = 0U;
    __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt 
        = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2 = 0U;
    __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt 
        = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt;
    __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0 = 0U;
    __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt 
        = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt;
    __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid 
        = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid;
    __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready 
        = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready;
    __Vdly__top_soc__DOT__top__DOT__dcache__DOT__abort 
        = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__abort;
    __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg 
        = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg;
    __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
        = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U];
    __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
        = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U];
    __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
        = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U];
    __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
        = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U];
    __Vdlyvset__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v1 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v1 = 0U;
    __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v3 = 0U;
    __Vdly__top_soc__DOT__top__DOT__icache__DOT__abort 
        = vlSelf->top_soc__DOT__top__DOT__icache__DOT__abort;
    if ((1U & (~ (IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)))) {
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__i = 0x20U;
    }
    if (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
         & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__div_w_r = 0U;
    }
    if ((((((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready) 
            & (IData)(vlSelf->top_soc__DOT__io_master_wvalid)) 
           & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
          & (IData)(vlSelf->top_soc__DOT__io_master_awvalid)) 
         & (IData)(vlSelf->clock))) {
        Vtop_soc___024unit____Vdpiimwrap_mem_write_TOP____024unit(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awaddr, 4U, (QData)((IData)(
                                                                                ((0U 
                                                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt))
                                                                                 ? 
                                                                                ((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[1U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[0U] 
                                                                                >> 0x14U))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt))
                                                                                 ? 
                                                                                ((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[2U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[1U] 
                                                                                >> 0x14U))
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt))
                                                                                 ? 
                                                                                ((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[3U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[2U] 
                                                                                >> 0x14U))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt))
                                                                                 ? 
                                                                                ((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[4U] 
                                                                                << 0xcU) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[3U] 
                                                                                >> 0x14U))
                                                                                 : 0U)))))), __Vtask_mem_write__3__Vfuncout);
    }
    if ((1U & (((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                 >> 0xfU) & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U]) 
               & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[0U] 
                  >> 1U)))) {
        Vtop_soc___024unit____Vdpiimwrap_mtrace_TOP____024unit(
                                                               ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[2U] 
                                                                 << 0x17U) 
                                                                | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[1U] 
                                                                   >> 9U)), vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr, (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw), (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw 
                                                                                >> 0x20U)), 
                                                               (3U 
                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                                                   >> 0x1dU)));
    }
    if (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
         & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__dividend_r 
            = (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])));
    }
    if (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
         & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__divisor_r 
            = (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U])));
    }
    if (VL_UNLIKELY((1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                            >> 1U) & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])))) {
        VL_FINISH_MT("/home/lixinbao/ysyx-workbench/npc/vsrc/if.v", 610, "");
    }
    if (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
         & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__div_signed_r 
            = (1U & (~ (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                        >> 0x1dU)));
    }
    if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__sign_r 
            = ((2U & ((0xeU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                               >> 0x1cU)) | (((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__div_w_r)
                                               ? ((
                                                   (~ 
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U] 
                                                     >> 0x1fU)) 
                                                   & (~ 
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U] 
                                                       >> 0x1fU))) 
                                                  | ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U] 
                                                      >> 0x1fU) 
                                                     & (~ 
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U] 
                                                         >> 0x1fU))))
                                               : ((
                                                   (~ 
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                                                     >> 0x1fU)) 
                                                   & (~ 
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U] 
                                                       >> 0x1fU))) 
                                                  | ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                                                      >> 0x1fU) 
                                                     & (~ 
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U] 
                                                         >> 0x1fU))))) 
                                             << 1U))) 
               | (1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                         >> 0x1dU) | ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__div_w_r)
                                       ? (((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U] 
                                            & vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U]) 
                                           >> 0x1fU) 
                                          | ((~ (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U] 
                                                 >> 0x1fU)) 
                                             & (~ (
                                                   vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U] 
                                                   >> 0x1fU))))
                                       : (((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                                            & vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U]) 
                                           >> 0x1fU) 
                                          | ((~ (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                                                 >> 0x1fU)) 
                                             & (~ (
                                                   vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U] 
                                                   >> 0x1fU))))))));
    }
    VL_EXTEND_WW(130,103, __Vtemp1, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    VL_EXTEND_WW(130,103, __Vtemp2, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    Vtop_soc___024unit____Vdpiimwrap_status_cpy_TOP____024unit(
                                                               (0x1fU 
                                                                & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                                   >> 1U)), 
                                                               ((vlSelf->top_soc__DOT__top__DOT__sideway[1U] 
                                                                 << 0x1aU) 
                                                                | (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                                   >> 6U)), 
                                                               ((vlSelf->top_soc__DOT__top__DOT__sideway[2U] 
                                                                 << 0x1aU) 
                                                                | (vlSelf->top_soc__DOT__top__DOT__sideway[1U] 
                                                                   >> 6U)), 
                                                               (1U 
                                                                & vlSelf->top_soc__DOT__top__DOT__sideway[0U]), 
                                                               ((1U 
                                                                 & vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U])
                                                                 ? 
                                                                ((vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[3U] 
                                                                  << 0x19U) 
                                                                 | (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[2U] 
                                                                    >> 7U))
                                                                 : 
                                                                ((__Vtemp1[3U] 
                                                                  << 0x19U) 
                                                                 | (__Vtemp1[2U] 
                                                                    >> 7U))), 
                                                               (1U 
                                                                & (vlSelf->top_soc__DOT__top__DOT__sideway[2U] 
                                                                   >> 6U)), 
                                                               (1U 
                                                                & (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U] 
                                                                   | __Vtemp2[0U])));
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__mtime 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
            ? ((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__write_mtime)
                ? 0ULL : (1ULL + vlSelf->top_soc__DOT__top__DOT__lsu__DOT__mtime))
            : 0ULL);
    if (vlSelf->reset) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 0U;
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en = 1U;
    } else if (((((~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
                  & (IData)(vlSelf->top_soc__DOT__io_master_awvalid)) 
                 & (IData)(vlSelf->top_soc__DOT__io_master_wvalid)) 
                & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en))) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 1U;
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en = 0U;
    } else if (vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en = 1U;
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 0U;
    } else {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 0U;
    }
    __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready 
        = ((~ (IData)(vlSelf->reset)) & ((((~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready)) 
                                           & (IData)(vlSelf->top_soc__DOT__io_master_wvalid)) 
                                          & (IData)(vlSelf->top_soc__DOT__io_master_awvalid)) 
                                         & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en)));
    if (vlSelf->reset) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid = 0U;
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp = 0U;
    } else if ((((((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready) 
                   & (IData)(vlSelf->top_soc__DOT__io_master_awvalid)) 
                  & (~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid))) 
                 & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready)) 
                & (IData)(vlSelf->top_soc__DOT__io_master_wvalid))) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid = 1U;
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid 
            = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awid;
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp = 0U;
    } else if (vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm))) {
            __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt = 0U;
        } else if ((((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm)) 
                     & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready)) 
                    & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__wd_finfished)))) {
            __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt)));
        }
    } else {
        __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt = 0U;
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                    >> 9U) | (~ (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                 >> 7U)))) & (~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                                  >> 8U) 
                                                 | (~ 
                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U])))))) {
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0[0U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][0U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0[1U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][1U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0[2U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][2U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0[3U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][3U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U]));
        __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0 
            = (0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                        >> 1U));
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                    >> 9U) | (~ (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                 >> 7U)))) & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                               >> 8U) 
                                              | (~ 
                                                 vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U]))))) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[0U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[1U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[2U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[3U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                    >> 9U) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                              >> 7U))) & (~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                              >> 8U) 
                                             | (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U])))))) {
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0[0U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][0U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0[1U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][1U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0[2U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][2U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0[3U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][3U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U]));
        __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0 
            = (0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                        >> 1U));
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                    >> 9U) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                              >> 7U))) & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                           >> 8U) | 
                                          (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U]))))) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[0U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[1U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[2U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[3U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                    >> 9U) | (~ (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                 >> 7U)))) & (~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                                  >> 8U) 
                                                 | vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U]))))) {
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0[0U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][0U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0[1U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][1U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0[2U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][2U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0[3U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][3U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U]));
        __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0 
            = (0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                        >> 1U));
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                    >> 9U) | (~ (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                 >> 7U)))) & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                               >> 8U) 
                                              | vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U])))) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[0U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[1U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[2U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[3U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                    >> 9U) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                              >> 7U))) & (~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                              >> 8U) 
                                             | vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U]))))) {
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0[0U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][0U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0[1U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][1U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0[2U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][2U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U]));
        __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0[3U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U])) 
               | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                             >> 1U))][3U] & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U]));
        __Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0 
            = (0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                        >> 1U));
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                    >> 9U) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                              >> 7U))) & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                                           >> 8U) | 
                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U])))) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[0U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[1U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[2U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[3U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
                       >> 1U))][3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
                               >> 4U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_data_in;
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0 = 0U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr;
            }
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
                               >> 3U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1 
                    = (1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
                                     >> 2U)));
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1 = 0x15U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr;
            }
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
                               >> 1U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2 
                    = (1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1));
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2 = 0x16U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr;
            }
        }
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0 
                               >> 4U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_data_in;
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0 = 0U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr;
            }
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0 
                               >> 3U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1 
                    = (1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0 
                                     >> 2U)));
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1 = 0x15U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr;
            }
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0 
                               >> 1U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2 
                    = (1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0));
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2 = 0x16U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr;
            }
        }
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                               >> 4U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_data_in;
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0 = 0U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr;
            }
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                               >> 3U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1 
                    = (1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                                     >> 2U)));
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1 = 0x15U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr;
            }
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                               >> 1U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2 
                    = (1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1));
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2 = 0x16U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr;
            }
        }
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0 
                           >> 5U)))) {
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0 
                               >> 4U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_data_in;
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0 = 0U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr;
            }
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0 
                               >> 3U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1 
                    = (1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0 
                                     >> 2U)));
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1 = 0x15U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr;
            }
            if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0 
                               >> 1U)))) {
                vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2 
                    = (1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0));
                vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2 = 1U;
                vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2 = 0x16U;
                vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr;
            }
        }
    }
    __Vtemp52 = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
                  ? ((0x40U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                      ? ((0x20U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                          ? 0ULL : ((0x10U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                     ? 0ULL : ((8U 
                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                                ? 0ULL
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                                      ? 0ULL
                                                      : 
                                                     ((0xfffffffffffffffeULL 
                                                       & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                      | (QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                             >> 0x1fU))))))))))))
                      : ((0x20U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                          ? ((0x10U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                              ? ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                  ? ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                      ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xfffffffffffffffcULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (2U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 1U)))))
                                              : ((0xfffffffffffffff8ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (4U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 2U))))))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xfffffffffffffff0ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (8U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 3U)))))
                                              : ((0xffffffffffffffe0ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x10U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 4U)))))))
                                      : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xffffffffffffffc0ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x20U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 5U)))))
                                              : ((0xffffffffffffff80ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x40U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 6U))))))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xffffffffffffff00ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x80U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 7U)))))
                                              : ((0xfffffffffffffe00ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x100U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 8U))))))))
                                  : ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                      ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xfffffffffffffc00ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x200U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 9U)))))
                                              : ((0xfffffffffffff800ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x400U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0xaU))))))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xfffffffffffff000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x800U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0xbU)))))
                                              : ((0xffffffffffffe000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x1000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0xcU)))))))
                                      : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xffffffffffffc000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x2000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0xdU)))))
                                              : ((0xffffffffffff8000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x4000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0xeU))))))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xffffffffffff0000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x8000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0xfU)))))
                                              : ((0xfffffffffffe0000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x10000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x10U)))))))))
                              : ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                  ? ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                      ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xfffffffffffc0000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x20000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x11U)))))
                                              : ((0xfffffffffff80000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x40000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x12U))))))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xfffffffffff00000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x80000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x13U)))))
                                              : ((0xffffffffffe00000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x100000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x14U)))))))
                                      : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xffffffffffc00000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x200000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x15U)))))
                                              : ((0xffffffffff800000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x400000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x16U))))))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xffffffffff000000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x800000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x17U)))))
                                              : ((0xfffffffffe000000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x1000000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x18U))))))))
                                  : ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                      ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xfffffffffc000000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x2000000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x19U)))))
                                              : ((0xfffffffff8000000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x4000000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x1aU))))))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xfffffffff0000000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x8000000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x1bU)))))
                                              : ((0xffffffffe0000000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x10000000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x1cU)))))))
                                      : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((0xffffffffc0000000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x20000000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x1dU)))))
                                              : ((0xffffffff80000000ULL 
                                                  & vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans) 
                                                 | (QData)((IData)(
                                                                   (0x40000000U 
                                                                    & ((~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)) 
                                                                       << 0x1eU))))))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                   >> 0x20U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((~ 
                                                                     (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                      >> 0x1fU)) 
                                                                    << 0x1fU))))
                                              : ((QData)((IData)(
                                                                 (((IData)(
                                                                           (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                            >> 0x21U)) 
                                                                   << 1U) 
                                                                  | (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU)))))) 
                                                 << 0x20U))))))
                          : ((0x10U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                              ? ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                  ? ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                      ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x22U))))) 
                                                  << 0x22U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x21U))
                                              : (((QData)((IData)(
                                                                  (0x1fffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x23U))))) 
                                                  << 0x23U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x22U)))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0xfffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x24U))))) 
                                                  << 0x24U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x23U))
                                              : (((QData)((IData)(
                                                                  (0x7ffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x25U))))) 
                                                  << 0x25U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x24U))))
                                      : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0x3ffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x26U))))) 
                                                  << 0x26U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x25U))
                                              : (((QData)((IData)(
                                                                  (0x1ffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x27U))))) 
                                                  << 0x27U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x26U)))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0xffffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x28U))))) 
                                                  << 0x28U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x27U))
                                              : (((QData)((IData)(
                                                                  (0x7fffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x29U))))) 
                                                  << 0x29U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x28U)))))
                                  : ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                      ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x2aU))))) 
                                                  << 0x2aU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x29U))
                                              : (((QData)((IData)(
                                                                  (0x1fffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x2bU))))) 
                                                  << 0x2bU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x2aU)))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0xfffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x2cU))))) 
                                                  << 0x2cU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x2bU))
                                              : (((QData)((IData)(
                                                                  (0x7ffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x2dU))))) 
                                                  << 0x2dU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x2cU))))
                                      : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0x3ffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x2eU))))) 
                                                  << 0x2eU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x2dU))
                                              : (((QData)((IData)(
                                                                  (0x1ffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x2fU))))) 
                                                  << 0x2fU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x2eU)))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x30U))))) 
                                                  << 0x30U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x2fU))
                                              : (((QData)((IData)(
                                                                  (0x7fffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x31U))))) 
                                                  << 0x31U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x30U))))))
                              : ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                  ? ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                      ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0x3fffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x32U))))) 
                                                  << 0x32U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x31U))
                                              : (((QData)((IData)(
                                                                  (0x1fffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x33U))))) 
                                                  << 0x33U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x32U)))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x34U))))) 
                                                  << 0x34U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x33U))
                                              : (((QData)((IData)(
                                                                  (0x7ffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x35U))))) 
                                                  << 0x35U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x34U))))
                                      : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0x3ffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x36U))))) 
                                                  << 0x36U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x35U))
                                              : (((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x37U))))) 
                                                  << 0x37U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x36U)))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x38U))))) 
                                                  << 0x38U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x37U))
                                              : (((QData)((IData)(
                                                                  (0x7fU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x39U))))) 
                                                  << 0x39U) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x38U)))))
                                  : ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                      ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x3aU))))) 
                                                  << 0x3aU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x39U))
                                              : (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x3bU))))) 
                                                  << 0x3bU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x3aU)))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (0xfU 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x3cU))))) 
                                                  << 0x3cU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x3bU))
                                              : (((QData)((IData)(
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x3dU))))) 
                                                  << 0x3dU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x3cU))))
                                      : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                          ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? (((QData)((IData)(
                                                                  (3U 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x3eU))))) 
                                                  << 0x3eU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x3dU))
                                              : (((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
                                                                              >> 0x3fU))))) 
                                                  << 0x3fU) 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                         >> 0x1fU))))) 
                                                    << 0x3eU)))
                                          : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                                              ? ((QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                                                                      >> 0x1fU))))) 
                                                 << 0x3fU)
                                              : 0ULL)))))))
                  : 0ULL);
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans 
        = __Vtemp52;
    VL_ADD_W(4, __Vtemp55, vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg, vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg);
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        __Vtemp53[1U] = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))
                          ? 0U : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg))
                                   ? __Vtemp55[1U] : 
                                  vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[1U]));
        __Vtemp53[2U] = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))
                          ? 0U : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg))
                                   ? __Vtemp55[2U] : 
                                  vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[2U]));
        __Vtemp53[3U] = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))
                          ? 0U : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg))
                                   ? __Vtemp55[3U] : 
                                  vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[3U]));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[0U] 
            = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))
                ? 0U : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg))
                         ? __Vtemp55[0U] : vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[0U]));
    } else {
        __Vtemp53[1U] = 0U;
        __Vtemp53[2U] = 0U;
        __Vtemp53[3U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[0U] = 0U;
    }
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[1U] 
        = __Vtemp53[1U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[2U] 
        = __Vtemp53[2U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[3U] 
        = __Vtemp53[3U];
    __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
            ? (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)) 
                | (2U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)))
                ? (0xffU & (((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready) 
                             & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__wa_fininshed)))
                             ? ((IData)(1U) + (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt))
                             : (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt)))
                : 0U) : 0U);
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm))) {
            if ((0x80U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt))) {
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[0U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[0U];
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[1U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[1U];
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[2U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[2U];
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[3U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[3U];
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[4U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_data_out;
            } else {
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[0U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[0U];
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[1U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[1U];
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[2U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[2U];
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[3U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[3U];
                vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[4U] 
                    = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_data_out;
            }
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[3U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[4U] = 0U;
    }
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_fsm 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
            ? (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_fsm_next)
            : 0U);
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__write_mtimecmp) {
            vlSelf->top_soc__DOT__top__DOT__lsu__DOT__mtimecmp 
                = vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__mtimecmp = 0ULL;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm 
            = vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_next;
        __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt 
            = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm))
                ? 0U : ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm))
                         ? (0xffU & ((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt))
                                      : (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt)))
                         : 0U));
    } else {
        vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm = 0U;
        __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt = 0U;
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                    >> 9U) | (~ (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                 >> 7U)))) & (~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                                  >> 8U) 
                                                 | (~ 
                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U])))))) {
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0[0U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][0U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0[1U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][1U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0[2U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][2U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0[3U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][3U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U]));
        __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0 
            = (0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                        >> 1U));
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                    >> 9U) | (~ (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                 >> 7U)))) & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                               >> 8U) 
                                              | (~ 
                                                 vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U]))))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[0U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[1U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[2U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[3U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                    >> 9U) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                              >> 7U))) & (~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                              >> 8U) 
                                             | (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U])))))) {
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0[0U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][0U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0[1U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][1U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0[2U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][2U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0[3U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][3U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U]));
        __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0 
            = (0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                        >> 1U));
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                    >> 9U) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                              >> 7U))) & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                           >> 8U) | 
                                          (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U]))))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[0U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[1U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[2U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[3U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                    >> 9U) | (~ (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                 >> 7U)))) & (~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                                  >> 8U) 
                                                 | vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U]))))) {
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0[0U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][0U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0[1U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][1U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0[2U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][2U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0[3U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][3U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U]));
        __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0 
            = (0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                        >> 1U));
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                    >> 9U) | (~ (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                 >> 7U)))) & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                               >> 8U) 
                                              | vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U])))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[0U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[1U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[2U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[3U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                    >> 9U) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                              >> 7U))) & (~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                              >> 8U) 
                                             | vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U]))))) {
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0[0U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][0U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0[1U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][1U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0[2U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][2U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U]));
        __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0[3U] 
            = ((((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                  << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
                               >> 1U)) & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U])) 
               | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram
                  [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                             >> 1U))][3U] & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U]));
        __Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0 
            = (0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                        >> 1U));
    }
    if ((1U & ((~ ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                    >> 9U) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                              >> 7U))) & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                                           >> 8U) | 
                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U])))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[0U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[1U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[2U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[3U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram
            [(0x3fU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
                       >> 1U))][3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[0U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[1U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[2U] 
            = VL_RANDOM_I(32);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r))) {
            if (vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid) {
                __Vtemp113[1U] = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[0U];
                __Vtemp113[2U] = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[1U];
                __Vtemp113[3U] = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[2U];
                vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[0U] 
                    = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata;
                vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[1U] 
                    = __Vtemp113[1U];
                vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[2U] 
                    = __Vtemp113[2U];
                vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[3U] 
                    = __Vtemp113[3U];
            }
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_data_ram[3U] = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid = 0U;
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp = 0U;
    } else if ((((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready) 
                 & (1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm))) 
                & (~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid)))) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid = 1U;
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp = 0U;
    } else if (((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid) 
                & (1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r)))) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[0U] 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[0U];
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[1U] 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[1U];
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[2U] 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[2U];
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[3U] 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm))) {
            if ((0x80U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt))) {
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[0U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[0U];
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[1U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[1U];
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[2U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[2U];
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[3U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[3U];
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[4U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_data_out;
            } else {
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[0U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[0U];
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[1U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[1U];
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[2U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[2U];
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[3U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[3U];
                vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[4U] 
                    = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_data_out;
            }
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[3U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[4U] = 0U;
    }
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
            ? ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r))
                ? 0U : ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r))
                         ? (0xffU & ((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid)
                                      ? ((IData)(1U) 
                                         + (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                                      : (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt)))
                         : 0U)) : 0U);
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden) {
            vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid 
                = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arid;
        }
    }
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__fencei_cnt 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
            ? ((6U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fencei_cnt)))
                : 0U) : 0U);
    if ((1U & (~ (IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)))) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt 
            = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
                ? ((7U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? (0xffU & ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt_ready_to_go)
                                 ? ((IData)(1U) + (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt))
                                 : (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt)))
                    : 0U) : 0U);
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__random 
                = (1U & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__random)));
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__random = 0U;
    }
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fencei_cnt 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
            ? ((6U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? (0xffU & ((IData)(1U) + (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fencei_cnt)))
                : 0U) : 0U);
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((((((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm)) 
                | (3U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) 
               | (4U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) 
              | (5U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) 
             & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__read_abort))) {
            __Vdly__top_soc__DOT__top__DOT__dcache__DOT__abort = 1U;
        } else if ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                    & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__abort))) {
            __Vdly__top_soc__DOT__top__DOT__dcache__DOT__abort = 0U;
        }
    } else {
        __Vdly__top_soc__DOT__top__DOT__dcache__DOT__abort = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random 
                = (1U & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)));
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt 
            = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
                ? ((7U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? (0xffU & ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt_ready_to_go)
                                 ? ((IData)(1U) + (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt))
                                 : (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt)))
                    : 0U) : 0U);
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((((IData)(vlSelf->top_soc__DOT__top__DOT__r) 
              & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) 
             | ((((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm)) 
                  & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit)) 
                 & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_reg))) 
                & (IData)(vlSelf->top_soc__DOT__top__DOT__r)))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U] 
                = (6U & ((IData)((vlSelf->top_soc__DOT__top__DOT__r 
                                  >> 1U)) << 1U));
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U] = 0U;
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                = ((IData)((vlSelf->top_soc__DOT__top__DOT__r 
                            >> 3U)) << 3U);
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[3U] 
                = ((IData)((vlSelf->top_soc__DOT__top__DOT__r 
                            >> 3U)) >> 0x1dU);
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((((vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[0U] 
               >> 1U) & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) 
             | ((((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm)) 
                  & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit)) 
                 & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_reg))) 
                & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[0U] 
                   >> 1U)))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U] 
                = (((vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[1U] 
                     << 0x1fU) | (0x7ffffff8U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[0U] 
                                                 >> 1U))) 
                   | ((6U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[0U] 
                             >> 1U)) | (1U & vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[0U])));
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U] 
                = ((7U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[1U] 
                          >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                      << 0x1fU) | (0x7ffffff8U 
                                                   & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[1U] 
                                                      >> 1U))));
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                = ((7U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                          >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[3U] 
                                      << 0x1fU) | (0x7ffffff8U 
                                                   & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                      >> 1U))));
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[3U] 
                = (7U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[3U] 
                         >> 1U));
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm)) 
              & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U]) 
             & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                 >> 0x10U) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                              >> 0xfU)))) {
            vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[0U] 
                = (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw);
            vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[1U] 
                = (IData)((vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw 
                           >> 0x20U));
            vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[2U] 
                = vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[2U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
             & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm)))) {
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg 
                = ((1U & ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__mul__mul_signed) 
                          & (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U] 
                             >> 0x1fU))) ? (1ULL + 
                                            (~ (((QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U])))))
                    : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U]))));
        } else if ((0U != (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))) {
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg 
                = (vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg 
                   >> 1U);
        }
    } else {
        __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg = 0ULL;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
             & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm)))) {
            VL_EXTEND_WQ(128,64, __Vtemp133, ((1U & 
                                               (((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__mul__mul_signed) 
                                                 >> 1U) 
                                                & (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                                                   >> 0x1fU)))
                                               ? (1ULL 
                                                  + 
                                                  (~ 
                                                   (((QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])))))
                                               : (((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])))));
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
                = __Vtemp133[0U];
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
                = __Vtemp133[1U];
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
                = __Vtemp133[2U];
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
                = __Vtemp133[3U];
        } else if ((0U != (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))) {
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
                = (vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
                   << 1U);
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
                = ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
                    >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
                                 << 1U));
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
                = ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
                    >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
                                 << 1U));
            __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
                = ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
                    >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
                                 << 1U));
        }
    } else {
        __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] = 0U;
        __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] = 0U;
        __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] = 0U;
        __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] = 0U;
    }
    vlSelf->top_soc__DOT__top__DOT__jup_addr = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
                                                 ? 
                                                ((8U 
                                                  & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                                  ? (IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group
                                                            [3U])
                                                  : 
                                                 ((4U 
                                                   & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                                   ? (IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group
                                                             [0U])
                                                   : (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_add)))
                                                 : 0U);
    VL_EXTEND_WQ(65,64, __Vtemp139, ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__div_w_r)
                                      ? ((0x20000000U 
                                          & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                          ? (((QData)((IData)(
                                                              vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U])))
                                          : ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U] 
                                              >> 0x1fU)
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U])))))
                                              : (((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U])))))
                                      : ((0x20000000U 
                                          & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                          ? (((QData)((IData)(
                                                              vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U])))
                                          : ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U] 
                                              >> 0x1fU)
                                              ? (1ULL 
                                                 + 
                                                 (~ 
                                                  (((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U])))))
                                              : (((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U])))))));
    __Vtemp143[0U] = ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[1U] 
                       << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[0U] 
                                    >> 1U));
    __Vtemp143[1U] = ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[2U] 
                       << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[1U] 
                                    >> 1U));
    __Vtemp143[2U] = ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[3U] 
                       << 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[2U] 
                                    >> 1U));
    __Vtemp143[3U] = (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[3U] 
                      >> 1U);
    VL_EXTEND_WW(128,127, __Vtemp144, __Vtemp143);
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[0U] 
            = (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
                & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))
                ? 0U : __Vtemp144[0U]);
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[1U] 
            = (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
                & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))
                ? (__Vtemp139[0U] << 0x1fU) : __Vtemp144[1U]);
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[2U] 
            = (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
                & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))
                ? ((__Vtemp139[0U] >> 1U) | (__Vtemp139[1U] 
                                             << 0x1fU))
                : __Vtemp144[2U]);
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[3U] 
            = (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
                & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))
                ? ((__Vtemp139[1U] >> 1U) | (__Vtemp139[2U] 
                                             << 0x1fU))
                : __Vtemp144[3U]);
    } else {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
             & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))) {
            VL_EXTEND_WQ(128,64, __Vtemp148, ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__div_w_r)
                                               ? ((0x20000000U 
                                                   & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])))
                                                   : 
                                                  ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U] 
                                                    >> 0x1fU)
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ 
                                                     (((QData)((IData)(
                                                                       vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])))))
                                               : ((0x20000000U 
                                                   & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])))
                                                   : 
                                                  ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                                                    >> 0x1fU)
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ 
                                                     (((QData)((IData)(
                                                                       vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U])))))));
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[0U] 
                = __Vtemp148[0U];
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[1U] 
                = __Vtemp148[1U];
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[2U] 
                = __Vtemp148[2U];
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[3U] 
                = __Vtemp148[3U];
        } else if ((1U & (~ (vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
                             >> 0x1fU)))) {
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[0U] 
                = vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[0U];
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[1U] 
                = vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[1U];
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[2U] 
                = vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[2U];
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[3U] 
                = vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & vlSelf->top_soc__DOT__top__DOT__sideway[0U])) {
            __Vdlyvval__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0 
                = ((0U == (0x1fU & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                    >> 1U))) ? 0ULL
                    : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                        << 0x3aU) | (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                      << 0x1aU) | ((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                   >> 6U))));
            __Vdlyvset__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0 = 1U;
            __Vdlyvdim0__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0 
                = (0x1fU & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                            >> 1U));
        }
    } else {
        __Vdlyvset__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v1 = 1U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                    >> 0x13U) & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U]))) {
            __Vdlyvval__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0 
                = ((1U == (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                           >> 0x1dU)) ? vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw
                    : ((2U == (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                               >> 0x1dU)) ? ((~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw) 
                                             & vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr_out)
                        : ((3U == (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                   >> 0x1dU)) ? (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                 | vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr_out)
                            : 0ULL)));
            __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0 = 1U;
            __Vdlyvdim0__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0 
                = vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_real_addr;
        } else if ((1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                           >> 3U) & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U]))) {
            __Vdlyvval__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v1 
                = (QData)((IData)(((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U] 
                                    << 0x17U) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U] 
                                                 >> 9U))));
            __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v1 = 1U;
        }
    } else {
        __Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v3 = 1U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__next_stage_ready) {
            __Vtemp150[0U] = (IData)(((0x10U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                       ? ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                           ? 0ULL : 
                                          ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                            ? 0ULL : 
                                           ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                             ? 0ULL
                                             : ((1U 
                                                 & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                 ? 0ULL
                                                 : 
                                                (((QData)((IData)(
                                                                  ((1U 
                                                                    & vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U])
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                        << 0x1fU) 
                                                                       | (0x7ffff000U 
                                                                          & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                             >> 1U)))))))))))
                                       : ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                           ? ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                               ? 0ULL
                                               : ((2U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                    ? 0ULL
                                                    : 
                                                   ((((0x80000U 
                                                       & vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_j)
                                                       ? 0x7ffffffffffULL
                                                       : 0ULL) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_j 
                                                                       << 1U)))))))
                                           : ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                               ? ((2U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                    ? 0ULL
                                                    : 
                                                   ((((0x800U 
                                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_b))
                                                       ? 0x7ffffffffffffULL
                                                       : 0ULL) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_b) 
                                                                       << 1U))))))
                                               : ((2U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                    ? 0ULL
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_s) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_s))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U])))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                           << 0xbU) 
                                                                          | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                             >> 0x15U))))))
                                                    : 0ULL))))));
            __Vtemp150[1U] = (IData)((((0x10U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                        ? ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                            ? 0ULL : 
                                           ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                             ? 0ULL
                                             : ((2U 
                                                 & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                  ? 0ULL
                                                  : 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U])
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                         << 0x1fU) 
                                                                        | (0x7ffff000U 
                                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                              >> 1U)))))))))))
                                        : ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                            ? ((4U 
                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                ? 0ULL
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                    ? 0ULL
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                     ? 0ULL
                                                     : 
                                                    ((((0x80000U 
                                                        & vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_j)
                                                        ? 0x7ffffffffffULL
                                                        : 0ULL) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_j 
                                                                        << 1U)))))))
                                            : ((4U 
                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                    ? 0ULL
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                     ? 0ULL
                                                     : 
                                                    ((((0x800U 
                                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_b))
                                                        ? 0x7ffffffffffffULL
                                                        : 0ULL) 
                                                      << 0xdU) 
                                                     | (QData)((IData)(
                                                                       ((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_b) 
                                                                        << 1U))))))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                     ? 0ULL
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_s) 
                                                                             >> 0xbU))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_s))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U])))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                              >> 0x15U))))))
                                                     : 0ULL))))) 
                                      >> 0x20U));
            __Vtemp152[0U] = ((0xfffffe00U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[0U] 
                                              << 8U)) 
                              | (((((0x17U == (0x7fU 
                                               & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                  >> 1U))) 
                                    | (0x6fU == (0x7fU 
                                                 & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                    >> 1U)))) 
                                   | (0x63U == (0x7fU 
                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                   >> 1U)))) 
                                  << 8U) | ((((((((0x13U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                       >> 1U))) 
                                                  | (0x1bU 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                         >> 1U)))) 
                                                 | (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                        >> 1U)))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                       >> 1U)))) 
                                               | (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                      >> 1U)))) 
                                              | (0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                     >> 1U)))) 
                                             << 7U) 
                                            | ((((((((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                          >> 1U))) 
                                                     | (0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                            >> 1U)))) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                           >> 1U)))) 
                                                   | (0x33U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                          >> 1U)))) 
                                                  | (0x3bU 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                         >> 1U))))
                                                  ? 0U
                                                  : 
                                                 ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                       >> 1U)))
                                                   ? 2U
                                                   : 
                                                  (((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                         >> 1U))) 
                                                    | (0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                           >> 1U))))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__csrr)
                                                     ? 3U
                                                     : 0U)))) 
                                                << 5U) 
                                               | (0x1fU 
                                                  & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                     >> 8U))))));
            __Vtemp152[4U] = (((IData)(((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                         & ((0x1fU 
                                             & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                >> 0x15U)) 
                                            == (0x1fU 
                                                & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                   >> 1U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                  >> 6U)))
                                         : vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg
                                        [(0x1fU & (
                                                   vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                   >> 0x15U))])) 
                               >> 0x17U) | ((IData)(
                                                    (((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                       & ((0x1fU 
                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                              >> 0x15U)) 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                              >> 1U))))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                                           << 0x1aU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                             >> 6U)))
                                                       : 
                                                      vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                          >> 0x15U))]) 
                                                     >> 0x20U)) 
                                            << 9U));
            __Vtemp152[5U] = (((IData)((((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                          & ((0x1fU 
                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                 >> 0x15U)) 
                                             == (0x1fU 
                                                 & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                    >> 1U))))
                                          ? (((QData)((IData)(
                                                              vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                   >> 6U)))
                                          : vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg
                                         [(0x1fU & 
                                           (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                            >> 0x15U))]) 
                                        >> 0x20U)) 
                               >> 0x17U) | ((IData)(
                                                    ((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                      & ((0x1fU 
                                                          & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                             >> 0x10U)) 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                             >> 1U))))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                                          << 0x1aU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                            >> 6U)))
                                                      : 
                                                     vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                         >> 0x10U))])) 
                                            << 9U));
            __Vtemp152[6U] = (((IData)(((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                         & ((0x1fU 
                                             & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                >> 0x10U)) 
                                            == (0x1fU 
                                                & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                   >> 1U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(
                                                                vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                  >> 6U)))
                                         : vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg
                                        [(0x1fU & (
                                                   vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                   >> 0x10U))])) 
                               >> 0x17U) | ((IData)(
                                                    (((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                       & ((0x1fU 
                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                              >> 0x10U)) 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                              >> 1U))))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                                           << 0x1aU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                             >> 6U)))
                                                       : 
                                                      vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                          >> 0x10U))]) 
                                                     >> 0x20U)) 
                                            << 9U));
            __Vtemp156[7U] = ((0xfff00000U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                               << 0x1fU) 
                                              | (0x7ff00000U 
                                                 & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                    >> 1U)))) 
                              | (((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__csrr) 
                                  << 0x13U) | ((0x7c000U 
                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                   >> 2U)) 
                                               | ((0x3e00U 
                                                   & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                      >> 0xcU)) 
                                                  | ((IData)(
                                                             (((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                                & ((0x1fU 
                                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                       >> 0x10U)) 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                                       >> 1U))))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                                                                 << 0x3aU) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                                                    << 0x1aU) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                                      >> 6U)))
                                                                : 
                                                               vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg
                                                               [
                                                               (0x1fU 
                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                   >> 0x10U))]) 
                                                              >> 0x20U)) 
                                                     >> 0x17U)))));
            __Vtemp157[0U] = ((0xe0000000U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                              << 0x10U)) 
                              | ((0x1fc00000U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                  << 0x1cU) 
                                                 | (0xfc00000U 
                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                       >> 4U)))) 
                                 | (((0x37U == (0x7fU 
                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                   >> 1U))) 
                                     << 0x15U) | ((
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                        >> 1U))) 
                                                   << 0x14U) 
                                                  | (((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                           >> 1U))) 
                                                      << 0x13U) 
                                                     | (((0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                              >> 1U))) 
                                                         << 0x12U) 
                                                        | (((0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                 >> 1U))) 
                                                            << 0x11U) 
                                                           | (((3U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                    >> 1U))) 
                                                               << 0x10U) 
                                                              | (((0x23U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                       >> 1U))) 
                                                                  << 0xfU) 
                                                                 | ((((0x13U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                           >> 1U))) 
                                                                      << 0xeU) 
                                                                     | (((0x33U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                              >> 1U))) 
                                                                         << 0xdU) 
                                                                        | (((0x1bU 
                                                                             == 
                                                                             (0x7fU 
                                                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U))) 
                                                                            << 0xcU) 
                                                                           | ((0x3bU 
                                                                               == 
                                                                               (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U))) 
                                                                              << 0xbU)))) 
                                                                    | ((((((0x33U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U))) 
                                                                           | (0x3bU 
                                                                              == 
                                                                              (0x7fU 
                                                                               & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                          & (0U 
                                                                             == 
                                                                             (7U 
                                                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 0xdU)))) 
                                                                         & (0x20U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                                << 6U) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 0x1aU))))) 
                                                                        << 0xaU) 
                                                                       | ((((((((0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U))) 
                                                                                | (0x3bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                               | (0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                              | (0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                             & (5U 
                                                                                == 
                                                                                (7U 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 0xdU)))) 
                                                                            & (0x10U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                                << 5U) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 0x1bU))))) 
                                                                           << 9U) 
                                                                          | (((IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__alu_op) 
                                                                              << 5U) 
                                                                             | ((((((((((((0x13U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U))) 
                                                                                | (0x1bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                                | (0x33U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                                | (0x3bU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                                | (3U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                                | (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                                | (0x67U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U)))) 
                                                                                | (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__csrr)) 
                                                                                << 4U) 
                                                                                | (((0x73U 
                                                                                == 
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U))) 
                                                                                << 3U) 
                                                                                | (((0x30200073U 
                                                                                == 
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U))) 
                                                                                << 2U) 
                                                                                | (((0x100073U 
                                                                                == 
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                                                >> 1U))) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[0U] 
                                                                                & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__dc__DOT__jup)))))))))))))))))))));
            __Vtemp157[1U] = __Vtemp152[0U];
            __Vtemp157[2U] = (((0x100U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                          << 8U)) | 
                               (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[0U] 
                                >> 0x18U)) | (__Vtemp150[0U] 
                                              << 9U));
            __Vtemp157[3U] = ((__Vtemp150[0U] >> 0x17U) 
                              | (__Vtemp150[1U] << 9U));
            __Vtemp157[4U] = ((__Vtemp150[1U] >> 0x17U) 
                              | ((IData)(((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                           & ((0x1fU 
                                               & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                  >> 0x15U)) 
                                              == (0x1fU 
                                                  & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                                     >> 1U))))
                                           ? (((QData)((IData)(
                                                               vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                                    >> 6U)))
                                           : vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg
                                          [(0x1fU & 
                                            (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                             >> 0x15U))])) 
                                 << 9U));
            __Vtemp157[5U] = __Vtemp152[4U];
            __Vtemp157[6U] = __Vtemp152[5U];
            __Vtemp157[7U] = __Vtemp152[6U];
            __Vtemp157[8U] = __Vtemp156[7U];
            VL_EXTEND_WW(1024,288, __Vtemp158, __Vtemp157);
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0U] 
                = __Vtemp158[0U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[1U] 
                = __Vtemp158[1U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[2U] 
                = __Vtemp158[2U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[3U] 
                = __Vtemp158[3U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[4U] 
                = __Vtemp158[4U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[5U] 
                = __Vtemp158[5U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[6U] 
                = __Vtemp158[6U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[7U] 
                = __Vtemp158[7U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[8U] 
                = __Vtemp158[8U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[9U] 
                = __Vtemp158[9U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0xaU] 
                = __Vtemp158[0xaU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0xbU] 
                = __Vtemp158[0xbU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0xcU] 
                = __Vtemp158[0xcU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0xdU] 
                = __Vtemp158[0xdU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0xeU] 
                = __Vtemp158[0xeU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0xfU] 
                = __Vtemp158[0xfU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x10U] 
                = __Vtemp158[0x10U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x11U] 
                = __Vtemp158[0x11U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x12U] 
                = __Vtemp158[0x12U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x13U] 
                = __Vtemp158[0x13U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x14U] 
                = __Vtemp158[0x14U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x15U] 
                = __Vtemp158[0x15U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x16U] 
                = __Vtemp158[0x16U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x17U] 
                = __Vtemp158[0x17U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x18U] 
                = __Vtemp158[0x18U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x19U] 
                = __Vtemp158[0x19U];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1aU] 
                = __Vtemp158[0x1aU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1bU] 
                = __Vtemp158[0x1bU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1cU] 
                = __Vtemp158[0x1cU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1dU] 
                = __Vtemp158[0x1dU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1eU] 
                = __Vtemp158[0x1eU];
            vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1fU] 
                = __Vtemp158[0x1fU];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[3U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[4U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[5U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[6U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[7U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[8U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[9U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0xaU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0xbU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0xcU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0xdU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0xeU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0xfU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x10U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x11U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x12U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x13U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x14U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x15U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x16U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x17U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x18U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x19U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1aU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1bU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1cU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1dU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1eU] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1fU] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((((((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm)) 
                | (3U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) 
               | (4U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) 
              | (5U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) 
             & (IData)(vlSelf->top_soc__DOT__top__DOT__jup))) {
            __Vdly__top_soc__DOT__top__DOT__icache__DOT__abort = 1U;
        } else if ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                    & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__abort))) {
            __Vdly__top_soc__DOT__top__DOT__icache__DOT__abort = 0U;
        }
    } else {
        __Vdly__top_soc__DOT__top__DOT__icache__DOT__abort = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__next_stage_ready) {
            vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg[0U] 
                = (((IData)((((QData)((IData)(((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm)
                                                ? (IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__wait_reg)
                                                : (IData)(
                                                          (vlSelf->top_soc__DOT__top__DOT__re 
                                                           >> 1U))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__PC_if1)))) 
                    << 1U) | (1U & ((~ (IData)(vlSelf->top_soc__DOT__top__DOT__jup)) 
                                    & ((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm)
                                        ? (IData)((vlSelf->top_soc__DOT__top__DOT__ifu__DOT__wait_reg 
                                                   >> 0x20U))
                                        : (IData)(vlSelf->top_soc__DOT__top__DOT__re)))));
            vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg[1U] 
                = (((IData)((((QData)((IData)(((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm)
                                                ? (IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__wait_reg)
                                                : (IData)(
                                                          (vlSelf->top_soc__DOT__top__DOT__re 
                                                           >> 1U))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__PC_if1)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            ((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm)
                                                              ? (IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__wait_reg)
                                                              : (IData)(
                                                                        (vlSelf->top_soc__DOT__top__DOT__re 
                                                                         >> 1U))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__PC_if1))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg[2U] 
                = ((IData)(((((QData)((IData)(((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm)
                                                ? (IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__wait_reg)
                                                : (IData)(
                                                          (vlSelf->top_soc__DOT__top__DOT__re 
                                                           >> 1U))))) 
                              << 0x20U) | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__PC_if1))) 
                            >> 0x20U)) >> 0x1fU);
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg[2U] = 0U;
    }
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid 
        = __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid;
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt 
        = __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt;
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready 
        = __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready;
    if (__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0][0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0[0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0][1U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0][2U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0][3U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0][0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0[0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0][1U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0][2U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0][3U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0][0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0[0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0][1U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0][2U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0][3U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0][0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0[0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0][1U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0][2U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0][3U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__r0__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0][0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0[0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0][1U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0][2U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0][3U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r3__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0][0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0[0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0][1U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0][2U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0][3U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r2__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0][0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0[0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0][1U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0][2U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0][3U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0][0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0[0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0][1U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0][2U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram[__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0][3U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__r0__DOT__ram__v0[3U];
    }
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid 
        = __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid;
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__abort 
        = __Vdly__top_soc__DOT__top__DOT__dcache__DOT__abort;
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg 
        = __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplier_reg;
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
        = __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
        = __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
        = __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
        = __Vdly__top_soc__DOT__top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U];
    if (__Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[__Vdlyvdim0__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0] 
            = __Vdlyvval__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v0;
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v1) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[0U] 
            = __Vdlyvval__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v1;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[1U] = 0xbULL;
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group__v3) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[0U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[1U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[2U] = 0xa00001800ULL;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[3U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[4U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[5U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[6U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group[7U] = 0ULL;
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0) {
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[__Vdlyvdim0__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0] 
            = __Vdlyvval__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v0;
    }
    if (__Vdlyvset__top_soc__DOT__top__DOT__dc__DOT__rv64_reg__v1) {
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[1U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[2U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[3U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[4U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[5U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[6U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[7U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[8U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[9U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0xaU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0xbU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0xcU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0xdU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0xeU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0xfU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x10U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x11U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x12U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x13U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x14U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x15U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x16U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x17U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x18U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x19U] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x1aU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x1bU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x1cU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x1dU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x1eU] = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dc__DOT__rv64_reg[0x1fU] = 0ULL;
    }
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__abort 
        = __Vdly__top_soc__DOT__top__DOT__icache__DOT__abort;
    if (vlSelf->reset) {
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awaddr = 0ULL;
    } else if (((((~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
                  & (IData)(vlSelf->top_soc__DOT__io_master_awvalid)) 
                 & (IData)(vlSelf->top_soc__DOT__io_master_wvalid)) 
                & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en))) {
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awaddr 
            = (QData)((IData)((((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[5U] 
                                 << 0xcU) | (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[4U] 
                                             >> 0x14U)) 
                               + ((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt) 
                                  << 2U))));
    }
    __Vtemp160[0U] = (IData)(((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                               >> 0x1fU) ? ((0x40000000U 
                                             & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                             ? ((0x20000000U 
                                                 & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                                 ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in
                                                 : (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in)))
                                             : ((0x20000000U 
                                                 & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in))))
                                                 : (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in))))))
                               : ((0x40000000U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                   ? ((0x20000000U 
                                       & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                       ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in
                                       : (((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in 
                                                                                >> 0x1fU))))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in))))
                                   : ((0x20000000U 
                                       & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in 
                                                                          >> 0xfU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in)))))
                                       : (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in 
                                                                          >> 7U)))))) 
                                           << 8U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in)))))))));
    __Vtemp160[1U] = (IData)((((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                >> 0x1fU) ? ((0x40000000U 
                                              & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                              ? ((0x20000000U 
                                                  & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                                  ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in
                                                  : (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in)))
                                              : ((0x20000000U 
                                                  & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in))))
                                                  : (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in))))))
                                : ((0x40000000U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                    ? ((0x20000000U 
                                        & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                        ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in
                                        : (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in))))
                                    : ((0x20000000U 
                                        & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                        ? (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in 
                                                                           >> 0xfU)))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in)))))
                                        : (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in 
                                                                           >> 7U)))))) 
                                            << 8U) 
                                           | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in)))))))) 
                              >> 0x20U));
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U] 
            = ((__Vtemp160[0U] << 7U) | ((0x7cU & (
                                                   vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[1U] 
                                                   << 2U)) 
                                         | ((2U & (
                                                   vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                                   >> 3U)) 
                                            | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                               & (((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__data_ok_all) 
                                                   & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                                      >> 0x10U)) 
                                                  | ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                                      >> 0xfU) 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__addr_ok_all)))))));
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[1U] 
            = ((__Vtemp160[0U] >> 0x19U) | (__Vtemp160[1U] 
                                            << 7U));
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[2U] 
            = ((__Vtemp160[1U] >> 0x19U) | ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[2U] 
                                             << 0x1eU) 
                                            | (0x3fffff80U 
                                               & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[1U] 
                                                  >> 2U))));
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[3U] 
            = (((8U == (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
                        >> 0x1cU)) << 7U) | (0x7fU 
                                             & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[2U] 
                                                >> 2U)));
    } else {
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[3U] = 0U;
    }
    __Vtemp165[0U] = (IData)(((0x40U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U])
                               ? ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U])
                                   ? vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr_out
                                   : (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[4U])) 
                                       << 0x37U) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[3U])) 
                                        << 0x17U) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U])) 
                                        >> 9U)))) : 
                              ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U])
                                ? (4ULL + (QData)((IData)(
                                                          ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U] 
                                                            << 0x17U) 
                                                           | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U] 
                                                              >> 9U)))))
                                : ((1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                           >> 0xcU) 
                                          | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                             >> 0xbU)))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_out 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_out)))
                                    : vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_out))));
    __Vtemp165[1U] = (IData)((((0x40U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U])
                                ? ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U])
                                    ? vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr_out
                                    : (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[4U])) 
                                        << 0x37U) | 
                                       (((QData)((IData)(
                                                         vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[3U])) 
                                         << 0x17U) 
                                        | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U])) 
                                           >> 9U))))
                                : ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U])
                                    ? (4ULL + (QData)((IData)(
                                                              ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U] 
                                                                << 0x17U) 
                                                               | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U] 
                                                                  >> 9U)))))
                                    : ((1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                               >> 0xcU) 
                                              | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                 >> 0xbU)))
                                        ? (((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_out 
                                                                                >> 0x1fU))))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_out)))
                                        : vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_out))) 
                              >> 0x20U));
    __Vtemp166[0U] = ((__Vtemp165[0U] << 7U) | ((0x7cU 
                                                 & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U] 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                       >> 3U)) 
                                                   | (1U 
                                                      & ((((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                            & (~ 
                                                               ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                 >> 0x10U) 
                                                                | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                   >> 0xfU)))) 
                                                           & (~ 
                                                              (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                               >> 8U))) 
                                                          | ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                              & (~ 
                                                                 ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                   >> 0x10U) 
                                                                  | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                     >> 0xfU)))) 
                                                             & (((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                      >> 7U))) 
                                                                 & (0x41U 
                                                                    == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))) 
                                                                | ((3U 
                                                                    == 
                                                                    (3U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                        >> 7U))) 
                                                                   & (0x41U 
                                                                      == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm)))))) 
                                                         | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                            & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                                                               >> 0x13U)))))));
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg[0U] 
            = __Vtemp166[0U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg[1U] 
            = ((__Vtemp165[0U] >> 0x19U) | (__Vtemp165[1U] 
                                            << 7U));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg[2U] 
            = ((__Vtemp165[1U] >> 0x19U) | ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U] 
                                             << 0x1eU) 
                                            | (0x3fffff80U 
                                               & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U] 
                                                  >> 2U))));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg[3U] 
            = (0x7fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U] 
                        >> 2U));
    } else {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg[3U] = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((((~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
               & (IData)(vlSelf->top_soc__DOT__io_master_awvalid)) 
              & (IData)(vlSelf->top_soc__DOT__io_master_wvalid)) 
             & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en))) {
            vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awid 
                = vlSelf->top_soc__DOT__io_master_awid;
        }
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm_next;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm_next;
    } else {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata = 0U;
    } else if (vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden) {
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata 
            = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__reg_data_out;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm_next;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r_next;
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r = 0U;
    }
    if (vlSelf->reset) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready = 0U;
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr = 0ULL;
    } else if (((~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready)) 
                & (1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm)))) {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready = 1U;
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr 
            = (QData)((IData)(((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_reg) 
                               + ((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt) 
                                  << 2U))));
        vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arid 
            = vlSelf->top_soc__DOT__io_master_arid;
    } else {
        __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready = 0U;
    }
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_reg 
        = (1U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U]);
    if ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) {
        __Vtemp188[3U] = (((IData)((0xffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U)))) >> 8U) 
                          | ((IData)(((0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                             >> 3U))) 
                                      >> 0x20U)) << 0x18U));
        __Vtemp193[3U] = (((IData)((0xffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U)))) >> 0x18U) 
                          | ((IData)(((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                             >> 3U))) 
                                      >> 0x20U)) << 8U));
    } else {
        __Vtemp188[3U] = (((IData)((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U)))) >> 0x10U) 
                          | ((IData)(((0xffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                             >> 3U))) 
                                      >> 0x20U)) << 0x10U));
        __Vtemp193[3U] = (IData)(((((QData)((IData)(
                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                    >> 3U))) 
                                  >> 0x20U));
    }
    __Vtemp195[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                       ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((IData)((0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                             >> 3U)))) 
                              << 0x18U) : ((IData)(
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                        << 0x1dU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                          >> 3U)))) 
                                           << 0x10U))
                       : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                             >> 3U)))) 
                              << 8U) : (IData)((((QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))))));
    VL_EXTEND_WQ(72,64, __Vtemp198, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(80,64, __Vtemp200, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(88,64, __Vtemp204, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(96,64, __Vtemp206, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(104,64, __Vtemp212, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(112,64, __Vtemp214, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(120,64, __Vtemp218, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(128,64, __Vtemp220, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    if ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) {
        __Vtemp226[1U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? (__Vtemp198[0U] << 0x18U)
                               : (__Vtemp200[0U] << 0x10U))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? (__Vtemp204[0U] << 8U)
                               : __Vtemp206[0U]));
        __Vtemp226[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp198[0U] >> 8U) 
                                  | (__Vtemp198[1U] 
                                     << 0x18U)) : (
                                                   (__Vtemp200[0U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp200[1U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp204[0U] >> 0x18U) 
                                  | (__Vtemp204[1U] 
                                     << 8U)) : __Vtemp206[1U]));
        __Vtemp226[3U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp198[1U] >> 8U) 
                                  | (__Vtemp198[2U] 
                                     << 0x18U)) : (
                                                   (__Vtemp200[1U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp200[2U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp204[1U] >> 0x18U) 
                                  | (__Vtemp204[2U] 
                                     << 8U)) : __Vtemp206[2U]));
    } else {
        __Vtemp226[1U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp212[0U] >> 8U) 
                                  | (__Vtemp212[1U] 
                                     << 0x18U)) : (
                                                   (__Vtemp214[0U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp214[1U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp218[0U] >> 0x18U) 
                                  | (__Vtemp218[1U] 
                                     << 8U)) : __Vtemp220[1U]));
        __Vtemp226[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp212[1U] >> 8U) 
                                  | (__Vtemp212[2U] 
                                     << 0x18U)) : (
                                                   (__Vtemp214[1U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp214[2U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp218[1U] >> 0x18U) 
                                  | (__Vtemp218[2U] 
                                     << 8U)) : __Vtemp220[2U]));
        __Vtemp226[3U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp212[2U] >> 8U) 
                                  | (__Vtemp212[3U] 
                                     << 0x18U)) : (
                                                   (__Vtemp214[2U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp214[3U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp218[2U] >> 0x18U) 
                                  | (__Vtemp218[3U] 
                                     << 8U)) : __Vtemp220[3U]));
    }
    __Vtemp228[0U] = ((0x40U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                       ? 0U : ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                ? 0U : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                         ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                             ? (__Vtemp212[0U] 
                                                << 0x18U)
                                             : (__Vtemp214[0U] 
                                                << 0x10U))
                                         : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                             ? (__Vtemp218[0U] 
                                                << 8U)
                                             : __Vtemp220[0U]))));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[0U] 
        = __Vtemp228[0U];
    if ((0x40U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[2U] 
            = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                ? 0U : __Vtemp195[2U]);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[3U] 
            = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (0xff000000U & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U] 
                                          << 0x15U))
                        : (0xffff0000U & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U] 
                                          << 0xdU)))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (0xffffff00U & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U] 
                                          << 5U)) : 
                       ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U] 
                         << 0x1dU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U] 
                                      >> 3U)))) : (
                                                   (0x10U 
                                                    & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                                    ? 
                                                   __Vtemp188[3U]
                                                    : 
                                                   __Vtemp193[3U]));
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[1U] 
            = __Vtemp226[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[2U] 
            = __Vtemp226[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[3U] 
            = __Vtemp226[3U];
    }
    __Vtableidx4 = (3U & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U] 
                          >> 1U));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[0U] 
        = Vtop_soc__ConstPool__TABLE_a3cf4ec3_0[__Vtableidx4][0U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[1U] 
        = Vtop_soc__ConstPool__TABLE_a3cf4ec3_0[__Vtableidx4][1U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[2U] 
        = Vtop_soc__ConstPool__TABLE_a3cf4ec3_0[__Vtableidx4][2U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[3U] 
        = Vtop_soc__ConstPool__TABLE_a3cf4ec3_0[__Vtableidx4][3U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_reg 
        = (1U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U]);
    if ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) {
        __Vtemp249[3U] = (((IData)((0xffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U)))) >> 8U) 
                          | ((IData)(((0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                             >> 3U))) 
                                      >> 0x20U)) << 0x18U));
        __Vtemp254[3U] = (((IData)((0xffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U)))) >> 0x18U) 
                          | ((IData)(((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                             >> 3U))) 
                                      >> 0x20U)) << 8U));
    } else {
        __Vtemp249[3U] = (((IData)((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U)))) >> 0x10U) 
                          | ((IData)(((0xffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                             >> 3U))) 
                                      >> 0x20U)) << 0x10U));
        __Vtemp254[3U] = (IData)(((((QData)((IData)(
                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                    >> 3U))) 
                                  >> 0x20U));
    }
    __Vtemp256[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                       ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((IData)((0xffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                             >> 3U)))) 
                              << 0x18U) : ((IData)(
                                                   (0xffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                        << 0x1dU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                          >> 3U)))) 
                                           << 0x10U))
                       : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((IData)((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                           << 0x1dU) 
                                          | ((QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                             >> 3U)))) 
                              << 8U) : (IData)((((QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                                 << 0x3dU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))))));
    VL_EXTEND_WQ(72,64, __Vtemp259, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(80,64, __Vtemp261, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(88,64, __Vtemp265, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(96,64, __Vtemp267, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(104,64, __Vtemp273, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(112,64, __Vtemp275, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(120,64, __Vtemp279, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(128,64, __Vtemp281, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    if ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) {
        __Vtemp287[1U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? (__Vtemp259[0U] << 0x18U)
                               : (__Vtemp261[0U] << 0x10U))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? (__Vtemp265[0U] << 8U)
                               : __Vtemp267[0U]));
        __Vtemp287[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp259[0U] >> 8U) 
                                  | (__Vtemp259[1U] 
                                     << 0x18U)) : (
                                                   (__Vtemp261[0U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp261[1U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp265[0U] >> 0x18U) 
                                  | (__Vtemp265[1U] 
                                     << 8U)) : __Vtemp267[1U]));
        __Vtemp287[3U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp259[1U] >> 8U) 
                                  | (__Vtemp259[2U] 
                                     << 0x18U)) : (
                                                   (__Vtemp261[1U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp261[2U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp265[1U] >> 0x18U) 
                                  | (__Vtemp265[2U] 
                                     << 8U)) : __Vtemp267[2U]));
    } else {
        __Vtemp287[1U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp273[0U] >> 8U) 
                                  | (__Vtemp273[1U] 
                                     << 0x18U)) : (
                                                   (__Vtemp275[0U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp275[1U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp279[0U] >> 0x18U) 
                                  | (__Vtemp279[1U] 
                                     << 8U)) : __Vtemp281[1U]));
        __Vtemp287[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp273[1U] >> 8U) 
                                  | (__Vtemp273[2U] 
                                     << 0x18U)) : (
                                                   (__Vtemp275[1U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp275[2U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp279[1U] >> 0x18U) 
                                  | (__Vtemp279[2U] 
                                     << 8U)) : __Vtemp281[2U]));
        __Vtemp287[3U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp273[2U] >> 8U) 
                                  | (__Vtemp273[3U] 
                                     << 0x18U)) : (
                                                   (__Vtemp275[2U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp275[3U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp279[2U] >> 0x18U) 
                                  | (__Vtemp279[3U] 
                                     << 8U)) : __Vtemp281[3U]));
    }
    __Vtemp289[0U] = ((0x40U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                       ? 0U : ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                ? 0U : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                         ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                             ? (__Vtemp273[0U] 
                                                << 0x18U)
                                             : (__Vtemp275[0U] 
                                                << 0x10U))
                                         : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                             ? (__Vtemp279[0U] 
                                                << 8U)
                                             : __Vtemp281[0U]))));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[0U] 
        = __Vtemp289[0U];
    if ((0x40U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[2U] 
            = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                ? 0U : __Vtemp256[2U]);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[3U] 
            = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (0xff000000U & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U] 
                                          << 0x15U))
                        : (0xffff0000U & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U] 
                                          << 0xdU)))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (0xffffff00U & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U] 
                                          << 5U)) : 
                       ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U] 
                         << 0x1dU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U] 
                                      >> 3U)))) : (
                                                   (0x10U 
                                                    & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                                    ? 
                                                   __Vtemp249[3U]
                                                    : 
                                                   __Vtemp254[3U]));
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[1U] 
            = __Vtemp287[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[2U] 
            = __Vtemp287[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[3U] 
            = __Vtemp287[3U];
    }
    __Vtableidx6 = (3U & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U] 
                          >> 1U));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[0U] 
        = Vtop_soc__ConstPool__TABLE_a3cf4ec3_0[__Vtableidx6][0U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[1U] 
        = Vtop_soc__ConstPool__TABLE_a3cf4ec3_0[__Vtableidx6][1U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[2U] 
        = Vtop_soc__ConstPool__TABLE_a3cf4ec3_0[__Vtableidx6][2U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[3U] 
        = Vtop_soc__ConstPool__TABLE_a3cf4ec3_0[__Vtableidx6][3U];
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm = 
        ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
          ? (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm_next)
          : 0U);
    __Vtemp291[0U] = 1U;
    __Vtemp291[1U] = 0U;
    __Vtemp291[2U] = 0U;
    __Vtemp291[3U] = 0U;
    __Vtemp292[0U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[0U]);
    __Vtemp292[1U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[1U]);
    __Vtemp292[2U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[2U]);
    __Vtemp292[3U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[3U]);
    VL_ADD_W(4, __Vtemp293, vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r, __Vtemp292);
    VL_ADD_W(4, __Vtemp294, __Vtemp291, __Vtemp293);
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[0U] 
        = __Vtemp294[0U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[1U] 
        = __Vtemp294[1U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[2U] 
        = __Vtemp294[2U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
        = __Vtemp294[3U];
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U] 
                = (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw);
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U] 
                = (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                           >> 0x20U));
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U] 
                = (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw);
            vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                = (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                           >> 0x20U));
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] = 0U;
    }
    vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm = 
        ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n) 
         & (IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm_next));
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__re))) {
            vlSelf->top_soc__DOT__top__DOT__ifu__DOT__wait_reg 
                = (((QData)((IData)((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__re)))) 
                    << 0x20U) | (QData)((IData)((vlSelf->top_soc__DOT__top__DOT__re 
                                                 >> 1U))));
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__ifu__DOT__wait_reg = 0ULL;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if (((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__next_stage_ready) 
             & (IData)(vlSelf->top_soc__DOT__top__DOT__icache_addr_ok))) {
            vlSelf->top_soc__DOT__top__DOT__ifu__DOT__PC_if1 
                = vlSelf->top_soc__DOT__top__DOT__ifu__DOT__pc;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__ifu__DOT__PC_if1 = 0U;
    }
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt 
        = __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt;
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en 
        = __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en;
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready 
        = __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready;
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt 
        = __Vdly__top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt;
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready 
        = __Vdly__top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready;
    VL_SHIFTL_WWI(128,128,32, __Vtemp296, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x78U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp297, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x70U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp300, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x68U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp301, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x60U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp306, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x58U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp307, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x50U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp310, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x48U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp311, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp318, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp319, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp322, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp323, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp328, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp329, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp332, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 8U);
    if ((0x40U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) {
        __Vtemp340[0U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp296[0U]
                                   : __Vtemp297[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp300[0U]
                                   : __Vtemp301[0U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp306[0U]
                                   : __Vtemp307[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp310[0U]
                                   : __Vtemp311[0U])));
        __Vtemp340[1U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp296[1U]
                                   : __Vtemp297[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp300[1U]
                                   : __Vtemp301[1U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp306[1U]
                                   : __Vtemp307[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp310[1U]
                                   : __Vtemp311[1U])));
        __Vtemp340[2U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp296[2U]
                                   : __Vtemp297[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp300[2U]
                                   : __Vtemp301[2U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp306[2U]
                                   : __Vtemp307[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp310[2U]
                                   : __Vtemp311[2U])));
        __Vtemp340[3U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp296[3U]
                                   : __Vtemp297[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp300[3U]
                                   : __Vtemp301[3U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp306[3U]
                                   : __Vtemp307[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp310[3U]
                                   : __Vtemp311[3U])));
    } else {
        __Vtemp340[0U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp318[0U]
                                   : __Vtemp319[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp322[0U]
                                   : __Vtemp323[0U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp328[0U]
                                   : __Vtemp329[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp332[0U]
                                   : vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[0U])));
        __Vtemp340[1U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp318[1U]
                                   : __Vtemp319[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp322[1U]
                                   : __Vtemp323[1U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp328[1U]
                                   : __Vtemp329[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp332[1U]
                                   : vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[1U])));
        __Vtemp340[2U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp318[2U]
                                   : __Vtemp319[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp322[2U]
                                   : __Vtemp323[2U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp328[2U]
                                   : __Vtemp329[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp332[2U]
                                   : vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[2U])));
        __Vtemp340[3U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp318[3U]
                                   : __Vtemp319[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp322[3U]
                                   : __Vtemp323[3U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp328[3U]
                                   : __Vtemp329[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp332[3U]
                                   : vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[3U])));
    }
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[0U] 
        = __Vtemp340[0U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[1U] 
        = __Vtemp340[1U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[2U] 
        = __Vtemp340[2U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[3U] 
        = __Vtemp340[3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp341, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x78U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp342, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x70U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp345, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x68U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp346, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x60U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp351, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x58U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp352, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x50U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp355, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x48U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp356, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp363, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp364, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp367, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp368, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp373, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp374, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp377, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 8U);
    if ((0x40U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) {
        __Vtemp385[0U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp341[0U]
                                   : __Vtemp342[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp345[0U]
                                   : __Vtemp346[0U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp351[0U]
                                   : __Vtemp352[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp355[0U]
                                   : __Vtemp356[0U])));
        __Vtemp385[1U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp341[1U]
                                   : __Vtemp342[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp345[1U]
                                   : __Vtemp346[1U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp351[1U]
                                   : __Vtemp352[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp355[1U]
                                   : __Vtemp356[1U])));
        __Vtemp385[2U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp341[2U]
                                   : __Vtemp342[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp345[2U]
                                   : __Vtemp346[2U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp351[2U]
                                   : __Vtemp352[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp355[2U]
                                   : __Vtemp356[2U])));
        __Vtemp385[3U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp341[3U]
                                   : __Vtemp342[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp345[3U]
                                   : __Vtemp346[3U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp351[3U]
                                   : __Vtemp352[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp355[3U]
                                   : __Vtemp356[3U])));
    } else {
        __Vtemp385[0U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp363[0U]
                                   : __Vtemp364[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp367[0U]
                                   : __Vtemp368[0U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp373[0U]
                                   : __Vtemp374[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp377[0U]
                                   : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[0U])));
        __Vtemp385[1U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp363[1U]
                                   : __Vtemp364[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp367[1U]
                                   : __Vtemp368[1U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp373[1U]
                                   : __Vtemp374[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp377[1U]
                                   : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[1U])));
        __Vtemp385[2U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp363[2U]
                                   : __Vtemp364[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp367[2U]
                                   : __Vtemp368[2U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp373[2U]
                                   : __Vtemp374[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp377[2U]
                                   : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[2U])));
        __Vtemp385[3U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp363[3U]
                                   : __Vtemp364[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp367[3U]
                                   : __Vtemp368[3U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp373[3U]
                                   : __Vtemp374[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp377[3U]
                                   : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[3U])));
    }
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[0U] 
        = __Vtemp385[0U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[1U] 
        = __Vtemp385[1U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[2U] 
        = __Vtemp385[2U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[3U] 
        = __Vtemp385[3U];
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[0U] 
             & (0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)))) {
            vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[0U] 
                = (((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[1U] 
                     << 0x1fU) | (0x7ff00000U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[0U] 
                                                 >> 1U))) 
                   | ((0xffff0U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[0U] 
                                   << 3U)) | (0xfU 
                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[0U] 
                                                 >> 0x11U))));
            vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[1U] 
                = ((0xfffffU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[1U] 
                                >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[2U] 
                                            << 0x1fU) 
                                           | (0x7ff00000U 
                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[1U] 
                                                 >> 1U))));
            vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[2U] 
                = ((0xfffffU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[2U] 
                                >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[3U] 
                                            << 0x1fU) 
                                           | (0x7ff00000U 
                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[2U] 
                                                 >> 1U))));
            vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[3U] 
                = ((0xfffffU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[3U] 
                                >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[4U] 
                                            << 0x1fU) 
                                           | (0x7ff00000U 
                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[3U] 
                                                 >> 1U))));
            vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[4U] 
                = ((0xfffffU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[4U] 
                                >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[5U] 
                                            << 0x1fU) 
                                           | (0x7ff00000U 
                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[4U] 
                                                 >> 1U))));
            vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[5U] 
                = (0xfffffU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[5U] 
                               >> 1U));
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[3U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[4U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[5U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm 
            = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm_next;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm 
            = vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm_next;
    } else {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm = 0U;
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm = 0U;
    }
    VL_EXTEND_WW(130,103, __Vtemp390, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    VL_EXTEND_WW(130,103, __Vtemp391, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    VL_EXTEND_WW(130,103, __Vtemp392, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    VL_EXTEND_WW(130,103, __Vtemp393, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    if ((1U & vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U])) {
        __Vtemp397[0U] = (((IData)((((QData)((IData)(
                                                     vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[2U])) 
                                     << 0x39U) | (((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U])) 
                                                     >> 7U)))) 
                           << 6U) | ((0x3eU & (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U] 
                                               >> 1U)) 
                                     | (1U & ((vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U] 
                                               >> 1U) 
                                              & vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U]))));
        __Vtemp397[1U] = (((IData)((((QData)((IData)(
                                                     vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[2U])) 
                                     << 0x39U) | (((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U])) 
                                                     >> 7U)))) 
                           >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[2U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[1U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U])) 
                                                        >> 7U))) 
                                                 >> 0x20U)) 
                                        << 6U));
    } else {
        __Vtemp397[0U] = (((IData)((((QData)((IData)(
                                                     __Vtemp390[2U])) 
                                     << 0x39U) | (((QData)((IData)(
                                                                   __Vtemp390[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp390[0U])) 
                                                     >> 7U)))) 
                           << 6U) | ((0x3eU & (__Vtemp391[0U] 
                                               >> 1U)) 
                                     | (1U & ((__Vtemp392[0U] 
                                               >> 1U) 
                                              & __Vtemp393[0U]))));
        __Vtemp397[1U] = (((IData)((((QData)((IData)(
                                                     __Vtemp390[2U])) 
                                     << 0x39U) | (((QData)((IData)(
                                                                   __Vtemp390[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp390[0U])) 
                                                     >> 7U)))) 
                           >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                                   __Vtemp390[2U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      __Vtemp390[1U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp390[0U])) 
                                                        >> 7U))) 
                                                 >> 0x20U)) 
                                        << 6U));
    }
    vlSelf->top_soc__DOT__top__DOT__sideway[0U] = __Vtemp397[0U];
    vlSelf->top_soc__DOT__top__DOT__sideway[1U] = __Vtemp397[1U];
    vlSelf->top_soc__DOT__top__DOT__sideway[2U] = (
                                                   (1U 
                                                    & vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U])
                                                    ? 
                                                   ((0x40U 
                                                     & (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[3U] 
                                                        >> 1U)) 
                                                    | ((IData)(
                                                               ((((QData)((IData)(
                                                                                vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[2U])) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[1U])) 
                                                                     << 0x19U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U])) 
                                                                       >> 7U))) 
                                                                >> 0x20U)) 
                                                       >> 0x1aU))
                                                    : 
                                                   (0x40U 
                                                    | ((IData)(
                                                               ((((QData)((IData)(
                                                                                __Vtemp390[2U])) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                __Vtemp390[1U])) 
                                                                     << 0x19U) 
                                                                    | ((QData)((IData)(
                                                                                __Vtemp390[0U])) 
                                                                       >> 7U))) 
                                                                >> 0x20U)) 
                                                       >> 0x1aU)));
    vlSelf->top_soc__DOT__io_master_wvalid = ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm)) 
                                              | (2U 
                                                 == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm)));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt_ready_to_go 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__w_rdy) 
           & ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm)) 
              | (1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm))));
    if ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))) {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[0U] 
            = vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[1U] 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[1U];
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[2U] 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[2U];
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[3U] 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[0U] 
            = ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                ? vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[0U]
                : ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                    ? (IData)((((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[0U]))))
                    : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                        ? vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[0U]
                        : 0U)));
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[1U] 
            = ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                ? vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata
                : ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                    ? (IData)(((((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[0U]))) 
                               >> 0x20U)) : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                                              ? vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[1U]
                                              : 0U)));
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[2U] 
            = ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                ? (IData)((((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[2U]))))
                : ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                    ? (IData)((((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[3U])) 
                                << 0x20U) | (QData)((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata))))
                    : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                        ? vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[2U]
                        : 0U)));
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[3U] 
            = ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                ? (IData)(((((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[2U]))) 
                           >> 0x20U)) : ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                                          ? (IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata))) 
                                                     >> 0x20U))
                                          : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt))
                                              ? vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata
                                              : 0U)));
    }
    Vtop_soc___024unit____Vdpiimwrap_mem_read_TOP____024unit(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr, 4U, vlSelf->__Vfunc_mem_read__2__Vfuncout);
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__reg_data_out 
        = (IData)(vlSelf->__Vfunc_mem_read__2__Vfuncout);
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm)) 
             & (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_in_3))) {
            vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_reg 
                = (((QData)((IData)((0xfU & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_in_3 
                                                     >> 1U))))) 
                    << 0x20U) | (QData)((IData)((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_in_3 
                                                 >> 5U))));
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_reg = 0ULL;
    }
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm = 
        ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
          ? (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm_next)
          : 0U);
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__next_stage_ready) 
              & (IData)(vlSelf->top_soc__DOT__top__DOT__icache_addr_ok)) 
             | (IData)(vlSelf->top_soc__DOT__top__DOT__jup))) {
            vlSelf->top_soc__DOT__top__DOT__ifu__DOT__pc 
                = vlSelf->top_soc__DOT__top__DOT__ifu__DOT__next_pc;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__ifu__DOT__pc = 0x80000000U;
    }
    __Vtableidx10 = (0xfU & vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[0U]);
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt_i 
        = Vtop_soc__ConstPool__TABLE_58b3a3a7_0[__Vtableidx10];
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm_next;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm 
            = vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_next;
    } else {
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm = 0U;
        vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm = 0U;
    }
    __Vtableidx7 = (0xfU & (IData)((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_reg 
                                    >> 0x20U)));
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt_i 
        = Vtop_soc__ConstPool__TABLE_58b3a3a7_0[__Vtableidx7];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm_next 
        = (0xffffU & ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))
                       ? ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm))
                           ? 1U : 0U) : ((0x40U >= (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))
                                          ? ((IData)(1U) 
                                             + (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))
                                          : 0U)));
    __Vtableidx1 = (((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
                     << 7U) | (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm_next 
        = Vtop_soc__ConstPool__TABLE_0a033294_0[__Vtableidx1];
    vlSelf->top_soc__DOT__top__DOT__jup = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n) 
                                           & ((((((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                   >> 0x12U) 
                                                  | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                     >> 0x13U)) 
                                                 | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                    >> 3U)) 
                                                | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                   >> 2U)) 
                                               | ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                   >> 0x11U) 
                                                  & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                      >> 0x1fU)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                                       ? 
                                                      ((0x20000000U 
                                                        & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                                        ? (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_64)
                                                        : 
                                                       (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_64)))
                                                       : 
                                                      ((0x20000000U 
                                                        & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                                        ? 
                                                       (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__slt_b))
                                                        : (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__slt_b)))
                                                      : 
                                                     ((~ 
                                                       (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                        >> 0x1eU)) 
                                                      & ((0x20000000U 
                                                          & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                                                          ? 
                                                         (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__eq_b))
                                                          : (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__eq_b)))))) 
                                              & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U]));
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__wa_fininshed 
        = (((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt) 
            == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt_i)) 
           & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready));
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__wd_finfished 
        = (((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_cnt) 
            == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt_i)) 
           & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready));
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_finished 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_cnt) 
           == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt_i));
    vlSelf->top_soc__DOT__io_master_awvalid = ((1U 
                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)) 
                                               | (2U 
                                                  == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)));
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden 
        = (((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready) 
            & (1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm))) 
           & (~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid)));
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r_next 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r))
            ? ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm))
                ? 1U : 0U) : ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_r))
                               ? (((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_finished) 
                                   & (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid))
                                   ? 0U : 1U) : 0U));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U] 
        = ((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[0U] 
            << 2U) | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm)) 
                       << 1U) | ((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid) 
                                 & (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_finished))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[1U] 
        = ((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[0U] 
            >> 0x1eU) | (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[1U] 
                         << 2U));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[2U] 
        = ((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[1U] 
            >> 0x1eU) | (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[2U] 
                         << 2U));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[3U] 
        = ((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[2U] 
            >> 0x1eU) | (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[3U] 
                         << 2U));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[4U] 
        = (vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__dr1__DOT__data0[3U] 
           >> 0x1eU);
    vlSelf->top_soc__DOT__top__DOT__ifu__DOT__next_pc 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__jup)
            ? vlSelf->top_soc__DOT__top__DOT__jup_addr
            : ((IData)(4U) + vlSelf->top_soc__DOT__top__DOT__ifu__DOT__pc));
    VL_EXTEND_WW(1024,65, __Vtemp415, vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg);
    VL_EXTEND_WW(1024,65, __Vtemp416, vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg);
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[0U] 
        = (((IData)((((QData)((IData)(__Vtemp415[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    __Vtemp415[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 __Vtemp415[0U])) 
                                                 >> 1U)))) 
            << 1U) | (1U & (__Vtemp416[0U] & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__jup)))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
        = (((IData)((((QData)((IData)(__Vtemp415[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    __Vtemp415[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 __Vtemp415[0U])) 
                                                 >> 1U)))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    __Vtemp415[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  __Vtemp415[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp415[0U])) 
                                                    >> 1U))) 
                                  >> 0x20U)) << 1U));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
        = ((IData)(((((QData)((IData)(__Vtemp415[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    __Vtemp415[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 __Vtemp415[0U])) 
                                                 >> 1U))) 
                    >> 0x20U)) >> 0x1fU);
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
        = ((0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0U] 
                            << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0U])) 
           | (1U & (vlSelf->top_soc__DOT__top__DOT__dc_ex[0U] 
                    & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__jup)))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[1U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[1U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[1U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[1U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[2U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[1U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[2U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[2U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[2U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[3U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[2U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[3U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[3U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[3U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[4U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[3U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[4U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[4U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[4U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[5U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[4U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[5U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[5U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[5U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[6U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[5U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[6U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[6U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[6U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[7U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[6U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[7U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[7U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[7U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[8U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[7U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[8U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[8U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[8U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[9U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[8U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[9U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[9U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[9U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0xaU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[9U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xaU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xaU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xaU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0xbU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xaU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xbU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xbU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xbU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0xcU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xbU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xcU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xcU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xcU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0xdU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xcU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xdU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xdU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xdU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0xeU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xdU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xeU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xeU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xeU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0xfU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xeU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xfU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xfU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xfU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x10U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xfU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x10U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x10U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x10U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x11U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x10U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x11U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x11U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x11U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x12U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x11U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x12U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x12U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x12U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x13U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x12U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x13U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x13U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x13U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x14U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x13U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x14U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x14U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x14U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x15U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x14U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x15U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x15U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x15U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x16U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x15U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x16U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x16U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x16U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x17U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x16U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x17U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x17U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x17U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x18U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x17U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x18U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x18U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x18U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x19U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x18U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x19U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x19U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x19U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x1aU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x19U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1aU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1aU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1aU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x1bU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1aU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1bU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1bU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1bU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x1cU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1bU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1cU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1cU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1cU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x1dU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1cU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1dU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1dU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1dU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x1eU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1dU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1eU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1eU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1eU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0x1fU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1eU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1fU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1fU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1fU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
        = ((0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0U] 
                            << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0U])) 
           | (1U & (vlSelf->top_soc__DOT__top__DOT__dc_ex[0U] 
                    & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__jup)))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[1U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[1U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[1U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[1U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[2U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[2U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[2U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[3U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[2U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[3U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[3U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[3U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[4U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[3U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[4U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[4U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[4U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[5U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[4U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[5U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[5U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[5U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[6U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[5U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[6U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[6U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[6U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[7U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[6U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[7U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[7U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[7U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[7U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[8U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[8U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[8U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[9U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[8U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[9U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[9U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[9U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0xaU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[9U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xaU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xaU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xaU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0xbU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xaU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xbU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xbU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xbU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0xcU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xbU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xcU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xcU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xcU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0xdU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xcU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xdU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xdU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xdU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0xeU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xdU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xeU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xeU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xeU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0xfU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xeU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xfU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0xfU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0xfU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x10U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0xfU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x10U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x10U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x10U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x11U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x10U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x11U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x11U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x11U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x12U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x11U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x12U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x12U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x12U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x13U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x12U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x13U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x13U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x13U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x14U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x13U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x14U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x14U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x14U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x15U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x14U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x15U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x15U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x15U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x16U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x15U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x16U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x16U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x16U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x17U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x16U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x17U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x17U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x17U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x18U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x17U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x18U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x18U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x18U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x19U] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x18U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x19U])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x19U] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x19U])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x1aU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x19U] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1aU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1aU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1aU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x1bU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1aU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1bU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1bU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1bU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x1cU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1bU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1cU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1cU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1cU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x1dU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1cU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1dU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1dU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1dU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x1eU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1dU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1eU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1eU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1eU])));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0x1fU] 
        = ((1U & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1eU] 
                   >> 0x1fU) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1fU])) 
           | (0xfffffffeU & ((Vtop_soc__ConstPool__CONST_26258237_0[0x1fU] 
                              << 1U) & vlSelf->top_soc__DOT__top__DOT__dc_ex[0x1fU])));
    vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_s 
        = ((0xfe0U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                       << 0xbU) | (0x7e0U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                             >> 0x15U)))) 
           | (0x1fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                       >> 8U)));
    vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_b 
        = ((0x800U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                      << 0xbU)) | ((0x400U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                              << 2U)) 
                                   | ((0x3f0U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                 >> 0x16U)) 
                                      | (0xfU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                 >> 9U)))));
    vlSelf->top_soc__DOT__top__DOT__dc__DOT__imm_j 
        = ((0x80000U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
                        << 0x13U)) | ((0x7f800U & (
                                                   vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                   >> 2U)) 
                                      | ((0x400U & 
                                          (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                           >> 0xbU)) 
                                         | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                            >> 0x16U))));
    vlSelf->top_soc__DOT__top__DOT__dc__DOT____Vcellinp__imm_decode__sel 
        = ((((0x37U == (0x7fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                 >> 1U))) | (0x17U 
                                             == (0x7fU 
                                                 & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                    >> 1U)))) 
            << 4U) | (((0x6fU == (0x7fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                           >> 1U))) 
                       << 3U) | (((0x63U == (0x7fU 
                                             & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                >> 1U))) 
                                  << 2U) | (((0x23U 
                                              == (0x7fU 
                                                  & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                     >> 1U))) 
                                             << 1U) 
                                            | ((((0x1bU 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                      >> 1U))) 
                                                 | (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                        >> 1U)))) 
                                                | (3U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                       >> 1U)))) 
                                               | (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                      >> 1U))))))));
    vlSelf->top_soc__DOT__top__DOT__dc__DOT__csrr = 
        ((0x73U == (0x7fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                             >> 1U))) & (0U != (7U 
                                                & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                   >> 0xdU))));
    vlSelf->top_soc__DOT__top__DOT__dc__DOT__alu_op 
        = ((0x33U == (0x7fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                               >> 1U))) ? ((0x13U == 
                                            (0x7fU 
                                             & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                >> 1U)))
                                            ? 0U : 
                                           ((0x3bU 
                                             == (0x7fU 
                                                 & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                    >> 1U)))
                                             ? 0U : 
                                            ((0x1bU 
                                              == (0x7fU 
                                                  & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                     >> 1U)))
                                              ? 0U : 
                                             ((8U & 
                                               (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                >> 0x17U)) 
                                              | (7U 
                                                 & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                    >> 0xdU))))))
            : ((0x13U == (0x7fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                   >> 1U))) ? ((0x3bU 
                                                == 
                                                (0x7fU 
                                                 & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                    >> 1U)))
                                                ? 0U
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   (7U 
                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                       >> 0xdU))))
                : ((0x3bU == (0x7fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                       >> 1U))) ? (
                                                   (0x1bU 
                                                    == 
                                                    (0x7fU 
                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                        >> 1U)))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                        >> 0x17U)) 
                                                    | (7U 
                                                       & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                                          >> 0xdU))))
                    : ((0x1bU == (0x7fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                           >> 1U)))
                        ? (7U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
                                 >> 0xdU)) : 0U))));
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw 
        = ((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
            & ((0x1fU & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                         >> 1U)) == (0x1fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[8U] 
                                              >> 9U))))
            ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                           >> 6U)))
            : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[6U])) 
                << 0x37U) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[5U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[4U])) 
                                           >> 9U))));
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__sram_len 
        = ((0x40000000U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
            ? ((0x20000000U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                ? 7U : 3U) : ((0x20000000U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                               ? 1U : 0U));
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr 
        = ((IData)(((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                     & ((0x1fU & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                                  >> 1U)) == (0x1fU 
                                              & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[8U] 
                                                 >> 0xeU))))
                     ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                         << 0x3aU) | (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                                       << 0x1aU) | 
                                      ((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                       >> 6U))) : (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[8U])) 
                                                    << 0x37U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[7U])) 
                                                       << 0x17U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[6U])) 
                                                         >> 9U))))) 
           + ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[3U] 
               << 0x17U) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[2U] 
                            >> 9U)));
    if ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm_next 
            = ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                ? ((2U == (3U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                 >> 7U))) ? 1U : ((3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                       >> 7U)))
                                                   ? 2U
                                                   : 0U))
                : 0U);
    } else if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm_next 
            = ((0x41U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm))
                ? 0U : 1U);
    } else if ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm_next 
            = ((0x41U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))
                ? 0U : 2U);
    }
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_real_addr 
        = ((0x300U == (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                       >> 0x14U)) ? 2U : ((0x304U == 
                                           (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                                            >> 0x14U))
                                           ? 4U : (
                                                   (0x305U 
                                                    == 
                                                    (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                                                     >> 0x14U))
                                                    ? 3U
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                                                      >> 0x14U))
                                                     ? 0U
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                                                       >> 0x14U))
                                                      ? 1U
                                                      : 
                                                     ((0x344U 
                                                       == 
                                                       (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                                                        >> 0x14U))
                                                       ? 5U
                                                       : 7U))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__mul__mul_signed 
        = ((2U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                  >> 5U)) | (1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                    >> 6U) & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                              >> 5U))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
        = ((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
            & ((0x1fU & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                         >> 1U)) == (0x1fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                                              >> 0xeU))))
            ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                           >> 6U)))
            : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U])) 
                << 0x37U) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[7U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[6U])) 
                                           >> 9U))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
        = ((vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
            & ((0x1fU & (vlSelf->top_soc__DOT__top__DOT__sideway[0U] 
                         >> 1U)) == (0x1fU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[8U] 
                                              >> 9U))))
            ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__sideway[2U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__sideway[1U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__sideway[0U])) 
                                           >> 6U)))
            : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[6U])) 
                << 0x37U) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[5U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[4U])) 
                                           >> 9U))));
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
            ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr
            : vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[2U]);
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr_out 
        = vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group
        [vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_real_addr];
    __Vtemp424[0U] = 1U;
    __Vtemp424[1U] = 0U;
    __Vtemp424[2U] = 0U;
    __Vtemp424[3U] = 0U;
    __Vtemp425[0U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[0U]);
    __Vtemp425[1U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[1U]);
    __Vtemp425[2U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[2U]);
    __Vtemp425[3U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[3U]);
    VL_ADD_W(4, __Vtemp426, __Vtemp424, __Vtemp425);
    if ((1U & ((IData)((3U == (3U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__mul__mul_signed))))
                ? ((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                    ^ vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U]) 
                   >> 0x1fU) : ((((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__mul__mul_signed) 
                                  >> 1U) | (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__mul__mul_signed)) 
                                & ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__mul__mul_signed))
                                    ? (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[3U] 
                                       >> 0x1fU) : 
                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_rs2_reg[1U] 
                                    >> 0x1fU)))))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[0U] 
            = __Vtemp426[0U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[1U] 
            = __Vtemp426[1U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[2U] 
            = __Vtemp426[2U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[3U] 
            = __Vtemp426[3U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[0U] 
            = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[0U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[1U] 
            = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[1U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[2U] 
            = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[2U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[3U] 
            = vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[3U];
    }
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
        = ((0x100U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U])
            ? (QData)((IData)(((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U] 
                                << 0x17U) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U] 
                                             >> 9U))))
            : vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw);
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__eq_b 
        = (QData)((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                           == vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw)));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffffffeULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | (IData)((IData)((1U & (((~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw)) 
                                    | ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw) 
                                       & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw))))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffffffeULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | (IData)((IData)((1U & ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw) 
                                    & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw)))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffffffeULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | (IData)((IData)((1U & ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw) 
                                    | (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw)))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffffffdULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 1U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 1U))))))) 
              << 1U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffffffdULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 1U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 1U))))))) 
              << 1U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffffffbULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 2U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 2U))))))) 
              << 2U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffffffbULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 2U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 2U))))))) 
              << 2U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffffff7ULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 3U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 3U))))))) 
              << 3U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffffff7ULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 3U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 3U))))))) 
              << 3U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffffffefULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 4U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 4U))))))) 
              << 4U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffffffefULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 4U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 4U))))))) 
              << 4U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffffffdfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 5U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 5U))))))) 
              << 5U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffffffdfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 5U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 5U))))))) 
              << 5U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffffffbfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 6U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 6U))))))) 
              << 6U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffffffbfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 6U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 6U))))))) 
              << 6U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffffff7fULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 7U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 7U))))))) 
              << 7U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffffff7fULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 7U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 7U))))))) 
              << 7U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffffeffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 8U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 8U))))))) 
              << 8U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffffeffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 8U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 8U))))))) 
              << 8U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffffdffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 9U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 9U))))))) 
              << 9U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffffdffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 9U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 9U))))))) 
              << 9U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffffbffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xaU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xaU))))))) 
              << 0xaU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffffbffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xaU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xaU))))))) 
              << 0xaU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffff7ffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xbU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xbU))))))) 
              << 0xbU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffff7ffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xbU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xbU))))))) 
              << 0xbU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffffefffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xcU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xcU))))))) 
              << 0xcU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffffefffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xcU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xcU))))))) 
              << 0xcU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffffdfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xdU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xdU))))))) 
              << 0xdU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffffdfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xdU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xdU))))))) 
              << 0xdU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffffbfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xeU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xeU))))))) 
              << 0xeU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffffbfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xeU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xeU))))))) 
              << 0xeU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffff7fffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xfU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xfU))))))) 
              << 0xfU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffff7fffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0xfU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0xfU))))))) 
              << 0xfU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffeffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x10U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x10U))))))) 
              << 0x10U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffeffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x10U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x10U))))))) 
              << 0x10U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffdffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x11U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x11U))))))) 
              << 0x11U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffdffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x11U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x11U))))))) 
              << 0x11U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffffbffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x12U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x12U))))))) 
              << 0x12U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffffbffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x12U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x12U))))))) 
              << 0x12U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffff7ffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x13U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x13U))))))) 
              << 0x13U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffff7ffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x13U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x13U))))))) 
              << 0x13U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffefffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x14U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x14U))))))) 
              << 0x14U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffefffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x14U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x14U))))))) 
              << 0x14U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffdfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x15U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x15U))))))) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffdfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x15U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x15U))))))) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffffbfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x16U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x16U))))))) 
              << 0x16U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffffbfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x16U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x16U))))))) 
              << 0x16U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffff7fffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x17U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x17U))))))) 
              << 0x17U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffff7fffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x17U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x17U))))))) 
              << 0x17U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffeffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x18U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x18U))))))) 
              << 0x18U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffeffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x18U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x18U))))))) 
              << 0x18U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffdffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x19U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x19U))))))) 
              << 0x19U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffdffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x19U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x19U))))))) 
              << 0x19U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffffbffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1aU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1aU))))))) 
              << 0x1aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffffbffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1aU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1aU))))))) 
              << 0x1aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffff7ffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1bU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1bU))))))) 
              << 0x1bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffff7ffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1bU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1bU))))))) 
              << 0x1bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffefffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1cU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1cU))))))) 
              << 0x1cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffefffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1cU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1cU))))))) 
              << 0x1cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffdfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1dU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1dU))))))) 
              << 0x1dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffdfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1dU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1dU))))))) 
              << 0x1dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffffbfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1eU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1eU))))))) 
              << 0x1eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffffbfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1eU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1eU))))))) 
              << 0x1eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffff7fffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1fU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1fU))))))) 
              << 0x1fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffff7fffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x1fU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x1fU))))))) 
              << 0x1fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffeffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x20U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x20U))))))) 
              << 0x20U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffeffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x20U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x20U))))))) 
              << 0x20U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffdffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x21U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x21U))))))) 
              << 0x21U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffdffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x21U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x21U))))))) 
              << 0x21U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffffbffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x22U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x22U))))))) 
              << 0x22U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffffbffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x22U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x22U))))))) 
              << 0x22U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffff7ffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x23U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x23U))))))) 
              << 0x23U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffff7ffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x23U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x23U))))))) 
              << 0x23U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffefffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x24U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x24U))))))) 
              << 0x24U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffefffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x24U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x24U))))))) 
              << 0x24U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffdfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x25U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x25U))))))) 
              << 0x25U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffdfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x25U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x25U))))))) 
              << 0x25U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffffbfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x26U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x26U))))))) 
              << 0x26U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffffbfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x26U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x26U))))))) 
              << 0x26U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffff7fffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x27U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x27U))))))) 
              << 0x27U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffff7fffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x27U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x27U))))))) 
              << 0x27U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffeffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x28U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x28U))))))) 
              << 0x28U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffeffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x28U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x28U))))))) 
              << 0x28U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffdffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x29U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x29U))))))) 
              << 0x29U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffdffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x29U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x29U))))))) 
              << 0x29U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffffbffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2aU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffffbffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2aU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffff7ffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2bU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2bU))))))) 
              << 0x2bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffff7ffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2bU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2bU))))))) 
              << 0x2bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffefffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2cU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2cU))))))) 
              << 0x2cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffefffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2cU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2cU))))))) 
              << 0x2cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffdfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2dU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2dU))))))) 
              << 0x2dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffdfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2dU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2dU))))))) 
              << 0x2dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffffbfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2eU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2eU))))))) 
              << 0x2eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffffbfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2eU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2eU))))))) 
              << 0x2eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffff7fffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2fU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2fU))))))) 
              << 0x2fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffff7fffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x2fU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x2fU))))))) 
              << 0x2fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffeffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x30U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x30U))))))) 
              << 0x30U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffeffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x30U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x30U))))))) 
              << 0x30U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffdffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x31U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x31U))))))) 
              << 0x31U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffdffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x31U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x31U))))))) 
              << 0x31U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfffbffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x32U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x32U))))))) 
              << 0x32U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfffbffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x32U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x32U))))))) 
              << 0x32U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfff7ffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x33U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x33U))))))) 
              << 0x33U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfff7ffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x33U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x33U))))))) 
              << 0x33U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffefffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x34U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x34U))))))) 
              << 0x34U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffefffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x34U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x34U))))))) 
              << 0x34U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffdfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x35U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x35U))))))) 
              << 0x35U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffdfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x35U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x35U))))))) 
              << 0x35U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xffbfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x36U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x36U))))))) 
              << 0x36U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xffbfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x36U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x36U))))))) 
              << 0x36U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xff7fffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x37U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x37U))))))) 
              << 0x37U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xff7fffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x37U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x37U))))))) 
              << 0x37U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfeffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x38U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x38U))))))) 
              << 0x38U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfeffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x38U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x38U))))))) 
              << 0x38U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfdffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x39U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x39U))))))) 
              << 0x39U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfdffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x39U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x39U))))))) 
              << 0x39U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xfbffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3aU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3aU))))))) 
              << 0x3aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xfbffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3aU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3aU))))))) 
              << 0x3aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xf7ffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3bU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3bU))))))) 
              << 0x3bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xf7ffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3bU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3bU))))))) 
              << 0x3bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xefffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3cU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3cU))))))) 
              << 0x3cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xefffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3cU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3cU))))))) 
              << 0x3cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xdfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3dU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3dU))))))) 
              << 0x3dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xdfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3dU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3dU))))))) 
              << 0x3dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0xbfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3eU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3eU))))))) 
              << 0x3eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0xbfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3eU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3eU))))))) 
              << 0x3eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
        = ((0x7fffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3fU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3fU))))))) 
              << 0x3fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
        = ((0x7fffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                              >> 0x3fU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3fU))))))) 
              << 0x3fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
        = ((0x80U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[1U])
            ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[4U])) 
                << 0x37U) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[3U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[2U])) 
                                           >> 9U)))
            : vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw);
    __Vtemp430[0U] = (((IData)(((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                                 ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw
                                 : (((QData)((IData)(
                                                     vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[0U]))))) 
                       << 4U) | ((0xcU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                          >> 0x1bU)) 
                                 | ((((((0x1fffeU & 
                                         (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                          >> 0xfU)) 
                                        | (0x3fffeU 
                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                              >> 0xeU))) 
                                       & ((8U == (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
                                                  >> 0x1cU)) 
                                          << 1U)) & 
                                      (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                       << 1U)) & ((
                                                   (0U 
                                                    == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm)) 
                                                   | (1U 
                                                      == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))) 
                                                  << 1U)) 
                                    | (((8U == (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
                                                >> 0x1cU)) 
                                        & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                           >> 0xfU)) 
                                       & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U]))));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[0U] 
        = __Vtemp430[0U];
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[1U] 
        = (((IData)(((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                      ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw
                      : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[0U]))))) 
            >> 0x1cU) | ((IData)((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                                    ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw
                                    : (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[0U])))) 
                                  >> 0x20U)) << 4U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
        = (((IData)((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                       ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw
                       : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[0U])))) 
                     >> 0x20U)) >> 0x1cU) | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                                               ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr
                                               : vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[2U]) 
                                             << 4U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[3U] 
        = (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
             ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr
             : vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[2U]) 
           >> 0x1cU);
    VL_EXTEND_WQ(128,64, __Vtemp431, vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw);
    VL_EXTEND_WQ(128,64, __Vtemp432, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[0U]))));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[0U] 
        = (0x1fffeU | ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                          ? __Vtemp431[0U] : __Vtemp432[0U]) 
                        << 0x15U) | (((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__sram_len) 
                                      << 0x11U) | (
                                                   (((vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                                      >> 0xfU) 
                                                     & (8U 
                                                        != 
                                                        (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
                                                         >> 0x1cU))) 
                                                    & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U]) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm)) 
                                                      | (1U 
                                                         == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm)))))));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[1U] 
        = ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
              ? __Vtemp431[0U] : __Vtemp432[0U]) >> 0xbU) 
           | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                ? __Vtemp431[1U] : __Vtemp432[1U]) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[2U] 
        = ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
              ? __Vtemp431[1U] : __Vtemp432[1U]) >> 0xbU) 
           | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                ? __Vtemp431[2U] : __Vtemp432[2U]) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[3U] 
        = ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
              ? __Vtemp431[2U] : __Vtemp432[2U]) >> 0xbU) 
           | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                ? __Vtemp431[3U] : __Vtemp432[3U]) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[4U] 
        = ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
              ? __Vtemp431[3U] : __Vtemp432[3U]) >> 0xbU) 
           | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr
                : vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[2U]) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[5U] 
        = (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
             ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr
             : vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[2U]) 
           >> 0xbU);
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busr_out 
        = (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr)) 
            << 5U) | (QData)((IData)((((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__sram_len) 
                                       << 1U) | (((
                                                   vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                                   >> 0x10U) 
                                                  & (8U 
                                                     != 
                                                     (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
                                                      >> 0x1cU))) 
                                                 & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])))));
    if ((1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                >> 0xbU) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                            >> 0xcU)))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in 
            = (1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                             >> 0x1fU)));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
            = (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1));
    } else {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in 
            = (1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                             >> 0x3fU)));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
            = vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1;
    }
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_1 
        = (1U & ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g) 
                 | (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p)));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_add 
        = (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
           + ((0x400U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
               ? (1ULL + (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1))
               : vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffffffeULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | (IData)((IData)((1U & (((~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1)) 
                                    | ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1) 
                                       & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1))))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
        = ((1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                   >> 0xbU) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                               >> 0xcU))) ? (QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1))))
            : vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1);
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffffffeULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | (IData)((IData)((1U & ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1) 
                                    & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1)))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffffffeULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | (IData)((IData)((1U & ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1) 
                                    | (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1)))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffffffdULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 1U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 1U))))))) 
              << 1U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffffffdULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 1U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 1U))))))) 
              << 1U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffffffbULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 2U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 2U))))))) 
              << 2U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffffffbULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 2U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 2U))))))) 
              << 2U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffffff7ULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 3U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 3U))))))) 
              << 3U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffffff7ULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 3U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 3U))))))) 
              << 3U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffffffefULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 4U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 4U))))))) 
              << 4U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffffffefULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 4U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 4U))))))) 
              << 4U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffffffdfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 5U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 5U))))))) 
              << 5U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffffffdfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 5U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 5U))))))) 
              << 5U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffffffbfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 6U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 6U))))))) 
              << 6U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffffffbfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 6U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 6U))))))) 
              << 6U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffffff7fULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 7U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 7U))))))) 
              << 7U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffffff7fULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 7U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 7U))))))) 
              << 7U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffffeffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 8U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 8U))))))) 
              << 8U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffffeffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 8U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 8U))))))) 
              << 8U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffffdffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 9U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 9U))))))) 
              << 9U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffffdffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 9U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 9U))))))) 
              << 9U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffffbffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xaU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xaU))))))) 
              << 0xaU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffffbffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xaU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xaU))))))) 
              << 0xaU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffff7ffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xbU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xbU))))))) 
              << 0xbU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffff7ffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xbU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xbU))))))) 
              << 0xbU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffffefffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xcU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xcU))))))) 
              << 0xcU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffffefffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xcU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xcU))))))) 
              << 0xcU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffffdfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xdU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xdU))))))) 
              << 0xdU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffffdfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xdU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xdU))))))) 
              << 0xdU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffffbfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xeU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xeU))))))) 
              << 0xeU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffffbfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xeU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xeU))))))) 
              << 0xeU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffff7fffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xfU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xfU))))))) 
              << 0xfU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffff7fffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0xfU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0xfU))))))) 
              << 0xfU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffeffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x10U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x10U))))))) 
              << 0x10U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffeffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x10U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x10U))))))) 
              << 0x10U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffdffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x11U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x11U))))))) 
              << 0x11U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffdffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x11U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x11U))))))) 
              << 0x11U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffffbffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x12U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x12U))))))) 
              << 0x12U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffffbffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x12U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x12U))))))) 
              << 0x12U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffff7ffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x13U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x13U))))))) 
              << 0x13U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffff7ffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x13U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x13U))))))) 
              << 0x13U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffefffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x14U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x14U))))))) 
              << 0x14U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffefffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x14U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x14U))))))) 
              << 0x14U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffdfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x15U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x15U))))))) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffdfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x15U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x15U))))))) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffffbfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x16U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x16U))))))) 
              << 0x16U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffffbfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x16U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x16U))))))) 
              << 0x16U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffff7fffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x17U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x17U))))))) 
              << 0x17U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffff7fffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x17U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x17U))))))) 
              << 0x17U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffeffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x18U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x18U))))))) 
              << 0x18U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffeffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x18U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x18U))))))) 
              << 0x18U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffdffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x19U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x19U))))))) 
              << 0x19U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffdffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x19U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x19U))))))) 
              << 0x19U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffffbffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1aU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1aU))))))) 
              << 0x1aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffffbffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1aU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1aU))))))) 
              << 0x1aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffff7ffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1bU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1bU))))))) 
              << 0x1bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffff7ffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1bU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1bU))))))) 
              << 0x1bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffefffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1cU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1cU))))))) 
              << 0x1cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffefffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1cU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1cU))))))) 
              << 0x1cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffdfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1dU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1dU))))))) 
              << 0x1dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffdfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1dU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1dU))))))) 
              << 0x1dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffffbfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1eU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1eU))))))) 
              << 0x1eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffffbfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1eU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1eU))))))) 
              << 0x1eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffff7fffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1fU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1fU))))))) 
              << 0x1fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffff7fffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x1fU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x1fU))))))) 
              << 0x1fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffeffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x20U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x20U))))))) 
              << 0x20U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffeffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x20U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x20U))))))) 
              << 0x20U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffdffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x21U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x21U))))))) 
              << 0x21U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffdffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x21U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x21U))))))) 
              << 0x21U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffffbffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x22U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x22U))))))) 
              << 0x22U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffffbffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x22U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x22U))))))) 
              << 0x22U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffff7ffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x23U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x23U))))))) 
              << 0x23U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffff7ffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x23U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x23U))))))) 
              << 0x23U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffefffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x24U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x24U))))))) 
              << 0x24U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffefffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x24U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x24U))))))) 
              << 0x24U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffdfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x25U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x25U))))))) 
              << 0x25U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffdfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x25U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x25U))))))) 
              << 0x25U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffffbfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x26U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x26U))))))) 
              << 0x26U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffffbfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x26U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x26U))))))) 
              << 0x26U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffff7fffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x27U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x27U))))))) 
              << 0x27U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffff7fffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x27U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x27U))))))) 
              << 0x27U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffeffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x28U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x28U))))))) 
              << 0x28U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffeffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x28U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x28U))))))) 
              << 0x28U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffdffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x29U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x29U))))))) 
              << 0x29U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffdffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x29U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x29U))))))) 
              << 0x29U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffffbffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2aU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffffbffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2aU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2aU))))))) 
              << 0x2aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffff7ffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2bU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2bU))))))) 
              << 0x2bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffff7ffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2bU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2bU))))))) 
              << 0x2bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffefffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2cU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2cU))))))) 
              << 0x2cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffefffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2cU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2cU))))))) 
              << 0x2cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffdfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2dU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2dU))))))) 
              << 0x2dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffdfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2dU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2dU))))))) 
              << 0x2dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffffbfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2eU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2eU))))))) 
              << 0x2eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffffbfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2eU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2eU))))))) 
              << 0x2eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffff7fffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2fU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2fU))))))) 
              << 0x2fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffff7fffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x2fU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x2fU))))))) 
              << 0x2fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffeffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x30U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x30U))))))) 
              << 0x30U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffeffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x30U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x30U))))))) 
              << 0x30U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffdffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x31U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x31U))))))) 
              << 0x31U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffdffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x31U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x31U))))))) 
              << 0x31U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfffbffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x32U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x32U))))))) 
              << 0x32U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfffbffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x32U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x32U))))))) 
              << 0x32U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfff7ffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x33U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x33U))))))) 
              << 0x33U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfff7ffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x33U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x33U))))))) 
              << 0x33U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffefffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x34U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x34U))))))) 
              << 0x34U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffefffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x34U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x34U))))))) 
              << 0x34U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffdfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x35U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x35U))))))) 
              << 0x35U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffdfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x35U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x35U))))))) 
              << 0x35U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xffbfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x36U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x36U))))))) 
              << 0x36U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xffbfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x36U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x36U))))))) 
              << 0x36U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xff7fffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x37U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x37U))))))) 
              << 0x37U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xff7fffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x37U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x37U))))))) 
              << 0x37U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfeffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x38U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x38U))))))) 
              << 0x38U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfeffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x38U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x38U))))))) 
              << 0x38U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfdffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x39U)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x39U))))))) 
              << 0x39U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfdffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x39U)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x39U))))))) 
              << 0x39U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xfbffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3aU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3aU))))))) 
              << 0x3aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xfbffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3aU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3aU))))))) 
              << 0x3aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xf7ffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3bU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3bU))))))) 
              << 0x3bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xf7ffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3bU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3bU))))))) 
              << 0x3bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xefffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3cU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3cU))))))) 
              << 0x3cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xefffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3cU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3cU))))))) 
              << 0x3cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xdfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3dU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3dU))))))) 
              << 0x3dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xdfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3dU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3dU))))))) 
              << 0x3dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0xbfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3eU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3eU))))))) 
              << 0x3eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0xbfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3eU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3eU))))))) 
              << 0x3eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
        = ((0x7fffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3fU)) 
                                     & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3fU))))))) 
              << 0x3fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
        = ((0x7fffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p) 
           | ((QData)((IData)((1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                              >> 0x3fU)) 
                                     | (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                   >> 0x3fU))))))) 
              << 0x3fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffffffdULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 1U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 1U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_1)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 1U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 1U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_1)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 1U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_1)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 1U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 1U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_1)))))) 
              << 1U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_2 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 1U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 1U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_1))));
    if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                       >> 5U)))) {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_sll 
            = ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x3fU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (3U 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x3eU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (7U 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x3dU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xfU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x3cU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x3bU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x3aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x39U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x38U))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1ffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x37U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3ffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x36U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x35U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x34U)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1fffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x33U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3fffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x32U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x31U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x30U)))))
                : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1ffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x2fU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3ffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x2eU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7ffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x2dU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xfffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x2cU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1fffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x2bU)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x2aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x29U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xffffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x28U))))
                    : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x1ffffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x27U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0x3ffffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x26U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0x7ffffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x25U)
                                                    : 
                                                   ((QData)((IData)(
                                                                    (0xfffffffU 
                                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                                    << 0x24U)))
                        : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                             ? ((QData)((IData)((0x1fffffffU 
                                                 & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                << 0x23U) : ((QData)((IData)(
                                                             (0x3fffffffU 
                                                              & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                             << 0x22U))
                            : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                ? ((QData)((IData)(
                                                   (0x7fffffffU 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))) 
                                   << 0x21U) : ((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)) 
                                                << 0x20U))))));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__shift_srl 
            = ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 1U) 
                                                    | (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x3fU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 2U) 
                                                    | (QData)((IData)(
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x3eU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 3U) 
                                                    | (QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x3dU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x3cU))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x3bU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 6U) 
                                                    | (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x3aU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      (0x7fU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x39U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x38U)))))))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x37U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0xaU) 
                                                    | (QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x36U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0xbU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x35U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x34U))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      (0x1fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x33U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0xeU) 
                                                    | (QData)((IData)(
                                                                      (0x3fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x32U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0xfU) 
                                                    | (QData)((IData)(
                                                                      (0x7fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x31U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x30U))))))))))
                : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x2fU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x2eU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x2dU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      (0xfffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x2cU))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      (0x1fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x2bU))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x16U) 
                                                    | (QData)((IData)(
                                                                      (0x3fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x2aU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x17U) 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x29U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x28U)))))))))
                    : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x19U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x27U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x1aU) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x26U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x1bU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x25U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                          >> 9U) 
                                                                         & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (0xfffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x24U))))))))
                        : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                             ? (((- (QData)((IData)(
                                                    ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                      >> 9U) 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                 << 0x1dU) | (QData)((IData)(
                                                             (0x1fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                         >> 0x23U))))))
                             : (((- (QData)((IData)(
                                                    ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                      >> 9U) 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                 << 0x1eU) | (QData)((IData)(
                                                             (0x3fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                         >> 0x22U)))))))
                            : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                ? (((- (QData)((IData)(
                                                       ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                         >> 9U) 
                                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))) 
                                    << 0x1fU) | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (IData)(
                                                                           (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                            >> 0x21U))))))
                                : (((QData)((IData)(
                                                    (- (IData)(
                                                               ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                 >> 9U) 
                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in)))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                 >> 0x20U)))))))));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__shift_arw = 0ULL;
    } else {
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_sll 
            = ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x1fU)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x1eU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x1dU)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x1cU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x1bU)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x1aU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x19U)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x18U))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x17U)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x16U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x15U)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x14U)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x13U)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x12U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x11U)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0x10U)))))
                : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0xfU)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0xeU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0xdU)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0xcU)))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0xbU)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 0xaU))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 9U)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 8U))))
                    : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 7U)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 6U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 5U)
                                                    : 
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                    << 4U)))
                        : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                             ? (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                << 3U) : (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                          << 2U)) : 
                           ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                             ? (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                << 1U) : vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__shift_srl 
            = ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x21U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x1fU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x22U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x1eU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x23U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x1dU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x24U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x1cU))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x25U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x1bU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x26U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x1aU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x27U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x19U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x28U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x18U)))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x29U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x17U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x2aU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x16U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x2bU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x15U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x2cU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x14U))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x2dU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x13U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x2eU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x12U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x2fU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x11U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x30U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0x10U))))))
                : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x31U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0xfU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x32U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0xeU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x33U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0xdU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x34U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0xcU))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x35U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0xbU))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x36U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 0xaU)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x37U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 9U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x38U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 8U)))))
                    : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x39U) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 7U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x3aU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 6U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x3bU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 5U))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x3cU) 
                                                    | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                       >> 4U))))
                        : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                             ? (((QData)((IData)((7U 
                                                  & (- (IData)(
                                                               ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                 >> 9U) 
                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                 << 0x3dU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                              >> 3U))
                             : (((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                 >> 9U) 
                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                 << 0x3eU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                              >> 2U)))
                            : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                ? (((QData)((IData)(
                                                    ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                      >> 9U) 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in)))) 
                                    << 0x3fU) | (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                 >> 1U))
                                : vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))));
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__shift_arw 
            = ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 1U) 
                                                    | (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x1fU))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 2U) 
                                                    | (QData)((IData)(
                                                                      (3U 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x1eU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 3U) 
                                                    | (QData)((IData)(
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x1dU))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x1cU))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x1bU))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 6U) 
                                                    | (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x1aU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 7U) 
                                                    | (QData)((IData)(
                                                                      (0x7fU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x19U))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x18U)))))))))
                                           : ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 9U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x17U))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0xaU) 
                                                    | (QData)((IData)(
                                                                      (0x3ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x16U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0xbU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x15U))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x14U))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(
                                                                      (0x1fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x13U))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0xeU) 
                                                    | (QData)((IData)(
                                                                      (0x3fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x12U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0xfU) 
                                                    | (QData)((IData)(
                                                                      (0x7fffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x11U))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0x10U))))))))))
                : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                  >> 3U))) ? ((1U & (IData)(
                                                            (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                             >> 2U)))
                                               ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x11U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0xfU))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0xeU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x13U) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0xdU))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      (0xfffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0xcU))))))))
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7ffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x15U) 
                                                    | (QData)((IData)(
                                                                      (0x1fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0xbU))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3ffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x16U) 
                                                    | (QData)((IData)(
                                                                      (0x3fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 0xaU)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1ffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x17U) 
                                                    | (QData)((IData)(
                                                                      (0x7fffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 9U))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(
                                                                      (0xffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 8U)))))))))
                    : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                      >> 2U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                                              >> 1U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x19U) 
                                                    | (QData)((IData)(
                                                                      (0x1ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 7U))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x1aU) 
                                                    | (QData)((IData)(
                                                                      (0x3ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 6U)))))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x1bU) 
                                                    | (QData)((IData)(
                                                                      (0x7ffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 5U))))))
                                                    : 
                                                   (((QData)((IData)(
                                                                     (0xfU 
                                                                      & (- (IData)(
                                                                                ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                                >> 9U) 
                                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                                     << 0x1cU) 
                                                    | (QData)((IData)(
                                                                      (0xfffffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                                >> 4U))))))))
                        : ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                             ? (((QData)((IData)((7U 
                                                  & (- (IData)(
                                                               ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                 >> 9U) 
                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                 << 0x1dU) | (QData)((IData)(
                                                             (0x1fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                         >> 3U))))))
                             : (((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                                 >> 9U) 
                                                                & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in))))))) 
                                 << 0x1eU) | (QData)((IData)(
                                                             (0x3fffffffU 
                                                              & (IData)(
                                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                         >> 2U)))))))
                            : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in1))
                                ? (((QData)((IData)(
                                                    ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                                      >> 9U) 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__sra_left_in)))) 
                                    << 0x1fU) | (QData)((IData)(
                                                                (0x7fffffffU 
                                                                 & (IData)(
                                                                           (vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0 
                                                                            >> 1U))))))
                                : (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT____Vcellinp__ysyx_050518_shift__in0)))))));
    }
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_1 
        = (1U & ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g) 
                 | (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p)));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffffffbULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 2U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 2U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_2)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 2U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 2U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_2)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 2U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_2)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 2U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 2U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_2)))))) 
              << 2U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_3 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 2U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 2U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_2))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffffffdULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 1U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 1U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_1)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 1U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 1U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_1)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 1U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 1U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_1)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 1U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 1U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_1)))))) 
              << 1U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_2 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 1U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 1U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_1))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffffff7ULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 3U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 3U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_3)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 3U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 3U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_3)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 3U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_3)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 3U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 3U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_3)))))) 
              << 3U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_4 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 3U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 3U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_3))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffffffbULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 2U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 2U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_2)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 2U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 2U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_2)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 2U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 2U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_2)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 2U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 2U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_2)))))) 
              << 2U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_3 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 2U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 2U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_2))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffffffefULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 4U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 4U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_4)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 4U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 4U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_4)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 4U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_4)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 4U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 4U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_4)))))) 
              << 4U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_5 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 4U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 4U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_4))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffffff7ULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 3U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 3U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_3)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 3U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 3U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_3)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 3U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_3)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 3U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 3U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_3)))))) 
              << 3U));
}
