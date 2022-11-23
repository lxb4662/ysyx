// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__42(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__42\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_42 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_43 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_44 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_45 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_46 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_47 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_48 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_49 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_50 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_51 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_52 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_53 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_54 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                               >> 9U))))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__43(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__43\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_55 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_56 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_57 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_58 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_59 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_60 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_61 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_62 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_63 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_64 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_65 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_66 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_67 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_68)))) 
                       << 5U)));
}
