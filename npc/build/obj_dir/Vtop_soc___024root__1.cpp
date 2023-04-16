// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_soc.h for the primary calling header

#include "Vtop_soc___024root.h"
#include "Vtop_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop_soc___024root___sequent__TOP__2(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_4 
        = (1U & ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__g 
                          >> 3U)) | ((IData)((vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__p 
                                              >> 3U)) 
                                     & (IData)(vlSelf->top_soc__DOT__top__DOT__exu__DOT__ysyx_050518_comp__DOT__add1__DOT__c_3))));
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

extern const VlUnpacked<CData/*5:0*/, 1024> Vtop_soc__ConstPool__TABLE_a2c3e4f5_0;
extern const VlWide<9>/*287:0*/ Vtop_soc__ConstPool__CONST_8643193a_0;
extern const VlWide<9>/*287:0*/ Vtop_soc__ConstPool__CONST_c8241eac_0;
extern const VlWide<9>/*287:0*/ Vtop_soc__ConstPool__CONST_c8241cac_0;

VL_INLINE_OPT void Vtop_soc___024root___sequent__TOP__3(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___sequent__TOP__3\n"); );
    // Variables
    SData/*9:0*/ __Vtableidx8;
    VlWide<9>/*287:0*/ __Vtemp487;
    VlWide<9>/*287:0*/ __Vtemp488;
    VlWide<9>/*287:0*/ __Vtemp490;
    VlWide<9>/*287:0*/ __Vtemp491;
    VlWide<9>/*287:0*/ __Vtemp497;
    // Body
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__ram0__DOT__block_sel 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n) 
           & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
              >> 7U));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__ram0__DOT__block_sel 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n) 
           & (vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
              >> 7U));
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[0U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[0U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[1U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[1U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[2U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[2U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[3U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out1_data[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data1_reg[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[0U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[0U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[1U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[1U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[2U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[2U];
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[3U] 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_out0_data[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data0_reg[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1_reg 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1_reg = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0_reg 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0_reg = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_reg 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_data_out;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_reg = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_reg 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_data_out;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_reg = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1_reg 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1_reg = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0_reg 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0_reg = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[0U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[0U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[1U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[1U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[2U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[2U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[3U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out1_data[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data1_reg[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[0U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[0U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[1U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[1U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[2U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[2U];
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[3U] 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_out0_data[3U];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[0U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[1U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[2U] = 0U;
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data0_reg[3U] = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_reg 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_data_out;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_reg = 0U;
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_reg 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_data_out;
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_reg = 0U;
    }
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
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__replace_tag 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__random)
            ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_reg
            : vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_reg);
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
            ? (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm_next)
            : 0U);
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__replace_tag 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__random)
            ? vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_reg
            : vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_reg);
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm 
        = ((IData)(vlSelf->top_soc__DOT____Vcellinp__top__rst_n)
            ? (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm_next)
            : 0U);
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
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_pri 
        = ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_in_0))
            ? 1U : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_in_1))
                     ? 2U : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busr_out))
                              ? 3U : 0U)));
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_next 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm))
            ? (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_pri)
            : ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__r_out_3[0U])
                ? 0U : (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm)));
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_sel 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm))
            ? (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm_pri)
            : (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__r_fsm));
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
    __Vtemp487[0U] = Vtop_soc__ConstPool__CONST_8643193a_0[0U];
    __Vtemp487[1U] = Vtop_soc__ConstPool__CONST_8643193a_0[1U];
    __Vtemp487[2U] = Vtop_soc__ConstPool__CONST_8643193a_0[2U];
    __Vtemp487[3U] = Vtop_soc__ConstPool__CONST_8643193a_0[3U];
    __Vtemp487[4U] = Vtop_soc__ConstPool__CONST_8643193a_0[4U];
    __Vtemp487[5U] = Vtop_soc__ConstPool__CONST_8643193a_0[5U];
    __Vtemp487[6U] = Vtop_soc__ConstPool__CONST_8643193a_0[6U];
    __Vtemp487[7U] = Vtop_soc__ConstPool__CONST_8643193a_0[7U];
    __Vtemp487[8U] = (0x100U | ((0xfeU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                          >> 7U)) | 
                                Vtop_soc__ConstPool__CONST_8643193a_0[8U]));
    VL_EXTEND_WW(266,265, __Vtemp488, __Vtemp487);
    __Vtemp490[0U] = Vtop_soc__ConstPool__CONST_8643193a_0[0U];
    __Vtemp490[1U] = Vtop_soc__ConstPool__CONST_8643193a_0[1U];
    __Vtemp490[2U] = Vtop_soc__ConstPool__CONST_8643193a_0[2U];
    __Vtemp490[3U] = Vtop_soc__ConstPool__CONST_8643193a_0[3U];
    __Vtemp490[4U] = Vtop_soc__ConstPool__CONST_8643193a_0[4U];
    __Vtemp490[5U] = Vtop_soc__ConstPool__CONST_8643193a_0[5U];
    __Vtemp490[6U] = Vtop_soc__ConstPool__CONST_8643193a_0[6U];
    __Vtemp490[7U] = Vtop_soc__ConstPool__CONST_8643193a_0[7U];
    __Vtemp490[8U] = (0x100U | ((0xfeU & (vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__cache_bus_req[2U] 
                                          >> 7U)) | 
                                Vtop_soc__ConstPool__CONST_8643193a_0[8U]));
    VL_EXTEND_WW(266,265, __Vtemp491, __Vtemp490);
    if ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))) {
        __Vtemp497[5U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
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
        __Vtemp497[6U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
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
        __Vtemp497[7U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
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
        __Vtemp497[8U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
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
        __Vtemp497[5U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[5U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[5U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? __Vtemp488[5U] : __Vtemp491[5U]));
        __Vtemp497[6U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[6U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[6U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? __Vtemp488[6U] : __Vtemp491[6U]));
        __Vtemp497[7U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                           ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? Vtop_soc__ConstPool__CONST_8643193a_0[7U]
                               : Vtop_soc__ConstPool__CONST_8643193a_0[7U])
                           : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
                               ? __Vtemp488[7U] : __Vtemp491[7U]));
        __Vtemp497[8U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
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
                               ? __Vtemp488[8U] : __Vtemp491[8U]));
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
                                       ? __Vtemp488[0U]
                                       : __Vtemp491[0U])));
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
                                       ? __Vtemp488[1U]
                                       : __Vtemp491[1U])));
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
                                       ? __Vtemp488[2U]
                                       : __Vtemp491[2U])));
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
                                       ? __Vtemp488[3U]
                                       : __Vtemp491[3U])));
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
                        ? __Vtemp488[4U] : __Vtemp491[4U])));
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[5U] 
            = __Vtemp497[5U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[6U] 
            = __Vtemp497[6U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[7U] 
            = __Vtemp497[7U];
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__data_r_r[8U] 
            = __Vtemp497[8U];
    }
}

