// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root___settle__TOP__12(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__12\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w69__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w68__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w67__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w66__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w65__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w64__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w63__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w62__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w61__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w60__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w59__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w58__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w57__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w56__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w55__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w54__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w53__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w52__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w51__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w50__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w49__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w48__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1) 
                                                  >> 7U)) 
                                              | ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c) 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1) 
                                      >> 7U) & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c) 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                          & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                         & (~ (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_1)))) 
                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w13__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w14__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w15__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w16__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w17__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w18__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w19__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w20__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w21__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w22__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w23__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w24__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w25__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w26__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w27__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w28__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w29__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w30__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w31__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w32__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w33__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w34__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w35__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w36__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w37__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w38__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w39__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w40__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w41__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w42__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w43__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w44__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w45__DOT__s_1))))) 
                    << 2U)));
}

extern const VlUnpacked<CData/*4:0*/, 1024> Vtop__ConstPool__TABLE_936305f9_0;

void Vtop___024root___settle__TOP__13(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__13\n"); );
    // Variables
    SData/*9:0*/ __Vtableidx4;
    // Body
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w46__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__c_2)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                                              << 2U))) 
                    | ((IData)((0x180U == (0x180U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2 
        = ((0x7eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2 
        = ((0x7dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2 
        = ((0x7bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_2)) 
           | (4U & (((((IData)((0x100U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1)))) 
                       | (IData)((0x80U == (0x1c0U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                      | (IData)((0x40U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                     | (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w47__DOT__s_1))))) 
                    << 2U)));
    vlSelf->top__DOT__stage1__DOT__next_pc = ((IData)(vlSelf->top__DOT__pipe3_allowin_lsu)
                                               ? ((1U 
                                                   == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                                   ? vlSelf->top__DOT__jup_addr_c
                                                   : 
                                                  ((IData)(vlSelf->ecall)
                                                    ? vlSelf->top__DOT__mtvec_wire
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__pc)))
                                               : vlSelf->top__DOT__pc);
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0ULL 
                                                       != 
                                                       (0xc00ULL 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c))) 
                                              << 2U))) 
                    | ((IData)((0xc00ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))) 
                                & (0x800ULL == (0xc00ULL 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))) 
                                  & (0x400ULL == (0xc00ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2))) 
                                 & (0ULL == (0xc00ULL 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c))))) 
                     << 2U) | (0xffffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_2) 
                                               >> 4U) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                          >> 0xaU)) 
                                                 << 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                         >> 0xbU)) 
                                                << 2U))))));
    vlSelf->axi_0_aw_addr = (QData)((IData)(((0x10U 
                                              & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                              ? 0U : 
                                             ((8U & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                               ? ((4U 
                                                   & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                     ? 
                                                    (0xcU 
                                                     | (((IData)(
                                                                 (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                  >> 0xbU)) 
                                                         << 0xbU) 
                                                        | (0x7f0U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                       >> 4U)) 
                                                              << 4U))))
                                                     : 
                                                    (8U 
                                                     | (((IData)(
                                                                 (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                  >> 0xbU)) 
                                                         << 0xbU) 
                                                        | (0x7f0U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                       >> 4U)) 
                                                              << 4U)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__icache__DOT__status))
                                                     ? 
                                                    (4U 
                                                     | (((IData)(
                                                                 (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                  >> 0xbU)) 
                                                         << 0xbU) 
                                                        | (0x7f0U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                       >> 4U)) 
                                                              << 4U))))
                                                     : 
                                                    (((IData)(
                                                              (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                               >> 0xbU)) 
                                                      << 0xbU) 
                                                     | (0x7f0U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                    >> 4U)) 
                                                           << 4U))))))
                                               : 0U))));
    vlSelf->top__DOT__icache__DOT__tag_arry_addr = 
        (((0U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
          & (~ (IData)(vlSelf->jup))) ? (0x7fU & (IData)(
                                                         (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                          >> 4U)))
          : (((3U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)) 
              | (4U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm)))
              ? (((IData)(vlSelf->top__DOT__icache__DOT__random) 
                  << 7U) | (IData)(vlSelf->top__DOT__icache__DOT__index_ar))
              : 0U));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3) 
                                                   >> 3U)) 
                                               | ((IData)(
                                                          (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                           >> 0x12U)) 
                                                  << 1U)))) 
                    | (0x1ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3) 
                                       >> 3U) & ((IData)(
                                                         (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                          >> 0x12U)) 
                                                 << 1U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4)) 
           | (2U & ((((((IData)((0U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)))) 
                        & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                   >> 0x12U))) | ((IData)(
                                                          (0x10U 
                                                           == 
                                                           (0x18U 
                                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)))) 
                                                  & (~ (IData)(
                                                               (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                                >> 0x12U))))) 
                      | ((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)))) 
                         & (~ (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                       >> 0x12U))))) 
                     | ((IData)((0x18U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_3)))) 
                        & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                   >> 0x12U)))) << 1U)));
    vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
        = vlSelf->top__DOT__icache__DOT__tag_arry_0__DOT__data
        [(0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__tag_arry_addr))];
    vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
        = vlSelf->top__DOT__icache__DOT__tag_arry_1__DOT__data
        [(0x7fU & (IData)(vlSelf->top__DOT__icache__DOT__tag_arry_addr))];
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_4)))))));
    vlSelf->top__DOT__icache__DOT__hit0 = (((0x1fffffffffffffULL 
                                             & vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0) 
                                            == (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
                                                      >> 0x35U)));
    vlSelf->top__DOT__icache__DOT__tag_arry_data_in 
        = (((4U == (IData)(vlSelf->top__DOT__icache__DOT__write_fsm)) 
            & (IData)(vlSelf->axi_0_w_valid)) ? (0x3fffffffffffffULL 
                                                 & ((IData)(vlSelf->top__DOT__icache__DOT__random)
                                                     ? (QData)((IData)(
                                                                       ((0x36U 
                                                                         >= 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U)))) 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U))))))))
                                                     : (QData)((IData)(
                                                                       ((0x36U 
                                                                         >= 
                                                                         (0x3fU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U)))) 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                                                >> 4U))))))))))
            : ((4U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))
                ? (0x20000000000000ULL | vlSelf->top__DOT__icache__DOT__tag_ar)
                : 0ULL));
    vlSelf->top__DOT__icache__DOT__hit1 = (((0x1fffffffffffffULL 
                                             & vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1) 
                                            == (vlSelf->top__DOT__stage1__DOT__next_pc 
                                                >> 0xbU)) 
                                           & (IData)(
                                                     (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
                                                      >> 0x35U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5)))) 
                    & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                               >> 0x19U))) | ((IData)(
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5)))) 
                                              & (~ (IData)(
                                                           (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                            >> 0x19U))))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5)))) 
                     & (~ (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                   >> 0x19U))))) | 
                 (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5) 
                   & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5) 
                      >> 1U)) & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                         >> 0x19U)))));
    vlSelf->top__DOT__icache__DOT__miss = (1U & (~ 
                                                 ((IData)(vlSelf->top__DOT__icache__DOT__hit1) 
                                                  | (IData)(vlSelf->top__DOT__icache__DOT__hit0))));
    vlSelf->top__DOT__icache__DOT__hit = ((IData)(vlSelf->top__DOT__icache__DOT__hit0) 
                                          | (IData)(vlSelf->top__DOT__icache__DOT__hit1));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_6))) 
                            & (0x8000000ULL == (0xc000000ULL 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_6))) 
                              & (0x4000000ULL == (0xc000000ULL 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_6))) 
                             & (0ULL == (0xc000000ULL 
                                         & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_6) 
                     & (IData)((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                >> 0x1aU))) & (IData)(
                                                      (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                       >> 0x1bU)))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_6) 
                             & (IData)((0ULL != (0xc000000ULL 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)))) 
                            | (IData)((0xc000000ULL 
                                       == (0xc000000ULL 
                                           & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5) 
                                               << 0x1cU) 
                                              & ((0xf0000000U 
                                                  & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5) 
                                                     << 0x1bU)) 
                                                 | ((IData)(
                                                            (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                             >> 0x19U)) 
                                                    << 0x1cU))) 
                                             | (0xf0000000U 
                                                & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__s_5) 
                                                    << 0x1bU) 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT____Vcellout__b1__c 
                                                               >> 0x19U)) 
                                                      << 0x1cU))))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w0__DOT__c_1)))))));
    __Vtableidx4 = ((0x200U & ((~ (IData)(vlSelf->jup)) 
                               << 9U)) | (((IData)(vlSelf->top__DOT__icache__DOT__miss) 
                                           << 8U) | 
                                          ((((IData)(vlSelf->top__DOT__icache__DOT__miss) 
                                             & ((IData)(vlSelf->top__DOT__icache__DOT__random)
                                                 ? (IData)(
                                                           (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_1 
                                                            >> 0x36U))
                                                 : (IData)(
                                                           (vlSelf->top__DOT__icache__DOT__tag_arry_data_out_0 
                                                            >> 0x36U)))) 
                                            << 7U) 
                                           | (((IData)(vlSelf->axi_0_aw_ready) 
                                               << 6U) 
                                              | (((IData)(vlSelf->axi_0_ar_ready) 
                                                  << 5U) 
                                                 | (IData)(vlSelf->top__DOT__icache__DOT__status))))));
    vlSelf->top__DOT__icache__DOT__next_status = Vtop__ConstPool__TABLE_936305f9_0
        [__Vtableidx4];
    vlSelf->top__DOT__icache_valid = ((0U == (IData)(vlSelf->top__DOT__icache__DOT__status)) 
                                      & (IData)(vlSelf->top__DOT__icache__DOT__hit));
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
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                    << 1U)));
    if ((0U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((0x10U == (IData)(vlSelf->top__DOT__icache__DOT__next_status))
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_0_r_valid) ? 2U : (IData)(vlSelf->top__DOT__icache__DOT__read_fsm));
    } else if ((2U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_0_r_valid) ? 3U : (IData)(vlSelf->top__DOT__icache__DOT__read_fsm));
    } else if ((3U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_0_r_valid) ? 4U : (IData)(vlSelf->top__DOT__icache__DOT__read_fsm));
    } else if ((4U == (IData)(vlSelf->top__DOT__icache__DOT__read_fsm))) {
        vlSelf->top__DOT__icache__DOT__read_fsm_next 
            = ((IData)(vlSelf->axi_0_r_valid) ? 0U : (IData)(vlSelf->top__DOT__icache__DOT__read_fsm));
    }
    vlSelf->top__DOT__ctl1__DOT__fsm_next = (7U & (
                                                   (0U 
                                                    == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                                    ? 
                                                   ((IData)(vlSelf->jup)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__ctl1__DOT__fsm))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__icache_valid)
                                                      ? 0U
                                                      : 1U)
                                                     : 0U)));
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
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                               >> 9U))))));
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
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_1 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w1__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_2 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w2__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_3 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w3__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_4 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w4__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_5 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w5__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_6 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w6__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_7 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w7__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_8 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w8__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_9 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w9__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_10 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w10__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3)) 
           | (4U & ((0xffffffcU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2) 
                                    >> 4U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc00U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                                              << 2U))) 
                    | ((IData)((0xc00U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3 
        = ((0x1bU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)) 
           | (4U & (((((IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))) 
                                & (0x800U == (0xc00U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                       | (IData)(((0U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))) 
                                  & (0x400U == (0xc00U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))))) 
                      | (IData)(((0x40U == (0x40U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2))) 
                                 & (0U == (0xc00U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))))) 
                     << 2U) | (0x7ffffcU & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_2) 
                                              >> 4U) 
                                             & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                                >> 8U)) 
                                            & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                               >> 9U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_4)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4 
        = ((6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_4)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3) 
                                     >> 2U) & ((0x1ffffffeU 
                                                & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3) 
                                                   >> 3U)) 
                                               | (0x7ffeU 
                                                  & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                                     >> 0x11U))))) 
                    | (0x7ffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3) 
                                   >> 3U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4 
        = ((5U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4)) 
           | (2U & ((((0x7ffeU & (((IData)((0U == (0x18U 
                                                   & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                             >> 0x11U))) 
                      | (((IData)((0x10U == (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)))) 
                          & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                >> 0x12U))) << 1U)) 
                     | (((IData)((8U == (0x18U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)))) 
                         & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                               >> 0x12U))) << 1U)) 
                    | (0x7ffeU & (((IData)((0x18U == 
                                            (0x18U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_3)))) 
                                   << 1U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                             >> 0x11U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_5)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5 
        = ((2U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_4)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_6 
        = (1U & (((((IData)((0U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5)))) 
                    & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                       >> 0x19U)) | ((IData)((2U == 
                                              (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5)))) 
                                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                           >> 0x19U)))) 
                  | ((IData)((1U == (3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5)))) 
                     & (~ (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                           >> 0x19U)))) | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5) 
                                            & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5) 
                                               >> 1U)) 
                                           & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                              >> 0x19U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_7 
        = (1U & ((((IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_6))) 
                            & (0x8000000U == (0xc000000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                   | (IData)(((0U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_6))) 
                              & (0x4000000U == (0xc000000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))))) 
                  | (IData)(((1U == (1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_6))) 
                             & (0U == (0xc000000U & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11))))) 
                 | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_6) 
                     & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                        >> 0x1aU)) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                      >> 0x1bU))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
        = ((0x20000000U & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_6) 
                             & (IData)((0U != (0xc000000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                            | (IData)((0xc000000U == 
                                       (0xc000000U 
                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11)))) 
                           << 0x1dU)) | ((0x10000000U 
                                          & ((((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5) 
                                               << 0x1cU) 
                                              & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5) 
                                                  << 0x1bU) 
                                                 | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                                    << 3U))) 
                                             | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__s_5) 
                                                 << 0x1bU) 
                                                & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_11 
                                                   << 3U)))) 
                                         | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_5) 
                                             << 0x1aU) 
                                            | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_4) 
                                                << 0x17U) 
                                               | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_3) 
                                                   << 0x12U) 
                                                  | (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_2) 
                                                      << 0xbU) 
                                                     | (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w11__DOT__c_1)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2)) 
           | (8U & ((0x3fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1) 
                                    >> 6U) & ((0x1fffff8U 
                                               & ((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1) 
                                                  >> 7U)) 
                                              | (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                                 << 3U)))) 
                    | (0x1fffff8U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1) 
                                      >> 7U) & (vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                                << 3U))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2 
        = ((0x77U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)) 
           | (8U & ((((((IData)((0U == (0x600U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12) 
                       | ((IData)((0x400U == (0x600U 
                                              & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                          & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                      | ((IData)((0x200U == (0x600U 
                                             & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                         & (~ vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                     | ((IData)((0x600U == (0x600U 
                                            & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_1)))) 
                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2)) 
           | (0x10U & ((0xfffffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                        << 3U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                                                  << 4U))) 
                       | ((IData)((0xcU == (0xcU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2 
        = ((0x6fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)) 
           | (0x10U & (((((IData)((8U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                          | (IData)((4U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                         | (IData)((2U == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                        | (IData)((0xeU == (0xeU & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2)) 
           | (0x20U & ((0xffffffe0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                        << 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                                                  << 5U))) 
                       | ((IData)((0x60U == (0x60U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                          << 5U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2 
        = ((0x5fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)) 
           | (0x20U & (((((IData)((0x40U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                          | (IData)((0x20U == (0x70U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                         | (IData)((0x10U == (0x70U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                        | (IData)((0x70U == (0x70U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                       << 5U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_2)) 
           | (0x40U & ((0x7fffffc0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                        >> 1U) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x300U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                                                  << 6U))) 
                       | ((IData)((0x300U == (0x300U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                          << 6U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2 
        = ((0x3fU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)) 
           | (0x40U & (((((IData)((0x200U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                          | (IData)((0x100U == (0x380U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                         | (IData)((0x80U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                        | (IData)((0x380U == (0x380U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                       << 6U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_3)) 
           | (8U & ((0x7ffff8U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                   >> 9U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x6000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                                             << 3U))) 
                    | ((IData)((0x6000U == (0x6000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                       << 3U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_3 
        = ((0x17U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_3)) 
           | (8U & (((((IData)((0x4000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                       | (IData)((0x2000U == (0x7000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                      | (IData)((0x1000U == (0x7000U 
                                             & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                     | (IData)((0x7000U == (0x7000U 
                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                    << 3U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_3)) 
           | (0x10U & ((0x1ffff0U & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                      >> 0xbU) & ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x30000U 
                                                            & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                                                  << 4U))) 
                       | ((IData)((0x30000U == (0x30000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                          << 4U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_3 
        = ((0xfU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_3)) 
           | (0x10U & (((((IData)((0x20000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                          | (IData)((0x10000U == (0x38000U 
                                                  & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                         | (IData)((0x8000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                        | (IData)((0x38000U == (0x38000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                       << 4U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_4)) 
           | (4U & ((0x7ffcU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                 >> 0x11U) & ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x300000U 
                                                        & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                                              << 2U))) 
                    | ((IData)((0x300000U == (0x300000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                       << 2U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_4 
        = ((3U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_4)) 
           | (4U & (((((IData)((0x200000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                       | (IData)((0x100000U == (0x380000U 
                                                & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                      | (IData)((0x80000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                     | (IData)((0x380000U == (0x380000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                    << 2U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_5)) 
           | (2U & ((0x3feU & ((vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12 
                                >> 0x16U) & ((IData)(
                                                     (0U 
                                                      != 
                                                      (0x1400000U 
                                                       & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                                             << 1U))) 
                    | ((IData)((0x1400000U == (0x1400000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_5 
        = ((1U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_5)) 
           | (2U & (((((IData)((0x400000U == (0x1c00000U 
                                              & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12))) 
                       | (IData)((0x1000000U == (0x1c00000U 
                                                 & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                      | (IData)((0x800000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                     | (IData)((0x1c00000U == (0x1c00000U 
                                               & vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__c_in_12)))) 
                    << 1U)));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_3)) 
           | (1U & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2) 
                     & (IData)((0U != (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2))))) 
                    | (IData)((6U == (6U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_3 
        = ((0x1eU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_3)) 
           | (1U & ((((IData)((4U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)))) 
                      | (IData)((2U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2))))) 
                     | (IData)((1U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2))))) 
                    | (IData)((7U == (7U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)))))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__c_3)) 
           | (2U & ((0x3ffffffeU & (((IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2) 
                                     >> 2U) & ((IData)(
                                                       (0U 
                                                        != 
                                                        (0x30U 
                                                         & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)))) 
                                               << 1U))) 
                    | ((IData)((0x30U == (0x30U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)))) 
                       << 1U))));
    vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_3 
        = ((0x1dU & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_3)) 
           | (2U & (((((IData)((0x20U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2)))) 
                       | (IData)((0x10U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2))))) 
                      | (IData)((8U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2))))) 
                     | (IData)((0x38U == (0x38U & (IData)(vlSelf->top__DOT__exu__DOT__aluf__DOT__mul1__DOT__w1__DOT__w12__DOT__s_2))))) 
                    << 1U)));
}
