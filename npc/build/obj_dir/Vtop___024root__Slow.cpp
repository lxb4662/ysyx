// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 4> Vtop__ConstPool__TABLE_a3cf4ec3_0;
void Vtop___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ &mem_read__Vfuncrtn);
extern const VlUnpacked<CData/*6:0*/, 256> Vtop__ConstPool__TABLE_0a033294_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_4de49e0a_0;
void Vtop___024unit____Vdpiimwrap_mem_skip_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ &mem_skip__Vfuncrtn);
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_4eab332a_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_0c1793d2_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_b959db56_0;

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx8;
    SData/*9:0*/ __Vtableidx4;
    SData/*9:0*/ __Vtableidx5;
    SData/*9:0*/ __Vtableidx6;
    SData/*9:0*/ __Vtableidx7;
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<4>/*127:0*/ __Vtemp5;
    VlWide<4>/*127:0*/ __Vtemp6;
    VlWide<4>/*127:0*/ __Vtemp7;
    VlWide<4>/*127:0*/ __Vtemp8;
    VlWide<4>/*127:0*/ __Vtemp11;
    VlWide<4>/*127:0*/ __Vtemp12;
    VlWide<4>/*127:0*/ __Vtemp13;
    VlWide<4>/*127:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<4>/*127:0*/ __Vtemp19;
    VlWide<4>/*127:0*/ __Vtemp20;
    VlWide<4>/*127:0*/ __Vtemp21;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<4>/*127:0*/ __Vtemp26;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp56;
    VlWide<4>/*127:0*/ __Vtemp59;
    VlWide<4>/*127:0*/ __Vtemp60;
    VlWide<4>/*127:0*/ __Vtemp65;
    VlWide<4>/*127:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<4>/*127:0*/ __Vtemp70;
    VlWide<4>/*127:0*/ __Vtemp77;
    VlWide<4>/*127:0*/ __Vtemp78;
    VlWide<4>/*127:0*/ __Vtemp81;
    VlWide<4>/*127:0*/ __Vtemp82;
    VlWide<4>/*127:0*/ __Vtemp87;
    VlWide<4>/*127:0*/ __Vtemp88;
    VlWide<4>/*127:0*/ __Vtemp91;
    VlWide<4>/*127:0*/ __Vtemp99;
    VlWide<4>/*127:0*/ __Vtemp126;
    VlWide<4>/*127:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp131;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp143;
    VlWide<4>/*127:0*/ __Vtemp145;
    VlWide<4>/*127:0*/ __Vtemp149;
    VlWide<4>/*127:0*/ __Vtemp151;
    VlWide<4>/*127:0*/ __Vtemp157;
    VlWide<4>/*127:0*/ __Vtemp159;
    // Body
    vlSelf->ira = vlSelf->top__DOT__inst_addr;
    vlSelf->ir = vlSelf->top__DOT__inst;
    vlSelf->top__DOT__axi_3_b_ready = ((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)) 
                                       | ((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)) 
                                          | (3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid))));
    __Vtemp1[0U] = 1U;
    __Vtemp1[1U] = 0U;
    __Vtemp1[2U] = 0U;
    __Vtemp1[3U] = 0U;
    __Vtemp2[0U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[0U]);
    __Vtemp2[1U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[1U]);
    __Vtemp2[2U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[2U]);
    __Vtemp2[3U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r[3U]);
    VL_ADD_W(4, __Vtemp3, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r, __Vtemp2);
    VL_ADD_W(4, __Vtemp4, __Vtemp1, __Vtemp3);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[0U] 
        = __Vtemp4[0U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[1U] 
        = __Vtemp4[1U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[2U] 
        = __Vtemp4[2U];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out[3U] 
        = __Vtemp4[3U];
    VL_EXTEND_WQ(128,64, __Vtemp5, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans);
    __Vtemp6[0U] = 1U;
    __Vtemp6[1U] = 0U;
    __Vtemp6[2U] = 0U;
    __Vtemp6[3U] = 0U;
    VL_EXTEND_WQ(128,64, __Vtemp7, (0xffffffff00000000ULL 
                                    | (QData)((IData)(
                                                      (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans))))));
    VL_ADD_W(4, __Vtemp8, __Vtemp6, __Vtemp7);
    VL_EXTEND_WQ(128,64, __Vtemp11, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans);
    __Vtemp12[0U] = 1U;
    __Vtemp12[1U] = 0U;
    __Vtemp12[2U] = 0U;
    __Vtemp12[3U] = 0U;
    VL_EXTEND_WQ(128,64, __Vtemp13, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans);
    __Vtemp14[0U] = (~ __Vtemp13[0U]);
    __Vtemp14[1U] = (~ __Vtemp13[1U]);
    __Vtemp14[2U] = (~ __Vtemp13[2U]);
    __Vtemp14[3U] = (~ __Vtemp13[3U]);
    VL_ADD_W(4, __Vtemp15, __Vtemp12, __Vtemp14);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__q_signed 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                              ? ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                  ? __Vtemp5[1U] : 
                                 __Vtemp8[1U]) : ((1U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                                   ? 
                                                  __Vtemp11[1U]
                                                   : 
                                                  __Vtemp15[1U])))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                          ? ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                              ? __Vtemp5[0U]
                                              : __Vtemp8[0U])
                                          : ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                              ? __Vtemp11[0U]
                                              : __Vtemp15[0U])))));
    __Vtemp19[0U] = 1U;
    __Vtemp19[1U] = 0U;
    __Vtemp19[2U] = 0U;
    __Vtemp19[3U] = 0U;
    VL_EXTEND_WQ(128,64, __Vtemp20, (0xffffffff00000000ULL 
                                     | (QData)((IData)(
                                                       (~ 
                                                        vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U])))));
    VL_ADD_W(4, __Vtemp21, __Vtemp19, __Vtemp20);
    __Vtemp24[0U] = 1U;
    __Vtemp24[1U] = 0U;
    __Vtemp24[2U] = 0U;
    __Vtemp24[3U] = 0U;
    __Vtemp25[0U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U]);
    __Vtemp25[1U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U]);
    __Vtemp25[2U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[2U]);
    __Vtemp25[3U] = (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[3U]);
    VL_ADD_W(4, __Vtemp26, __Vtemp24, __Vtemp25);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__r_signed 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                              ? ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                  ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U]
                                  : __Vtemp21[1U]) : 
                             ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                               ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[1U]
                               : __Vtemp26[1U])))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                          ? ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                              ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U]
                                              : __Vtemp21[0U])
                                          : ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r))
                                              ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r[0U]
                                              : __Vtemp26[0U])))));
    vlSelf->top__DOT__axi_0_w_valid = ((((1U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)) 
                                         | (2U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))) 
                                        | (3U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))) 
                                       | (4U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)));
    vlSelf->top__DOT__axi_1_w_valid = ((((1U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm)) 
                                         | (2U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))) 
                                        | (3U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))) 
                                       | (4U == (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm)));
    vlSelf->top__DOT__icache__DOT__Q[0U][0U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[0U];
    vlSelf->top__DOT__icache__DOT__Q[0U][1U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[1U];
    vlSelf->top__DOT__icache__DOT__Q[0U][2U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[2U];
    vlSelf->top__DOT__icache__DOT__Q[0U][3U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q[3U];
    vlSelf->top__DOT__icache__DOT__Q[1U][0U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[0U];
    vlSelf->top__DOT__icache__DOT__Q[1U][1U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[1U];
    vlSelf->top__DOT__icache__DOT__Q[1U][2U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[2U];
    vlSelf->top__DOT__icache__DOT__Q[1U][3U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q[3U];
    vlSelf->top__DOT__icache__DOT__Q[2U][0U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[0U];
    vlSelf->top__DOT__icache__DOT__Q[2U][1U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[1U];
    vlSelf->top__DOT__icache__DOT__Q[2U][2U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[2U];
    vlSelf->top__DOT__icache__DOT__Q[2U][3U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q[3U];
    vlSelf->top__DOT__icache__DOT__Q[3U][0U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[0U];
    vlSelf->top__DOT__icache__DOT__Q[3U][1U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[1U];
    vlSelf->top__DOT__icache__DOT__Q[3U][2U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[2U];
    vlSelf->top__DOT__icache__DOT__Q[3U][3U] = vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q[3U];
    vlSelf->top__DOT__axi_2_b_valid = ((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid));
    vlSelf->top__DOT__stage1__DOT__rs1_w = ((0U == (IData)(vlSelf->top__DOT__rs1_addr))
                                             ? 0ULL
                                             : vlSelf->top__DOT__stage1__DOT__regs__DOT__regs
                                            [vlSelf->top__DOT__rs1_addr]);
    vlSelf->top__DOT__stage1__DOT__rs2_w = ((0U == (IData)(vlSelf->top__DOT__rs2_addr))
                                             ? 0ULL
                                             : vlSelf->top__DOT__stage1__DOT__regs__DOT__regs
                                            [vlSelf->top__DOT__rs2_addr]);
    vlSelf->top__DOT__dcache__DOT__Q[0U][0U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[0U];
    vlSelf->top__DOT__dcache__DOT__Q[0U][1U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[1U];
    vlSelf->top__DOT__dcache__DOT__Q[0U][2U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[2U];
    vlSelf->top__DOT__dcache__DOT__Q[0U][3U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q[3U];
    vlSelf->top__DOT__dcache__DOT__Q[1U][0U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[0U];
    vlSelf->top__DOT__dcache__DOT__Q[1U][1U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[1U];
    vlSelf->top__DOT__dcache__DOT__Q[1U][2U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[2U];
    vlSelf->top__DOT__dcache__DOT__Q[1U][3U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q[3U];
    vlSelf->top__DOT__dcache__DOT__Q[2U][0U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[0U];
    vlSelf->top__DOT__dcache__DOT__Q[2U][1U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[1U];
    vlSelf->top__DOT__dcache__DOT__Q[2U][2U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[2U];
    vlSelf->top__DOT__dcache__DOT__Q[2U][3U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q[3U];
    vlSelf->top__DOT__dcache__DOT__Q[3U][0U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[0U];
    vlSelf->top__DOT__dcache__DOT__Q[3U][1U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[1U];
    vlSelf->top__DOT__dcache__DOT__Q[3U][2U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[2U];
    vlSelf->top__DOT__dcache__DOT__Q[3U][3U] = vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q[3U];
    vlSelf->top__DOT__axi_0_r_data = ((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                       ? vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata
                                       : 0U);
    vlSelf->top__DOT__axi_1_r_data = ((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                       ? vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata
                                       : 0U);
    __Vtableidx8 = (3U & (IData)(vlSelf->top__DOT__func3));
    vlSelf->top__DOT__dcache__DOT__mask[0U] = Vtop__ConstPool__TABLE_a3cf4ec3_0
        [__Vtableidx8][0U];
    vlSelf->top__DOT__dcache__DOT__mask[1U] = Vtop__ConstPool__TABLE_a3cf4ec3_0
        [__Vtableidx8][1U];
    vlSelf->top__DOT__dcache__DOT__mask[2U] = Vtop__ConstPool__TABLE_a3cf4ec3_0
        [__Vtableidx8][2U];
    vlSelf->top__DOT__dcache__DOT__mask[3U] = Vtop__ConstPool__TABLE_a3cf4ec3_0
        [__Vtableidx8][3U];
    vlSelf->top__DOT__axi_1_r_valid = ((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid));
    vlSelf->top__DOT__axi_0_r_valid = ((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid));
    vlSelf->top__DOT__axi_0_aw_valid = ((((8U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
                                          | (9U == (IData)(vlSelf->top__DOT__icache__DOT__status))) 
                                         | (0xaU == (IData)(vlSelf->top__DOT__icache__DOT__status))) 
                                        | (0xbU == (IData)(vlSelf->top__DOT__icache__DOT__status)));
    vlSelf->top__DOT__axi_1_aw_valid = ((((8U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
                                          | (9U == (IData)(vlSelf->top__DOT__dcache__DOT__status))) 
                                         | (0xaU == (IData)(vlSelf->top__DOT__dcache__DOT__status))) 
                                        | (0xbU == (IData)(vlSelf->top__DOT__dcache__DOT__status)));
    vlSelf->top__DOT__axi_0_ar_valid = ((((0x10U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
                                          | (0x11U 
                                             == (IData)(vlSelf->top__DOT__icache__DOT__status))) 
                                         | (0x12U == (IData)(vlSelf->top__DOT__icache__DOT__status))) 
                                        | (0x13U == (IData)(vlSelf->top__DOT__icache__DOT__status)));
    vlSelf->top__DOT__axi_1_ar_valid = ((((0x10U == (IData)(vlSelf->top__DOT__dcache__DOT__status)) 
                                          | (0x11U 
                                             == (IData)(vlSelf->top__DOT__dcache__DOT__status))) 
                                         | (0x12U == (IData)(vlSelf->top__DOT__dcache__DOT__status))) 
                                        | (0x13U == (IData)(vlSelf->top__DOT__dcache__DOT__status)));
    vlSelf->top__DOT__axi_2_r_valid = ((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                       & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid));
    vlSelf->top__DOT__rdr_second_stage = ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                           ? (IData)(vlSelf->top__DOT__rdr_o_lsu)
                                           : ((IData)(vlSelf->top__DOT__rd_w_o_pri)
                                               ? (IData)(vlSelf->top__DOT__rdr_o_pri)
                                               : (IData)(vlSelf->top__DOT__rdr_o_exu)));
    vlSelf->pc_dut = vlSelf->top__DOT__pc_dut2;
    Vtop___024unit____Vdpiimwrap_mem_read_TOP____024unit(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr, 4U, vlSelf->__Vfunc_mem_read__2__Vfuncout);
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__reg_data_out 
        = (IData)(vlSelf->__Vfunc_mem_read__2__Vfuncout);
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
    vlSelf->top__DOT__stall = ((0U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                ? 0xfU : ((1U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                           ? 0xbU : 
                                          ((2U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                            ? 0xcU : 0xfU)));
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
    vlSelf->top__DOT__rw_valid_o = ((IData)(vlSelf->top__DOT__axi_2_b_valid) 
                                    | (IData)(vlSelf->top__DOT__axi_2_r_valid));
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
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid) 
                     << 7U) | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm_next 
        = Vtop__ConstPool__TABLE_0a033294_0[__Vtableidx1];
    vlSelf->top__DOT____Vcellinp__exu__exu_en = ((IData)(vlSelf->top__DOT__exu_en) 
                                                 & ((IData)(vlSelf->top__DOT__stall) 
                                                    >> 2U));
    vlSelf->top__DOT____Vcellinp__lsu__lsu_en = ((IData)(vlSelf->top__DOT__lsu_en) 
                                                 & ((IData)(vlSelf->top__DOT__stall) 
                                                    >> 2U));
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
    vlSelf->top__DOT__icache__DOT__tag_arry_en = ((
                                                   (4U 
                                                    == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)) 
                                                   & (IData)(vlSelf->top__DOT__axi_0_w_ready)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm)) 
                                                     & (IData)(vlSelf->top__DOT__axi_0_r_valid)));
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
    vlSelf->top__DOT__lsu__DOT__load_ext_in = ((IData)(vlSelf->top__DOT__lsu__DOT__rd_sel1)
                                                ? (QData)((IData)(vlSelf->top__DOT__data_read_o))
                                                : vlSelf->top__DOT__dcache__DOT__read_shift);
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden 
        = (((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready) 
            & (IData)(vlSelf->top__DOT__axi_3_ar_valid)) 
           & (~ (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid)));
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
    vlSelf->top__DOT__rd_second_stage = ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                          ? vlSelf->top__DOT__rd_o_lsu
                                          : ((IData)(vlSelf->top__DOT__rd_w_o_pri)
                                              ? vlSelf->top__DOT__rd_o_pri
                                              : vlSelf->top__DOT__rd_o_exu));
    vlSelf->top__DOT__lsu__DOT__rs2 = ((IData)(vlSelf->top__DOT__rs2_sel)
                                        ? vlSelf->top__DOT__rd_second_stage
                                        : vlSelf->top__DOT__stage1__DOT__rs2_w);
    vlSelf->top__DOT__lsu__DOT__rs1 = ((IData)(vlSelf->top__DOT__rs1_sel)
                                        ? vlSelf->top__DOT__rd_second_stage
                                        : vlSelf->top__DOT__stage1__DOT__rs1_w);
    vlSelf->top__DOT__exu__DOT__rs2 = ((IData)(vlSelf->top__DOT__rs2_sel)
                                        ? vlSelf->top__DOT__rd_second_stage
                                        : vlSelf->top__DOT__stage1__DOT__rs2_w);
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
    Vtop___024unit____Vdpiimwrap_mem_skip_TOP____024unit(
                                                         (vlSelf->top__DOT__lsu__DOT__rs1 
                                                          + vlSelf->top__DOT__imm), vlSelf->__Vfunc_mem_skip__1__Vfuncout);
    vlSelf->top__DOT__skip_ref = ((IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en) 
                                  & (1U == vlSelf->__Vfunc_mem_skip__1__Vfuncout));
    vlSelf->top__DOT__exu__DOT__alu_in1_w1 = ((IData)(vlSelf->top__DOT__alu_in1_sel)
                                               ? vlSelf->top__DOT__pc_out
                                               : vlSelf->top__DOT__lsu__DOT__rs1);
    vlSelf->top__DOT__exu__DOT__eq_b = ((vlSelf->top__DOT__lsu__DOT__rs1 
                                         == vlSelf->top__DOT__exu__DOT__rs2)
                                         ? 1ULL : 0ULL);
    vlSelf->top__DOT__exu__DOT__slt_b = (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__lsu__DOT__rs1, vlSelf->top__DOT__exu__DOT__rs2)
                                          ? 1ULL : 0ULL);
    vlSelf->top__DOT__exu__DOT__alu_in2_w1 = ((IData)(vlSelf->top__DOT__alu_in2_sel)
                                               ? vlSelf->top__DOT__imm
                                               : vlSelf->top__DOT__exu__DOT__rs2);
    VL_SHIFTL_WWI(128,128,32, __Vtemp55, vlSelf->top__DOT__dcache__DOT__mask, 0x78U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp56, vlSelf->top__DOT__dcache__DOT__mask, 0x70U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp59, vlSelf->top__DOT__dcache__DOT__mask, 0x68U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp60, vlSelf->top__DOT__dcache__DOT__mask, 0x60U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp65, vlSelf->top__DOT__dcache__DOT__mask, 0x58U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp66, vlSelf->top__DOT__dcache__DOT__mask, 0x50U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp69, vlSelf->top__DOT__dcache__DOT__mask, 0x48U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp70, vlSelf->top__DOT__dcache__DOT__mask, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp77, vlSelf->top__DOT__dcache__DOT__mask, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp78, vlSelf->top__DOT__dcache__DOT__mask, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp81, vlSelf->top__DOT__dcache__DOT__mask, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp82, vlSelf->top__DOT__dcache__DOT__mask, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp87, vlSelf->top__DOT__dcache__DOT__mask, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp88, vlSelf->top__DOT__dcache__DOT__mask, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp91, vlSelf->top__DOT__dcache__DOT__mask, 8U);
    if ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                       >> 3U)))) {
        __Vtemp99[0U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                        >> 2U))) ? 
                         ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? __Vtemp55[0U] : __Vtemp56[0U])
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? __Vtemp59[0U] : __Vtemp60[0U]))
                          : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                            >> 1U)))
                              ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                  ? __Vtemp65[0U] : 
                                 __Vtemp66[0U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dcache_addr))
                                                    ? 
                                                   __Vtemp69[0U]
                                                    : 
                                                   __Vtemp70[0U])));
        __Vtemp99[1U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                        >> 2U))) ? 
                         ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? __Vtemp55[1U] : __Vtemp56[1U])
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? __Vtemp59[1U] : __Vtemp60[1U]))
                          : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                            >> 1U)))
                              ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                  ? __Vtemp65[1U] : 
                                 __Vtemp66[1U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dcache_addr))
                                                    ? 
                                                   __Vtemp69[1U]
                                                    : 
                                                   __Vtemp70[1U])));
        __Vtemp99[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                        >> 2U))) ? 
                         ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? __Vtemp55[2U] : __Vtemp56[2U])
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? __Vtemp59[2U] : __Vtemp60[2U]))
                          : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                            >> 1U)))
                              ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                  ? __Vtemp65[2U] : 
                                 __Vtemp66[2U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dcache_addr))
                                                    ? 
                                                   __Vtemp69[2U]
                                                    : 
                                                   __Vtemp70[2U])));
        __Vtemp99[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                        >> 2U))) ? 
                         ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? __Vtemp55[3U] : __Vtemp56[3U])
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? __Vtemp59[3U] : __Vtemp60[3U]))
                          : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                            >> 1U)))
                              ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                  ? __Vtemp65[3U] : 
                                 __Vtemp66[3U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dcache_addr))
                                                    ? 
                                                   __Vtemp69[3U]
                                                    : 
                                                   __Vtemp70[3U])));
    } else {
        __Vtemp99[0U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                        >> 2U))) ? 
                         ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? __Vtemp77[0U] : __Vtemp78[0U])
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? __Vtemp81[0U] : __Vtemp82[0U]))
                          : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                            >> 1U)))
                              ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                  ? __Vtemp87[0U] : 
                                 __Vtemp88[0U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dcache_addr))
                                                    ? 
                                                   __Vtemp91[0U]
                                                    : 
                                                   vlSelf->top__DOT__dcache__DOT__mask[0U])));
        __Vtemp99[1U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                        >> 2U))) ? 
                         ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? __Vtemp77[1U] : __Vtemp78[1U])
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? __Vtemp81[1U] : __Vtemp82[1U]))
                          : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                            >> 1U)))
                              ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                  ? __Vtemp87[1U] : 
                                 __Vtemp88[1U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dcache_addr))
                                                    ? 
                                                   __Vtemp91[1U]
                                                    : 
                                                   vlSelf->top__DOT__dcache__DOT__mask[1U])));
        __Vtemp99[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                        >> 2U))) ? 
                         ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? __Vtemp77[2U] : __Vtemp78[2U])
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? __Vtemp81[2U] : __Vtemp82[2U]))
                          : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                            >> 1U)))
                              ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                  ? __Vtemp87[2U] : 
                                 __Vtemp88[2U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dcache_addr))
                                                    ? 
                                                   __Vtemp91[2U]
                                                    : 
                                                   vlSelf->top__DOT__dcache__DOT__mask[2U])));
        __Vtemp99[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                        >> 2U))) ? 
                         ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? __Vtemp77[3U] : __Vtemp78[3U])
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? __Vtemp81[3U] : __Vtemp82[3U]))
                          : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                            >> 1U)))
                              ? ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                  ? __Vtemp87[3U] : 
                                 __Vtemp88[3U]) : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__dcache_addr))
                                                    ? 
                                                   __Vtemp91[3U]
                                                    : 
                                                   vlSelf->top__DOT__dcache__DOT__mask[3U])));
    }
    vlSelf->top__DOT__dcache__DOT__cache_write_bwen[0U] 
        = __Vtemp99[0U];
    vlSelf->top__DOT__dcache__DOT__cache_write_bwen[1U] 
        = __Vtemp99[1U];
    vlSelf->top__DOT__dcache__DOT__cache_write_bwen[2U] 
        = __Vtemp99[2U];
    vlSelf->top__DOT__dcache__DOT__cache_write_bwen[3U] 
        = __Vtemp99[3U];
    __Vtemp126[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
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
    __Vtemp128[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
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
    VL_EXTEND_WQ(72,64, __Vtemp129, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(80,64, __Vtemp131, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(88,64, __Vtemp135, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(96,64, __Vtemp137, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(104,64, __Vtemp143, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(112,64, __Vtemp145, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(120,64, __Vtemp149, vlSelf->top__DOT__lsu__DOT__rs2);
    VL_EXTEND_WQ(128,64, __Vtemp151, vlSelf->top__DOT__lsu__DOT__rs2);
    if ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                       >> 2U)))) {
        __Vtemp157[1U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? (__Vtemp129[0U] << 0x18U)
                            : (__Vtemp131[0U] << 0x10U))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? (__Vtemp135[0U] << 8U)
                               : __Vtemp137[0U]));
        __Vtemp157[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp129[0U] >> 8U) 
                               | (__Vtemp129[1U] << 0x18U))
                            : ((__Vtemp131[0U] >> 0x10U) 
                               | (__Vtemp131[1U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp135[0U] >> 0x18U) 
                                  | (__Vtemp135[1U] 
                                     << 8U)) : __Vtemp137[1U]));
        __Vtemp157[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp129[1U] >> 8U) 
                               | (__Vtemp129[2U] << 0x18U))
                            : ((__Vtemp131[1U] >> 0x10U) 
                               | (__Vtemp131[2U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp135[1U] >> 0x18U) 
                                  | (__Vtemp135[2U] 
                                     << 8U)) : __Vtemp137[2U]));
    } else {
        __Vtemp157[1U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp143[0U] >> 8U) 
                               | (__Vtemp143[1U] << 0x18U))
                            : ((__Vtemp145[0U] >> 0x10U) 
                               | (__Vtemp145[1U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp149[0U] >> 0x18U) 
                                  | (__Vtemp149[1U] 
                                     << 8U)) : __Vtemp151[1U]));
        __Vtemp157[2U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp143[1U] >> 8U) 
                               | (__Vtemp143[2U] << 0x18U))
                            : ((__Vtemp145[1U] >> 0x10U) 
                               | (__Vtemp145[2U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp149[1U] >> 0x18U) 
                                  | (__Vtemp149[2U] 
                                     << 8U)) : __Vtemp151[2U]));
        __Vtemp157[3U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                         >> 1U))) ? 
                          ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                            ? ((__Vtemp143[2U] >> 8U) 
                               | (__Vtemp143[3U] << 0x18U))
                            : ((__Vtemp145[2U] >> 0x10U) 
                               | (__Vtemp145[3U] << 0x10U)))
                           : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                               ? ((__Vtemp149[2U] >> 0x18U) 
                                  | (__Vtemp149[3U] 
                                     << 8U)) : __Vtemp151[3U]));
    }
    __Vtemp159[0U] = ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                     >> 3U))) ? 0U : 
                      ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                      >> 2U))) ? 0U
                        : ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                                          >> 1U))) ? 
                           ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                             ? (__Vtemp143[0U] << 0x18U)
                             : (__Vtemp145[0U] << 0x10U))
                            : ((1U & (IData)(vlSelf->top__DOT__dcache_addr))
                                ? (__Vtemp149[0U] << 8U)
                                : __Vtemp151[0U]))));
    vlSelf->top__DOT__dcache__DOT__write_shift[0U] 
        = __Vtemp159[0U];
    if ((1U & (IData)((vlSelf->top__DOT__dcache_addr 
                       >> 3U)))) {
        vlSelf->top__DOT__dcache__DOT__write_shift[1U] = 0U;
        vlSelf->top__DOT__dcache__DOT__write_shift[2U] 
            = __Vtemp128[2U];
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
                : __Vtemp126[3U]);
    } else {
        vlSelf->top__DOT__dcache__DOT__write_shift[1U] 
            = __Vtemp157[1U];
        vlSelf->top__DOT__dcache__DOT__write_shift[2U] 
            = __Vtemp157[2U];
        vlSelf->top__DOT__dcache__DOT__write_shift[3U] 
            = __Vtemp157[3U];
    }
    vlSelf->top__DOT__axi_2_ar_addr = ((0xffffffff00000000ULL 
                                        & vlSelf->top__DOT__axi_2_ar_addr) 
                                       | (IData)((IData)(vlSelf->top__DOT__dcache_addr)));
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
    vlSelf->top__DOT__dcache__DOT__tag_arry_addr = 
        (0x7fU & ((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status))
                   ? (IData)((vlSelf->top__DOT__dcache_addr 
                              >> 4U)) : (IData)(vlSelf->top__DOT__dcache__DOT__index_ar)));
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
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0 
        = vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__data
        [vlSelf->top__DOT__dcache__DOT__tag_arry_addr];
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1 
        = vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__data
        [vlSelf->top__DOT__dcache__DOT__tag_arry_addr];
    vlSelf->jup = ((((IData)(vlSelf->top__DOT__mret) 
                     | (IData)(vlSelf->ecall)) & (IData)(vlSelf->top__DOT__pri_en)) 
                   | (IData)(vlSelf->top__DOT__jup_exu));
    vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 
        = (vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel 
           & ((0x40U & (IData)(vlSelf->top__DOT__alu_opcode))
               ? 0x1fULL : 0x3fULL));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
        = ((0x10U & (IData)(vlSelf->top__DOT__alu_opcode))
            ? (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2_w_sel)
            : vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2_w_sel);
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
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffeffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x30U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x30U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x30U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x30U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x30U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x30U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x30U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x30U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48)))))) 
              << 0x30U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x30U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x30U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffdffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x31U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x31U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x31U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x31U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x31U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x31U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x31U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x31U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49)))))) 
              << 0x31U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x31U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x31U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfffbffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x32U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x32U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x32U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x32U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x32U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x32U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x32U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x32U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50)))))) 
              << 0x32U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x32U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x32U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfff7ffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x33U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x33U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x33U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x33U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x33U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x33U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x33U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x33U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51)))))) 
              << 0x33U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x33U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x33U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffefffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x34U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x34U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x34U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x34U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x34U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x34U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x34U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x34U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52)))))) 
              << 0x34U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x34U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x34U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffdfffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x35U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x35U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x35U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x35U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x35U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x35U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x35U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x35U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53)))))) 
              << 0x35U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x35U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x35U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xffbfffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x36U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x36U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x36U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x36U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x36U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x36U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x36U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x36U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54)))))) 
              << 0x36U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x36U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x36U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xff7fffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x37U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x37U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x37U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x37U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x37U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x37U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x37U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x37U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55)))))) 
              << 0x37U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x37U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x37U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfeffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x38U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x38U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x38U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x38U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x38U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x38U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x38U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x38U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56)))))) 
              << 0x38U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x38U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x38U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfdffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x39U))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x39U)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x39U))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x39U))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x39U)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x39U)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x39U)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x39U))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57)))))) 
              << 0x39U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x39U)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x39U)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xfbffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3aU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3aU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3aU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3aU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3aU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3aU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3aU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3aU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58)))))) 
              << 0x3aU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x3aU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x3aU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xf7ffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3bU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3bU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3bU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3bU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3bU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3bU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3bU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3bU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59)))))) 
              << 0x3bU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x3bU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x3bU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xefffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3cU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3cU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3cU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3cU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3cU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3cU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3cU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3cU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60)))))) 
              << 0x3cU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x3cU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x3cU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xdfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3dU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3dU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3dU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3dU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3dU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3dU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3dU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3dU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61)))))) 
              << 0x3dU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x3dU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x3dU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0xbfffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3eU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3eU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3eU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3eU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3eU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3eU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3eU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3eU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62)))))) 
              << 0x3eU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63 
        = (1U & ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g 
                          >> 0x3eU)) | ((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p 
                                                 >> 0x3eU)) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s 
        = ((0x7fffffffffffffffULL & vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                     >> 0x3fU))) 
                                         & (~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                       >> 0x3fU)))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                       >> 0x3fU))) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                      >> 0x3fU))) 
                                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63)))) 
                                      | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                   >> 0x3fU)) 
                                          & (~ (IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3fU)))) 
                                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63)))) 
                                     | (((IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                  >> 0x3fU)) 
                                         & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3fU))) 
                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63)))))) 
              << 0x3fU));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r = 
        ((0x10U & (IData)(vlSelf->top__DOT__alu_opcode))
          ? ((8U & (IData)(vlSelf->top__DOT__alu_opcode))
              ? ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                  ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                      ? vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__r_signed
                      : vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__q_signed)
                  : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                      ? 0ULL : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                 ? 0ULL : VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel))))
              : ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                  ? 0ULL : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                             ? 0ULL : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                        ? 0ULL : vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s))))
          : ((8U & (IData)(vlSelf->top__DOT__alu_opcode))
              ? ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                  ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                      ? 0ULL : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                                 ? ((0x40U & (IData)(vlSelf->top__DOT__alu_opcode))
                                     ? vlSelf->top__DOT__exu__DOT__aluf__DOT__israw
                                     : vlSelf->top__DOT__exu__DOT__aluf__DOT__isar_l)
                                 : 0ULL)) : 0ULL) : 
             ((4U & (IData)(vlSelf->top__DOT__alu_opcode))
               ? ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                   ? ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                       ? (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                          & vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel)
                       : (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                          | vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel))
                   : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                       ? vlSelf->top__DOT__exu__DOT__aluf__DOT__isrl
                       : (vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                          ^ vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel)))
               : ((2U & (IData)(vlSelf->top__DOT__alu_opcode))
                   ? ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                       ? ((vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                           < vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                           ? 1ULL : 0ULL) : (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu__DOT__alu_in1_w1, vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                              ? 1ULL
                                              : 0ULL))
                   : ((1U & (IData)(vlSelf->top__DOT__alu_opcode))
                       ? vlSelf->top__DOT__exu__DOT__aluf__DOT__isll
                       : vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s)))));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    vlSelf->ir = 0;
    vlSelf->ira = 0;
    vlSelf->jup = 0;
    vlSelf->ecall = 0;
    vlSelf->stop_n = 0;
    vlSelf->skip = 0;
    vlSelf->pc_dut = 0;
    vlSelf->__pinNumber10 = 0;
    vlSelf->top__DOT__stop_1 = 0;
    vlSelf->top__DOT__stop_2 = 0;
    vlSelf->top__DOT__skip_1 = 0;
    vlSelf->top__DOT__skip_2 = 0;
    vlSelf->top__DOT__skip_3 = 0;
    vlSelf->top__DOT__pc_dut1 = 0;
    vlSelf->top__DOT__pc_dut2 = 0;
    vlSelf->top__DOT__pc_dut3 = 0;
    vlSelf->top__DOT__pc_dut4 = 0;
    vlSelf->top__DOT__pipe3_allowin = 0;
    vlSelf->top__DOT__exu_en = 0;
    vlSelf->top__DOT__pc = 0;
    vlSelf->top__DOT__imm = 0;
    vlSelf->top__DOT__func3 = 0;
    vlSelf->top__DOT__func7 = 0;
    vlSelf->top__DOT__pc_out = 0;
    vlSelf->top__DOT__jal = 0;
    vlSelf->top__DOT__jalr = 0;
    vlSelf->top__DOT__b = 0;
    vlSelf->top__DOT__lui = 0;
    vlSelf->top__DOT__auipc = 0;
    vlSelf->top__DOT__sub_sra = 0;
    vlSelf->top__DOT__rd_addr = 0;
    vlSelf->top__DOT__rd_w_en = 0;
    vlSelf->top__DOT__alu_in1_sel = 0;
    vlSelf->top__DOT__alu_in2_sel = 0;
    vlSelf->top__DOT__alu_opcode = 0;
    vlSelf->top__DOT__rd_o_exu = 0;
    vlSelf->top__DOT__rdr_o_exu = 0;
    vlSelf->top__DOT__rd_w_o_exu = 0;
    vlSelf->top__DOT__rd_o_lsu = 0;
    vlSelf->top__DOT__rdr_o_lsu = 0;
    vlSelf->top__DOT__rd_w_o_lsu = 0;
    vlSelf->top__DOT__lsu_en = 0;
    vlSelf->top__DOT__pri_en = 0;
    vlSelf->top__DOT__csr = 0;
    vlSelf->top__DOT__pri_exu_en = 0;
    vlSelf->top__DOT__csr_w_en = 0;
    vlSelf->top__DOT__csr_addr = 0;
    vlSelf->top__DOT__rd_csr = 0;
    vlSelf->top__DOT__csrr = 0;
    vlSelf->top__DOT__hold_pipeline_stage1 = 0;
    vlSelf->top__DOT__hold_pipeline_exu = 0;
    vlSelf->top__DOT__hold_pipeline_lsu = 0;
    vlSelf->top__DOT__stage_valid_1 = 0;
    vlSelf->top__DOT__rs1_addr = 0;
    vlSelf->top__DOT__rs2_addr = 0;
    vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin = 0;
    vlSelf->top__DOT__rdr_o_pri = 0;
    vlSelf->top__DOT__rd_o_pri = 0;
    vlSelf->top__DOT__jup_exu = 0;
    vlSelf->top__DOT__pipe3_allowin_lsu = 0;
    vlSelf->top__DOT____Vcellinp__exu__exu_en = 0;
    vlSelf->top__DOT__lsu_w = 0;
    vlSelf->top__DOT__inst = 0;
    vlSelf->top__DOT__inst_addr = 0;
    vlSelf->top__DOT__skip_ref = 0;
    vlSelf->top__DOT__dstall = 0;
    vlSelf->top__DOT____Vcellinp__lsu__lsu_en = 0;
    vlSelf->top__DOT__mret = 0;
    vlSelf->top__DOT__mtvec_wire = 0;
    vlSelf->top__DOT__rd_w_o_pri = 0;
    vlSelf->top__DOT__axi_0_ar_valid = 0;
    vlSelf->top__DOT__axi_0_ar_ready = 0;
    vlSelf->top__DOT__axi_0_r_data = 0;
    vlSelf->top__DOT__axi_0_r_valid = 0;
    vlSelf->top__DOT__axi_0_r_id = 0;
    vlSelf->top__DOT__axi_0_r_last = 0;
    vlSelf->top__DOT__axi_0_r_resp = 0;
    vlSelf->top__DOT__axi_0_aw_valid = 0;
    vlSelf->top__DOT__axi_0_aw_ready = 0;
    vlSelf->top__DOT__axi_0_w_valid = 0;
    vlSelf->top__DOT__axi_0_w_ready = 0;
    vlSelf->top__DOT__axi_0_b_id = 0;
    vlSelf->top__DOT__axi_1_ar_valid = 0;
    vlSelf->top__DOT__axi_1_ar_ready = 0;
    vlSelf->top__DOT__axi_1_r_data = 0;
    vlSelf->top__DOT__axi_1_r_valid = 0;
    vlSelf->top__DOT__axi_1_r_id = 0;
    vlSelf->top__DOT__axi_1_r_last = 0;
    vlSelf->top__DOT__axi_1_r_resp = 0;
    vlSelf->top__DOT__axi_1_aw_valid = 0;
    vlSelf->top__DOT__axi_1_aw_ready = 0;
    vlSelf->top__DOT__axi_1_w_valid = 0;
    vlSelf->top__DOT__axi_1_w_ready = 0;
    vlSelf->top__DOT__axi_1_b_id = 0;
    vlSelf->top__DOT__axi_2_clk = 0;
    vlSelf->top__DOT__axi_2_rst_n = 0;
    vlSelf->top__DOT__axi_2_ar_addr = 0;
    vlSelf->top__DOT__axi_2_r_valid = 0;
    vlSelf->top__DOT__axi_2_r_id = 0;
    vlSelf->top__DOT__axi_2_r_last = 0;
    vlSelf->top__DOT__axi_2_r_resp = 0;
    vlSelf->top__DOT__axi_2_aw_ready = 0;
    vlSelf->top__DOT__axi_2_aw_brust = 0;
    vlSelf->top__DOT__axi_2_w_ready = 0;
    vlSelf->top__DOT__axi_2_b_valid = 0;
    vlSelf->top__DOT__axi_2_b_id = 0;
    vlSelf->top__DOT__axi_3_clk = 0;
    vlSelf->top__DOT__axi_3_rst_n = 0;
    vlSelf->top__DOT__axi_3_ar_addr = 0;
    vlSelf->top__DOT__axi_3_ar_valid = 0;
    vlSelf->top__DOT__axi_3_r_last = 0;
    vlSelf->top__DOT__axi_3_aw_addr = 0;
    vlSelf->top__DOT__axi_3_aw_valid = 0;
    vlSelf->top__DOT__axi_3_w_data = 0;
    vlSelf->top__DOT__axi_3_w_valid = 0;
    vlSelf->top__DOT__axi_3_b_ready = 0;
    vlSelf->top__DOT__rw_valid_i = 0;
    vlSelf->top__DOT__rw_write_i = 0;
    vlSelf->top__DOT__rw_valid_o = 0;
    vlSelf->top__DOT__data_read_o = 0;
    vlSelf->top__DOT__data_ready_to_read = 0;
    vlSelf->top__DOT__icache_valid = 0;
    vlSelf->top__DOT__icache_valid_o = 0;
    vlSelf->top__DOT__rd_second_stage = 0;
    vlSelf->top__DOT__rdr_second_stage = 0;
    vlSelf->top__DOT__rs1_sel = 0;
    vlSelf->top__DOT__rs2_sel = 0;
    vlSelf->top__DOT__stall = 0;
    vlSelf->top__DOT__jup_addr_c = 0;
    vlSelf->top__DOT__dcache_addr = 0;
    vlSelf->top__DOT__dcache_read = 0;
    vlSelf->top__DOT__dcache_write = 0;
    vlSelf->top__DOT__dcache_valid = 0;
    vlSelf->top__DOT__stage1__DOT__hold_pipeline = 0;
    vlSelf->top__DOT__stage1__DOT__hold_pipeline_exu = 0;
    vlSelf->top__DOT__stage1__DOT__r = 0;
    vlSelf->top__DOT__stage1__DOT__i = 0;
    vlSelf->top__DOT__stage1__DOT__ls = 0;
    vlSelf->top__DOT__stage1__DOT__w = 0;
    vlSelf->top__DOT__stage1__DOT__rd_o = 0;
    vlSelf->top__DOT__stage1__DOT__next_pc = 0;
    vlSelf->top__DOT__stage1__DOT__rs1_w = 0;
    vlSelf->top__DOT__stage1__DOT__rs2_w = 0;
    vlSelf->top__DOT__stage1__DOT__i_type = 0;
    vlSelf->top__DOT__stage1__DOT__r_type = 0;
    vlSelf->top__DOT__stage1__DOT__w_type = 0;
    vlSelf->top__DOT__stage1__DOT__sub_sra_wire = 0;
    vlSelf->top__DOT__stage1__DOT__csrr_wire = 0;
    vlSelf->top__DOT__stage1__DOT__rd_wire = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[__Vi0] = 0;
    }
    vlSelf->top__DOT__stage1__DOT__decode__DOT__u_type = 0;
    vlSelf->top__DOT__stage1__DOT__decode__DOT__lsu_w = 0;
    vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel = 0;
    vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_jal = 0;
    vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_b = 0;
    vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_s = 0;
    vlSelf->top__DOT__stage1__DOT__decode__DOT__m = 0;
    vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode__DOT__ext_imm_iljalr = 0;
    vlSelf->top__DOT__exu__DOT__rs2 = 0;
    vlSelf->top__DOT__exu__DOT__alu_out_w = 0;
    vlSelf->top__DOT__exu__DOT__alu_in1_w = 0;
    vlSelf->top__DOT__exu__DOT__alu_in2_w = 0;
    vlSelf->top__DOT__exu__DOT__alu_in1_w1 = 0;
    vlSelf->top__DOT__exu__DOT__alu_in2_w1 = 0;
    vlSelf->top__DOT__exu__DOT__rd_sel3_wire = 0;
    vlSelf->top__DOT__exu__DOT__out_i = 0;
    vlSelf->top__DOT__exu__DOT__out_m = 0;
    vlSelf->top__DOT__exu__DOT__out_w = 0;
    vlSelf->top__DOT__exu__DOT__out_mw = 0;
    vlSelf->top__DOT__exu__DOT__sel_i = 0;
    vlSelf->top__DOT__exu__DOT__sel_m = 0;
    vlSelf->top__DOT__exu__DOT__sel_w = 0;
    vlSelf->top__DOT__exu__DOT__sel_mw = 0;
    vlSelf->top__DOT__exu__DOT__eq_b = 0;
    vlSelf->top__DOT__exu__DOT__slt_b = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__isll = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__isrl = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__addw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__subw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__sllw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__srlw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__sraw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mulw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__divw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__divuw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__remw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__remuw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2_w_sel = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul_out_h = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul_out_l = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul_valid = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul_ready = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__israw = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__isar_l = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63 = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm_next = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__dividend_r = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__divisor_r = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_signed_r = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__q_signed = 0;
    vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__r_signed = 0;
    vlSelf->top__DOT__lsu__DOT__valid_o = 0;
    vlSelf->top__DOT__lsu__DOT__rs1 = 0;
    vlSelf->top__DOT__lsu__DOT__rs2 = 0;
    vlSelf->top__DOT__lsu__DOT__mem_read_data = 0;
    vlSelf->top__DOT__lsu__DOT__func3_r = 0;
    vlSelf->top__DOT__lsu__DOT__rd_sel1 = 0;
    vlSelf->top__DOT__lsu__DOT__load_ext_in = 0;
    vlSelf->top__DOT__lsu__DOT__mem1__DOT__r_data = 0;
    vlSelf->top__DOT__csr_reg__DOT__x17 = 0;
    vlSelf->top__DOT__csr_reg__DOT__mepc = 0;
    vlSelf->top__DOT__csr_reg__DOT__mstatus = 0;
    vlSelf->top__DOT__csr_reg__DOT__mcause = 0;
    vlSelf->top__DOT__csr_reg__DOT__csrr_ = 0;
    vlSelf->top__DOT__csr_reg__DOT__csrr_csr = 0;
    vlSelf->top__DOT__peripheral__DOT__axi_b_user_i = 0;
    vlSelf->top__DOT__peripheral__DOT__axi_ar_region_o = 0;
    vlSelf->top__DOT__peripheral__DOT__axi_r_user_i = 0;
    vlSelf->top__DOT__peripheral__DOT__write_fsm = 0;
    vlSelf->top__DOT__peripheral__DOT__write_fsm_next = 0;
    vlSelf->top__DOT__peripheral__DOT__read_fsm = 0;
    vlSelf->top__DOT__peripheral__DOT__read_fsm_next = 0;
    vlSelf->top__DOT__icache__DOT__status = 0;
    vlSelf->top__DOT__icache__DOT__next_status = 0;
    vlSelf->top__DOT__icache__DOT__miss = 0;
    vlSelf->top__DOT__icache__DOT__hit = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__tag_arry_en_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__tag_arry_en_0);
    vlSelf->top__DOT__icache__DOT__tag_data_in = 0;
    vlSelf->top__DOT__icache__DOT__random = 0;
    vlSelf->top__DOT__icache__DOT__hit1 = 0;
    vlSelf->top__DOT__icache__DOT__hit0 = 0;
    vlSelf->top__DOT__icache__DOT__index_ar = 0;
    vlSelf->top__DOT__icache__DOT__tag_ar = 0;
    vlSelf->top__DOT__icache__DOT__write_fsm = 0;
    vlSelf->top__DOT__icache__DOT__write_fsm_next = 0;
    vlSelf->top__DOT__icache__DOT__write_respone_fsm = 0;
    vlSelf->top__DOT__icache__DOT__write_respone_fsm_next = 0;
    vlSelf->top__DOT__icache__DOT__read_fsm = 0;
    vlSelf->top__DOT__icache__DOT__read_fsm_next = 0;
    VL_ZERO_RESET_W(96, vlSelf->top__DOT__icache__DOT__read_line);
    vlSelf->top__DOT__icache__DOT__tag_a_o1 = 0;
    vlSelf->top__DOT__icache__DOT__tag_arry_addr = 0;
    vlSelf->top__DOT__icache__DOT__tag_arry_data_in = 0;
    vlSelf->top__DOT__icache__DOT__tag_arry_en = 0;
    vlSelf->top__DOT__icache__DOT__tag_arry_data_out_miss = 0;
    vlSelf->top__DOT__icache__DOT__tag_arry_sel = 0;
    vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 = 0;
    vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__Q[__Vi0]);
    }
    vlSelf->top__DOT__icache__DOT__CEN = 0;
    vlSelf->top__DOT__icache__DOT__WEN = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__icache__DOT__A[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__D[__Vi0]);
    }
    vlSelf->top__DOT__icache__DOT__cache_wen = 0;
    vlSelf->top__DOT__icache__DOT__cache_addr = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__cache_out);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__cache_in);
    vlSelf->top__DOT__icache__DOT__cache_sel = 0;
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache0__WEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q);
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache1__WEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q);
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache2__WEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q);
    vlSelf->top__DOT__icache__DOT____Vcellinp__cache3__WEN = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q);
    vlSelf->top__DOT__icache__DOT__cache_addr_r = 0;
    vlSelf->top__DOT__icache__DOT__read_shift = 0;
    vlSelf->top__DOT__icache__DOT__addr_r = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__data[__Vi0] = 0;
    }
    vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__i = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__data[__Vi0] = 0;
    }
    vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__cache0__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__cache1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__cache2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__icache__DOT__cache3__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__ctl1__DOT__fsm = 0;
    vlSelf->top__DOT__ctl1__DOT__fsm_next = 0;
    vlSelf->top__DOT__dcache__DOT__status = 0;
    vlSelf->top__DOT__dcache__DOT__next_status = 0;
    vlSelf->top__DOT__dcache__DOT__miss = 0;
    vlSelf->top__DOT__dcache__DOT__hit = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__tag_arry_en_1);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__tag_arry_en_0);
    vlSelf->top__DOT__dcache__DOT__tag_data_in = 0;
    vlSelf->top__DOT__dcache__DOT__random = 0;
    vlSelf->top__DOT__dcache__DOT__hit1 = 0;
    vlSelf->top__DOT__dcache__DOT__hit0 = 0;
    vlSelf->top__DOT__dcache__DOT__index_ar = 0;
    vlSelf->top__DOT__dcache__DOT__tag_ar = 0;
    vlSelf->top__DOT__dcache__DOT__write_fsm = 0;
    vlSelf->top__DOT__dcache__DOT__write_fsm_next = 0;
    vlSelf->top__DOT__dcache__DOT__write_respone_fsm = 0;
    vlSelf->top__DOT__dcache__DOT__write_respone_fsm_next = 0;
    vlSelf->top__DOT__dcache__DOT__read_fsm = 0;
    vlSelf->top__DOT__dcache__DOT__read_fsm_next = 0;
    VL_ZERO_RESET_W(96, vlSelf->top__DOT__dcache__DOT__read_line);
    vlSelf->top__DOT__dcache__DOT__tag_a_o1 = 0;
    vlSelf->top__DOT__dcache__DOT__tag_arry_addr = 0;
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_in = 0;
    vlSelf->top__DOT__dcache__DOT__tag_arry_en = 0;
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_miss = 0;
    vlSelf->top__DOT__dcache__DOT__tag_arry_sel = 0;
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0 = 0;
    vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1 = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__Q[__Vi0]);
    }
    vlSelf->top__DOT__dcache__DOT__CEN = 0;
    vlSelf->top__DOT__dcache__DOT__WEN = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__dcache__DOT__A[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__D[__Vi0]);
    }
    vlSelf->top__DOT__dcache__DOT__cache_wen = 0;
    vlSelf->top__DOT__dcache__DOT__cache_addr = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__cache_out);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__cache_in);
    vlSelf->top__DOT__dcache__DOT__cache_sel = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__cache_bwen);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q);
    vlSelf->top__DOT__dcache__DOT__cache_addr_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__cache_write_bwen);
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__mask);
    vlSelf->top__DOT__dcache__DOT__read_shift = 0;
    vlSelf->top__DOT__dcache__DOT__addr_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__write_shift);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__data[__Vi0] = 0;
    }
    vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__i = 0;
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__data[__Vi0] = 0;
    }
    vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__cache0__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__cache1__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__cache2__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->top__DOT__dcache__DOT__cache3__DOT__ram[__Vi0]);
    }
    vlSelf->top__DOT__interconnect1__DOT__axi_3_clk = 0;
    vlSelf->top__DOT__interconnect1__DOT__axi_3_rst_n = 0;
    vlSelf->top__DOT__interconnect1__DOT__ar_sel = 0;
    vlSelf->top__DOT__interconnect1__DOT__aw_sel = 0;
    vlSelf->top__DOT__interconnect1__DOT__w_sel = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__S_AXI_AWPROT = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__S_AXI_ARPROT = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awaddr = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg0 = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg1 = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg2 = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg3 = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__reg_data_out = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__byte_index = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awid = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arid = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid = 0;
    vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid = 0;
    vlSelf->__Vfunc_mem_skip__1__Vfuncout = 0;
    vlSelf->__Vfunc_mem_read__2__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