VL_INLINE_OPT void Vtop_soc___024root___sequent__TOP__5(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___sequent__TOP__5\n"); );
    // Body
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                           >> 5U)))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1_data_out 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem
                [vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x80U, vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__i)) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem[(0x7fU 
                                                                         & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__i)] = 0U;
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__i 
                = ((IData)(1U) + vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__i);
        }
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl0 
                           >> 5U)))) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0_data_out 
                = vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem
                [vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x80U, vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__i)) {
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem[(0x7fU 
                                                                         & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__i)] = 0U;
            vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__i 
                = ((IData)(1U) + vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__i);
        }
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl1 
                           >> 5U)))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1_data_out 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem
                [vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x80U, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__i)) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem[(0x7fU 
                                                                         & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__i)] = 0U;
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__i 
                = ((IData)(1U) + vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__i);
        }
    }
    if (vlSelf->top_soc__DOT____Vcellinp__top__rst_n) {
        if ((1U & (IData)((vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_ctl0 
                           >> 5U)))) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0_data_out 
                = vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem
                [vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag_addr];
        }
    } else {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x80U, vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__i)) {
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem[(0x7fU 
                                                                         & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__i)] = 0U;
            vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__i 
                = ((IData)(1U) + vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__i);
        }
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0] 
            = (((~ ((IData)(0x1fffffU) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0))) 
                & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0]) 
               | (0x7fffffU & (vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v0))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1))) 
                & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1]) 
               | (0x7fffffU & ((IData)(vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1) 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v1))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2))) 
                & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2]) 
               | (0x7fffffU & ((IData)(vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2) 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag1__DOT__mem__v2))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0] 
            = (((~ ((IData)(0x1fffffU) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0))) 
                & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0]) 
               | (0x7fffffU & (vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v0))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1))) 
                & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1]) 
               | (0x7fffffU & ((IData)(vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1) 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v1))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2) {
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2))) 
                & vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2]) 
               | (0x7fffffU & ((IData)(vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2) 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__icache__DOT__tag0__DOT__mem__v2))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0] 
            = (((~ ((IData)(0x1fffffU) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0))) 
                & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0]) 
               | (0x7fffffU & (vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v0))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1))) 
                & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1]) 
               | (0x7fffffU & ((IData)(vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1) 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v1))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2))) 
                & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2]) 
               | (0x7fffffU & ((IData)(vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2) 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag1__DOT__mem__v2))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0] 
            = (((~ ((IData)(0x1fffffU) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0))) 
                & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0]) 
               | (0x7fffffU & (vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v0))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1))) 
                & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1]) 
               | (0x7fffffU & ((IData)(vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1) 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v1))));
    }
    if (vlSelf->__Vdlyvset__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2) {
        vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem[vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2] 
            = (((~ ((IData)(1U) << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2))) 
                & vlSelf->top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem
                [vlSelf->__Vdlyvdim0__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2]) 
               | (0x7fffffU & ((IData)(vlSelf->__Vdlyvval__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2) 
                               << (IData)(vlSelf->__Vdlyvlsb__top_soc__DOT__top__DOT__dcache__DOT__tag0__DOT__mem__v2))));
    }
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
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit0) 
           | (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit1));
    vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit 
        = ((IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit0) 
           | (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__hit1));
}

