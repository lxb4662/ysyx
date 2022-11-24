// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp500;
    VlWide<4>/*127:0*/ __Vtemp501;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__stop_1));
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__stop_2));
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__skip_1));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__skip_2));
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__pc_dut1),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__pc_dut2),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__pc_dut3),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__pc_dut4),64);
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__pipe3_allowin));
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__exu_en));
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__stage1__DOT__rs1_w),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__stage1__DOT__rs2_w),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__pc),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__imm),64);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__func3),3);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__func7),7);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__pc_out),64);
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__jal));
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__jalr));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__b));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__lui));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__auipc));
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__rd_addr),5);
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__rd_w_en));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__alu_in1_sel));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__alu_in2_sel));
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__alu_opcode),7);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__rd_o_exu),64);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__rdr_o_exu),5);
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__rd_w_o_exu));
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__rd_o_lsu),64);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__rdr_o_lsu),5);
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__rd_w_o_lsu));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__lsu_en));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__pri_en));
            tracep->chgSData(oldp+46,(vlSelf->top__DOT__csr_addr),12);
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__csrr));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__stage_valid_1));
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__rs1_addr),5);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__rs2_addr),5);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__rdr_o_pri),5);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__rd_o_pri),64);
            tracep->chgQData(oldp+54,((((IData)(vlSelf->top__DOT__b) 
                                        | (IData)(vlSelf->top__DOT__jal))
                                        ? (vlSelf->top__DOT__pc_out 
                                           + vlSelf->top__DOT__imm)
                                        : (vlSelf->top__DOT__lsu__DOT__rs1 
                                           + vlSelf->top__DOT__imm))),64);
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__jup_exu));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__exu__DOT__aluf__DOT__ready_d));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__pipe3_allowin_lsu));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__lsu_w));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__skip_ref));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__mret));
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__mtvec_wire),64);
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__rd_w_o_pri));
            tracep->chgQData(oldp+66,(((0x10U & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                        ? ((8U & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                            ? 0ULL : 
                                           ((4U & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                             ? 0ULL
                                             : ((2U 
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
                                        : 0ULL)),64);
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__axi_0_ar_valid));
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__axi_0_ar_ready));
            tracep->chgIData(oldp+70,(vlSelf->top__DOT__axi_0_r_data),32);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__axi_0_r_valid));
            tracep->chgQData(oldp+72,(((0x10U & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                        ? 0ULL : ((8U 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                   ? 
                                                  ((4U 
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
                                                   : 0ULL))),64);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__axi_0_aw_valid));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__axi_0_aw_ready));
            tracep->chgIData(oldp+76,(((8U & (IData)(vlSelf->top__DOT__icache__DOT__write_fsm))
                                        ? 0U : ((4U 
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
                                                   : 0U))))),32);
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__axi_0_w_valid));
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__axi_0_w_ready));
            tracep->chgBit(oldp+79,(((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)) 
                                     & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid))));
            tracep->chgCData(oldp+80,(((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid))
                                        ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp)
                                        : 0U)),2);
            tracep->chgQData(oldp+81,(((0x10U & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                        ? ((8U & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                            ? 0ULL : 
                                           ((4U & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                             ? 0ULL
                                             : ((2U 
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
                                        : 0ULL)),64);
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__axi_1_ar_valid));
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__axi_1_ar_ready));
            tracep->chgIData(oldp+85,(vlSelf->top__DOT__axi_1_r_data),32);
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__axi_1_r_valid));
            tracep->chgQData(oldp+87,(((0x10U & (IData)(vlSelf->top__DOT__dcache__DOT__status))
                                        ? 0ULL : ((8U 
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
                                                   : 0ULL))),64);
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__axi_1_aw_valid));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__axi_1_aw_ready));
            tracep->chgIData(oldp+91,(((8U & (IData)(vlSelf->top__DOT__dcache__DOT__write_fsm))
                                        ? 0U : ((4U 
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
                                                   : 0U))))),32);
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__axi_1_w_valid));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__axi_1_w_ready));
            tracep->chgBit(oldp+94,(((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)) 
                                     & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid))));
            tracep->chgCData(oldp+95,(((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid))
                                        ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp)
                                        : 0U)),2);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__axi_2_ar_addr),64);
            tracep->chgBit(oldp+98,((1U == (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm))));
            tracep->chgBit(oldp+99,(((1U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel)) 
                                     & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready))));
            tracep->chgIData(oldp+100,(((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                         ? vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata
                                         : 0U)),32);
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__axi_2_r_valid));
            tracep->chgBit(oldp+102,((2U == (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm))));
            tracep->chgQData(oldp+103,((QData)((IData)(vlSelf->top__DOT__dcache_addr))),64);
            tracep->chgBit(oldp+105,((1U == (IData)(vlSelf->top__DOT__peripheral__DOT__write_fsm))));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__axi_2_aw_ready));
            tracep->chgIData(oldp+107,((IData)(vlSelf->top__DOT__lsu__DOT__rs2)),32);
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__axi_2_w_ready));
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__axi_2_b_valid));
            tracep->chgCData(oldp+110,(((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid))
                                         ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp)
                                         : 0U)),2);
            tracep->chgCData(oldp+111,(((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                                  ? 2U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                                   ? 3U
                                                   : 0U)))),4);
            tracep->chgCData(oldp+112,(((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                                   ? 1U
                                                   : 0U)))),2);
            tracep->chgCData(oldp+113,(((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                                  ? 2U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__interconnect1__DOT__ar_sel))
                                                   ? 2U
                                                   : 0U)))),3);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__axi_3_ar_addr),64);
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__axi_3_ar_valid));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arready));
            tracep->chgIData(oldp+118,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rdata),32);
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rvalid));
            tracep->chgBit(oldp+120,(((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                      | ((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                         | ((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                            & (2U == (IData)(vlSelf->top__DOT__peripheral__DOT__read_fsm)))))));
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid),4);
            tracep->chgCData(oldp+122,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp),2);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__axi_3_aw_addr),64);
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__axi_3_aw_valid));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready));
            tracep->chgCData(oldp+127,(((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                                   ? 3U
                                                   : 0U)))),4);
            tracep->chgCData(oldp+128,(((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                         ? 1U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                                   ? 1U
                                                   : 0U)))),2);
            tracep->chgCData(oldp+129,(((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                                  ? 2U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__interconnect1__DOT__aw_sel))
                                                   ? 2U
                                                   : 0U)))),3);
            tracep->chgIData(oldp+130,(vlSelf->top__DOT__axi_3_w_data),32);
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__axi_3_w_valid));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready));
            tracep->chgBit(oldp+133,(((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                       ? (IData)(vlSelf->top__DOT__axi_0_w_valid)
                                       : ((2U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                           ? (IData)(vlSelf->top__DOT__axi_1_w_valid)
                                           : ((1U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel)) 
                                              & (1U 
                                                 == (IData)(vlSelf->top__DOT__peripheral__DOT__write_fsm)))))));
            tracep->chgCData(oldp+134,(((4U == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                         ? 0xfU : (
                                                   (2U 
                                                    == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                                    ? 0xfU
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__interconnect1__DOT__w_sel))
                                                     ? 0xfU
                                                     : 0U)))),4);
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__axi_3_b_ready));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bvalid));
            tracep->chgCData(oldp+137,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bresp),2);
            tracep->chgCData(oldp+138,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid),4);
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__rw_valid_i));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__rw_write_i));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__rw_valid_o));
            tracep->chgIData(oldp+142,(vlSelf->top__DOT__data_read_o),32);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__dcache_addr),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__stage1__DOT__next_pc),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__icache__DOT__read_shift),64);
            tracep->chgBit(oldp+149,(vlSelf->top__DOT__icache_valid));
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__icache_valid_o));
            tracep->chgBit(oldp+151,((0U == (IData)(vlSelf->top__DOT__icache__DOT__status))));
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__rd_second_stage),64);
            tracep->chgCData(oldp+154,(vlSelf->top__DOT__rdr_second_stage),5);
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__rs1_sel));
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__rs2_sel));
            tracep->chgCData(oldp+157,(vlSelf->top__DOT__stall),4);
            tracep->chgBit(oldp+158,((1U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))));
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__jup_addr_c),64);
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__dcache_read));
            tracep->chgBit(oldp+162,(vlSelf->top__DOT__dcache_write));
            tracep->chgCData(oldp+163,((3U & (IData)(vlSelf->top__DOT__func3))),2);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__lsu__DOT__rs2),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__dcache__DOT__read_shift),64);
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__dcache_valid));
            tracep->chgBit(oldp+169,((0U == (IData)(vlSelf->top__DOT__dcache__DOT__status))));
            tracep->chgIData(oldp+170,((IData)(vlSelf->top__DOT__icache__DOT__read_shift)),32);
            tracep->chgBit(oldp+171,((1U & (IData)(vlSelf->top__DOT__stall))));
            tracep->chgBit(oldp+172,((1U & ((IData)(vlSelf->top__DOT__stall) 
                                            >> 1U))));
            tracep->chgBit(oldp+173,(vlSelf->top__DOT__stage1__DOT__w));
            tracep->chgQData(oldp+174,(((IData)(vlSelf->top__DOT__rd_w_o_exu)
                                         ? vlSelf->top__DOT__rd_o_exu
                                         : ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                             ? vlSelf->top__DOT__rd_o_lsu
                                             : vlSelf->top__DOT__rd_o_pri))),64);
            tracep->chgCData(oldp+176,(((IData)(vlSelf->top__DOT__rd_w_o_exu)
                                         ? (IData)(vlSelf->top__DOT__rdr_o_exu)
                                         : ((IData)(vlSelf->top__DOT__rd_w_o_lsu)
                                             ? (IData)(vlSelf->top__DOT__rdr_o_lsu)
                                             : (IData)(vlSelf->top__DOT__rdr_o_pri)))),5);
            tracep->chgBit(oldp+177,((((IData)(vlSelf->top__DOT__rd_w_o_exu) 
                                       | (IData)(vlSelf->top__DOT__rd_w_o_lsu)) 
                                      | (IData)(vlSelf->top__DOT__rd_w_o_pri))));
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs
                                       [0xaU]),64);
            tracep->chgQData(oldp+180,(((8U & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel))
                                         ? 0ULL : (
                                                   (4U 
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
                                                      : 0ULL))))),64);
            tracep->chgCData(oldp+182,(((0x73U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift))
                                         ? 0x11U : 
                                        (0x1fU & (IData)(
                                                         (vlSelf->top__DOT__icache__DOT__read_shift 
                                                          >> 0xfU))))),5);
            tracep->chgCData(oldp+183,((0x1fU & (IData)(
                                                        (vlSelf->top__DOT__icache__DOT__read_shift 
                                                         >> 0x14U)))),5);
            tracep->chgCData(oldp+184,((0x1fU & (IData)(
                                                        (vlSelf->top__DOT__icache__DOT__read_shift 
                                                         >> 7U)))),5);
            tracep->chgBit(oldp+185,(((((((((IData)(vlSelf->top__DOT__stage1__DOT__i_type) 
                                            | (IData)(vlSelf->top__DOT__stage1__DOT__r_type)) 
                                           | (3U == 
                                              (0x7fU 
                                               & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                          | (0x6fU 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                         | (0x67U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                        | (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__u_type)) 
                                       | (IData)(vlSelf->top__DOT__stage1__DOT__w_type)) 
                                      | (IData)(vlSelf->top__DOT__stage1__DOT__csrr_wire))));
            tracep->chgBit(oldp+186,(((((((IData)(vlSelf->top__DOT__stage1__DOT__i_type) 
                                          | (IData)(vlSelf->top__DOT__stage1__DOT__r_type)) 
                                         | (0x63U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                        | (0x6fU == 
                                           (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                       | (0x67U == 
                                          (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                      | (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__u_type))));
            tracep->chgBit(oldp+187,(((3U == (0x7fU 
                                              & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                      | (0x23U == (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))))));
            tracep->chgCData(oldp+188,(((0x17U == (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))
                                         ? 0x20U : 
                                        (((IData)(vlSelf->top__DOT__stage1__DOT__w_type) 
                                          << 6U) | 
                                         (((IData)(vlSelf->top__DOT__stage1__DOT__i_type) 
                                           << 5U) | 
                                          (((((IData)(
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
                                                            >> 0xcU))))))))),7);
            tracep->chgBit(oldp+189,((0x17U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgBit(oldp+190,((0x100073U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
            tracep->chgBit(oldp+191,(vlSelf->top__DOT__stage1__DOT__i_type));
            tracep->chgBit(oldp+192,(vlSelf->top__DOT__stage1__DOT__r_type));
            tracep->chgBit(oldp+193,((0x63U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__stage1__DOT__w_type));
            tracep->chgBit(oldp+195,((0x6fU == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgBit(oldp+196,((3U == (0x7fU 
                                             & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgBit(oldp+197,((0x67U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgBit(oldp+198,((0x23U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgBit(oldp+199,((0x37U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgCData(oldp+200,((7U & (IData)(
                                                     (vlSelf->top__DOT__icache__DOT__read_shift 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+201,((0x7fU & (IData)(
                                                        (vlSelf->top__DOT__icache__DOT__read_shift 
                                                         >> 0x19U)))),7);
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__stage1__DOT__csrr_wire));
            tracep->chgSData(oldp+203,((0xfffU & (IData)(
                                                         (vlSelf->top__DOT__icache__DOT__read_shift 
                                                          >> 0x14U)))),12);
            tracep->chgBit(oldp+204,((0x30200073U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
            tracep->chgBit(oldp+205,((0x73U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift))));
            tracep->chgBit(oldp+206,((((0x73U == (IData)(vlSelf->top__DOT__icache__DOT__read_shift)) 
                                       | (0x30200073U 
                                          == (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                      | (IData)(vlSelf->top__DOT__stage1__DOT__csrr_wire))));
            tracep->chgBit(oldp+207,(((0x6fU == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                      | (0x63U == (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))))));
            tracep->chgBit(oldp+208,((((((0x13U == 
                                          (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                         | (0x1bU == 
                                            (0x7fU 
                                             & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                        | (0x67U == 
                                           (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                       | (0x6fU == 
                                          (0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                      | (0x63U == (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))))));
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[0]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[1]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[2]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[3]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[4]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[5]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[6]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[7]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[8]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[9]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[10]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[11]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[12]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[13]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[14]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[15]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[16]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[17]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[18]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[19]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[20]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[21]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[22]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[23]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[24]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[25]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[26]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[27]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[28]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[29]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[30]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__stage1__DOT__regs__DOT__regs[31]),64);
            tracep->chgCData(oldp+273,((0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))),7);
            tracep->chgBit(oldp+274,(((IData)(((0x40000000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->top__DOT__icache__DOT__read_shift)) 
                                               & ((0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                                  | (0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))))) 
                                      | (IData)(((0x40005000ULL 
                                                  == 
                                                  (0xfe007000ULL 
                                                   & vlSelf->top__DOT__icache__DOT__read_shift)) 
                                                 & ((((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                                      | (0x33U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                                     | (0x3bU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                                    | (0x1bU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))))))));
            tracep->chgBit(oldp+275,((IData)((0x2000033ULL 
                                              == (0xfe00007fULL 
                                                  & vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__stage1__DOT__decode__DOT__u_type));
            tracep->chgBit(oldp+277,((0x3bU == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgBit(oldp+278,((0x1bU == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgCData(oldp+279,(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode_sel),4);
            tracep->chgBit(oldp+280,(((IData)((0x40000033ULL 
                                               == (0xfe00707fULL 
                                                   & vlSelf->top__DOT__icache__DOT__read_shift))) 
                                      | (IData)((0x4000003bULL 
                                                 == 
                                                 (0xfe00707fULL 
                                                  & vlSelf->top__DOT__icache__DOT__read_shift))))));
            tracep->chgBit(oldp+281,(((IData)((0x40005000ULL 
                                               == (0xfc007000ULL 
                                                   & vlSelf->top__DOT__icache__DOT__read_shift))) 
                                      & ((((0x33U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->top__DOT__icache__DOT__read_shift))) 
                                           | (0x3bU 
                                              == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                          | (0x13U 
                                             == (0x7fU 
                                                 & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))) 
                                         | (0x1bU == 
                                            (0x7fU 
                                             & (IData)(vlSelf->top__DOT__icache__DOT__read_shift)))))));
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__stage1__DOT__decode__DOT__m));
            tracep->chgBit(oldp+283,((IData)((0x200003bULL 
                                              == (0xfe00007fULL 
                                                  & vlSelf->top__DOT__icache__DOT__read_shift)))));
            tracep->chgSData(oldp+284,(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_s),12);
            tracep->chgSData(oldp+285,(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_b),12);
            tracep->chgIData(oldp+286,(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_jal),20);
            tracep->chgIData(oldp+287,((0xfffffU & (IData)(
                                                           (vlSelf->top__DOT__icache__DOT__read_shift 
                                                            >> 0xcU)))),20);
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode__DOT__ext_imm_iljalr),64);
            tracep->chgQData(oldp+290,((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_s) 
                                                                >> 0xbU))))) 
                                         << 0xcU) | (QData)((IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_s)))),64);
            tracep->chgQData(oldp+292,(((((0x800U & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_b))
                                           ? 0x7ffffffffffffULL
                                           : 0ULL) 
                                         << 0xdU) | (QData)((IData)(
                                                                    ((IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_b) 
                                                                     << 1U))))),64);
            tracep->chgQData(oldp+294,(((((0x80000U 
                                           & vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_jal)
                                           ? 0x7ffffffffffULL
                                           : 0ULL) 
                                         << 0x15U) 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__stage1__DOT__decode__DOT____Vcellinp__imm_decode__imm_jal 
                                                           << 1U))))),64);
            tracep->chgQData(oldp+296,((((QData)((IData)(
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
                                                           << 0xcU))))),64);
            tracep->chgQData(oldp+298,((QData)((IData)(
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__stage1__DOT__decode__DOT__imm_decode__DOT__ext_imm_iljalr))))),64);
            tracep->chgBit(oldp+300,(vlSelf->top__DOT____Vcellinp__exu__exu_en));
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__lsu__DOT__rs1),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__exu__DOT__rs2),64);
            tracep->chgQData(oldp+305,(((IData)(vlSelf->top__DOT__auipc)
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
                                                  : vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r))))),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__exu__DOT__alu_in1_w1),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__exu__DOT__alu_in2_w1),64);
            tracep->chgQData(oldp+311,((((IData)(vlSelf->top__DOT__jal) 
                                         | (IData)(vlSelf->top__DOT__jalr))
                                         ? (4ULL + vlSelf->top__DOT__pc_out)
                                         : ((0x40U 
                                             & (IData)(vlSelf->top__DOT__alu_opcode))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r)))
                                             : vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r))),64);
            tracep->chgQData(oldp+313,(((IData)(vlSelf->top__DOT__lui)
                                         ? vlSelf->top__DOT__imm
                                         : (((IData)(vlSelf->top__DOT__jal) 
                                             | (IData)(vlSelf->top__DOT__jalr))
                                             ? (4ULL 
                                                + vlSelf->top__DOT__pc_out)
                                             : ((0x40U 
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
                                                 : vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r)))),64);
            tracep->chgQData(oldp+315,(((0x40U & (IData)(vlSelf->top__DOT__alu_opcode))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r)))
                                         : vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r)),64);
            tracep->chgBit(oldp+317,((1U & ((~ ((((0x1cU 
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
                                               == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))))));
            tracep->chgQData(oldp+318,(vlSelf->top__DOT__exu__DOT__eq_b),64);
            tracep->chgQData(oldp+320,(((1ULL == vlSelf->top__DOT__exu__DOT__eq_b)
                                         ? 0ULL : 1ULL)),64);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__exu__DOT__slt_b),64);
            tracep->chgQData(oldp+324,(((1ULL == vlSelf->top__DOT__exu__DOT__slt_b)
                                         ? 0ULL : 1ULL)),64);
            tracep->chgQData(oldp+326,(((vlSelf->top__DOT__lsu__DOT__rs1 
                                         < vlSelf->top__DOT__exu__DOT__rs2)
                                         ? 1ULL : 0ULL)),64);
            tracep->chgQData(oldp+328,(((vlSelf->top__DOT__lsu__DOT__rs1 
                                         < vlSelf->top__DOT__exu__DOT__rs2)
                                         ? 0ULL : 1ULL)),64);
            tracep->chgQData(oldp+330,(((4U & (IData)(vlSelf->top__DOT__func3))
                                         ? ((2U & (IData)(vlSelf->top__DOT__func3))
                                             ? ((1U 
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
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__func3))
                                                 ? 
                                                ((1ULL 
                                                  == vlSelf->top__DOT__exu__DOT__slt_b)
                                                  ? 0ULL
                                                  : 1ULL)
                                                 : vlSelf->top__DOT__exu__DOT__slt_b))
                                         : ((2U & (IData)(vlSelf->top__DOT__func3))
                                             ? 0ULL
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__func3))
                                                 ? 
                                                ((1ULL 
                                                  == vlSelf->top__DOT__exu__DOT__eq_b)
                                                  ? 0ULL
                                                  : 1ULL)
                                                 : vlSelf->top__DOT__exu__DOT__eq_b)))),64);
            tracep->chgBit(oldp+332,((3U == (3U & ((IData)(vlSelf->top__DOT__alu_opcode) 
                                                   >> 3U)))));
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__s),64);
            tracep->chgQData(oldp+335,((VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__exu__DOT__alu_in1_w1, vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                         ? 1ULL : 0ULL)),64);
            tracep->chgQData(oldp+337,(((vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                         < vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                         ? 1ULL : 0ULL)),64);
            tracep->chgQData(oldp+339,((vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel)),64);
            tracep->chgQData(oldp+341,((vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                        | vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel)),64);
            tracep->chgQData(oldp+343,(vlSelf->top__DOT__exu__DOT__aluf__DOT__isll),64);
            tracep->chgQData(oldp+345,(((0x40U & (IData)(vlSelf->top__DOT__alu_opcode))
                                         ? vlSelf->top__DOT__exu__DOT__aluf__DOT__israw
                                         : vlSelf->top__DOT__exu__DOT__aluf__DOT__isar_l)),64);
            tracep->chgQData(oldp+347,(vlSelf->top__DOT__exu__DOT__aluf__DOT__isrl),64);
            tracep->chgQData(oldp+349,((vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel 
                                        ^ vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel)),64);
            tracep->chgQData(oldp+351,(VL_MULS_QQQ(64,64,64, vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel, vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel)),64);
            tracep->chgQData(oldp+353,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__q_signed),64);
            tracep->chgQData(oldp+355,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__r_signed),64);
            tracep->chgBit(oldp+357,((1U & ((IData)(vlSelf->top__DOT__alu_opcode) 
                                            >> 6U))));
            tracep->chgBit(oldp+358,((1U & ((IData)(vlSelf->top__DOT__alu_opcode) 
                                            >> 4U))));
            tracep->chgQData(oldp+359,((QData)((IData)(vlSelf->top__DOT__exu__DOT__alu_in1_w1))),64);
            tracep->chgQData(oldp+361,((QData)((IData)(vlSelf->top__DOT__exu__DOT__alu_in2_w1))),64);
            tracep->chgQData(oldp+363,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1),64);
            tracep->chgQData(oldp+365,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2_w_sel),64);
            tracep->chgQData(oldp+367,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2),64);
            tracep->chgQData(oldp+369,(vlSelf->top__DOT__exu__DOT__aluf__DOT__in1_w_sel),64);
            tracep->chgQData(oldp+371,(vlSelf->top__DOT__exu__DOT__aluf__DOT__in2_w_sel),64);
            tracep->chgCData(oldp+373,(((4U & (IData)(vlSelf->top__DOT__alu_opcode))
                                         ? 3U : ((2U 
                                                  & (IData)(vlSelf->top__DOT__alu_opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__alu_opcode))
                                                   ? 0U
                                                   : 2U)
                                                  : 3U))),2);
            tracep->chgQData(oldp+374,(vlSelf->top__DOT__exu__DOT__aluf__DOT__israw),64);
            tracep->chgQData(oldp+376,(vlSelf->top__DOT__exu__DOT__aluf__DOT__isar_l),64);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__exu__DOT__aluf__DOT__out_r),64);
            tracep->chgBit(oldp+380,((0x41U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))));
            tracep->chgBit(oldp+381,((0U == (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm))));
            tracep->chgQData(oldp+382,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__g),64);
            tracep->chgQData(oldp+384,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__p),64);
            tracep->chgBit(oldp+386,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1));
            tracep->chgBit(oldp+387,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2));
            tracep->chgBit(oldp+388,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3));
            tracep->chgBit(oldp+389,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4));
            tracep->chgBit(oldp+390,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5));
            tracep->chgBit(oldp+391,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6));
            tracep->chgBit(oldp+392,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7));
            tracep->chgBit(oldp+393,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8));
            tracep->chgBit(oldp+394,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9));
            tracep->chgBit(oldp+395,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10));
            tracep->chgBit(oldp+396,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11));
            tracep->chgBit(oldp+397,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12));
            tracep->chgBit(oldp+398,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13));
            tracep->chgBit(oldp+399,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14));
            tracep->chgBit(oldp+400,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15));
            tracep->chgBit(oldp+401,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16));
            tracep->chgBit(oldp+402,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17));
            tracep->chgBit(oldp+403,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18));
            tracep->chgBit(oldp+404,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19));
            tracep->chgBit(oldp+405,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20));
            tracep->chgBit(oldp+406,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21));
            tracep->chgBit(oldp+407,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22));
            tracep->chgBit(oldp+408,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23));
            tracep->chgBit(oldp+409,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24));
            tracep->chgBit(oldp+410,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25));
            tracep->chgBit(oldp+411,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26));
            tracep->chgBit(oldp+412,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27));
            tracep->chgBit(oldp+413,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28));
            tracep->chgBit(oldp+414,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29));
            tracep->chgBit(oldp+415,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30));
            tracep->chgBit(oldp+416,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31));
            tracep->chgBit(oldp+417,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32));
            tracep->chgBit(oldp+418,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33));
            tracep->chgBit(oldp+419,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34));
            tracep->chgBit(oldp+420,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35));
            tracep->chgBit(oldp+421,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36));
            tracep->chgBit(oldp+422,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37));
            tracep->chgBit(oldp+423,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38));
            tracep->chgBit(oldp+424,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39));
            tracep->chgBit(oldp+425,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40));
            tracep->chgBit(oldp+426,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41));
            tracep->chgBit(oldp+427,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42));
            tracep->chgBit(oldp+428,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43));
            tracep->chgBit(oldp+429,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44));
            tracep->chgBit(oldp+430,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45));
            tracep->chgBit(oldp+431,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46));
            tracep->chgBit(oldp+432,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47));
            tracep->chgBit(oldp+433,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48));
            tracep->chgBit(oldp+434,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49));
            tracep->chgBit(oldp+435,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50));
            tracep->chgBit(oldp+436,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51));
            tracep->chgBit(oldp+437,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52));
            tracep->chgBit(oldp+438,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53));
            tracep->chgBit(oldp+439,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54));
            tracep->chgBit(oldp+440,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55));
            tracep->chgBit(oldp+441,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56));
            tracep->chgBit(oldp+442,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57));
            tracep->chgBit(oldp+443,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58));
            tracep->chgBit(oldp+444,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59));
            tracep->chgBit(oldp+445,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60));
            tracep->chgBit(oldp+446,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61));
            tracep->chgBit(oldp+447,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62));
            tracep->chgBit(oldp+448,(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63));
            tracep->chgBit(oldp+449,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1))));
            tracep->chgBit(oldp+450,((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))));
            tracep->chgBit(oldp+451,((1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                             & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2) 
                                                | ((IData)(vlSelf->top__DOT__alu_opcode) 
                                                   >> 4U))) 
                                            | ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2) 
                                               & ((IData)(vlSelf->top__DOT__alu_opcode) 
                                                  >> 4U))))));
            tracep->chgBit(oldp+452,((1U & ((((((~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1)) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))) 
                                               & ((IData)(vlSelf->top__DOT__alu_opcode) 
                                                  >> 4U)) 
                                              | (((~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1)) 
                                                  & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2)) 
                                                 & (~ 
                                                    ((IData)(vlSelf->top__DOT__alu_opcode) 
                                                     >> 4U)))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                                 & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__alu_opcode) 
                                                    >> 4U)))) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1) 
                                                & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2)) 
                                               & ((IData)(vlSelf->top__DOT__alu_opcode) 
                                                  >> 4U))))));
            tracep->chgBit(oldp+453,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 1U)))));
            tracep->chgBit(oldp+454,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 1U)))));
            tracep->chgBit(oldp+455,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 1U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 1U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1))))));
            tracep->chgBit(oldp+456,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 1U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 1U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 1U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 1U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_1))))));
            tracep->chgBit(oldp+457,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 2U)))));
            tracep->chgBit(oldp+458,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 2U)))));
            tracep->chgBit(oldp+459,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 2U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 2U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2))))));
            tracep->chgBit(oldp+460,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 2U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 2U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 2U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 2U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_2))))));
            tracep->chgBit(oldp+461,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 3U)))));
            tracep->chgBit(oldp+462,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 3U)))));
            tracep->chgBit(oldp+463,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 3U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 3U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3))))));
            tracep->chgBit(oldp+464,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 3U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 3U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 3U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 3U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_3))))));
            tracep->chgBit(oldp+465,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 4U)))));
            tracep->chgBit(oldp+466,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 4U)))));
            tracep->chgBit(oldp+467,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 4U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 4U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4))))));
            tracep->chgBit(oldp+468,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 4U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 4U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 4U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 4U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_4))))));
            tracep->chgBit(oldp+469,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 5U)))));
            tracep->chgBit(oldp+470,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 5U)))));
            tracep->chgBit(oldp+471,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 5U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 5U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5))))));
            tracep->chgBit(oldp+472,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 5U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 5U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 5U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 5U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_5))))));
            tracep->chgBit(oldp+473,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 6U)))));
            tracep->chgBit(oldp+474,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 6U)))));
            tracep->chgBit(oldp+475,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 6U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 6U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6))))));
            tracep->chgBit(oldp+476,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 6U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 6U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 6U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 6U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_6))))));
            tracep->chgBit(oldp+477,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 7U)))));
            tracep->chgBit(oldp+478,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 7U)))));
            tracep->chgBit(oldp+479,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 7U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 7U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7))))));
            tracep->chgBit(oldp+480,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 7U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 7U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 7U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 7U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_7))))));
            tracep->chgBit(oldp+481,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 8U)))));
            tracep->chgBit(oldp+482,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 8U)))));
            tracep->chgBit(oldp+483,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 8U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 8U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8))))));
            tracep->chgBit(oldp+484,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 8U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 8U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 8U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 8U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_8))))));
            tracep->chgBit(oldp+485,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 9U)))));
            tracep->chgBit(oldp+486,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 9U)))));
            tracep->chgBit(oldp+487,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 9U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 9U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9))))));
            tracep->chgBit(oldp+488,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 9U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 9U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 9U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 9U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_9))))));
            tracep->chgBit(oldp+489,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+490,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+491,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0xaU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xaU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10))))));
            tracep->chgBit(oldp+492,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0xaU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0xaU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0xaU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0xaU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_10))))));
            tracep->chgBit(oldp+493,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+494,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+495,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0xbU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xbU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11))))));
            tracep->chgBit(oldp+496,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0xbU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0xbU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0xbU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0xbU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_11))))));
            tracep->chgBit(oldp+497,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+498,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+499,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0xcU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xcU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12))))));
            tracep->chgBit(oldp+500,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0xcU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0xcU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0xcU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0xcU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_12))))));
            tracep->chgBit(oldp+501,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+502,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+503,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0xdU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xdU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13))))));
            tracep->chgBit(oldp+504,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0xdU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0xdU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0xdU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0xdU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_13))))));
            tracep->chgBit(oldp+505,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+506,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+507,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0xeU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xeU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14))))));
            tracep->chgBit(oldp+508,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0xeU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0xeU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0xeU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0xeU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_14))))));
            tracep->chgBit(oldp+509,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+510,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+511,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0xfU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0xfU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15))))));
            tracep->chgBit(oldp+512,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0xfU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0xfU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0xfU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0xfU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_15))))));
            tracep->chgBit(oldp+513,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+514,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+515,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x10U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x10U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16))))));
            tracep->chgBit(oldp+516,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x10U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x10U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x10U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x10U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_16))))));
            tracep->chgBit(oldp+517,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+518,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+519,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x11U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x11U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17))))));
            tracep->chgBit(oldp+520,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x11U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x11U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x11U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x11U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_17))))));
            tracep->chgBit(oldp+521,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+522,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+523,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x12U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x12U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18))))));
            tracep->chgBit(oldp+524,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x12U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x12U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x12U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x12U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_18))))));
            tracep->chgBit(oldp+525,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+526,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+527,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x13U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x13U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19))))));
            tracep->chgBit(oldp+528,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x13U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x13U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x13U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x13U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_19))))));
            tracep->chgBit(oldp+529,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+530,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+531,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x14U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x14U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20))))));
            tracep->chgBit(oldp+532,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x14U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x14U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x14U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x14U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_20))))));
            tracep->chgBit(oldp+533,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+534,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+535,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x15U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x15U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21))))));
            tracep->chgBit(oldp+536,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x15U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x15U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x15U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x15U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_21))))));
            tracep->chgBit(oldp+537,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+538,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+539,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x16U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x16U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22))))));
            tracep->chgBit(oldp+540,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x16U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x16U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x16U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x16U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_22))))));
            tracep->chgBit(oldp+541,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+542,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+543,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x17U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x17U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23))))));
            tracep->chgBit(oldp+544,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x17U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x17U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x17U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x17U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_23))))));
            tracep->chgBit(oldp+545,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+546,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+547,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x18U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x18U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24))))));
            tracep->chgBit(oldp+548,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x18U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x18U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x18U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x18U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_24))))));
            tracep->chgBit(oldp+549,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+550,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+551,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x19U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x19U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25))))));
            tracep->chgBit(oldp+552,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x19U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x19U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x19U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x19U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_25))))));
            tracep->chgBit(oldp+553,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+554,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+555,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x1aU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1aU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26))))));
            tracep->chgBit(oldp+556,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x1aU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x1aU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x1aU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x1aU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_26))))));
            tracep->chgBit(oldp+557,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+558,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+559,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x1bU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1bU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27))))));
            tracep->chgBit(oldp+560,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x1bU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x1bU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x1bU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x1bU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_27))))));
            tracep->chgBit(oldp+561,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+562,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+563,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x1cU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1cU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28))))));
            tracep->chgBit(oldp+564,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x1cU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x1cU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x1cU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x1cU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_28))))));
            tracep->chgBit(oldp+565,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+566,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+567,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x1dU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1dU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29))))));
            tracep->chgBit(oldp+568,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x1dU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x1dU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x1dU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x1dU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_29))))));
            tracep->chgBit(oldp+569,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+570,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+571,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x1eU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1eU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30))))));
            tracep->chgBit(oldp+572,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x1eU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x1eU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x1eU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x1eU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_30))))));
            tracep->chgBit(oldp+573,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+574,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+575,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x1fU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x1fU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31))))));
            tracep->chgBit(oldp+576,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x1fU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x1fU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x1fU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x1fU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_31))))));
            tracep->chgBit(oldp+577,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+578,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+579,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x20U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x20U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32))))));
            tracep->chgBit(oldp+580,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x20U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x20U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x20U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x20U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_32))))));
            tracep->chgBit(oldp+581,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+582,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+583,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x21U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x21U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33))))));
            tracep->chgBit(oldp+584,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x21U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x21U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x21U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x21U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_33))))));
            tracep->chgBit(oldp+585,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+586,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+587,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x22U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x22U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34))))));
            tracep->chgBit(oldp+588,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x22U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x22U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x22U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x22U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_34))))));
            tracep->chgBit(oldp+589,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+590,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+591,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x23U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x23U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35))))));
            tracep->chgBit(oldp+592,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x23U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x23U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x23U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x23U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_35))))));
            tracep->chgBit(oldp+593,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+594,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+595,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x24U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x24U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36))))));
            tracep->chgBit(oldp+596,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x24U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x24U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x24U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x24U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_36))))));
            tracep->chgBit(oldp+597,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+598,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+599,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x25U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x25U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37))))));
            tracep->chgBit(oldp+600,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x25U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x25U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x25U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x25U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_37))))));
            tracep->chgBit(oldp+601,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+602,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+603,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x26U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x26U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38))))));
            tracep->chgBit(oldp+604,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x26U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x26U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x26U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x26U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_38))))));
            tracep->chgBit(oldp+605,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+606,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+607,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x27U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x27U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39))))));
            tracep->chgBit(oldp+608,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x27U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x27U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x27U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x27U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_39))))));
            tracep->chgBit(oldp+609,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+610,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+611,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x28U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x28U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40))))));
            tracep->chgBit(oldp+612,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x28U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x28U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x28U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x28U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_40))))));
            tracep->chgBit(oldp+613,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+614,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+615,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x29U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x29U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41))))));
            tracep->chgBit(oldp+616,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x29U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x29U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x29U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x29U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_41))))));
            tracep->chgBit(oldp+617,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+618,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+619,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x2aU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2aU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42))))));
            tracep->chgBit(oldp+620,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x2aU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x2aU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x2aU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x2aU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_42))))));
            tracep->chgBit(oldp+621,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+622,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+623,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x2bU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2bU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43))))));
            tracep->chgBit(oldp+624,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x2bU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x2bU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x2bU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x2bU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_43))))));
            tracep->chgBit(oldp+625,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+626,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+627,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x2cU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2cU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44))))));
            tracep->chgBit(oldp+628,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x2cU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x2cU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x2cU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x2cU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_44))))));
            tracep->chgBit(oldp+629,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+630,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+631,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x2dU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2dU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45))))));
            tracep->chgBit(oldp+632,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x2dU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x2dU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x2dU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x2dU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_45))))));
            tracep->chgBit(oldp+633,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+634,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+635,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x2eU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2eU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46))))));
            tracep->chgBit(oldp+636,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x2eU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x2eU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x2eU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x2eU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_46))))));
            tracep->chgBit(oldp+637,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+638,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+639,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x2fU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x2fU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47))))));
            tracep->chgBit(oldp+640,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x2fU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x2fU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x2fU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x2fU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_47))))));
            tracep->chgBit(oldp+641,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+642,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+643,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x30U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x30U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48))))));
            tracep->chgBit(oldp+644,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x30U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x30U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x30U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x30U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_48))))));
            tracep->chgBit(oldp+645,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+646,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+647,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x31U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x31U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49))))));
            tracep->chgBit(oldp+648,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x31U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x31U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x31U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x31U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_49))))));
            tracep->chgBit(oldp+649,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+650,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+651,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x32U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x32U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50))))));
            tracep->chgBit(oldp+652,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x32U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x32U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x32U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x32U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_50))))));
            tracep->chgBit(oldp+653,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+654,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+655,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x33U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x33U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51))))));
            tracep->chgBit(oldp+656,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x33U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x33U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x33U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x33U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_51))))));
            tracep->chgBit(oldp+657,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+658,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+659,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x34U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x34U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52))))));
            tracep->chgBit(oldp+660,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x34U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x34U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x34U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x34U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_52))))));
            tracep->chgBit(oldp+661,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+662,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+663,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x35U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x35U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53))))));
            tracep->chgBit(oldp+664,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x35U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x35U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x35U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x35U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_53))))));
            tracep->chgBit(oldp+665,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+666,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+667,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x36U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x36U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54))))));
            tracep->chgBit(oldp+668,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x36U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x36U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x36U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x36U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_54))))));
            tracep->chgBit(oldp+669,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+670,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+671,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x37U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x37U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55))))));
            tracep->chgBit(oldp+672,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x37U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x37U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x37U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x37U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_55))))));
            tracep->chgBit(oldp+673,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+674,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+675,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x38U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x38U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56))))));
            tracep->chgBit(oldp+676,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x38U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x38U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x38U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x38U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_56))))));
            tracep->chgBit(oldp+677,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+678,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+679,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x39U)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x39U)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57))))));
            tracep->chgBit(oldp+680,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x39U)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x39U)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x39U)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x39U))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_57))))));
            tracep->chgBit(oldp+681,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+682,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+683,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x3aU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3aU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58))))));
            tracep->chgBit(oldp+684,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x3aU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x3aU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x3aU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x3aU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_58))))));
            tracep->chgBit(oldp+685,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+686,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+687,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x3bU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3bU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59))))));
            tracep->chgBit(oldp+688,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x3bU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x3bU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x3bU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x3bU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_59))))));
            tracep->chgBit(oldp+689,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+690,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+691,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x3cU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3cU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60))))));
            tracep->chgBit(oldp+692,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x3cU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x3cU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x3cU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x3cU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_60))))));
            tracep->chgBit(oldp+693,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+694,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+695,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x3dU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3dU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61))))));
            tracep->chgBit(oldp+696,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x3dU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x3dU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x3dU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x3dU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_61))))));
            tracep->chgBit(oldp+697,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+698,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+699,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x3eU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3eU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62))))));
            tracep->chgBit(oldp+700,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x3eU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x3eU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x3eU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x3eU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_62))))));
            tracep->chgBit(oldp+701,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+702,((1U & (IData)(
                                                   (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+703,((1U & (((IData)(
                                                     (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                         >> 0x3fU)) 
                                                | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                        >> 0x3fU)) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63))))));
            tracep->chgBit(oldp+704,((1U & ((((((~ (IData)(
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
                                             | (((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                          >> 0x3fU)) 
                                                 & (~ (IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                               >> 0x3fU)))) 
                                                & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63)))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in1 
                                                         >> 0x3fU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__add_in2 
                                                           >> 0x3fU))) 
                                               & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__add__DOT__c_63))))));
            tracep->chgQData(oldp+705,(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1),64);
            tracep->chgCData(oldp+707,((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__shift1__in1))),6);
            tracep->chgBit(oldp+708,(vlSelf->top__DOT__exu__DOT__aluf__DOT____Vcellinp__div_1__div_valid));
            tracep->chgBit(oldp+709,((0x1cU == (0x1fU 
                                                & (IData)(vlSelf->top__DOT__alu_opcode)))));
            tracep->chgCData(oldp+710,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm),7);
            tracep->chgCData(oldp+711,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__fsm_next),7);
            tracep->chgQData(oldp+712,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__dividend_r),64);
            tracep->chgQData(oldp+714,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__divisor_r),64);
            tracep->chgBit(oldp+716,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r));
            tracep->chgBit(oldp+717,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_signed_r));
            tracep->chgBit(oldp+718,((1U & ((0x1cU 
                                             != (0x1fU 
                                                 & (IData)(vlSelf->top__DOT__alu_opcode))) 
                                            | ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                                ? (
                                                   ((IData)(
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
                                                : (
                                                   ((IData)(
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
                                                                    >> 0x3fU))))))))));
            tracep->chgBit(oldp+719,((1U & ((0x1cU 
                                             != (0x1fU 
                                                 & (IData)(vlSelf->top__DOT__alu_opcode))) 
                                            | ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                                ? (
                                                   ((~ (IData)(
                                                               (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                                >> 0x1fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                                  >> 0x1fU)))) 
                                                   | ((IData)(
                                                              (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                               >> 0x1fU)) 
                                                      & (~ (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                                    >> 0x1fU)))))
                                                : (
                                                   ((~ (IData)(
                                                               (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                                >> 0x3fU))) 
                                                    & (~ (IData)(
                                                                 (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                                  >> 0x3fU)))) 
                                                   | ((IData)(
                                                              (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                               >> 0x3fU)) 
                                                      & (~ (IData)(
                                                                   (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                                    >> 0x3fU))))))))));
            tracep->chgQData(oldp+720,(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                         ? ((0x1cU 
                                             == (0x1fU 
                                                 & (IData)(vlSelf->top__DOT__alu_opcode)))
                                             ? ((1U 
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
                                             == (0x1fU 
                                                 & (IData)(vlSelf->top__DOT__alu_opcode)))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu__DOT__alu_in1_w1 
                                                            >> 0x3fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__exu__DOT__alu_in1_w1))
                                                 : vlSelf->top__DOT__exu__DOT__alu_in1_w1)
                                             : vlSelf->top__DOT__exu__DOT__alu_in1_w1))),64);
            tracep->chgQData(oldp+722,(((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__div_w_r)
                                         ? ((0x1cU 
                                             == (0x1fU 
                                                 & (IData)(vlSelf->top__DOT__alu_opcode)))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                            >> 0x1fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__exu__DOT__alu_in2_w1))
                                                 : vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                             : vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                         : ((0x1cU 
                                             == (0x1fU 
                                                 & (IData)(vlSelf->top__DOT__alu_opcode)))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__exu__DOT__alu_in2_w1 
                                                            >> 0x3fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__exu__DOT__alu_in2_w1))
                                                 : vlSelf->top__DOT__exu__DOT__alu_in2_w1)
                                             : vlSelf->top__DOT__exu__DOT__alu_in2_w1))),64);
            tracep->chgCData(oldp+724,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__sign_r),2);
            tracep->chgWData(oldp+725,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_out),128);
            tracep->chgWData(oldp+729,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in1_r),128);
            tracep->chgWData(oldp+733,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__add_in2_r),128);
            tracep->chgQData(oldp+737,(vlSelf->top__DOT__exu__DOT__aluf__DOT__div_1__DOT__ans),64);
            tracep->chgBit(oldp+739,(((IData)(vlSelf->top__DOT__jal) 
                                      | (IData)(vlSelf->top__DOT__jalr))));
            tracep->chgQData(oldp+740,((4ULL + vlSelf->top__DOT__pc_out)),64);
            tracep->chgQData(oldp+742,((vlSelf->top__DOT__imm 
                                        + vlSelf->top__DOT__pc_out)),64);
            tracep->chgBit(oldp+744,(((IData)(vlSelf->top__DOT__b) 
                                      | (IData)(vlSelf->top__DOT__jal))));
            tracep->chgQData(oldp+745,((vlSelf->top__DOT__lsu__DOT__rs1 
                                        + vlSelf->top__DOT__imm)),64);
            tracep->chgQData(oldp+747,((vlSelf->top__DOT__pc_out 
                                        + vlSelf->top__DOT__imm)),64);
            tracep->chgBit(oldp+749,(vlSelf->top__DOT____Vcellinp__lsu__lsu_en));
            tracep->chgQData(oldp+750,(((0U == (IData)(vlSelf->top__DOT__func3))
                                         ? 0xffULL : 
                                        ((1U == (IData)(vlSelf->top__DOT__func3))
                                          ? 0xffffffffULL
                                          : ((2U == (IData)(vlSelf->top__DOT__func3))
                                              ? 0xffffffffffffffffULL
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__func3))
                                                  ? 0xffffffffffffffffULL
                                                  : 0ULL))))),64);
            tracep->chgCData(oldp+752,(((0U == (IData)(vlSelf->top__DOT__func3))
                                         ? 1U : ((1U 
                                                  == (IData)(vlSelf->top__DOT__func3))
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top__DOT__func3))
                                                   ? 4U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->top__DOT__func3))
                                                    ? 8U
                                                    : 0U))))),4);
            tracep->chgBit(oldp+753,(((IData)(vlSelf->top__DOT__rd_w_en) 
                                      & ((IData)(vlSelf->top__DOT__dcache_valid) 
                                         | (IData)(vlSelf->top__DOT__rw_valid_o)))));
            tracep->chgCData(oldp+754,(vlSelf->top__DOT__lsu__DOT__func3_r),3);
            tracep->chgBit(oldp+755,(vlSelf->top__DOT__lsu__DOT__rd_sel1));
            tracep->chgQData(oldp+756,(vlSelf->top__DOT__lsu__DOT__load_ext_in),64);
            tracep->chgQData(oldp+758,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__lsu__DOT__load_ext_in 
                                                                        >> 7U)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in)))))),64);
            tracep->chgQData(oldp+760,((((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__lsu__DOT__load_ext_in 
                                                                        >> 0xfU)))))) 
                                         << 0x10U) 
                                        | (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in)))))),64);
            tracep->chgQData(oldp+762,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__lsu__DOT__load_ext_in 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in)))),64);
            tracep->chgQData(oldp+764,((QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in))))),64);
            tracep->chgQData(oldp+766,((QData)((IData)(
                                                       (0xffffU 
                                                        & (IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in))))),64);
            tracep->chgQData(oldp+768,((QData)((IData)(vlSelf->top__DOT__lsu__DOT__load_ext_in))),64);
            tracep->chgBit(oldp+770,(((IData)(vlSelf->top__DOT__lsu_w) 
                                      & (IData)(vlSelf->top__DOT____Vcellinp__lsu__lsu_en))));
            tracep->chgQData(oldp+771,(vlSelf->top__DOT__csr_reg__DOT__mepc),64);
            tracep->chgQData(oldp+773,(vlSelf->top__DOT__csr_reg__DOT__mstatus),64);
            tracep->chgQData(oldp+775,(vlSelf->top__DOT__csr_reg__DOT__mcause),64);
            tracep->chgQData(oldp+777,((((0x300U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                         & (IData)(vlSelf->top__DOT__csrr))
                                         ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                                         : 0ULL)),64);
            tracep->chgQData(oldp+779,((((0x305U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                         & (IData)(vlSelf->top__DOT__csrr))
                                         ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                                         : 0ULL)),64);
            tracep->chgBit(oldp+781,(((IData)(vlSelf->top__DOT__pri_en) 
                                      & ((0x300U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                         & (IData)(vlSelf->top__DOT__csrr)))));
            tracep->chgBit(oldp+782,(((IData)(vlSelf->top__DOT__pri_en) 
                                      & ((0x305U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                         & (IData)(vlSelf->top__DOT__csrr)))));
            tracep->chgQData(oldp+783,(((~ vlSelf->top__DOT__lsu__DOT__rs1) 
                                        & vlSelf->top__DOT__csr_reg__DOT__csrr_csr)),64);
            tracep->chgQData(oldp+785,((vlSelf->top__DOT__lsu__DOT__rs1 
                                        | vlSelf->top__DOT__csr_reg__DOT__csrr_csr)),64);
            tracep->chgQData(oldp+787,(vlSelf->top__DOT__csr_reg__DOT__csrr_),64);
            tracep->chgQData(oldp+789,(vlSelf->top__DOT__csr_reg__DOT__csrr_csr),64);
            tracep->chgIData(oldp+791,((IData)(vlSelf->top__DOT__dcache_addr)),32);
            tracep->chgCData(oldp+792,(vlSelf->top__DOT__peripheral__DOT__write_fsm),3);
            tracep->chgCData(oldp+793,(vlSelf->top__DOT__peripheral__DOT__write_fsm_next),3);
            tracep->chgCData(oldp+794,(vlSelf->top__DOT__peripheral__DOT__read_fsm),3);
            tracep->chgCData(oldp+795,(vlSelf->top__DOT__peripheral__DOT__read_fsm_next),3);
            tracep->chgCData(oldp+796,(vlSelf->top__DOT__icache__DOT__status),5);
            tracep->chgCData(oldp+797,(vlSelf->top__DOT__icache__DOT__next_status),5);
            tracep->chgBit(oldp+798,(((IData)(vlSelf->top__DOT__icache__DOT__miss) 
                                      & ((IData)(vlSelf->top__DOT__icache__DOT__random)
                                          ? (IData)(
                                                    (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
                                                     >> 0x36U))
                                          : (IData)(
                                                    (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
                                                     >> 0x36U))))));
            tracep->chgBit(oldp+799,(vlSelf->top__DOT__icache__DOT__miss));
            tracep->chgCData(oldp+800,((0x7fU & (IData)(
                                                        (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                         >> 4U)))),7);
            tracep->chgQData(oldp+801,((vlSelf->top__DOT__stage1__DOT__next_pc 
                                        >> 0xbU)),53);
            tracep->chgBit(oldp+803,((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))));
            tracep->chgBit(oldp+804,(vlSelf->top__DOT__icache__DOT__hit));
            tracep->chgBit(oldp+805,(vlSelf->top__DOT__icache__DOT__random));
            tracep->chgBit(oldp+806,(vlSelf->top__DOT__icache__DOT__hit1));
            tracep->chgBit(oldp+807,(vlSelf->top__DOT__icache__DOT__hit0));
            tracep->chgCData(oldp+808,(vlSelf->top__DOT__icache__DOT__index_ar),7);
            tracep->chgQData(oldp+809,(vlSelf->top__DOT__icache__DOT__tag_ar),53);
            tracep->chgCData(oldp+811,(vlSelf->top__DOT__icache__DOT__write_fsm),4);
            tracep->chgCData(oldp+812,(vlSelf->top__DOT__icache__DOT__write_fsm_next),4);
            tracep->chgCData(oldp+813,(vlSelf->top__DOT__icache__DOT__write_respone_fsm),4);
            tracep->chgCData(oldp+814,(vlSelf->top__DOT__icache__DOT__read_fsm),4);
            tracep->chgCData(oldp+815,(vlSelf->top__DOT__icache__DOT__read_fsm_next),4);
            tracep->chgWData(oldp+816,(vlSelf->top__DOT__icache__DOT__read_line),96);
            tracep->chgQData(oldp+819,(vlSelf->top__DOT__icache__DOT__tag_a_o1),55);
            tracep->chgCData(oldp+821,(vlSelf->top__DOT__icache__DOT__tag_arry_addr),7);
            tracep->chgQData(oldp+822,(vlSelf->top__DOT__icache__DOT__tag_arry_data_in),55);
            tracep->chgBit(oldp+824,(vlSelf->top__DOT__icache__DOT__tag_arry_en));
            tracep->chgQData(oldp+825,(((IData)(vlSelf->top__DOT__icache__DOT__hit1)
                                         ? vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1
                                         : vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0)),55);
            tracep->chgQData(oldp+827,(vlSelf->top__DOT__icache__DOT__tag_arry_data_out_miss),55);
            tracep->chgBit(oldp+829,(vlSelf->top__DOT__icache__DOT__tag_arry_sel));
            tracep->chgQData(oldp+830,(vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0),55);
            tracep->chgQData(oldp+832,(vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1),55);
            tracep->chgWData(oldp+834,(vlSelf->top__DOT__icache__DOT__Q[0]),128);
            tracep->chgWData(oldp+838,(vlSelf->top__DOT__icache__DOT__Q[1]),128);
            tracep->chgWData(oldp+842,(vlSelf->top__DOT__icache__DOT__Q[2]),128);
            tracep->chgWData(oldp+846,(vlSelf->top__DOT__icache__DOT__Q[3]),128);
            tracep->chgBit(oldp+850,(vlSelf->top__DOT__icache__DOT__cache_wen));
            tracep->chgCData(oldp+851,(vlSelf->top__DOT__icache__DOT__cache_addr),8);
            tracep->chgWData(oldp+852,(vlSelf->top__DOT__icache__DOT__cache_out),128);
            tracep->chgWData(oldp+856,(vlSelf->top__DOT__icache__DOT__cache_in),128);
            tracep->chgCData(oldp+860,(vlSelf->top__DOT__icache__DOT__cache_sel),4);
            tracep->chgCData(oldp+861,(vlSelf->top__DOT__icache__DOT__cache_addr_r),2);
            if ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                               >> 3U)))) {
                __Vtemp500[0U] = 0U;
                __Vtemp500[1U] = 0U;
                __Vtemp500[2U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                 >> 2U)))
                                   ? 0U : ((1U & (IData)(
                                                         (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                          >> 1U)))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                                ? 0xff000000U
                                                : 0xffff0000U)
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                                ? 0xffffff00U
                                                : 0xffffffffU)));
                __Vtemp500[3U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                 >> 2U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xff000000U
                                           : 0xffff0000U)
                                       : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xffffff00U
                                           : 0xffffffffU))
                                   : ((1U & (IData)(
                                                    (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xffffffU
                                           : 0xffffU)
                                       : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xffU : 0U)));
            } else {
                __Vtemp500[0U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                 >> 2U)))
                                   ? 0U : ((1U & (IData)(
                                                         (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                          >> 1U)))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                                ? 0xff000000U
                                                : 0xffff0000U)
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                                ? 0xffffff00U
                                                : 0xffffffffU)));
                __Vtemp500[1U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                 >> 2U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xff000000U
                                           : 0xffff0000U)
                                       : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xffffff00U
                                           : 0xffffffffU))
                                   : ((1U & (IData)(
                                                    (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xffffffU
                                           : 0xffffU)
                                       : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xffU : 0U)));
                __Vtemp500[2U] = ((1U & (IData)((vlSelf->top__DOT__stage1__DOT__next_pc 
                                                 >> 2U)))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                     >> 1U)))
                                       ? ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xffffffU
                                           : 0xffffU)
                                       : ((1U & (IData)(vlSelf->top__DOT__stage1__DOT__next_pc))
                                           ? 0xffU : 0U))
                                   : 0U);
                __Vtemp500[3U] = 0U;
            }
            tracep->chgWData(oldp+862,(__Vtemp500),128);
            tracep->chgCData(oldp+866,(vlSelf->top__DOT__icache__DOT__addr_r),4);
            tracep->chgBit(oldp+867,(((IData)(vlSelf->top__DOT__icache__DOT__tag_arry_en) 
                                      & (~ (IData)(vlSelf->top__DOT__icache__DOT__tag_arry_sel)))));
            tracep->chgIData(oldp+868,(vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__i),32);
            tracep->chgBit(oldp+869,(((IData)(vlSelf->top__DOT__icache__DOT__tag_arry_en) 
                                      & (IData)(vlSelf->top__DOT__icache__DOT__tag_arry_sel))));
            tracep->chgIData(oldp+870,(vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__i),32);
            tracep->chgWData(oldp+871,(vlSelf->top__DOT__icache__DOT____Vcellout__cache0__Q),128);
            tracep->chgBit(oldp+875,(vlSelf->top__DOT__icache__DOT____Vcellinp__cache0__WEN));
            tracep->chgCData(oldp+876,((0x3fU & (IData)(vlSelf->top__DOT__icache__DOT__cache_addr))),6);
            tracep->chgBit(oldp+877,((1U & (~ (IData)(vlSelf->top__DOT__icache__DOT____Vcellinp__cache0__WEN)))));
            tracep->chgWData(oldp+878,(vlSelf->top__DOT__icache__DOT____Vcellout__cache1__Q),128);
            tracep->chgBit(oldp+882,(vlSelf->top__DOT__icache__DOT____Vcellinp__cache1__WEN));
            tracep->chgBit(oldp+883,((1U & (~ (IData)(vlSelf->top__DOT__icache__DOT____Vcellinp__cache1__WEN)))));
            tracep->chgWData(oldp+884,(vlSelf->top__DOT__icache__DOT____Vcellout__cache2__Q),128);
            tracep->chgBit(oldp+888,(vlSelf->top__DOT__icache__DOT____Vcellinp__cache2__WEN));
            tracep->chgBit(oldp+889,((1U & (~ (IData)(vlSelf->top__DOT__icache__DOT____Vcellinp__cache2__WEN)))));
            tracep->chgWData(oldp+890,(vlSelf->top__DOT__icache__DOT____Vcellout__cache3__Q),128);
            tracep->chgBit(oldp+894,(vlSelf->top__DOT__icache__DOT____Vcellinp__cache3__WEN));
            tracep->chgBit(oldp+895,((1U & (~ (IData)(vlSelf->top__DOT__icache__DOT____Vcellinp__cache3__WEN)))));
            tracep->chgCData(oldp+896,(vlSelf->top__DOT__ctl1__DOT__fsm),3);
            tracep->chgCData(oldp+897,(vlSelf->top__DOT__dcache__DOT__status),5);
            tracep->chgCData(oldp+898,(vlSelf->top__DOT__dcache__DOT__next_status),5);
            tracep->chgBit(oldp+899,(((IData)(vlSelf->top__DOT__dcache__DOT__miss) 
                                      & ((IData)(vlSelf->top__DOT__dcache__DOT__random)
                                          ? (IData)(
                                                    (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1 
                                                     >> 0x36U))
                                          : (IData)(
                                                    (vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0 
                                                     >> 0x36U))))));
            tracep->chgBit(oldp+900,(vlSelf->top__DOT__dcache__DOT__miss));
            tracep->chgCData(oldp+901,((0x7fU & (IData)(
                                                        (vlSelf->top__DOT__dcache_addr 
                                                         >> 4U)))),7);
            tracep->chgQData(oldp+902,((vlSelf->top__DOT__dcache_addr 
                                        >> 0xbU)),53);
            tracep->chgBit(oldp+904,((1U & (IData)(vlSelf->top__DOT__dcache_addr))));
            tracep->chgBit(oldp+905,(vlSelf->top__DOT__dcache__DOT__hit));
            tracep->chgBit(oldp+906,(vlSelf->top__DOT__dcache__DOT__random));
            tracep->chgBit(oldp+907,(vlSelf->top__DOT__dcache__DOT__hit1));
            tracep->chgBit(oldp+908,(vlSelf->top__DOT__dcache__DOT__hit0));
            tracep->chgCData(oldp+909,(vlSelf->top__DOT__dcache__DOT__index_ar),7);
            tracep->chgQData(oldp+910,(vlSelf->top__DOT__dcache__DOT__tag_ar),53);
            tracep->chgCData(oldp+912,(vlSelf->top__DOT__dcache__DOT__write_fsm),4);
            tracep->chgCData(oldp+913,(vlSelf->top__DOT__dcache__DOT__write_fsm_next),4);
            tracep->chgCData(oldp+914,(vlSelf->top__DOT__dcache__DOT__write_respone_fsm),4);
            tracep->chgCData(oldp+915,(vlSelf->top__DOT__dcache__DOT__read_fsm),4);
            tracep->chgCData(oldp+916,(vlSelf->top__DOT__dcache__DOT__read_fsm_next),4);
            tracep->chgWData(oldp+917,(vlSelf->top__DOT__dcache__DOT__read_line),96);
            tracep->chgQData(oldp+920,(vlSelf->top__DOT__dcache__DOT__tag_a_o1),55);
            tracep->chgCData(oldp+922,(vlSelf->top__DOT__dcache__DOT__tag_arry_addr),7);
            tracep->chgQData(oldp+923,(vlSelf->top__DOT__dcache__DOT__tag_arry_data_in),55);
            tracep->chgBit(oldp+925,(vlSelf->top__DOT__dcache__DOT__tag_arry_en));
            tracep->chgQData(oldp+926,(((IData)(vlSelf->top__DOT__dcache__DOT__hit1)
                                         ? vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1
                                         : vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0)),55);
            tracep->chgQData(oldp+928,(vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_miss),55);
            tracep->chgBit(oldp+930,(vlSelf->top__DOT__dcache__DOT__tag_arry_sel));
            tracep->chgQData(oldp+931,(vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_0),55);
            tracep->chgQData(oldp+933,(vlSelf->top__DOT__dcache__DOT__tag_arry_data_out_1),55);
            tracep->chgWData(oldp+935,(vlSelf->top__DOT__dcache__DOT__Q[0]),128);
            tracep->chgWData(oldp+939,(vlSelf->top__DOT__dcache__DOT__Q[1]),128);
            tracep->chgWData(oldp+943,(vlSelf->top__DOT__dcache__DOT__Q[2]),128);
            tracep->chgWData(oldp+947,(vlSelf->top__DOT__dcache__DOT__Q[3]),128);
            tracep->chgBit(oldp+951,(vlSelf->top__DOT__dcache__DOT__cache_wen));
            tracep->chgCData(oldp+952,(vlSelf->top__DOT__dcache__DOT__cache_addr),8);
            tracep->chgWData(oldp+953,(vlSelf->top__DOT__dcache__DOT__cache_out),128);
            tracep->chgWData(oldp+957,(vlSelf->top__DOT__dcache__DOT__cache_in),128);
            tracep->chgCData(oldp+961,(vlSelf->top__DOT__dcache__DOT__cache_sel),4);
            tracep->chgWData(oldp+962,(vlSelf->top__DOT__dcache__DOT__cache_bwen),128);
            tracep->chgCData(oldp+966,(vlSelf->top__DOT__dcache__DOT__cache_addr_r),2);
            tracep->chgWData(oldp+967,(vlSelf->top__DOT__dcache__DOT__cache_write_bwen),128);
            tracep->chgWData(oldp+971,(vlSelf->top__DOT__dcache__DOT__mask),128);
            tracep->chgCData(oldp+975,(vlSelf->top__DOT__dcache__DOT__addr_r),4);
            tracep->chgWData(oldp+976,(vlSelf->top__DOT__dcache__DOT__write_shift),128);
            tracep->chgBit(oldp+980,(((IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_en) 
                                      & (~ (IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_sel)))));
            tracep->chgIData(oldp+981,(vlSelf->top__DOT__dcache__DOT__tag_arry_0__DOT__i),32);
            tracep->chgBit(oldp+982,(((IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_en) 
                                      & (IData)(vlSelf->top__DOT__dcache__DOT__tag_arry_sel))));
            tracep->chgIData(oldp+983,(vlSelf->top__DOT__dcache__DOT__tag_arry_1__DOT__i),32);
            tracep->chgWData(oldp+984,(vlSelf->top__DOT__dcache__DOT____Vcellout__cache0__Q),128);
            tracep->chgBit(oldp+988,((1U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                                            | (IData)(vlSelf->top__DOT__dcache__DOT__cache_sel)))));
            __Vtemp501[0U] = (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[0U]);
            __Vtemp501[1U] = (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[1U]);
            __Vtemp501[2U] = (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[2U]);
            __Vtemp501[3U] = (~ vlSelf->top__DOT__dcache__DOT__cache_bwen[3U]);
            tracep->chgWData(oldp+989,(__Vtemp501),128);
            tracep->chgCData(oldp+993,((0x3fU & (IData)(vlSelf->top__DOT__dcache__DOT__cache_addr))),6);
            tracep->chgBit(oldp+994,((1U & (~ ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                                               | (IData)(vlSelf->top__DOT__dcache__DOT__cache_sel))))));
            tracep->chgWData(oldp+995,(vlSelf->top__DOT__dcache__DOT____Vcellout__cache1__Q),128);
            tracep->chgBit(oldp+999,((1U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                                            | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                                               >> 1U)))));
            tracep->chgBit(oldp+1000,((1U & (~ ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                                                | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                                                   >> 1U))))));
            tracep->chgWData(oldp+1001,(vlSelf->top__DOT__dcache__DOT____Vcellout__cache2__Q),128);
            tracep->chgBit(oldp+1005,((1U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                                             | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1006,((1U & (~ ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                                                | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                                                   >> 2U))))));
            tracep->chgWData(oldp+1007,(vlSelf->top__DOT__dcache__DOT____Vcellout__cache3__Q),128);
            tracep->chgBit(oldp+1011,((1U & ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                                             | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1012,((1U & (~ ((IData)(vlSelf->top__DOT__dcache__DOT__cache_wen) 
                                                | ((IData)(vlSelf->top__DOT__dcache__DOT__cache_sel) 
                                                   >> 3U))))));
            tracep->chgCData(oldp+1013,(((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)
                                          : 0U)),4);
            tracep->chgBit(oldp+1014,(((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                       & (IData)(vlSelf->top__DOT__axi_3_r_last))));
            tracep->chgCData(oldp+1015,(((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp)
                                          : 0U)),2);
            tracep->chgCData(oldp+1016,(((1U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)
                                          : 0U)),4);
            tracep->chgQData(oldp+1017,((QData)((IData)(
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
                                                          : 0ULL)))),64);
            tracep->chgCData(oldp+1019,(((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)
                                          : 0U)),4);
            tracep->chgBit(oldp+1020,(((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                       & (IData)(vlSelf->top__DOT__axi_3_r_last))));
            tracep->chgCData(oldp+1021,(((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp)
                                          : 0U)),2);
            tracep->chgQData(oldp+1022,((QData)((IData)(
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
                                                           : 0ULL))))),64);
            tracep->chgCData(oldp+1024,(((2U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)
                                          : 0U)),4);
            tracep->chgQData(oldp+1025,((QData)((IData)(vlSelf->top__DOT__axi_2_ar_addr))),64);
            tracep->chgCData(oldp+1027,(((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)
                                          : 0U)),4);
            tracep->chgBit(oldp+1028,(((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid)) 
                                       & (IData)(vlSelf->top__DOT__axi_3_r_last))));
            tracep->chgCData(oldp+1029,(((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_rresp)
                                          : 0U)),2);
            tracep->chgCData(oldp+1030,(((3U == (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid))
                                          ? (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_bid)
                                          : 0U)),4);
            tracep->chgCData(oldp+1031,(vlSelf->top__DOT__interconnect1__DOT__ar_sel),3);
            tracep->chgCData(oldp+1032,(vlSelf->top__DOT__interconnect1__DOT__aw_sel),3);
            tracep->chgCData(oldp+1033,(vlSelf->top__DOT__interconnect1__DOT__w_sel),3);
            tracep->chgQData(oldp+1034,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awaddr),64);
            tracep->chgQData(oldp+1036,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_araddr),64);
            tracep->chgBit(oldp+1038,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__slv_reg_rden));
            tracep->chgBit(oldp+1039,(((((IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_wready) 
                                         & (IData)(vlSelf->top__DOT__axi_3_w_valid)) 
                                        & (IData)(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awready)) 
                                       & (IData)(vlSelf->top__DOT__axi_3_aw_valid))));
            tracep->chgIData(oldp+1040,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__reg_data_out),32);
            tracep->chgBit(oldp+1041,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__aw_en));
            tracep->chgCData(oldp+1042,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_awid),4);
            tracep->chgCData(oldp+1043,(vlSelf->top__DOT__myip_v1_0_S00_AXI_inst__DOT__axi_arid),4);
        }
        tracep->chgBit(oldp+1044,(vlSelf->clk));
        tracep->chgBit(oldp+1045,(vlSelf->rst_n));
        tracep->chgIData(oldp+1046,(vlSelf->ir),32);
        tracep->chgQData(oldp+1047,(vlSelf->ira),64);
        tracep->chgBit(oldp+1049,(vlSelf->jup));
        tracep->chgBit(oldp+1050,(vlSelf->ecall));
        tracep->chgBit(oldp+1051,(vlSelf->stop_n));
        tracep->chgBit(oldp+1052,(vlSelf->skip));
        tracep->chgQData(oldp+1053,(vlSelf->pc_dut),64);
        tracep->chgQData(oldp+1055,(((IData)(vlSelf->top__DOT__jup_exu)
                                      ? (((IData)(vlSelf->top__DOT__b) 
                                          | (IData)(vlSelf->top__DOT__jal))
                                          ? (vlSelf->top__DOT__pc_out 
                                             + vlSelf->top__DOT__imm)
                                          : (vlSelf->top__DOT__lsu__DOT__rs1 
                                             + vlSelf->top__DOT__imm))
                                      : ((IData)(vlSelf->ecall)
                                          ? vlSelf->top__DOT__mtvec_wire
                                          : vlSelf->top__DOT__csr_reg__DOT__mepc))),64);
        tracep->chgBit(oldp+1057,((((IData)(vlSelf->top__DOT__mret) 
                                    | (IData)(vlSelf->ecall)) 
                                   & (IData)(vlSelf->top__DOT__pri_en))));
        tracep->chgQData(oldp+1058,(((IData)(vlSelf->ecall)
                                      ? vlSelf->top__DOT__mtvec_wire
                                      : vlSelf->top__DOT__csr_reg__DOT__mepc)),64);
        tracep->chgQData(oldp+1060,(((IData)(vlSelf->ecall)
                                      ? vlSelf->top__DOT__pc_out
                                      : (((0x341U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                          & (IData)(vlSelf->top__DOT__csrr))
                                          ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                                          : 0ULL))),64);
        tracep->chgQData(oldp+1062,(((IData)(vlSelf->ecall)
                                      ? 0xbULL : ((
                                                   (0x342U 
                                                    == (IData)(vlSelf->top__DOT__csr_addr)) 
                                                   & (IData)(vlSelf->top__DOT__csrr))
                                                   ? vlSelf->top__DOT__csr_reg__DOT__csrr_
                                                   : 0ULL))),64);
        tracep->chgBit(oldp+1064,(((IData)(vlSelf->top__DOT__pri_en) 
                                   & ((IData)(vlSelf->ecall) 
                                      | ((0x341U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                         & (IData)(vlSelf->top__DOT__csrr))))));
        tracep->chgBit(oldp+1065,(((IData)(vlSelf->top__DOT__pri_en) 
                                   & ((IData)(vlSelf->ecall) 
                                      | ((0x342U == (IData)(vlSelf->top__DOT__csr_addr)) 
                                         & (IData)(vlSelf->top__DOT__csrr))))));
        tracep->chgBit(oldp+1066,((1U & (~ (IData)(vlSelf->jup)))));
        tracep->chgCData(oldp+1067,(((0U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                      ? ((IData)(vlSelf->jup)
                                          ? 1U : 0U)
                                      : ((1U == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                          ? (((IData)(vlSelf->top__DOT__icache_valid) 
                                              & (IData)(vlSelf->top__DOT____Vcellinp__stage1__pipe3_allowin))
                                              ? 0U : 1U)
                                          : 0U))),3);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
