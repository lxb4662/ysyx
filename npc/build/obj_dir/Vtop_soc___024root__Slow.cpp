// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_soc.h for the primary calling header

#include "Vtop_soc___024root.h"
#include "Vtop_soc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop_soc___024root___ctor_var_reset(Vtop_soc___024root* vlSelf);

Vtop_soc___024root::Vtop_soc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_soc___024root___ctor_var_reset(this);
}

void Vtop_soc___024root::__Vconfigure(Vtop_soc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop_soc___024root::~Vtop_soc___024root() {
}

extern const VlUnpacked<VlWide<4>/*127:0*/, 4> Vtop_soc__ConstPool__TABLE_a3cf4ec3_0;
void Vtop_soc___024unit____Vdpiimwrap_mem_read_TOP____024unit(QData/*63:0*/ a, IData/*31:0*/ len, QData/*63:0*/ &mem_read__Vfuncrtn);
extern const VlUnpacked<CData/*7:0*/, 16> Vtop_soc__ConstPool__TABLE_58b3a3a7_0;
extern const VlUnpacked<CData/*6:0*/, 256> Vtop_soc__ConstPool__TABLE_0a033294_0;
extern const VlWide<32>/*1023:0*/ Vtop_soc__ConstPool__CONST_26258237_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vtop_soc__ConstPool__TABLE_3390a88b_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop_soc__ConstPool__TABLE_e6fc7a96_0;
extern const VlUnpacked<CData/*5:0*/, 1024> Vtop_soc__ConstPool__TABLE_a2c3e4f5_0;
extern const VlWide<9>/*287:0*/ Vtop_soc__ConstPool__CONST_8643193a_0;
extern const VlWide<9>/*287:0*/ Vtop_soc__ConstPool__CONST_c8241eac_0;
extern const VlWide<9>/*287:0*/ Vtop_soc__ConstPool__CONST_c8241cac_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_soc__ConstPool__TABLE_b950b1ea_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vtop_soc__ConstPool__TABLE_8c8642cb_0;

void Vtop_soc___024root___settle__TOP__4(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___settle__TOP__4\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx4;
    CData/*7:0*/ __Vtableidx5;
    CData/*1:0*/ __Vtableidx6;
    CData/*3:0*/ __Vtableidx7;
    CData/*4:0*/ __Vtableidx9;
    CData/*3:0*/ __Vtableidx10;
    SData/*8:0*/ __Vtableidx2;
    SData/*9:0*/ __Vtableidx8;
    VlWide<4>/*127:0*/ __Vtemp500;
    VlWide<4>/*127:0*/ __Vtemp501;
    VlWide<4>/*127:0*/ __Vtemp502;
    VlWide<4>/*127:0*/ __Vtemp503;
    VlWide<4>/*127:0*/ __Vtemp523;
    VlWide<4>/*127:0*/ __Vtemp528;
    VlWide<4>/*127:0*/ __Vtemp530;
    VlWide<3>/*95:0*/ __Vtemp533;
    VlWide<3>/*95:0*/ __Vtemp535;
    VlWide<3>/*95:0*/ __Vtemp539;
    VlWide<3>/*95:0*/ __Vtemp541;
    VlWide<4>/*127:0*/ __Vtemp547;
    VlWide<4>/*127:0*/ __Vtemp549;
    VlWide<4>/*127:0*/ __Vtemp553;
    VlWide<4>/*127:0*/ __Vtemp555;
    VlWide<4>/*127:0*/ __Vtemp561;
    VlWide<4>/*127:0*/ __Vtemp563;
    VlWide<4>/*127:0*/ __Vtemp583;
    VlWide<4>/*127:0*/ __Vtemp588;
    VlWide<4>/*127:0*/ __Vtemp590;
    VlWide<3>/*95:0*/ __Vtemp593;
    VlWide<3>/*95:0*/ __Vtemp595;
    VlWide<3>/*95:0*/ __Vtemp599;
    VlWide<3>/*95:0*/ __Vtemp601;
    VlWide<4>/*127:0*/ __Vtemp607;
    VlWide<4>/*127:0*/ __Vtemp609;
    VlWide<4>/*127:0*/ __Vtemp613;
    VlWide<4>/*127:0*/ __Vtemp615;
    VlWide<4>/*127:0*/ __Vtemp621;
    VlWide<4>/*127:0*/ __Vtemp623;
    VlWide<5>/*159:0*/ __Vtemp628;
    VlWide<5>/*159:0*/ __Vtemp629;
    VlWide<5>/*159:0*/ __Vtemp630;
    VlWide<5>/*159:0*/ __Vtemp631;
    VlWide<3>/*95:0*/ __Vtemp635;
    VlWide<32>/*1023:0*/ __Vtemp652;
    VlWide<32>/*1023:0*/ __Vtemp653;
    VlWide<4>/*127:0*/ __Vtemp661;
    VlWide<4>/*127:0*/ __Vtemp662;
    VlWide<4>/*127:0*/ __Vtemp665;
    VlWide<4>/*127:0*/ __Vtemp666;
    VlWide<4>/*127:0*/ __Vtemp671;
    VlWide<4>/*127:0*/ __Vtemp672;
    VlWide<4>/*127:0*/ __Vtemp675;
    VlWide<4>/*127:0*/ __Vtemp676;
    VlWide<4>/*127:0*/ __Vtemp683;
    VlWide<4>/*127:0*/ __Vtemp684;
    VlWide<4>/*127:0*/ __Vtemp687;
    VlWide<4>/*127:0*/ __Vtemp688;
    VlWide<4>/*127:0*/ __Vtemp693;
    VlWide<4>/*127:0*/ __Vtemp694;
    VlWide<4>/*127:0*/ __Vtemp697;
    VlWide<4>/*127:0*/ __Vtemp705;
    VlWide<4>/*127:0*/ __Vtemp706;
    VlWide<4>/*127:0*/ __Vtemp707;
    VlWide<4>/*127:0*/ __Vtemp710;
    VlWide<4>/*127:0*/ __Vtemp711;
    VlWide<4>/*127:0*/ __Vtemp716;
    VlWide<4>/*127:0*/ __Vtemp717;
    VlWide<4>/*127:0*/ __Vtemp720;
    VlWide<4>/*127:0*/ __Vtemp721;
    VlWide<4>/*127:0*/ __Vtemp728;
    VlWide<4>/*127:0*/ __Vtemp729;
    VlWide<4>/*127:0*/ __Vtemp732;
    VlWide<4>/*127:0*/ __Vtemp733;
    VlWide<4>/*127:0*/ __Vtemp738;
    VlWide<4>/*127:0*/ __Vtemp739;
    VlWide<4>/*127:0*/ __Vtemp742;
    VlWide<4>/*127:0*/ __Vtemp750;
    VlWide<6>/*191:0*/ __Vtemp792;
    VlWide<4>/*127:0*/ __Vtemp796;
    VlWide<4>/*127:0*/ __Vtemp797;
    VlWide<4>/*127:0*/ __Vtemp798;
    VlWide<4>/*127:0*/ __Vtemp804;
    VlWide<4>/*127:0*/ __Vtemp805;
    VlWide<4>/*127:0*/ __Vtemp806;
    VlWide<9>/*287:0*/ __Vtemp877;
    VlWide<9>/*287:0*/ __Vtemp878;
    VlWide<9>/*287:0*/ __Vtemp880;
    VlWide<9>/*287:0*/ __Vtemp881;
    VlWide<9>/*287:0*/ __Vtemp887;
    VlWide<9>/*287:0*/ __Vtemp916;
    VlWide<9>/*287:0*/ __Vtemp917;
    VlWide<9>/*287:0*/ __Vtemp919;
    VlWide<9>/*287:0*/ __Vtemp920;
    VlWide<9>/*287:0*/ __Vtemp926;
    // Body
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_reg 
        = (1U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U]);
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_reg 
        = (1U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U]);
    __Vtemp500[0U] = 1U;
    __Vtemp500[1U] = 0U;
    __Vtemp500[2U] = 0U;
    __Vtemp500[3U] = 0U;
    __Vtemp501[0U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[0U]);
    __Vtemp501[1U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[1U]);
    __Vtemp501[2U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[2U]);
    __Vtemp501[3U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in2_r[3U]);
    VL_ADD_W(4, __Vtemp502, vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r, __Vtemp501);
    VL_ADD_W(4, __Vtemp503, __Vtemp500, __Vtemp502);
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[0U] 
        = __Vtemp503[0U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[1U] 
        = __Vtemp503[1U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[2U] 
        = __Vtemp503[2U];
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_out[3U] 
        = __Vtemp503[3U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__replace_tag 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__random)
            ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_reg
            : vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_reg);
    if ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) {
        __Vtemp523[3U] = (((IData)((0xffffffffffULL 
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
        __Vtemp528[3U] = (((IData)((0xffffffffffffffULL 
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
        __Vtemp523[3U] = (((IData)((0xffffffffffffULL 
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
        __Vtemp528[3U] = (IData)(((((QData)((IData)(
                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                    >> 3U))) 
                                  >> 0x20U));
    }
    __Vtemp530[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
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
    VL_EXTEND_WQ(72,64, __Vtemp533, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(80,64, __Vtemp535, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(88,64, __Vtemp539, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(96,64, __Vtemp541, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(104,64, __Vtemp547, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(112,64, __Vtemp549, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(120,64, __Vtemp553, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(128,64, __Vtemp555, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    if ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) {
        __Vtemp561[1U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? (__Vtemp533[0U] << 0x18U)
                               : (__Vtemp535[0U] << 0x10U))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? (__Vtemp539[0U] << 8U)
                               : __Vtemp541[0U]));
        __Vtemp561[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp533[0U] >> 8U) 
                                  | (__Vtemp533[1U] 
                                     << 0x18U)) : (
                                                   (__Vtemp535[0U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp535[1U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp539[0U] >> 0x18U) 
                                  | (__Vtemp539[1U] 
                                     << 8U)) : __Vtemp541[1U]));
        __Vtemp561[3U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp533[1U] >> 8U) 
                                  | (__Vtemp533[2U] 
                                     << 0x18U)) : (
                                                   (__Vtemp535[1U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp535[2U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp539[1U] >> 0x18U) 
                                  | (__Vtemp539[2U] 
                                     << 8U)) : __Vtemp541[2U]));
    } else {
        __Vtemp561[1U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp547[0U] >> 8U) 
                                  | (__Vtemp547[1U] 
                                     << 0x18U)) : (
                                                   (__Vtemp549[0U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp549[1U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp553[0U] >> 0x18U) 
                                  | (__Vtemp553[1U] 
                                     << 8U)) : __Vtemp555[1U]));
        __Vtemp561[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp547[1U] >> 8U) 
                                  | (__Vtemp547[2U] 
                                     << 0x18U)) : (
                                                   (__Vtemp549[1U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp549[2U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp553[1U] >> 0x18U) 
                                  | (__Vtemp553[2U] 
                                     << 8U)) : __Vtemp555[2U]));
        __Vtemp561[3U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp547[2U] >> 8U) 
                                  | (__Vtemp547[3U] 
                                     << 0x18U)) : (
                                                   (__Vtemp549[2U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp549[3U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp553[2U] >> 0x18U) 
                                  | (__Vtemp553[3U] 
                                     << 8U)) : __Vtemp555[3U]));
    }
    __Vtemp563[0U] = ((0x40U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                       ? 0U : ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                ? 0U : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                         ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                             ? (__Vtemp547[0U] 
                                                << 0x18U)
                                             : (__Vtemp549[0U] 
                                                << 0x10U))
                                         : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                             ? (__Vtemp553[0U] 
                                                << 8U)
                                             : __Vtemp555[0U]))));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[0U] 
        = __Vtemp563[0U];
    if ((0x40U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[2U] 
            = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                ? 0U : __Vtemp530[2U]);
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
                                                   __Vtemp523[3U]
                                                    : 
                                                   __Vtemp528[3U]));
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[1U] 
            = __Vtemp561[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[2U] 
            = __Vtemp561[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[3U] 
            = __Vtemp561[3U];
    }
    if ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) {
        __Vtemp583[3U] = (((IData)((0xffffffffffULL 
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
        __Vtemp588[3U] = (((IData)((0xffffffffffffffULL 
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
        __Vtemp583[3U] = (((IData)((0xffffffffffffULL 
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
        __Vtemp588[3U] = (IData)(((((QData)((IData)(
                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                    << 0x3dU) | (((QData)((IData)(
                                                                  vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                    >> 3U))) 
                                  >> 0x20U));
    }
    __Vtemp590[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
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
    VL_EXTEND_WQ(72,64, __Vtemp593, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(80,64, __Vtemp595, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(88,64, __Vtemp599, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(96,64, __Vtemp601, (((QData)((IData)(
                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                      << 0x3dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                                    << 0x1dU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                                      >> 3U))));
    VL_EXTEND_WQ(104,64, __Vtemp607, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(112,64, __Vtemp609, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(120,64, __Vtemp613, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    VL_EXTEND_WQ(128,64, __Vtemp615, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                        >> 3U))));
    if ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) {
        __Vtemp621[1U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? (__Vtemp593[0U] << 0x18U)
                               : (__Vtemp595[0U] << 0x10U))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? (__Vtemp599[0U] << 8U)
                               : __Vtemp601[0U]));
        __Vtemp621[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp593[0U] >> 8U) 
                                  | (__Vtemp593[1U] 
                                     << 0x18U)) : (
                                                   (__Vtemp595[0U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp595[1U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp599[0U] >> 0x18U) 
                                  | (__Vtemp599[1U] 
                                     << 8U)) : __Vtemp601[1U]));
        __Vtemp621[3U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp593[1U] >> 8U) 
                                  | (__Vtemp593[2U] 
                                     << 0x18U)) : (
                                                   (__Vtemp595[1U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp595[2U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp599[1U] >> 0x18U) 
                                  | (__Vtemp599[2U] 
                                     << 8U)) : __Vtemp601[2U]));
    } else {
        __Vtemp621[1U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp607[0U] >> 8U) 
                                  | (__Vtemp607[1U] 
                                     << 0x18U)) : (
                                                   (__Vtemp609[0U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp609[1U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp613[0U] >> 0x18U) 
                                  | (__Vtemp613[1U] 
                                     << 8U)) : __Vtemp615[1U]));
        __Vtemp621[2U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp607[1U] >> 8U) 
                                  | (__Vtemp607[2U] 
                                     << 0x18U)) : (
                                                   (__Vtemp609[1U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp609[2U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp613[1U] >> 0x18U) 
                                  | (__Vtemp613[2U] 
                                     << 8U)) : __Vtemp615[2U]));
        __Vtemp621[3U] = ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp607[2U] >> 8U) 
                                  | (__Vtemp607[3U] 
                                     << 0x18U)) : (
                                                   (__Vtemp609[2U] 
                                                    >> 0x10U) 
                                                   | (__Vtemp609[3U] 
                                                      << 0x10U)))
                           : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((__Vtemp613[2U] >> 0x18U) 
                                  | (__Vtemp613[3U] 
                                     << 8U)) : __Vtemp615[3U]));
    }
    __Vtemp623[0U] = ((0x40U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                       ? 0U : ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                ? 0U : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                         ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                             ? (__Vtemp607[0U] 
                                                << 0x18U)
                                             : (__Vtemp609[0U] 
                                                << 0x10U))
                                         : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                             ? (__Vtemp613[0U] 
                                                << 8U)
                                             : __Vtemp615[0U]))));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[0U] 
        = __Vtemp623[0U];
    if ((0x40U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[2U] 
            = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                ? 0U : __Vtemp590[2U]);
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
                                                   __Vtemp583[3U]
                                                    : 
                                                   __Vtemp588[3U]));
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[1U] 
            = __Vtemp621[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[2U] 
            = __Vtemp621[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[3U] 
            = __Vtemp621[3U];
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
    if (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__block_sel) {
        if (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__block_sel) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[0U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[0U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[1U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[1U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[2U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[2U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[3U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q1[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[0U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[1U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[2U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[3U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q0[3U];
    }
    if (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__block_sel) {
        if (vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__block_sel) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[0U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[0U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[1U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[1U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[2U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[2U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[3U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q3[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[0U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[1U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[2U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[3U] 
            = vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__q2[3U];
    }
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__replace_tag 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
            ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_reg
            : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_reg);
    if (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__block_sel) {
        if (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__block_sel) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[0U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[0U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[1U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[1U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[2U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[2U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[3U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q1[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[0U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[1U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[2U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[3U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q0[3U];
    }
    if (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__block_sel) {
        if (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__block_sel) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[0U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[0U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[1U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[1U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[2U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[2U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[3U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q3[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[0U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[1U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[2U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[3U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__q2[3U];
    }
    VL_EXTEND_WW(130,103, __Vtemp628, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    VL_EXTEND_WW(130,103, __Vtemp629, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    VL_EXTEND_WW(130,103, __Vtemp630, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    VL_EXTEND_WW(130,103, __Vtemp631, vlSelf->top_soc__DOT__top__DOT__exu__DOT__wb_reg);
    if ((1U & vlSelf->top_soc__DOT__top__DOT__lsu__DOT__wb_reg[0U])) {
        __Vtemp635[0U] = (((IData)((((QData)((IData)(
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
        __Vtemp635[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp635[0U] = (((IData)((((QData)((IData)(
                                                     __Vtemp628[2U])) 
                                     << 0x39U) | (((QData)((IData)(
                                                                   __Vtemp628[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp628[0U])) 
                                                     >> 7U)))) 
                           << 6U) | ((0x3eU & (__Vtemp629[0U] 
                                               >> 1U)) 
                                     | (1U & ((__Vtemp630[0U] 
                                               >> 1U) 
                                              & __Vtemp631[0U]))));
        __Vtemp635[1U] = (((IData)((((QData)((IData)(
                                                     __Vtemp628[2U])) 
                                     << 0x39U) | (((QData)((IData)(
                                                                   __Vtemp628[1U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp628[0U])) 
                                                     >> 7U)))) 
                           >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                                   __Vtemp628[2U])) 
                                                   << 0x39U) 
                                                  | (((QData)((IData)(
                                                                      __Vtemp628[1U])) 
                                                      << 0x19U) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp628[0U])) 
                                                        >> 7U))) 
                                                 >> 0x20U)) 
                                        << 6U));
    }
    vlSelf->top_soc__DOT__top__DOT__sideway[0U] = __Vtemp635[0U];
    vlSelf->top_soc__DOT__top__DOT__sideway[1U] = __Vtemp635[1U];
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
                                                                                __Vtemp628[2U])) 
                                                                  << 0x39U) 
                                                                 | (((QData)((IData)(
                                                                                __Vtemp628[1U])) 
                                                                     << 0x19U) 
                                                                    | ((QData)((IData)(
                                                                                __Vtemp628[0U])) 
                                                                       >> 7U))) 
                                                                >> 0x20U)) 
                                                       >> 0x1aU)));
    vlSelf->top_soc__DOT__io_master_wvalid = ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm)) 
                                              | (2U 
                                                 == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm)));
    Vtop_soc___024unit____Vdpiimwrap_mem_read_TOP____024unit(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr, 4U, vlSelf->__Vfunc_mem_read__2__Vfuncout);
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__reg_data_out 
        = (IData)(vlSelf->__Vfunc_mem_read__2__Vfuncout);
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt_ready_to_go 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__w_rdy) 
           & ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm)) 
              | (1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm))));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1 
        = (((0x1fffffU & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_data_out) 
            == (0x1fffffU & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[3U] 
                              << 0x12U) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                           >> 0xeU)))) 
           & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_data_out 
              >> 0x15U));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0 
        = (((0x1fffffU & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_data_out) 
            == (0x1fffffU & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[3U] 
                              << 0x12U) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                           >> 0xeU)))) 
           & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_data_out 
              >> 0x15U));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1 
        = (((0x1fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_data_out) 
            == (0x1fffffU & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[3U] 
                              << 0x12U) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                           >> 0xeU)))) 
           & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_data_out 
              >> 0x15U));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0 
        = (((0x1fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_data_out) 
            == (0x1fffffU & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[3U] 
                              << 0x12U) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                           >> 0xeU)))) 
           & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_data_out 
              >> 0x15U));
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
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__mem_bus_r_r 
        = ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
            ? 0ULL : ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                       ? 0ULL : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                  ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                      ? (0x1f00000000ULL 
                                         | (QData)((IData)(
                                                           ((0xfffff800U 
                                                             & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[3U] 
                                                                 << 0x1dU) 
                                                                | (0x1ffff800U 
                                                                   & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                                      >> 3U)))) 
                                                            | (0x7f0U 
                                                               & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                                  >> 3U))))))
                                      : 0ULL) : 0ULL)));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mem_bus_r_r 
        = ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
            ? 0ULL : ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                       ? 0ULL : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                  ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                      ? (0x1f00000000ULL 
                                         | (QData)((IData)(
                                                           ((0xfffff800U 
                                                             & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[3U] 
                                                                 << 0x1dU) 
                                                                | (0x1ffff800U 
                                                                   & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                                      >> 3U)))) 
                                                            | (0x7f0U 
                                                               & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                                  >> 3U))))))
                                      : 0ULL) : 0ULL)));
    __Vtableidx10 = (0xfU & vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_ram[0U]);
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_cnt_i 
        = Vtop_soc__ConstPool__TABLE_58b3a3a7_0[__Vtableidx10];
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
    __Vtableidx7 = (0xfU & (IData)((vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_reg 
                                    >> 0x20U)));
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt_i 
        = Vtop_soc__ConstPool__TABLE_58b3a3a7_0[__Vtableidx7];
    vlSelf->top_soc__DOT____Vcellinp__top__rst_n = 
        (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->top_soc__DOT__io_master_awvalid = ((1U 
                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)) 
                                               | (2U 
                                                  == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)));
    vlSelf->top_soc__DOT__top__DOT__ifu__DOT__next_pc 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__jup)
            ? vlSelf->top_soc__DOT__top__DOT__jup_addr
            : ((IData)(4U) + vlSelf->top_soc__DOT__top__DOT__ifu__DOT__pc));
    vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden 
        = (((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready) 
            & (1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm))) 
           & (~ (IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid)));
    VL_EXTEND_WW(1024,65, __Vtemp652, vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg);
    VL_EXTEND_WW(1024,65, __Vtemp653, vlSelf->top_soc__DOT__top__DOT____Vcellout__ifu__if_dc_reg);
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[0U] 
        = (((IData)((((QData)((IData)(__Vtemp652[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    __Vtemp652[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 __Vtemp652[0U])) 
                                                 >> 1U)))) 
            << 1U) | (1U & (__Vtemp653[0U] & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__jup)))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[1U] 
        = (((IData)((((QData)((IData)(__Vtemp652[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    __Vtemp652[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 __Vtemp652[0U])) 
                                                 >> 1U)))) 
            >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                    __Vtemp652[2U])) 
                                    << 0x3fU) | (((QData)((IData)(
                                                                  __Vtemp652[1U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    __Vtemp652[0U])) 
                                                    >> 1U))) 
                                  >> 0x20U)) << 1U));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__if_dc[2U] 
        = ((IData)(((((QData)((IData)(__Vtemp652[2U])) 
                      << 0x3fU) | (((QData)((IData)(
                                                    __Vtemp652[1U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 __Vtemp652[0U])) 
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
    VL_SHIFTL_WWI(128,128,32, __Vtemp661, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x78U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp662, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x70U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp665, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x68U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp666, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x60U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp671, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x58U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp672, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x50U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp675, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x48U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp676, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp683, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp684, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp687, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp688, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp693, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp694, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp697, vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask, 8U);
    if ((0x40U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])) {
        __Vtemp705[0U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp661[0U]
                                   : __Vtemp662[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp665[0U]
                                   : __Vtemp666[0U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp671[0U]
                                   : __Vtemp672[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp675[0U]
                                   : __Vtemp676[0U])));
        __Vtemp705[1U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp661[1U]
                                   : __Vtemp662[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp665[1U]
                                   : __Vtemp666[1U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp671[1U]
                                   : __Vtemp672[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp675[1U]
                                   : __Vtemp676[1U])));
        __Vtemp705[2U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp661[2U]
                                   : __Vtemp662[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp665[2U]
                                   : __Vtemp666[2U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp671[2U]
                                   : __Vtemp672[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp675[2U]
                                   : __Vtemp676[2U])));
        __Vtemp705[3U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp661[3U]
                                   : __Vtemp662[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp665[3U]
                                   : __Vtemp666[3U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp671[3U]
                                   : __Vtemp672[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp675[3U]
                                   : __Vtemp676[3U])));
    } else {
        __Vtemp705[0U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp683[0U]
                                   : __Vtemp684[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp687[0U]
                                   : __Vtemp688[0U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp693[0U]
                                   : __Vtemp694[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp697[0U]
                                   : vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[0U])));
        __Vtemp705[1U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp683[1U]
                                   : __Vtemp684[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp687[1U]
                                   : __Vtemp688[1U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp693[1U]
                                   : __Vtemp694[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp697[1U]
                                   : vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[1U])));
        __Vtemp705[2U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp683[2U]
                                   : __Vtemp684[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp687[2U]
                                   : __Vtemp688[2U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp693[2U]
                                   : __Vtemp694[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp697[2U]
                                   : vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[2U])));
        __Vtemp705[3U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp683[3U]
                                   : __Vtemp684[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp687[3U]
                                   : __Vtemp688[3U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp693[3U]
                                   : __Vtemp694[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                                   ? __Vtemp697[3U]
                                   : vlSelf->top_soc__DOT__top__DOT__icache__DOT__re__DOT__mask[3U])));
    }
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[0U] 
        = __Vtemp705[0U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[1U] 
        = __Vtemp705[1U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[2U] 
        = __Vtemp705[2U];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[3U] 
        = __Vtemp705[3U];
    VL_SHIFTL_WWI(128,128,32, __Vtemp706, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x78U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp707, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x70U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp710, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x68U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp711, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x60U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp716, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x58U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp717, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x50U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp720, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x48U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp721, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x40U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp728, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x38U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp729, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x30U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp732, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x28U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp733, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x20U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp738, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x18U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp739, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 0x10U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp742, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask, 8U);
    if ((0x40U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])) {
        __Vtemp750[0U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp706[0U]
                                   : __Vtemp707[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp710[0U]
                                   : __Vtemp711[0U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp716[0U]
                                   : __Vtemp717[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp720[0U]
                                   : __Vtemp721[0U])));
        __Vtemp750[1U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp706[1U]
                                   : __Vtemp707[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp710[1U]
                                   : __Vtemp711[1U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp716[1U]
                                   : __Vtemp717[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp720[1U]
                                   : __Vtemp721[1U])));
        __Vtemp750[2U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp706[2U]
                                   : __Vtemp707[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp710[2U]
                                   : __Vtemp711[2U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp716[2U]
                                   : __Vtemp717[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp720[2U]
                                   : __Vtemp721[2U])));
        __Vtemp750[3U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp706[3U]
                                   : __Vtemp707[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp710[3U]
                                   : __Vtemp711[3U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp716[3U]
                                   : __Vtemp717[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp720[3U]
                                   : __Vtemp721[3U])));
    } else {
        __Vtemp750[0U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp728[0U]
                                   : __Vtemp729[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp732[0U]
                                   : __Vtemp733[0U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp738[0U]
                                   : __Vtemp739[0U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp742[0U]
                                   : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[0U])));
        __Vtemp750[1U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp728[1U]
                                   : __Vtemp729[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp732[1U]
                                   : __Vtemp733[1U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp738[1U]
                                   : __Vtemp739[1U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp742[1U]
                                   : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[1U])));
        __Vtemp750[2U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp728[2U]
                                   : __Vtemp729[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp732[2U]
                                   : __Vtemp733[2U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp738[2U]
                                   : __Vtemp739[2U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp742[2U]
                                   : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[2U])));
        __Vtemp750[3U] = ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                           ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp728[3U]
                                   : __Vtemp729[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp732[3U]
                                   : __Vtemp733[3U]))
                           : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                               ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp738[3U]
                                   : __Vtemp739[3U])
                               : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                                   ? __Vtemp742[3U]
                                   : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__re__DOT__mask[3U])));
    }
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[0U] 
        = __Vtemp750[0U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[1U] 
        = __Vtemp750[1U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[2U] 
        = __Vtemp750[2U];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[3U] 
        = __Vtemp750[3U];
    __Vtableidx3 = (((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm) 
                     << 4U) | ((8U & (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm))
                                        ? ((0x80U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt))
                                            ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_data_out
                                            : vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_data_out)
                                        : vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_tep[4U]) 
                                      >> 0x13U)) | 
                               (((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__w_rdy) 
                                 << 2U) | (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm))));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_fsm_next 
        = Vtop_soc__ConstPool__TABLE_3390a88b_0[__Vtableidx3];
    if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[0U] 
            = ((0x80U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt))
                ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[0U]
                : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[0U]);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[1U] 
            = ((0x80U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt))
                ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[1U]
                : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[1U]);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[2U] 
            = ((0x80U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt))
                ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[2U]
                : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[2U]);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[3U] 
            = ((0x80U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt))
                ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[3U]
                : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[3U]);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_tep 
            = (0x7fffffU & ((0x80U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt))
                             ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_data_out
                             : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_data_out));
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[0U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[1U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[2U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[3U] 
            = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[3U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_tep 
            = (0x7fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_tep[4U]);
    }
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0) 
           | (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0) 
           | (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_in_0 
        = (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__mem_bus_r_r)) 
            << 5U) | (QData)((IData)(((0x1eU & ((IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__icache__DOT__mem_bus_r_r 
                                                         >> 0x20U)) 
                                                << 1U)) 
                                      | (1U & (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__icache__DOT__mem_bus_r_r 
                                                       >> 0x24U)))))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_in_1 
        = (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mem_bus_r_r)) 
            << 5U) | (QData)((IData)(((0x1eU & ((IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mem_bus_r_r 
                                                         >> 0x20U)) 
                                                << 1U)) 
                                      | (1U & (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mem_bus_r_r 
                                                       >> 0x24U)))))));
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
    __Vtemp792[4U] = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                       ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)) 
                                   | (2U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)))
                                   ? ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[3U] 
                                       >> 0xbU) | ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt) 
                                                   << 0x19U))
                                   : 0U) : 0U) : 0U)
                       : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? ((((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
                                     ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[3U]
                                     : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[3U]) 
                                   >> 0xbU) | (0xfe000000U 
                                               & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                  << 0x12U)))
                               : 0U) : 0U));
    if ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[3U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[4U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[5U] = 0U;
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[0U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)) 
                            | (2U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)))
                            ? (0x1ffffeU | ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[0U] 
                                             << 0x15U) 
                                            | ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_tep 
                                                >> 0x16U) 
                                               & (0U 
                                                  != (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)))))
                            : 0U) : 0U) : 0U) : ((2U 
                                                  & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                   ? 
                                                  (0x1fffffU 
                                                   | (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
                                                        ? 
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[0U]
                                                        : 
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[0U]) 
                                                      << 0x15U))
                                                   : 0U)
                                                  : 0U));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[1U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)) 
                            | (2U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)))
                            ? ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[0U] 
                                >> 0xbU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[1U] 
                                            << 0x15U))
                            : 0U) : 0U) : 0U) : ((2U 
                                                  & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                   ? 
                                                  ((((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
                                                      ? 
                                                     vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[0U]
                                                      : 
                                                     vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[0U]) 
                                                    >> 0xbU) 
                                                   | (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
                                                        ? 
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[1U]
                                                        : 
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[1U]) 
                                                      << 0x15U))
                                                   : 0U)
                                                  : 0U));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[2U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)) 
                            | (2U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)))
                            ? ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[1U] 
                                >> 0xbU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[2U] 
                                            << 0x15U))
                            : 0U) : 0U) : 0U) : ((2U 
                                                  & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                   ? 
                                                  ((((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
                                                      ? 
                                                     vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[1U]
                                                      : 
                                                     vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[1U]) 
                                                    >> 0xbU) 
                                                   | (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
                                                        ? 
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[2U]
                                                        : 
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[2U]) 
                                                      << 0x15U))
                                                   : 0U)
                                                  : 0U));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[3U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)) 
                            | (2U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)))
                            ? ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[2U] 
                                >> 0xbU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_tep[3U] 
                                            << 0x15U))
                            : 0U) : 0U) : 0U) : ((2U 
                                                  & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                   ? 
                                                  ((((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
                                                      ? 
                                                     vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[2U]
                                                      : 
                                                     vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[2U]) 
                                                    >> 0xbU) 
                                                   | (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
                                                        ? 
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[3U]
                                                        : 
                                                       vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[3U]) 
                                                      << 0x15U))
                                                   : 0U)
                                                  : 0U));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[4U] 
            = __Vtemp792[4U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[5U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)) 
                            | (2U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)))
                            ? (0x1fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_tep)
                            : 0U) : 0U) : 0U) : ((2U 
                                                  & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                   ? 
                                                  (0x1fffffU 
                                                   & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__replace_tag)
                                                   : 0U)
                                                  : 0U));
    }
    vlSelf->top_soc__DOT__top__DOT__icache_addr_ok 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm)) 
           | (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm)) 
               & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit)) 
              & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])));
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
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
            ? vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr
            : vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[2U]);
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr_out 
        = vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_group
        [vlSelf->top_soc__DOT__top__DOT__exu__DOT__csr__DOT__csr_real_addr];
    __Vtemp796[0U] = 1U;
    __Vtemp796[1U] = 0U;
    __Vtemp796[2U] = 0U;
    __Vtemp796[3U] = 0U;
    __Vtemp797[0U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[0U]);
    __Vtemp797[1U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[1U]);
    __Vtemp797[2U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[2U]);
    __Vtemp797[3U] = (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_reg[3U]);
    VL_ADD_W(4, __Vtemp798, __Vtemp796, __Vtemp797);
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
            = __Vtemp798[0U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[1U] 
            = __Vtemp798[1U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[2U] 
            = __Vtemp798[2U];
        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[3U] 
            = __Vtemp798[3U];
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
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[0U] 
        = ((0xffe00000U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[0U]) 
           | ((0x1e0000U & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[0U] 
                            << 0x10U)) | ((0x1fffeU 
                                           & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[0U] 
                                              >> 4U)) 
                                          | (1U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[0U]))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[1U] 
        = ((0x1fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[1U]) 
           | (0xffe00000U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[1U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[2U] 
        = ((0x1fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[2U]) 
           | (0xffe00000U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[2U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[3U] 
        = ((0x1fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[3U]) 
           | (0xffe00000U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[3U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[4U] 
        = ((0x1fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[4U]) 
           | (0xffe00000U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[4U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[5U] 
        = (0x1fffffU & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__mw_reg[5U]);
    __Vtemp804[0U] = (((IData)(((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
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
        = __Vtemp804[0U];
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
    VL_EXTEND_WQ(128,64, __Vtemp805, vlSelf->top_soc__DOT__top__DOT__lsu__DOT__rs2_sw);
    VL_EXTEND_WQ(128,64, __Vtemp806, (((QData)((IData)(
                                                       vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__lsu__DOT__lsu_reg[0U]))));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[0U] 
        = (0x1fffeU | ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                          ? __Vtemp805[0U] : __Vtemp806[0U]) 
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
              ? __Vtemp805[0U] : __Vtemp806[0U]) >> 0xbU) 
           | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                ? __Vtemp805[1U] : __Vtemp806[1U]) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[2U] 
        = ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
              ? __Vtemp805[1U] : __Vtemp806[1U]) >> 0xbU) 
           | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                ? __Vtemp805[2U] : __Vtemp806[2U]) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[3U] 
        = ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
              ? __Vtemp805[2U] : __Vtemp806[2U]) >> 0xbU) 
           | (((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
                ? __Vtemp805[3U] : __Vtemp806[3U]) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[4U] 
        = ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))
              ? __Vtemp805[3U] : __Vtemp806[3U]) >> 0xbU) 
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
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_pri 
        = ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[0U])
            ? 2U : ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[0U])
                     ? 3U : 0U));
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_pri 
        = ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_in_0))
            ? 1U : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_in_1))
                     ? 2U : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busr_out))
                              ? 3U : 0U)));
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
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_fsm_next 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_fsm))
            ? ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm))
                ? 0U : (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_pri))
            : ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm))
                ? 0U : (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_fsm)));
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_fsm))
            ? (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_pri)
            : (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_fsm));
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_next 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm))
            ? (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_pri)
            : ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U])
                ? 0U : (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm)));
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm))
            ? (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_pri)
            : (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm));
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
    if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))) {
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[3U] = 0U;
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[4U] = 0U;
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[5U] = 0U;
    } else {
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[0U] 
            = ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[0U]
                : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                    ? vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[0U]
                    : 0U));
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[1U] 
            = ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[1U]
                : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                    ? vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[1U]
                    : 0U));
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[2U] 
            = ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[2U]
                : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                    ? vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[2U]
                    : 0U));
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[3U] 
            = ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[3U]
                : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                    ? vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[3U]
                    : 0U));
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[4U] 
            = ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[4U]
                : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                    ? vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[4U]
                    : 0U));
        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[5U] 
            = ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[5U]
                : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))
                    ? vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[5U]
                    : 0U));
    }
    vlSelf->top_soc__DOT__top__DOT__sram1w_rdy = ((0U 
                                                   == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel)));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_in_3 
        = ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel))
            ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_in_0
            : ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel))
                ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_in_1
                : ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel))
                    ? vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busr_out
                    : 0ULL)));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
        = ((0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U]) 
           | ((0xfffffffeU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U] 
                              & ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel)) 
                                 << 1U))) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U] 
                                             & (1U 
                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel)))));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[1U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[1U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[2U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[2U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[3U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[3U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[4U] 
        = (3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[4U]);
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[0U] 
        = ((0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U]) 
           | ((0xfffffffeU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U] 
                              & ((3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel)) 
                                 << 1U))) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U] 
                                             & (3U 
                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel)))));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[1U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[1U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[1U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[2U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[2U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[2U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[3U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[3U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[3U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[4U] 
        = (3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[4U]);
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
        = ((0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U]) 
           | ((0xfffffffeU & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U] 
                              & ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel)) 
                                 << 1U))) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U] 
                                             & (2U 
                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel)))));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[1U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[1U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[2U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[2U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
        = ((3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[3U]) 
           | (0xfffffffcU & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[3U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[4U] 
        = (3U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[4U]);
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
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm_next 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm))
            ? ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[0U])
                ? 1U : 0U) : ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__w_fsm))
                               ? ((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__wd_finfished)
                                   ? 0U : 1U) : 0U));
    __Vtableidx9 = (((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__wd_finfished) 
                     << 4U) | (((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__wa_fininshed) 
                                << 3U) | ((4U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__w_in_3[0U] 
                                                 << 2U)) 
                                          | (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm))));
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm_next 
        = Vtop_soc__ConstPool__TABLE_e6fc7a96_0[__Vtableidx9];
    __Vtableidx5 = (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm) 
                     << 4U) | ((8U & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_tep 
                                      >> 0x13U)) | 
                               (((IData)(vlSelf->top_soc__DOT__top__DOT__sram1w_rdy) 
                                 << 2U) | (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm))));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm_next 
        = Vtop_soc__ConstPool__TABLE_3390a88b_0[__Vtableidx5];
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt_ready_to_go 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__sram1w_rdy) 
           & ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm)) 
              | (1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_fsm))));
    __Vtableidx8 = (((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__r_finished) 
                     << 9U) | ((((IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt) 
                                 != (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__ar_cnt_i)) 
                                << 8U) | (((IData)(vlSelf->top_soc__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready) 
                                           << 7U) | 
                                          ((0x40U & 
                                            ((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_in_3) 
                                             << 6U)) 
                                           | (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm)))));
    vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__read_fsm_next 
        = Vtop_soc__ConstPool__TABLE_a2c3e4f5_0[__Vtableidx8];
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[0U] 
        = ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[0U] 
            & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[0U]) 
           | ((~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[0U]) 
              & ((5U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                  ? ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1_reg)
                      ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[0U]
                      : vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[0U])
                  : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
                      << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                   >> 2U)))));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[1U] 
        = ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[1U] 
            & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[1U]) 
           | ((~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[1U]) 
              & ((5U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                  ? ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1_reg)
                      ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[1U]
                      : vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[1U])
                  : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
                      << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
                                   >> 2U)))));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[2U] 
        = ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[2U] 
            & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[2U]) 
           | ((~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[2U]) 
              & ((5U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                  ? ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1_reg)
                      ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[2U]
                      : vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[2U])
                  : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                      << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
                                   >> 2U)))));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[3U] 
        = ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[3U] 
            & vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_data_write[3U]) 
           | ((~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[3U]) 
              & ((5U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                  ? ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1_reg)
                      ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[3U]
                      : vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[3U])
                  : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[4U] 
                      << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                                   >> 2U)))));
    if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[0U] 
            = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0)
                ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[0U]
                : vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[0U]);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U] 
            = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0)
                ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[1U]
                : vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[1U]);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U] 
            = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0)
                ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[2U]
                : vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[2U]);
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U] 
            = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0)
                ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[3U]
                : vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[3U]);
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[0U] 
            = ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
                << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                             >> 2U));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U] 
            = ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
                << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
                             >> 2U));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U] 
            = ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
                             >> 2U));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U] 
            = ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[4U] 
                << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                             >> 2U));
    }
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[0U] 
        = (((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[1U] 
             << 0x1fU) | (0x7ffffffeU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[0U] 
                                         >> 1U))) | 
           (1U & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[0U]));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[1U] 
        = ((1U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[1U] 
                  >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[2U] 
                              << 0x1fU) | (0x7ffffffeU 
                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[1U] 
                                              >> 1U))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[2U] 
        = ((1U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[2U] 
                  >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[3U] 
                              << 0x1fU) | (0x7ffffffeU 
                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[2U] 
                                              >> 1U))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[3U] 
        = ((1U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[3U] 
                  >> 1U)) | ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[4U] 
                              << 0x1fU) | (0x7ffffffeU 
                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[3U] 
                                              >> 1U))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[4U] 
        = ((2U & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[0U]) 
           | (1U & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_2[4U] 
                    >> 1U)));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[0U] 
        = ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[0U] 
            & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[0U]) 
           | ((~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[0U]) 
              & ((5U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                  ? ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1_reg)
                      ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[0U]
                      : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[0U])
                  : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
                      << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                   >> 2U)))));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[1U] 
        = ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[1U] 
            & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[1U]) 
           | ((~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[1U]) 
              & ((5U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                  ? ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1_reg)
                      ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[1U]
                      : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[1U])
                  : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
                      << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
                                   >> 2U)))));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[2U] 
        = ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[2U] 
            & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[2U]) 
           | ((~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[2U]) 
              & ((5U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                  ? ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1_reg)
                      ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[2U]
                      : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[2U])
                  : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
                      << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
                                   >> 2U)))));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[3U] 
        = ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[3U] 
            & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_data_write[3U]) 
           | ((~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[3U]) 
              & ((5U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                  ? ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1_reg)
                      ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[3U]
                      : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[3U])
                  : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[4U] 
                      << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
                                   >> 2U)))));
    if ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0 = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 = 0ULL;
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (((QData)((IData)((8U | (0x7f0U 
                                                   & ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt) 
                                                      << 4U))))) 
                            << 2U) | (QData)((IData)(
                                                     (2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt) 
                                                           >> 7U)) 
                                                         << 1U)))))
                        : ((QData)((IData)((8U | ((0x7f0U 
                                                   & ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fencei_cnt) 
                                                      << 4U)) 
                                                  | (2U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fencei_cnt) 
                                                          >> 7U)) 
                                                        << 1U)))))) 
                           << 2U)) : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? (((QData)((IData)(
                                                           (8U 
                                                            | (0x7f0U 
                                                               & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                                  >> 3U))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1)))))
                                       : (((QData)((IData)(
                                                           (1U 
                                                            | ((0xfffff800U 
                                                                & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[3U] 
                                                                    << 0x1dU) 
                                                                   | (0x1ffff800U 
                                                                      & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                                         >> 3U)))) 
                                                               | ((0x7f0U 
                                                                   & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                                      >> 3U)) 
                                                                  | ((8U 
                                                                      & ((~ (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                                                            << 2U)) 
                                                                        | (2U 
                                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                                                              << 1U))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (2U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                                                        << 1U)))))))
                : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? ((QData)((IData)((0x7f0U 
                                            & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                               >> 4U)))) 
                           << 2U) : ((QData)((IData)(
                                                     (0x7f0U 
                                                      & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                         >> 4U)))) 
                                     << 2U)) : ((1U 
                                                 & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (8U 
                                                                  | (0x7f0U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                                        >> 4U))))) 
                                                 << 2U)
                                                 : 
                                                ((QData)((IData)(
                                                                 (8U 
                                                                  | (0x7f0U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                                        >> 4U))))) 
                                                 << 2U))));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (((QData)((IData)((8U | (0x7f0U 
                                                   & ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt) 
                                                      << 4U))))) 
                            << 2U) | (QData)((IData)(
                                                     (2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt) 
                                                           >> 7U)) 
                                                         << 1U)))))
                        : ((QData)((IData)((8U | ((0x7f0U 
                                                   & ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fencei_cnt) 
                                                      << 4U)) 
                                                  | (2U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fencei_cnt) 
                                                          >> 7U)) 
                                                        << 1U)))))) 
                           << 2U)) : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? (((QData)((IData)(
                                                           (8U 
                                                            | (0x7f0U 
                                                               & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                                  >> 3U))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1)))))
                                       : (((QData)((IData)(
                                                           (1U 
                                                            | ((0xfffff800U 
                                                                & ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[3U] 
                                                                    << 0x1dU) 
                                                                   | (0x1ffff800U 
                                                                      & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                                         >> 3U)))) 
                                                               | ((0x7f0U 
                                                                   & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                                      >> 3U)) 
                                                                  | (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random) 
                                                                      << 3U) 
                                                                     | ((4U 
                                                                         & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                                                            << 2U)) 
                                                                        | (2U 
                                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                                                              << 1U))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (2U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                                                        << 1U)))))))
                : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? ((QData)((IData)((0x7f0U 
                                            & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                               >> 4U)))) 
                           << 2U) : ((QData)((IData)(
                                                     (0x7f0U 
                                                      & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                         >> 4U)))) 
                                     << 2U)) : ((1U 
                                                 & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (8U 
                                                                  | (0x7f0U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                                        >> 4U))))) 
                                                 << 2U)
                                                 : 
                                                ((QData)((IData)(
                                                                 (8U 
                                                                  | (0x7f0U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                                        >> 4U))))) 
                                                 << 2U))));
    }
    if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[0U] 
            = ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0)
                ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[0U]
                : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[0U]);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U] 
            = ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0)
                ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[1U]
                : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[1U]);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U] 
            = ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0)
                ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[2U]
                : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[2U]);
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U] 
            = ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0)
                ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[3U]
                : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[3U]);
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[0U] 
            = ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
                << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                             >> 2U));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U] 
            = ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
                << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
                             >> 2U));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U] 
            = ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
                << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
                             >> 2U));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U] 
            = ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[4U] 
                << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
                             >> 2U));
    }
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
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_4 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 3U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 3U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_3))));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm_next 
        = ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
            ? 0U : ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                     ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                         ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                             ? (((0xffU == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt)) 
                                 | (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fenced_cnt_ready_to_go))
                                 ? 0U : 7U) : ((0xffU 
                                                == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fencei_cnt))
                                                ? 0U
                                                : 6U))
                         : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                             ? 0U : ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U])
                                      ? 0U : 4U))) : 
                    ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                      ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                          ? ((2U & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U])
                              ? 4U : 3U) : ((1U & ((IData)(vlSelf->top_soc__DOT__top__DOT__sram1w_rdy) 
                                                   | (~ 
                                                      (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__replace_tag 
                                                       >> 0x16U))))
                                             ? 3U : 2U))
                      : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                          ? ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__read_abort)
                              ? 0U : ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit)
                                       ? ((1U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                                           ? 5U : (
                                                   (2U 
                                                    & vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[0U])
                                                    ? 1U
                                                    : 0U))
                                       : 2U)) : ((2U 
                                                  & vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[0U])
                                                  ? 1U
                                                  : 0U)))));
    vlSelf->top_soc__DOT__top__DOT__icache_data_out 
        = ((0x40U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
            ? ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (QData)((IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U] 
                                           >> 0x18U)))
                        : (QData)((IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U] 
                                           >> 0x10U))))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (QData)((IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U] 
                                           >> 8U)))
                        : (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U]))))
                : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                                                 >> 0x18U)))
                        : (0xffffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                                                   >> 0x10U))))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                                                     >> 8U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U]))))))
            : ((0x20U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U])) 
                            << 0x28U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                                          << 8U) | 
                                         ((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U])) 
                                          >> 0x18U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U])) 
                            << 0x30U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U])) 
                                            >> 0x10U))))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[3U])) 
                            << 0x38U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U])) 
                                            >> 8U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U])))))
                : ((0x10U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                            << 0x28U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U])) 
                                          << 8U) | 
                                         ((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[0U])) 
                                          >> 0x18U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                            << 0x30U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[0U])) 
                                            >> 0x10U))))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[2U])) 
                            << 0x38U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[0U])) 
                                            >> 8U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__icache__DOT__return_data[0U])))))));
    __Vtemp877[0U] = Vtop_soc__ConstPool__CONST_8643193a_0[0U];
    __Vtemp877[1U] = Vtop_soc__ConstPool__CONST_8643193a_0[1U];
    __Vtemp877[2U] = Vtop_soc__ConstPool__CONST_8643193a_0[2U];
    __Vtemp877[3U] = Vtop_soc__ConstPool__CONST_8643193a_0[3U];
    __Vtemp877[4U] = Vtop_soc__ConstPool__CONST_8643193a_0[4U];
    __Vtemp877[5U] = Vtop_soc__ConstPool__CONST_8643193a_0[5U];
    __Vtemp877[6U] = Vtop_soc__ConstPool__CONST_8643193a_0[6U];
    __Vtemp877[7U] = Vtop_soc__ConstPool__CONST_8643193a_0[7U];
    __Vtemp877[8U] = (0x100U | ((0xfeU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                          >> 7U)) | 
                                Vtop_soc__ConstPool__CONST_8643193a_0[8U]));
    VL_EXTEND_WW(266,265, __Vtemp878, __Vtemp877);
    __Vtemp880[0U] = Vtop_soc__ConstPool__CONST_8643193a_0[0U];
    __Vtemp880[1U] = Vtop_soc__ConstPool__CONST_8643193a_0[1U];
    __Vtemp880[2U] = Vtop_soc__ConstPool__CONST_8643193a_0[2U];
    __Vtemp880[3U] = Vtop_soc__ConstPool__CONST_8643193a_0[3U];
    __Vtemp880[4U] = Vtop_soc__ConstPool__CONST_8643193a_0[4U];
    __Vtemp880[5U] = Vtop_soc__ConstPool__CONST_8643193a_0[5U];
    __Vtemp880[6U] = Vtop_soc__ConstPool__CONST_8643193a_0[6U];
    __Vtemp880[7U] = Vtop_soc__ConstPool__CONST_8643193a_0[7U];
    __Vtemp880[8U] = (0x100U | ((0xfeU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                          >> 7U)) | 
                                Vtop_soc__ConstPool__CONST_8643193a_0[8U]));
    VL_EXTEND_WW(266,265, __Vtemp881, __Vtemp880);
    if ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
        __Vtemp887[5U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_c8241eac_0[5U]
                               : Vtop_soc__ConstPool__CONST_c8241cac_0[5U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[0U] 
                                   >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[1U] 
                                                << 1U))
                               : ((((1U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                                     ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[0U]
                                     : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
                                         << 0x1eU) 
                                        | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                           >> 2U))) 
                                   >> 0x1fU) | (((1U 
                                                  & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                                                  ? 
                                                 vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[1U]
                                                  : 
                                                 ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
                                                     >> 2U))) 
                                                << 1U))));
        __Vtemp887[6U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_c8241eac_0[6U]
                               : Vtop_soc__ConstPool__CONST_c8241cac_0[6U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[1U] 
                                   >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[2U] 
                                                << 1U))
                               : ((((1U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                                     ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[1U]
                                     : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
                                         << 0x1eU) 
                                        | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
                                           >> 2U))) 
                                   >> 0x1fU) | (((1U 
                                                  & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                                                  ? 
                                                 vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[2U]
                                                  : 
                                                 ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
                                                     >> 2U))) 
                                                << 1U))));
        __Vtemp887[7U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_c8241eac_0[7U]
                               : Vtop_soc__ConstPool__CONST_c8241cac_0[7U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[2U] 
                                   >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[3U] 
                                                << 1U))
                               : ((((1U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                                     ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[2U]
                                     : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
                                         << 0x1eU) 
                                        | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[2U] 
                                           >> 2U))) 
                                   >> 0x1fU) | (((1U 
                                                  & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                                                  ? 
                                                 vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[3U]
                                                  : 
                                                 ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[4U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
                                                     >> 2U))) 
                                                << 1U))));
        __Vtemp887[8U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_c8241eac_0[8U]
                               : Vtop_soc__ConstPool__CONST_c8241cac_0[8U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? ((0xfeU & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                            >> 6U)) 
                                  | (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[3U] 
                                     >> 0x1fU)) : (
                                                   (0x100U 
                                                    & ((~ 
                                                        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U]) 
                                                       << 8U)) 
                                                   | ((0xfeU 
                                                       & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U] 
                                                          >> 6U)) 
                                                      | (((1U 
                                                           & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                                                           ? 
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[3U]
                                                           : 
                                                          ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[4U] 
                                                            << 0x1eU) 
                                                           | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[3U] 
                                                              >> 2U))) 
                                                         >> 0x1fU)))));
    } else {
        __Vtemp887[5U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[5U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[5U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? __Vtemp878[5U] : __Vtemp881[5U]));
        __Vtemp887[6U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[6U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[6U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? __Vtemp878[6U] : __Vtemp881[6U]));
        __Vtemp887[7U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[7U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[7U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? __Vtemp878[7U] : __Vtemp881[7U]));
        __Vtemp887[8U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? (0x300U | ((0xfeU 
                                             & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                >> 7U)) 
                                            | Vtop_soc__ConstPool__CONST_8643193a_0[8U]))
                               : (0x300U | ((0xfeU 
                                             & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                                >> 7U)) 
                                            | Vtop_soc__ConstPool__CONST_8643193a_0[8U])))
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? __Vtemp878[8U] : __Vtemp881[8U]));
    }
    if ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[0U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[1U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[2U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[3U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[4U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[5U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[6U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[7U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[8U];
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[0U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[0U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[0U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[0U])
                        : 0U)) : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                   ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? Vtop_soc__ConstPool__CONST_8643193a_0[0U]
                                       : Vtop_soc__ConstPool__CONST_8643193a_0[0U])
                                   : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? __Vtemp878[0U]
                                       : __Vtemp881[0U])));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[1U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[1U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[1U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[1U])
                        : 0U)) : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                   ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? Vtop_soc__ConstPool__CONST_8643193a_0[1U]
                                       : Vtop_soc__ConstPool__CONST_8643193a_0[1U])
                                   : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? __Vtemp878[1U]
                                       : __Vtemp881[1U])));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[2U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[2U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[2U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[2U])
                        : 0U)) : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                   ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? Vtop_soc__ConstPool__CONST_8643193a_0[2U]
                                       : Vtop_soc__ConstPool__CONST_8643193a_0[2U])
                                   : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? __Vtemp878[2U]
                                       : __Vtemp881[2U])));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[3U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[3U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[3U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__bwen_data_write[3U])
                        : 0U)) : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                   ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? Vtop_soc__ConstPool__CONST_8643193a_0[3U]
                                       : Vtop_soc__ConstPool__CONST_8643193a_0[3U])
                                   : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                                       ? __Vtemp878[3U]
                                       : __Vtemp881[3U])));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[4U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[4U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[4U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? ((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[0U] 
                            << 1U) | (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1_reg))
                        : ((((1U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])
                              ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__write_write_data[0U]
                              : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[1U] 
                                  << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U] 
                                               >> 2U))) 
                            << 1U) | (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random))))
                : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_8643193a_0[4U]
                        : Vtop_soc__ConstPool__CONST_8643193a_0[4U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                        ? __Vtemp878[4U] : __Vtemp881[4U])));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
            = __Vtemp887[5U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
            = __Vtemp887[6U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
            = __Vtemp887[7U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
            = __Vtemp887[8U];
    }
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_data_in 
        = (0x1fffffU & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
                                >> 0xdU)));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr 
        = (0x7fU & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
                            >> 6U)));
    vlSelf->top_soc__DOT__top__DOT__dcache_data_out 
        = ((0x40U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
            ? ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (QData)((IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U] 
                                           >> 0x18U)))
                        : (QData)((IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U] 
                                           >> 0x10U))))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (QData)((IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U] 
                                           >> 8U)))
                        : (QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U]))))
                : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (0xffffffffffULL & (((QData)((IData)(
                                                               vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                                                 >> 0x18U)))
                        : (0xffffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                                                   >> 0x10U))))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U])) 
                                                   << 0x18U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                                                     >> 8U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U]))))))
            : ((0x20U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                ? ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U])) 
                            << 0x28U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                                          << 8U) | 
                                         ((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U])) 
                                          >> 0x18U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U])) 
                            << 0x30U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U])) 
                                            >> 0x10U))))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[3U])) 
                            << 0x38U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U])) 
                                            >> 8U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U])))))
                : ((0x10U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                    ? ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                            << 0x28U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U])) 
                                          << 8U) | 
                                         ((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[0U])) 
                                          >> 0x18U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                            << 0x30U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U])) 
                                          << 0x10U) 
                                         | ((QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[0U])) 
                                            >> 0x10U))))
                    : ((8U & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[2U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[2U])) 
                            << 0x38U) | (((QData)((IData)(
                                                          vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U])) 
                                          << 0x18U) 
                                         | ((QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[0U])) 
                                            >> 8U)))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__return_data[0U])))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffffffdfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 5U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 5U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_5)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 5U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 5U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_5)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 5U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_5)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 5U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 5U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_5)))))) 
              << 5U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_6 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 5U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 5U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_5))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffffffefULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 4U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 4U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_4)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 4U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 4U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_4)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 4U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 4U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_4)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 4U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 4U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_4)))))) 
              << 4U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_5 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 4U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 4U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_4))));
    vlSelf->top_soc__DOT__top__DOT__re = (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__icache_data_out)) 
                                           << 1U) | (QData)((IData)(
                                                                    ((((1U 
                                                                        == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm)) 
                                                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit)) 
                                                                      & (~ 
                                                                         vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                                     | (((((4U 
                                                                            == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm)) 
                                                                           & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U]) 
                                                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__abort))) 
                                                                         & (~ 
                                                                            vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])) 
                                                                        & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__jup)))))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[0U] 
        = (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache_data_out) 
            << 2U) | ((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm)) 
                        | (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm)) 
                            & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit)) 
                           & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U]))) 
                       << 1U) | ((((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm)) 
                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit)) 
                                  & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                 | (((((4U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm)) 
                                       & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_1[0U]) 
                                      & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__abort))) 
                                     & (~ vlSelf->top_soc__DOT__top__DOT__dcache__DOT__cache_in_reg[0U])) 
                                    & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__read_abort))))));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[1U] 
        = (((IData)(vlSelf->top_soc__DOT__top__DOT__dcache_data_out) 
            >> 0x1eU) | ((IData)((vlSelf->top_soc__DOT__top__DOT__dcache_data_out 
                                  >> 0x20U)) << 2U));
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[2U] 
        = ((IData)((vlSelf->top_soc__DOT__top__DOT__dcache_data_out 
                    >> 0x20U)) >> 0x1eU);
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffffffbfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 6U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 6U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_6)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 6U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 6U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_6)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 6U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_6)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 6U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 6U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_6)))))) 
              << 6U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_7 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 6U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 6U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_6))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffffffdfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 5U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 5U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_5)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 5U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 5U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_5)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 5U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_5)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 5U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 5U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_5)))))) 
              << 5U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_6 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 5U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 5U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_5))));
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__load_ext_in 
        = ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[0U])
            ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[2U])) 
                << 0x3eU) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[1U])) 
                              << 0x1eU) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[0U])) 
                                           >> 2U)))
            : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[2U])) 
                << 0x3fU) | (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[1U])) 
                              << 0x1fU) | ((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[0U])) 
                                           >> 1U))));
    if ((8U == (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
                >> 0x1cU))) {
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__data_ok_all 
            = (1U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[0U]);
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__addr_ok_all 
            = (1U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[0U] 
                     >> 1U));
    } else {
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__data_ok_all 
            = (1U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[0U]);
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__addr_ok_all 
            = (1U & ((0x10000U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                      ? (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[4U] 
                         >> 1U) : ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)) 
                                   & (3U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel)))));
    }
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffffff7fULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 7U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 7U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_7)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 7U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 7U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_7)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 7U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_7)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 7U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 7U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_7)))))) 
              << 7U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_8 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 7U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 7U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_7))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffffffbfULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 6U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 6U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_6)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 6U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 6U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_6)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 6U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_6)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 6U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 6U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_6)))))) 
              << 6U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_7 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 6U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 6U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_6))));
    __Vtableidx2 = (((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__data_ok_all) 
                     << 8U) | ((0x80U & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                         >> 8U)) | 
                               (((IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__addr_ok_all) 
                                 << 6U) | ((0x20U & 
                                            (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                             >> 0xbU)) 
                                           | ((0x10U 
                                               & (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                                                  << 4U)) 
                                              | (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm))))));
    if (Vtop_soc__ConstPool__TABLE_b950b1ea_0[__Vtableidx2]) {
        vlSelf->top_soc__DOT__top__DOT__lsu__DOT__fsm_next 
            = Vtop_soc__ConstPool__TABLE_8c8642cb_0
            [__Vtableidx2];
    }
    vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__next_stage_ready 
        = (1U & (((~ vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U]) 
                  | ((0x10000U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                      ? (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__data_ok_all)
                      : ((~ (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U] 
                             >> 0xfU)) | (IData)(vlSelf->top_soc__DOT__top__DOT__lsu__DOT__addr_ok_all)))) 
                 & (((((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
                       & (~ (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                             >> 8U))) | ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
                                         & (0x41U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__fsm)))) 
                     | (~ vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])) 
                    | ((2U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__fsm)) 
                       & (0x41U == (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__fsm))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffffeffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 8U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 8U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_8)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 8U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 8U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_8)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 8U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_8)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 8U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 8U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_8)))))) 
              << 8U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_9 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 8U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 8U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_8))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffffff7fULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 7U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 7U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_7)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 7U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 7U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_7)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 7U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_7)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 7U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 7U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_7)))))) 
              << 7U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_8 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 7U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 7U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_7))));
    if (vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm) {
        if (vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm) {
            vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm_next 
                = (1U & (~ (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__next_stage_ready)));
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__ifu__DOT__fsm_next 
            = (1U & ((~ (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__next_stage_ready)) 
                     & (IData)(vlSelf->top_soc__DOT__top__DOT__re)));
    }
    vlSelf->top_soc__DOT__top__DOT__r = (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__ifu__DOT__pc)) 
                                          << 3U) | (QData)((IData)(
                                                                   (4U 
                                                                    | ((IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__dc__next_stage_ready) 
                                                                       & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__jup)))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffffdffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 9U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 9U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_9)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 9U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 9U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_9)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 9U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_9)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 9U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 9U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_9)))))) 
              << 9U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_10 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 9U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                              >> 9U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_9))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffffeffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 8U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 8U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_8)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 8U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 8U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_8)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 8U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 8U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_8)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 8U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 8U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_8)))))) 
              << 8U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_9 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 8U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 8U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_8))));
    __Vtemp916[0U] = Vtop_soc__ConstPool__CONST_8643193a_0[0U];
    __Vtemp916[1U] = Vtop_soc__ConstPool__CONST_8643193a_0[1U];
    __Vtemp916[2U] = Vtop_soc__ConstPool__CONST_8643193a_0[2U];
    __Vtemp916[3U] = Vtop_soc__ConstPool__CONST_8643193a_0[3U];
    __Vtemp916[4U] = Vtop_soc__ConstPool__CONST_8643193a_0[4U];
    __Vtemp916[5U] = Vtop_soc__ConstPool__CONST_8643193a_0[5U];
    __Vtemp916[6U] = Vtop_soc__ConstPool__CONST_8643193a_0[6U];
    __Vtemp916[7U] = Vtop_soc__ConstPool__CONST_8643193a_0[7U];
    __Vtemp916[8U] = (0x100U | ((0xfeU & ((IData)((vlSelf->top_soc__DOT__top__DOT__r 
                                                   >> 7U)) 
                                          << 1U)) | 
                                Vtop_soc__ConstPool__CONST_8643193a_0[8U]));
    VL_EXTEND_WW(266,265, __Vtemp917, __Vtemp916);
    __Vtemp919[0U] = Vtop_soc__ConstPool__CONST_8643193a_0[0U];
    __Vtemp919[1U] = Vtop_soc__ConstPool__CONST_8643193a_0[1U];
    __Vtemp919[2U] = Vtop_soc__ConstPool__CONST_8643193a_0[2U];
    __Vtemp919[3U] = Vtop_soc__ConstPool__CONST_8643193a_0[3U];
    __Vtemp919[4U] = Vtop_soc__ConstPool__CONST_8643193a_0[4U];
    __Vtemp919[5U] = Vtop_soc__ConstPool__CONST_8643193a_0[5U];
    __Vtemp919[6U] = Vtop_soc__ConstPool__CONST_8643193a_0[6U];
    __Vtemp919[7U] = Vtop_soc__ConstPool__CONST_8643193a_0[7U];
    __Vtemp919[8U] = (0x100U | ((0xfeU & ((IData)((vlSelf->top_soc__DOT__top__DOT__r 
                                                   >> 7U)) 
                                          << 1U)) | 
                                Vtop_soc__ConstPool__CONST_8643193a_0[8U]));
    VL_EXTEND_WW(266,265, __Vtemp920, __Vtemp919);
    if ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
        __Vtemp926[5U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_c8241eac_0[5U]
                               : Vtop_soc__ConstPool__CONST_c8241cac_0[5U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[0U] 
                                   >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[1U] 
                                                << 1U))
                               : ((((1U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                     ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[0U]
                                     : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
                                         << 0x1eU) 
                                        | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                           >> 2U))) 
                                   >> 0x1fU) | (((1U 
                                                  & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                                  ? 
                                                 vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[1U]
                                                  : 
                                                 ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
                                                     >> 2U))) 
                                                << 1U))));
        __Vtemp926[6U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_c8241eac_0[6U]
                               : Vtop_soc__ConstPool__CONST_c8241cac_0[6U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[1U] 
                                   >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[2U] 
                                                << 1U))
                               : ((((1U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                     ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[1U]
                                     : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
                                         << 0x1eU) 
                                        | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
                                           >> 2U))) 
                                   >> 0x1fU) | (((1U 
                                                  & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                                  ? 
                                                 vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[2U]
                                                  : 
                                                 ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
                                                     >> 2U))) 
                                                << 1U))));
        __Vtemp926[7U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_c8241eac_0[7U]
                               : Vtop_soc__ConstPool__CONST_c8241cac_0[7U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[2U] 
                                   >> 0x1fU) | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[3U] 
                                                << 1U))
                               : ((((1U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                     ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[2U]
                                     : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                                         << 0x1eU) 
                                        | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[2U] 
                                           >> 2U))) 
                                   >> 0x1fU) | (((1U 
                                                  & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                                  ? 
                                                 vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[3U]
                                                  : 
                                                 ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[4U] 
                                                   << 0x1eU) 
                                                  | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                                                     >> 2U))) 
                                                << 1U))));
        __Vtemp926[8U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_c8241eac_0[8U]
                               : Vtop_soc__ConstPool__CONST_c8241cac_0[8U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? ((0xfeU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                            >> 6U)) 
                                  | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[3U] 
                                     >> 0x1fU)) : (
                                                   (0x100U 
                                                    & ((~ 
                                                        vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U]) 
                                                       << 8U)) 
                                                   | ((0xfeU 
                                                       & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                          >> 6U)) 
                                                      | (((1U 
                                                           & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                                           ? 
                                                          vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[3U]
                                                           : 
                                                          ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[4U] 
                                                            << 0x1eU) 
                                                           | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                                                              >> 2U))) 
                                                         >> 0x1fU)))));
    } else {
        __Vtemp926[5U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[5U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[5U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? __Vtemp917[5U] : __Vtemp920[5U]));
        __Vtemp926[6U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[6U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[6U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? __Vtemp917[6U] : __Vtemp920[6U]));
        __Vtemp926[7U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[7U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[7U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? __Vtemp917[7U] : __Vtemp920[7U]));
        __Vtemp926[8U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? (0x300U | ((0xfeU 
                                             & ((IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__r 
                                                         >> 7U)) 
                                                << 1U)) 
                                            | Vtop_soc__ConstPool__CONST_8643193a_0[8U]))
                               : (0x300U | ((0xfeU 
                                             & ((IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__r 
                                                         >> 7U)) 
                                                << 1U)) 
                                            | Vtop_soc__ConstPool__CONST_8643193a_0[8U])))
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                               ? __Vtemp917[8U] : __Vtemp920[8U]));
    }
    if ((8U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[0U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[1U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[2U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[3U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[4U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[5U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[6U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[7U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
            = Vtop_soc__ConstPool__CONST_c8241cac_0[8U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm_next = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0 = 0ULL;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 = 0ULL;
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[0U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[0U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[0U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[0U])
                        : 0U)) : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                   ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? Vtop_soc__ConstPool__CONST_8643193a_0[0U]
                                       : Vtop_soc__ConstPool__CONST_8643193a_0[0U])
                                   : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? __Vtemp917[0U]
                                       : __Vtemp920[0U])));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[1U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[1U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[1U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[1U])
                        : 0U)) : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                   ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? Vtop_soc__ConstPool__CONST_8643193a_0[1U]
                                       : Vtop_soc__ConstPool__CONST_8643193a_0[1U])
                                   : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? __Vtemp917[1U]
                                       : __Vtemp920[1U])));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[2U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[2U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[2U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[2U])
                        : 0U)) : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                   ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? Vtop_soc__ConstPool__CONST_8643193a_0[2U]
                                       : Vtop_soc__ConstPool__CONST_8643193a_0[2U])
                                   : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? __Vtemp917[2U]
                                       : __Vtemp920[2U])));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[3U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[3U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[3U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__bwen_data_write[3U])
                        : 0U)) : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                   ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? Vtop_soc__ConstPool__CONST_8643193a_0[3U]
                                       : Vtop_soc__ConstPool__CONST_8643193a_0[3U])
                                   : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? __Vtemp917[3U]
                                       : __Vtemp920[3U])));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[4U] 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_c8241eac_0[4U]
                        : Vtop_soc__ConstPool__CONST_c8241cac_0[4U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[0U] 
                            << 1U) | (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1_reg))
                        : ((((1U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                              ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[0U]
                              : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[1U] 
                                  << 0x1eU) | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                               >> 2U))) 
                            << 1U) | (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__random))))
                : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? Vtop_soc__ConstPool__CONST_8643193a_0[4U]
                        : Vtop_soc__ConstPool__CONST_8643193a_0[4U])
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? __Vtemp917[4U] : __Vtemp920[4U])));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
            = __Vtemp926[5U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
            = __Vtemp926[6U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
            = __Vtemp926[7U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
            = __Vtemp926[8U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm_next 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? (((0xffU == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt)) 
                            | (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt_ready_to_go))
                            ? 0U : 7U) : ((0xffU == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fencei_cnt))
                                           ? 0U : 6U))
                    : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? 0U : ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U])
                                 ? 0U : 4U))) : ((2U 
                                                  & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U])
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((1U 
                                                    & ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__w_rdy) 
                                                       | (~ 
                                                          (vlSelf->top_soc__DOT__top__DOT__icache__DOT__replace_tag 
                                                           >> 0x16U))))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                                   ? 
                                                  ((IData)(vlSelf->top_soc__DOT__top__DOT__jup)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__r))
                                                       ? 1U
                                                       : 0U))
                                                     : 2U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_soc__DOT__top__DOT__r))
                                                    ? 1U
                                                    : 0U))));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? (((QData)((IData)((8U | (0x7f0U 
                                                   & ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt) 
                                                      << 4U))))) 
                            << 2U) | (QData)((IData)(
                                                     (2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt) 
                                                           >> 7U)) 
                                                         << 1U)))))
                        : ((QData)((IData)((8U | ((0x7f0U 
                                                   & ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fencei_cnt) 
                                                      << 4U)) 
                                                  | (2U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fencei_cnt) 
                                                          >> 7U)) 
                                                        << 1U)))))) 
                           << 2U)) : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? (((QData)((IData)(
                                                           (8U 
                                                            | (0x7f0U 
                                                               & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                                  >> 3U))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1)))))
                                       : (((QData)((IData)(
                                                           (1U 
                                                            | ((0xfffff800U 
                                                                & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[3U] 
                                                                    << 0x1dU) 
                                                                   | (0x1ffff800U 
                                                                      & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                                         >> 3U)))) 
                                                               | ((0x7f0U 
                                                                   & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                                      >> 3U)) 
                                                                  | ((8U 
                                                                      & ((~ (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__random)) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                                                            << 2U)) 
                                                                        | (2U 
                                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                                                              << 1U))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (2U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                                                        << 1U)))))))
                : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? ((QData)((IData)((0x7f0U 
                                            & ((IData)(
                                                       (vlSelf->top_soc__DOT__top__DOT__r 
                                                        >> 7U)) 
                                               << 4U)))) 
                           << 2U) : ((QData)((IData)(
                                                     (0x7f0U 
                                                      & ((IData)(
                                                                 (vlSelf->top_soc__DOT__top__DOT__r 
                                                                  >> 7U)) 
                                                         << 4U)))) 
                                     << 2U)) : ((1U 
                                                 & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (8U 
                                                                  | (0x7f0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__r 
                                                                                >> 7U)) 
                                                                        << 4U))))) 
                                                 << 2U)
                                                 : 
                                                ((QData)((IData)(
                                                                 (8U 
                                                                  | (0x7f0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__r 
                                                                                >> 7U)) 
                                                                        << 4U))))) 
                                                 << 2U))));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
            = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? (((QData)((IData)((8U | (0x7f0U 
                                                   & ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt) 
                                                      << 4U))))) 
                            << 2U) | (QData)((IData)(
                                                     (2U 
                                                      & ((~ 
                                                          ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fenced_cnt) 
                                                           >> 7U)) 
                                                         << 1U)))))
                        : ((QData)((IData)((8U | ((0x7f0U 
                                                   & ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fencei_cnt) 
                                                      << 4U)) 
                                                  | (2U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fencei_cnt) 
                                                          >> 7U)) 
                                                        << 1U)))))) 
                           << 2U)) : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                       ? (((QData)((IData)(
                                                           (8U 
                                                            | (0x7f0U 
                                                               & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                                  >> 3U))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1)))))
                                       : (((QData)((IData)(
                                                           (1U 
                                                            | ((0xfffff800U 
                                                                & ((vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[3U] 
                                                                    << 0x1dU) 
                                                                   | (0x1ffff800U 
                                                                      & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                                         >> 3U)))) 
                                                               | ((0x7f0U 
                                                                   & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                                                      >> 3U)) 
                                                                  | (((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__random) 
                                                                      << 3U) 
                                                                     | ((4U 
                                                                         & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                                                            << 2U)) 
                                                                        | (2U 
                                                                           & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                                                              << 1U))))))))) 
                                           << 2U) | (QData)((IData)(
                                                                    (2U 
                                                                     & (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U] 
                                                                        << 1U)))))))
                : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                    ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                        ? ((QData)((IData)((0x7f0U 
                                            & ((IData)(
                                                       (vlSelf->top_soc__DOT__top__DOT__r 
                                                        >> 7U)) 
                                               << 4U)))) 
                           << 2U) : ((QData)((IData)(
                                                     (0x7f0U 
                                                      & ((IData)(
                                                                 (vlSelf->top_soc__DOT__top__DOT__r 
                                                                  >> 7U)) 
                                                         << 4U)))) 
                                     << 2U)) : ((1U 
                                                 & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                                 ? 
                                                ((QData)((IData)(
                                                                 (8U 
                                                                  | (0x7f0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__r 
                                                                                >> 7U)) 
                                                                        << 4U))))) 
                                                 << 2U)
                                                 : 
                                                ((QData)((IData)(
                                                                 (8U 
                                                                  | (0x7f0U 
                                                                     & ((IData)(
                                                                                (vlSelf->top_soc__DOT__top__DOT__r 
                                                                                >> 7U)) 
                                                                        << 4U))))) 
                                                 << 2U))));
    }
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffffbffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0xaU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0xaU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_10)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0xaU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0xaU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_10)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0xaU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_10)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0xaU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0xaU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_10)))))) 
              << 0xaU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_11 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0xaU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                >> 0xaU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_10))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffffdffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 9U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 9U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_9)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 9U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 9U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_9)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 9U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_9)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 9U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 9U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_9)))))) 
              << 9U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_10 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 9U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 9U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_9))));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_data_in 
        = (0x1fffffU & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                                >> 0xdU)));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr 
        = (0x7fU & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                            >> 6U)));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffff7ffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0xbU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0xbU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_11)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0xbU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0xbU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_11)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0xbU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_11)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0xbU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0xbU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_11)))))) 
              << 0xbU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_12 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0xbU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                >> 0xbU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_11))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffffbffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0xaU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0xaU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_10)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0xaU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0xaU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_10)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0xaU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_10)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0xaU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0xaU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_10)))))) 
              << 0xaU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_11 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0xaU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                >> 0xaU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_10))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffffefffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0xcU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0xcU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_12)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0xcU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0xcU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_12)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0xcU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_12)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0xcU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0xcU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_12)))))) 
              << 0xcU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_13 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0xcU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                >> 0xcU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_12))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffff7ffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0xbU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0xbU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_11)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0xbU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0xbU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_11)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0xbU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_11)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0xbU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0xbU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_11)))))) 
              << 0xbU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_12 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0xbU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                >> 0xbU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_11))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffffdfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0xdU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0xdU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_13)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0xdU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0xdU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_13)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0xdU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_13)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0xdU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0xdU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_13)))))) 
              << 0xdU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_14 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0xdU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                >> 0xdU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_13))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffffefffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0xcU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0xcU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_12)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0xcU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0xcU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_12)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0xcU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_12)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0xcU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0xcU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_12)))))) 
              << 0xcU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_13 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0xcU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                >> 0xcU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_12))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffffbfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0xeU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0xeU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_14)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0xeU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0xeU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_14)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0xeU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_14)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0xeU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0xeU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_14)))))) 
              << 0xeU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_15 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0xeU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                >> 0xeU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_14))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffffdfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0xdU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0xdU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_13)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0xdU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0xdU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_13)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0xdU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_13)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0xdU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0xdU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_13)))))) 
              << 0xdU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_14 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0xdU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                >> 0xdU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_13))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffff7fffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0xfU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0xfU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_15)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0xfU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0xfU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_15)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0xfU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_15)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0xfU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0xfU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_15)))))) 
              << 0xfU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_16 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0xfU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                >> 0xfU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_15))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffffbfffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0xeU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0xeU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_14)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0xeU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0xeU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_14)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0xeU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_14)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0xeU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0xeU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_14)))))) 
              << 0xeU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_15 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0xeU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                >> 0xeU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_14))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffeffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x10U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x10U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_16)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x10U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x10U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_16)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x10U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_16)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x10U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x10U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_16)))))) 
              << 0x10U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_17 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x10U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x10U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_16))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffff7fffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0xfU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0xfU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_15)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0xfU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0xfU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_15)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0xfU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_15)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0xfU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0xfU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_15)))))) 
              << 0xfU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_16 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0xfU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                >> 0xfU)) 
                                       & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_15))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffdffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x11U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x11U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_17)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x11U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x11U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_17)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x11U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_17)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x11U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x11U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_17)))))) 
              << 0x11U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_18 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x11U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x11U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_17))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffeffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x10U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x10U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_16)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x10U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x10U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_16)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x10U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x10U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_16)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x10U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x10U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_16)))))) 
              << 0x10U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_17 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x10U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x10U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_16))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffffbffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x12U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x12U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_18)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x12U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x12U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_18)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x12U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_18)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x12U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x12U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_18)))))) 
              << 0x12U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_19 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x12U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x12U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_18))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffdffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x11U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x11U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_17)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x11U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x11U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_17)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x11U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_17)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x11U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x11U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_17)))))) 
              << 0x11U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_18 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x11U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x11U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_17))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffff7ffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x13U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x13U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_19)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x13U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x13U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_19)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x13U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_19)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x13U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x13U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_19)))))) 
              << 0x13U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_20 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x13U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x13U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_19))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffffbffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x12U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x12U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_18)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x12U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x12U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_18)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x12U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_18)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x12U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x12U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_18)))))) 
              << 0x12U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_19 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x12U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x12U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_18))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffefffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x14U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x14U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_20)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x14U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x14U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_20)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x14U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_20)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x14U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x14U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_20)))))) 
              << 0x14U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_21 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x14U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x14U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_20))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffff7ffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x13U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x13U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_19)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x13U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x13U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_19)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x13U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_19)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x13U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x13U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_19)))))) 
              << 0x13U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_20 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x13U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x13U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_19))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffdfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x15U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x15U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_21)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x15U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x15U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_21)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x15U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_21)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x15U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x15U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_21)))))) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_22 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x15U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x15U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_21))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffefffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x14U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x14U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_20)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x14U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x14U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_20)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x14U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_20)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x14U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x14U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_20)))))) 
              << 0x14U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_21 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x14U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x14U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_20))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffffbfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x16U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x16U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_22)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x16U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x16U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_22)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x16U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_22)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x16U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x16U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_22)))))) 
              << 0x16U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_23 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x16U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x16U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_22))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffdfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x15U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x15U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_21)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x15U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x15U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_21)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x15U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_21)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x15U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x15U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_21)))))) 
              << 0x15U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_22 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x15U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x15U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_21))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffff7fffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x17U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x17U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_23)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x17U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x17U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_23)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x17U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_23)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x17U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x17U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_23)))))) 
              << 0x17U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_24 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x17U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x17U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_23))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffffbfffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x16U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x16U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_22)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x16U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x16U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_22)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x16U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_22)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x16U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x16U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_22)))))) 
              << 0x16U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_23 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x16U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x16U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_22))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffeffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x18U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x18U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_24)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x18U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x18U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_24)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x18U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_24)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x18U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x18U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_24)))))) 
              << 0x18U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_25 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x18U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x18U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_24))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffff7fffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x17U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x17U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_23)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x17U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x17U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_23)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x17U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_23)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x17U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x17U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_23)))))) 
              << 0x17U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_24 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x17U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x17U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_23))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffdffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x19U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x19U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_25)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x19U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x19U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_25)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x19U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_25)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x19U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x19U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_25)))))) 
              << 0x19U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_26 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x19U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x19U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_25))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffeffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x18U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x18U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_24)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x18U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x18U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_24)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x18U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_24)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x18U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x18U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_24)))))) 
              << 0x18U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_25 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x18U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x18U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_24))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffffbffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x1aU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x1aU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_26)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x1aU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x1aU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_26)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x1aU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_26)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x1aU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x1aU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_26)))))) 
              << 0x1aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_27 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x1aU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x1aU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_26))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffdffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x19U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x19U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_25)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x19U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x19U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_25)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x19U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_25)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x19U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x19U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_25)))))) 
              << 0x19U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_26 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x19U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x19U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_25))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffff7ffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x1bU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x1bU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_27)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x1bU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x1bU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_27)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x1bU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_27)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x1bU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x1bU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_27)))))) 
              << 0x1bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_28 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x1bU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x1bU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_27))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffffbffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x1aU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x1aU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_26)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x1aU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x1aU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_26)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x1aU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_26)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x1aU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x1aU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_26)))))) 
              << 0x1aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_27 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x1aU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x1aU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_26))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffefffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x1cU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x1cU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_28)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x1cU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x1cU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_28)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x1cU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_28)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x1cU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x1cU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_28)))))) 
              << 0x1cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_29 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x1cU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x1cU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_28))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffff7ffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x1bU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x1bU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_27)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x1bU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x1bU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_27)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x1bU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_27)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x1bU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x1bU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_27)))))) 
              << 0x1bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_28 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x1bU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x1bU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_27))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffdfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x1dU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x1dU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_29)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x1dU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x1dU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_29)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x1dU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_29)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x1dU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x1dU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_29)))))) 
              << 0x1dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_30 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x1dU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x1dU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_29))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffefffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x1cU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x1cU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_28)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x1cU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x1cU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_28)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x1cU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_28)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x1cU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x1cU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_28)))))) 
              << 0x1cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_29 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x1cU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x1cU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_28))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffffbfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x1eU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x1eU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_30)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x1eU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x1eU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_30)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x1eU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_30)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x1eU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x1eU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_30)))))) 
              << 0x1eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_31 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x1eU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x1eU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_30))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffdfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x1dU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x1dU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_29)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x1dU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x1dU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_29)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x1dU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_29)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x1dU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x1dU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_29)))))) 
              << 0x1dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_30 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x1dU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x1dU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_29))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffff7fffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x1fU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x1fU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_31)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x1fU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x1fU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_31)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x1fU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_31)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x1fU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x1fU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_31)))))) 
              << 0x1fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_32 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x1fU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x1fU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_31))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffffbfffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x1eU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x1eU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_30)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x1eU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x1eU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_30)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x1eU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_30)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x1eU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x1eU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_30)))))) 
              << 0x1eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_31 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x1eU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x1eU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_30))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffeffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x20U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x20U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_32)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x20U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x20U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_32)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x20U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_32)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x20U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x20U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_32)))))) 
              << 0x20U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_33 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x20U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x20U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_32))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffff7fffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x1fU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x1fU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_31)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x1fU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x1fU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_31)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x1fU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_31)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x1fU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x1fU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_31)))))) 
              << 0x1fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_32 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x1fU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x1fU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_31))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffdffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x21U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x21U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_33)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x21U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x21U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_33)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x21U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_33)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x21U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x21U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_33)))))) 
              << 0x21U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_34 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x21U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x21U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_33))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffeffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x20U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x20U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_32)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x20U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x20U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_32)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x20U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x20U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_32)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x20U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x20U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_32)))))) 
              << 0x20U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_33 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x20U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x20U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_32))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffffbffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x22U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x22U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_34)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x22U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x22U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_34)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x22U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_34)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x22U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x22U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_34)))))) 
              << 0x22U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_35 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x22U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x22U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_34))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffdffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x21U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x21U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_33)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x21U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x21U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_33)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x21U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x21U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_33)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x21U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x21U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_33)))))) 
              << 0x21U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_34 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x21U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x21U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_33))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffff7ffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x23U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x23U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_35)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x23U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x23U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_35)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x23U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_35)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x23U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x23U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_35)))))) 
              << 0x23U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_36 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x23U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x23U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_35))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffffbffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x22U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x22U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_34)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x22U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x22U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_34)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x22U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x22U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_34)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x22U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x22U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_34)))))) 
              << 0x22U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_35 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x22U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x22U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_34))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffefffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x24U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x24U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_36)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x24U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x24U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_36)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x24U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_36)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x24U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x24U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_36)))))) 
              << 0x24U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_37 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x24U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x24U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_36))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffff7ffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x23U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x23U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_35)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x23U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x23U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_35)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x23U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x23U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_35)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x23U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x23U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_35)))))) 
              << 0x23U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_36 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x23U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x23U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_35))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffdfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x25U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x25U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_37)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x25U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x25U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_37)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x25U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_37)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x25U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x25U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_37)))))) 
              << 0x25U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_38 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x25U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x25U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_37))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffefffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x24U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x24U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_36)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x24U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x24U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_36)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x24U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x24U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_36)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x24U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x24U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_36)))))) 
              << 0x24U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_37 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x24U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x24U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_36))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffffbfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x26U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x26U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_38)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x26U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x26U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_38)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x26U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_38)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x26U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x26U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_38)))))) 
              << 0x26U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_39 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x26U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x26U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_38))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffdfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x25U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x25U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_37)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x25U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x25U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_37)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x25U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x25U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_37)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x25U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x25U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_37)))))) 
              << 0x25U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_38 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x25U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x25U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_37))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffff7fffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x27U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x27U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_39)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x27U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x27U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_39)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x27U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_39)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x27U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x27U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_39)))))) 
              << 0x27U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_40 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x27U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x27U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_39))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffffbfffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x26U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x26U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_38)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x26U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x26U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_38)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x26U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x26U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_38)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x26U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x26U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_38)))))) 
              << 0x26U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_39 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x26U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x26U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_38))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffeffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x28U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x28U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_40)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x28U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x28U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_40)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x28U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_40)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x28U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x28U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_40)))))) 
              << 0x28U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_41 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x28U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x28U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_40))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffff7fffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x27U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x27U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_39)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x27U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x27U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_39)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x27U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x27U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_39)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x27U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x27U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_39)))))) 
              << 0x27U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_40 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x27U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x27U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_39))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffdffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x29U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x29U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_41)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x29U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x29U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_41)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x29U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_41)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x29U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x29U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_41)))))) 
              << 0x29U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_42 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x29U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x29U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_41))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffeffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x28U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x28U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_40)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x28U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x28U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_40)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x28U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x28U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_40)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x28U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x28U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_40)))))) 
              << 0x28U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_41 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x28U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x28U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_40))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffffbffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x2aU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x2aU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_42)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x2aU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x2aU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_42)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x2aU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_42)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x2aU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x2aU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_42)))))) 
              << 0x2aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_43 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x2aU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x2aU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_42))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffdffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x29U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x29U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_41)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x29U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x29U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_41)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x29U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x29U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_41)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x29U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x29U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_41)))))) 
              << 0x29U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_42 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x29U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x29U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_41))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffff7ffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x2bU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x2bU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_43)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x2bU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x2bU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_43)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x2bU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_43)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x2bU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x2bU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_43)))))) 
              << 0x2bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_44 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x2bU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x2bU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_43))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffffbffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x2aU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x2aU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_42)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x2aU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x2aU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_42)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x2aU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x2aU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_42)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x2aU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x2aU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_42)))))) 
              << 0x2aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_43 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x2aU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x2aU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_42))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffefffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x2cU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x2cU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_44)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x2cU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x2cU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_44)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x2cU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_44)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x2cU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x2cU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_44)))))) 
              << 0x2cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_45 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x2cU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x2cU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_44))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffff7ffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x2bU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x2bU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_43)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x2bU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x2bU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_43)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x2bU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x2bU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_43)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x2bU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x2bU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_43)))))) 
              << 0x2bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_44 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x2bU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x2bU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_43))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffdfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x2dU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x2dU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_45)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x2dU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x2dU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_45)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x2dU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_45)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x2dU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x2dU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_45)))))) 
              << 0x2dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_46 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x2dU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x2dU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_45))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffefffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x2cU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x2cU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_44)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x2cU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x2cU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_44)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x2cU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x2cU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_44)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x2cU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x2cU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_44)))))) 
              << 0x2cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_45 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x2cU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x2cU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_44))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffffbfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x2eU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x2eU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_46)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x2eU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x2eU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_46)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x2eU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_46)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x2eU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x2eU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_46)))))) 
              << 0x2eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_47 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x2eU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x2eU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_46))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffdfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x2dU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x2dU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_45)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x2dU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x2dU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_45)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x2dU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x2dU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_45)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x2dU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x2dU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_45)))))) 
              << 0x2dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_46 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x2dU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x2dU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_45))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffff7fffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x2fU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x2fU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_47)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x2fU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x2fU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_47)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x2fU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_47)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x2fU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x2fU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_47)))))) 
              << 0x2fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_48 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x2fU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x2fU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_47))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffffbfffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x2eU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x2eU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_46)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x2eU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x2eU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_46)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x2eU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x2eU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_46)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x2eU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x2eU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_46)))))) 
              << 0x2eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_47 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x2eU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x2eU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_46))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffeffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x30U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x30U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_48)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x30U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x30U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_48)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x30U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_48)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x30U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x30U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_48)))))) 
              << 0x30U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_49 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x30U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x30U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_48))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffff7fffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x2fU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x2fU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_47)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x2fU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x2fU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_47)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x2fU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x2fU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_47)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x2fU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x2fU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_47)))))) 
              << 0x2fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_48 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x2fU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x2fU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_47))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffdffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x31U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x31U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_49)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x31U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x31U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_49)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x31U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_49)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x31U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x31U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_49)))))) 
              << 0x31U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_50 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x31U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x31U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_49))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffeffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x30U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x30U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_48)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x30U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x30U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_48)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x30U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x30U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_48)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x30U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x30U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_48)))))) 
              << 0x30U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_49 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x30U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x30U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_48))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfffbffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x32U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x32U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_50)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x32U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x32U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_50)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x32U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_50)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x32U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x32U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_50)))))) 
              << 0x32U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_51 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x32U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x32U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_50))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffdffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x31U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x31U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_49)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x31U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x31U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_49)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x31U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x31U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_49)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x31U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x31U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_49)))))) 
              << 0x31U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_50 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x31U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x31U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_49))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfff7ffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x33U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x33U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_51)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x33U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x33U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_51)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x33U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_51)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x33U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x33U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_51)))))) 
              << 0x33U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_52 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x33U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x33U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_51))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfffbffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x32U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x32U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_50)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x32U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x32U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_50)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x32U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x32U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_50)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x32U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x32U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_50)))))) 
              << 0x32U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_51 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x32U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x32U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_50))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffefffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x34U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x34U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_52)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x34U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x34U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_52)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x34U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_52)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x34U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x34U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_52)))))) 
              << 0x34U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_53 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x34U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x34U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_52))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfff7ffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x33U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x33U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_51)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x33U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x33U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_51)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x33U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x33U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_51)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x33U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x33U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_51)))))) 
              << 0x33U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_52 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x33U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x33U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_51))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffdfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x35U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x35U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_53)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x35U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x35U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_53)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x35U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_53)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x35U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x35U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_53)))))) 
              << 0x35U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_54 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x35U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x35U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_53))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffefffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x34U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x34U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_52)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x34U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x34U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_52)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x34U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x34U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_52)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x34U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x34U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_52)))))) 
              << 0x34U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_53 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x34U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x34U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_52))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xffbfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x36U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x36U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_54)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x36U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x36U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_54)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x36U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_54)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x36U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x36U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_54)))))) 
              << 0x36U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_55 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x36U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x36U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_54))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffdfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x35U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x35U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_53)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x35U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x35U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_53)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x35U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x35U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_53)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x35U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x35U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_53)))))) 
              << 0x35U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_54 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x35U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x35U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_53))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xff7fffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x37U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x37U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_55)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x37U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x37U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_55)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x37U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_55)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x37U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x37U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_55)))))) 
              << 0x37U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_56 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x37U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x37U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_55))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xffbfffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x36U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x36U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_54)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x36U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x36U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_54)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x36U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x36U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_54)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x36U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x36U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_54)))))) 
              << 0x36U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_55 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x36U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x36U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_54))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfeffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x38U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x38U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_56)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x38U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x38U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_56)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x38U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_56)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x38U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x38U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_56)))))) 
              << 0x38U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_57 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x38U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x38U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_56))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xff7fffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x37U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x37U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_55)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x37U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x37U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_55)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x37U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x37U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_55)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x37U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x37U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_55)))))) 
              << 0x37U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_56 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x37U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x37U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_55))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfdffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x39U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x39U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_57)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x39U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x39U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_57)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x39U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_57)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x39U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x39U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_57)))))) 
              << 0x39U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_58 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x39U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x39U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_57))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfeffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x38U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x38U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_56)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x38U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x38U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_56)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x38U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x38U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_56)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x38U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x38U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_56)))))) 
              << 0x38U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_57 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x38U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x38U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_56))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xfbffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x3aU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x3aU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_58)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x3aU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x3aU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_58)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x3aU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_58)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x3aU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x3aU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_58)))))) 
              << 0x3aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_59 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x3aU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x3aU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_58))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfdffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x39U))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x39U))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_57)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x39U))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x39U)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_57)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x39U)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x39U))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_57)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x39U)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x39U)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_57)))))) 
              << 0x39U));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_58 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x39U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x39U)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_57))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xf7ffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x3bU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x3bU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_59)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x3bU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x3bU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_59)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x3bU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_59)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x3bU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x3bU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_59)))))) 
              << 0x3bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_60 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x3bU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x3bU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_59))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xfbffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x3aU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x3aU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_58)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x3aU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x3aU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_58)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x3aU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x3aU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_58)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x3aU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x3aU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_58)))))) 
              << 0x3aU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_59 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x3aU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x3aU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_58))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xefffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x3cU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x3cU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_60)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x3cU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x3cU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_60)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x3cU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_60)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x3cU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x3cU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_60)))))) 
              << 0x3cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_61 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x3cU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x3cU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_60))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xf7ffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x3bU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x3bU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_59)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x3bU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x3bU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_59)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x3bU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x3bU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_59)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x3bU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x3bU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_59)))))) 
              << 0x3bU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_60 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x3bU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x3bU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_59))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xdfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x3dU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x3dU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_61)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x3dU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x3dU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_61)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x3dU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_61)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x3dU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x3dU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_61)))))) 
              << 0x3dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_62 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x3dU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x3dU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_61))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xefffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x3cU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x3cU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_60)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x3cU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x3cU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_60)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x3cU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x3cU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_60)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x3cU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x3cU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_60)))))) 
              << 0x3cU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_61 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x3cU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x3cU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_60))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0xbfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x3eU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x3eU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_62)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x3eU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x3eU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_62)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x3eU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_62)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x3eU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x3eU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_62)))))) 
              << 0x3eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_63 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x3eU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x3eU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_62))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xdfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x3dU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x3dU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_61)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x3dU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x3dU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_61)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x3dU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x3dU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_61)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x3dU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x3dU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_61)))))) 
              << 0x3dU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_62 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x3dU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x3dU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_61))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_64 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__g 
                          >> 0x3fU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__p 
                                                 >> 0x3fU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_63))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
        = ((0x7fffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                     >> 0x3fU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                    >> 0x3fU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_63)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                       >> 0x3fU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                         >> 0x3fU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_63)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                     >> 0x3fU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_63)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                  >> 0x3fU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                       >> 0x3fU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__c_63)))))) 
              << 0x3fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0xbfffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x3eU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x3eU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_62)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x3eU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x3eU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_62)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x3eU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x3eU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_62)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x3eU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x3eU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_62)))))) 
              << 0x3eU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_63 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 0x3eU)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                 >> 0x3eU)) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_62))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__slt_b 
        = (QData)((IData)((1U & (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                           >> 0x3fU)) 
                                  & (~ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                >> 0x3fU)))) 
                                 | ((~ ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs1_sw 
                                                 >> 0x3fU)) 
                                        ^ (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__rs2_sw 
                                                   >> 0x3fU)))) 
                                    & (IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_b__DOT__add1__DOT__s 
                                               >> 0x3fU)))))));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
        = ((0x7fffffffffffffffULL & vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s) 
           | ((QData)((IData)((1U & ((((((~ (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                     >> 0x3fU))) 
                                         & (IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                    >> 0x3fU))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_63)) 
                                       | (((~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                       >> 0x3fU))) 
                                           & (~ (IData)(
                                                        (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                         >> 0x3fU)))) 
                                          & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_63)))) 
                                      | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                   >> 0x3fU)) 
                                          & (IData)(
                                                    (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                     >> 0x3fU))) 
                                         & (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_63)))) 
                                     | (((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                  >> 0x3fU)) 
                                         & (~ (IData)(
                                                      (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                       >> 0x3fU)))) 
                                        & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_63)))))) 
              << 0x3fU));
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_out 
        = ((0x100U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
            ? ((0x80U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                ? ((0x40U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                    ? ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__div_w_r)
                        ? ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__sign_r))
                            ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[0U])))
                            : (1ULL + (0xffffffff00000000ULL 
                                       | (QData)((IData)(
                                                         (~ 
                                                          vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[0U]))))))
                        : ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__sign_r))
                            ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[0U])))
                            : (1ULL + (~ (((QData)((IData)(
                                                           vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__add_in1_r[0U])))))))
                    : ((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__div_w_r)
                        ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__sign_r))
                            ? vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans
                            : (1ULL + (0xffffffff00000000ULL 
                                       | (QData)((IData)(
                                                         (~ (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans)))))))
                        : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__sign_r))
                            ? vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans
                            : (1ULL + (~ vlSelf->top_soc__DOT__top__DOT__exu__DOT__div__DOT__ans)))))
                : ((0x40U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                    ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[2U])))
                    : ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                        ? (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[2U])))
                        : (((QData)((IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top_soc__DOT__top__DOT__exu__DOT__mul__DOT__result_signed[0U]))))))
            : ((0x80U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                ? ((0x40U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                    ? ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                        ? (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                           & vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1)
                        : (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                           | vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1))
                    : ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                        ? ((1U & ((vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                   >> 0xbU) | (vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U] 
                                               >> 0xcU)))
                            ? vlSelf->top_soc__DOT__top__DOT__exu__DOT__shift_arw
                            : vlSelf->top_soc__DOT__top__DOT__exu__DOT__shift_srl)
                        : (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                           ^ vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1)))
                : ((0x40U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                    ? ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                        ? (QData)((IData)((1U & (~ 
                                                 ((IData)(
                                                          (vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                                                           >> 0x3fU)) 
                                                  | ((IData)(
                                                             (vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                                              >> 0x3fU)) 
                                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_63)))))))
                        : (QData)((IData)((1U & (((IData)(
                                                          (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                           >> 0x3fU)) 
                                                  & (~ (IData)(
                                                               (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                                >> 0x3fU)))) 
                                                 | ((~ 
                                                     ((IData)(
                                                              (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in1_1 
                                                               >> 0x3fU)) 
                                                      ^ (IData)(
                                                                (vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_in2_1 
                                                                 >> 0x3fU)))) 
                                                    & (IData)(
                                                              (vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__s 
                                                               >> 0x3fU))))))))
                    : ((0x20U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__exu__dc_ex[0U])
                        ? vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_sll
                        : vlSelf->top_soc__DOT__top__DOT__exu__DOT__alu_add))));
}