VL_INLINE_OPT void Vtop_soc___024root___combo__TOP__6(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->top_soc__DOT____Vcellinp__top__rst_n = 
        (1U & (~ (IData)(vlSelf->reset)));
}

extern const VlUnpacked<CData/*1:0*/, 256> Vtop_soc__ConstPool__TABLE_3390a88b_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtop_soc__ConstPool__TABLE_e6fc7a96_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop_soc__ConstPool__TABLE_b950b1ea_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vtop_soc__ConstPool__TABLE_8c8642cb_0;

VL_INLINE_OPT void Vtop_soc___024root___sequent__TOP__7(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___sequent__TOP__7\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx5;
    CData/*4:0*/ __Vtableidx9;
    SData/*8:0*/ __Vtableidx2;
    VlWide<6>/*191:0*/ __Vtemp982;
    VlWide<9>/*287:0*/ __Vtemp1021;
    VlWide<9>/*287:0*/ __Vtemp1022;
    VlWide<9>/*287:0*/ __Vtemp1024;
    VlWide<9>/*287:0*/ __Vtemp1025;
    VlWide<9>/*287:0*/ __Vtemp1031;
    // Body
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
    vlSelf->top_soc__DOT__top__DOT__icache_addr_ok 
        = ((0U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm)) 
           | (((1U == (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm)) 
               & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__hit)) 
              & (~ vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])));
    __Vtemp982[4U] = ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__dcache__DOT__fsm))
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
            = __Vtemp982[4U];
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
    vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_pri 
        = ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellinp__sram_bus_interconnect__w_in_1[0U])
            ? 2U : ((1U & vlSelf->top_soc__DOT__top__DOT____Vcellout__lsu__sram_busw_out[0U])
                     ? 3U : 0U));
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
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__data_ok_all 
        = (1U & ((8U == (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
                         >> 0x1cU)) ? vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[0U]
                  : vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[0U]));
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
    vlSelf->top_soc__DOT__top__DOT__lsu__DOT__addr_ok_all 
        = (1U & ((8U == (vlSelf->top_soc__DOT__top__DOT__lsu__DOT__ls_addr_all 
                         >> 0x1cU)) ? (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__cache_bus_rsp[0U] 
                                       >> 1U) : ((0x10000U 
                                                  & vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__dc_ls[0U])
                                                  ? 
                                                 (vlSelf->top_soc__DOT__top__DOT____Vcellinp__lsu__sram_busr_in[4U] 
                                                  >> 1U)
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->top_soc__DOT__top__DOT__mem2axi__DOT__aw_fsm)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->top_soc__DOT__top__DOT__sram_bus_interconnect__DOT__w_sel))))));
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
    __Vtemp1021[0U] = Vtop_soc__ConstPool__CONST_8643193a_0[0U];
    __Vtemp1021[1U] = Vtop_soc__ConstPool__CONST_8643193a_0[1U];
    __Vtemp1021[2U] = Vtop_soc__ConstPool__CONST_8643193a_0[2U];
    __Vtemp1021[3U] = Vtop_soc__ConstPool__CONST_8643193a_0[3U];
    __Vtemp1021[4U] = Vtop_soc__ConstPool__CONST_8643193a_0[4U];
    __Vtemp1021[5U] = Vtop_soc__ConstPool__CONST_8643193a_0[5U];
    __Vtemp1021[6U] = Vtop_soc__ConstPool__CONST_8643193a_0[6U];
    __Vtemp1021[7U] = Vtop_soc__ConstPool__CONST_8643193a_0[7U];
    __Vtemp1021[8U] = (0x100U | ((0xfeU & ((IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__r 
                                                    >> 7U)) 
                                           << 1U)) 
                                 | Vtop_soc__ConstPool__CONST_8643193a_0[8U]));
    VL_EXTEND_WW(266,265, __Vtemp1022, __Vtemp1021);
    __Vtemp1024[0U] = Vtop_soc__ConstPool__CONST_8643193a_0[0U];
    __Vtemp1024[1U] = Vtop_soc__ConstPool__CONST_8643193a_0[1U];
    __Vtemp1024[2U] = Vtop_soc__ConstPool__CONST_8643193a_0[2U];
    __Vtemp1024[3U] = Vtop_soc__ConstPool__CONST_8643193a_0[3U];
    __Vtemp1024[4U] = Vtop_soc__ConstPool__CONST_8643193a_0[4U];
    __Vtemp1024[5U] = Vtop_soc__ConstPool__CONST_8643193a_0[5U];
    __Vtemp1024[6U] = Vtop_soc__ConstPool__CONST_8643193a_0[6U];
    __Vtemp1024[7U] = Vtop_soc__ConstPool__CONST_8643193a_0[7U];
    __Vtemp1024[8U] = (0x100U | ((0xfeU & ((IData)(
                                                   (vlSelf->top_soc__DOT__top__DOT__r 
                                                    >> 7U)) 
                                           << 1U)) 
                                 | Vtop_soc__ConstPool__CONST_8643193a_0[8U]));
    VL_EXTEND_WW(266,265, __Vtemp1025, __Vtemp1024);
    if ((4U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))) {
        __Vtemp1031[5U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
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
        __Vtemp1031[6U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
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
        __Vtemp1031[7U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
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
        __Vtemp1031[8U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                            ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                ? Vtop_soc__ConstPool__CONST_c8241eac_0[8U]
                                : Vtop_soc__ConstPool__CONST_c8241cac_0[8U])
                            : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                ? ((0xfeU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                             >> 6U)) 
                                   | (vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[3U] 
                                      >> 0x1fU)) : 
                               ((0x100U & ((~ vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[0U]) 
                                           << 8U)) 
                                | ((0xfeU & (vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[2U] 
                                             >> 6U)) 
                                   | (((1U & vlSelf->top_soc__DOT__top__DOT__icache__DOT__cache_in_reg[0U])
                                        ? vlSelf->top_soc__DOT__top__DOT__icache__DOT__write_write_data[3U]
                                        : ((vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[4U] 
                                            << 0x1eU) 
                                           | (vlSelf->top_soc__DOT__top__DOT____Vcellout__sram_bus_interconnect__r_out_0[3U] 
                                              >> 2U))) 
                                      >> 0x1fU)))));
    } else {
        __Vtemp1031[5U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                            ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                ? Vtop_soc__ConstPool__CONST_8643193a_0[5U]
                                : Vtop_soc__ConstPool__CONST_8643193a_0[5U])
                            : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                ? __Vtemp1022[5U] : 
                               __Vtemp1025[5U]));
        __Vtemp1031[6U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                            ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                ? Vtop_soc__ConstPool__CONST_8643193a_0[6U]
                                : Vtop_soc__ConstPool__CONST_8643193a_0[6U])
                            : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                ? __Vtemp1022[6U] : 
                               __Vtemp1025[6U]));
        __Vtemp1031[7U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                            ? ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                ? Vtop_soc__ConstPool__CONST_8643193a_0[7U]
                                : Vtop_soc__ConstPool__CONST_8643193a_0[7U])
                            : ((1U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
                                ? __Vtemp1022[7U] : 
                               __Vtemp1025[7U]));
        __Vtemp1031[8U] = ((2U & (IData)(vlSelf->top_soc__DOT__top__DOT__icache__DOT__fsm))
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
                                ? __Vtemp1022[8U] : 
                               __Vtemp1025[8U]));
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
                                       ? __Vtemp1022[0U]
                                       : __Vtemp1025[0U])));
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
                                       ? __Vtemp1022[1U]
                                       : __Vtemp1025[1U])));
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
                                       ? __Vtemp1022[2U]
                                       : __Vtemp1025[2U])));
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
                                       ? __Vtemp1022[3U]
                                       : __Vtemp1025[3U])));
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
                        ? __Vtemp1022[4U] : __Vtemp1025[4U])));
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[5U] 
            = __Vtemp1031[5U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[6U] 
            = __Vtemp1031[6U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[7U] 
            = __Vtemp1031[7U];
        vlSelf->top_soc__DOT__top__DOT__icache__DOT__data_r_r[8U] 
            = __Vtemp1031[8U];
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
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_data_in 
        = (0x1fffffU & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                                >> 0xdU)));
    vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_addr 
        = (0x7fU & (IData)((vlSelf->top_soc__DOT__top__DOT__icache__DOT__tag_ctl1 
                            >> 6U)));
}

void Vtop_soc___024root___sequent__TOP__1(Vtop_soc___024root* vlSelf);

void Vtop_soc___024root___eval(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop_soc___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop_soc___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top_soc__DOT____Vcellinp__top__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_soc__DOT____Vcellinp__top__rst_n)))) {
        Vtop_soc___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vtop_soc___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vtop_soc___024root___combo__TOP__6(vlSelf);
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top_soc__DOT____Vcellinp__top__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top_soc__DOT____Vcellinp__top__rst_n)))) {
        Vtop_soc___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top_soc__DOT____Vcellinp__top__rst_n 
        = vlSelf->__VinpClk__TOP__top_soc__DOT____Vcellinp__top__rst_n;
    vlSelf->__VinpClk__TOP__top_soc__DOT____Vcellinp__top__rst_n 
        = vlSelf->top_soc__DOT____Vcellinp__top__rst_n;
}

QData Vtop_soc___024root___change_request_1(Vtop_soc___024root* vlSelf);

VL_INLINE_OPT QData Vtop_soc___024root___change_request(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___change_request\n"); );
    // Body
    return (Vtop_soc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop_soc___024root___change_request_1(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top_soc__DOT____Vcellinp__top__rst_n ^ vlSelf->__Vchglast__TOP__top_soc__DOT____Vcellinp__top__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->top_soc__DOT____Vcellinp__top__rst_n ^ vlSelf->__Vchglast__TOP__top_soc__DOT____Vcellinp__top__rst_n))) VL_DBG_MSGF("        CHANGE: /home/lixinbao/ysyx-workbench/npc/vsrc/top.v:15: top_soc.__Vcellinp__top__rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top_soc__DOT____Vcellinp__top__rst_n 
        = vlSelf->top_soc__DOT____Vcellinp__top__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtop_soc___024root___eval_debug_assertions(Vtop_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_soc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
