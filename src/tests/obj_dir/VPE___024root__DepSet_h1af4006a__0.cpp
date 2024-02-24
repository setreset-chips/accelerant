// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE.h for the primary calling header

#include "verilated.h"

#include "VPE__Syms.h"
#include "VPE___024root.h"

void VPE___024root___eval_act(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPE___024root___nba_sequent__TOP__0(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__PE__DOT__a_input_pins__v0;
    __Vdlyvdim0__PE__DOT__a_input_pins__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PE__DOT__a_input_pins__v0;
    __Vdlyvval__PE__DOT__a_input_pins__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PE__DOT__a_input_pins__v0;
    __Vdlyvset__PE__DOT__a_input_pins__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__PE__DOT__b_input_pins__v0;
    __Vdlyvdim0__PE__DOT__b_input_pins__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PE__DOT__b_input_pins__v0;
    __Vdlyvval__PE__DOT__b_input_pins__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PE__DOT__b_input_pins__v0;
    __Vdlyvset__PE__DOT__b_input_pins__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__PE__DOT__b_input_pins__v1;
    __Vdlyvdim0__PE__DOT__b_input_pins__v1 = 0;
    IData/*31:0*/ __Vdlyvval__PE__DOT__b_input_pins__v1;
    __Vdlyvval__PE__DOT__b_input_pins__v1 = 0;
    CData/*0:0*/ __Vdlyvset__PE__DOT__b_input_pins__v1;
    __Vdlyvset__PE__DOT__b_input_pins__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__PE__DOT__c_input_pins__v0;
    __Vdlyvdim0__PE__DOT__c_input_pins__v0 = 0;
    IData/*31:0*/ __Vdlyvval__PE__DOT__c_input_pins__v0;
    __Vdlyvval__PE__DOT__c_input_pins__v0 = 0;
    CData/*0:0*/ __Vdlyvset__PE__DOT__c_input_pins__v0;
    __Vdlyvset__PE__DOT__c_input_pins__v0 = 0;
    // Body
    __Vdlyvset__PE__DOT__c_input_pins__v0 = 0U;
    __Vdlyvset__PE__DOT__a_input_pins__v0 = 0U;
    __Vdlyvset__PE__DOT__b_input_pins__v0 = 0U;
    __Vdlyvset__PE__DOT__b_input_pins__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->load)))) {
            vlSelf->PE__DOT____Vlvbound_h810938b2__0 
                = vlSelf->c;
            vlSelf->PE__DOT____Vlvbound_hf8e8f9d8__0 
                = vlSelf->a;
            if ((5U >= (7U & (IData)(vlSelf->instruction)))) {
                __Vdlyvval__PE__DOT__c_input_pins__v0 
                    = vlSelf->PE__DOT____Vlvbound_h810938b2__0;
                __Vdlyvset__PE__DOT__c_input_pins__v0 = 1U;
                __Vdlyvdim0__PE__DOT__c_input_pins__v0 
                    = (7U & (IData)(vlSelf->instruction));
                __Vdlyvval__PE__DOT__a_input_pins__v0 
                    = vlSelf->PE__DOT____Vlvbound_hf8e8f9d8__0;
                __Vdlyvset__PE__DOT__a_input_pins__v0 = 1U;
                __Vdlyvdim0__PE__DOT__a_input_pins__v0 
                    = (7U & (IData)(vlSelf->instruction));
                vlSelf->out_to_switch = vlSelf->PE__DOT__out_pins
                    [(7U & (IData)(vlSelf->instruction))];
            } else {
                vlSelf->out_to_switch = 0U;
            }
            if ((8U & (IData)(vlSelf->instruction))) {
                vlSelf->PE__DOT____Vlvbound_hfc62d1fa__0 
                    = vlSelf->PE__DOT__internal_register;
                if ((5U >= (7U & (IData)(vlSelf->instruction)))) {
                    __Vdlyvval__PE__DOT__b_input_pins__v0 
                        = vlSelf->PE__DOT____Vlvbound_hfc62d1fa__0;
                    __Vdlyvset__PE__DOT__b_input_pins__v0 = 1U;
                    __Vdlyvdim0__PE__DOT__b_input_pins__v0 
                        = (7U & (IData)(vlSelf->instruction));
                }
            } else {
                vlSelf->PE__DOT____Vlvbound_hfc62d1fa__1 
                    = vlSelf->b;
                if ((5U >= (7U & (IData)(vlSelf->instruction)))) {
                    __Vdlyvval__PE__DOT__b_input_pins__v1 
                        = vlSelf->PE__DOT____Vlvbound_hfc62d1fa__1;
                    __Vdlyvset__PE__DOT__b_input_pins__v1 = 1U;
                    __Vdlyvdim0__PE__DOT__b_input_pins__v1 
                        = (7U & (IData)(vlSelf->instruction));
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->PE__DOT__configuration = 0U;
        vlSelf->PE__DOT__internal_register = 0U;
    } else if (vlSelf->load) {
        vlSelf->PE__DOT__configuration = vlSelf->instruction;
        vlSelf->PE__DOT__internal_register = vlSelf->internal_data_in;
    }
    if (__Vdlyvset__PE__DOT__c_input_pins__v0) {
        vlSelf->PE__DOT__c_input_pins[__Vdlyvdim0__PE__DOT__c_input_pins__v0] 
            = __Vdlyvval__PE__DOT__c_input_pins__v0;
    }
    if (__Vdlyvset__PE__DOT__a_input_pins__v0) {
        vlSelf->PE__DOT__a_input_pins[__Vdlyvdim0__PE__DOT__a_input_pins__v0] 
            = __Vdlyvval__PE__DOT__a_input_pins__v0;
    }
    if (__Vdlyvset__PE__DOT__b_input_pins__v0) {
        vlSelf->PE__DOT__b_input_pins[__Vdlyvdim0__PE__DOT__b_input_pins__v0] 
            = __Vdlyvval__PE__DOT__b_input_pins__v0;
    }
    if (__Vdlyvset__PE__DOT__b_input_pins__v1) {
        vlSelf->PE__DOT__b_input_pins[__Vdlyvdim0__PE__DOT__b_input_pins__v1] 
            = __Vdlyvval__PE__DOT__b_input_pins__v1;
    }
    vlSelf->PE__DOT__fm__DOT__mantissaProd = (0xffffffffffffULL 
                                              & ((0x800000ULL 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & vlSelf->PE__DOT__a_input_pins
                                                                     [1U])))) 
                                                 * 
                                                 (0x800000ULL 
                                                  | (QData)((IData)(
                                                                    (0x7fffffU 
                                                                     & vlSelf->PE__DOT__b_input_pins
                                                                     [1U]))))));
    vlSelf->PE__DOT__fm__DOT__expF = (0xffU & (((vlSelf->PE__DOT__a_input_pins
                                                 [1U] 
                                                 >> 0x17U) 
                                                + (
                                                   vlSelf->PE__DOT__b_input_pins
                                                   [1U] 
                                                   >> 0x17U)) 
                                               - (IData)(0x7fU)));
    vlSelf->PE__DOT__fm__DOT__mantissa = (0x7fffffU 
                                          & (IData)(
                                                    (vlSelf->PE__DOT__fm__DOT__mantissaProd 
                                                     >> 0x19U)));
    vlSelf->PE__DOT__fm__DOT__i = 0U;
    while (VL_GTS_III(32, 0x17U, vlSelf->PE__DOT__fm__DOT__i)) {
        if ((0x400000U & vlSelf->PE__DOT__fm__DOT__mantissa)) {
            vlSelf->PE__DOT__fm__DOT__i = 0x17U;
        } else {
            vlSelf->PE__DOT__fm__DOT__mantissa = (0x7fffffU 
                                                  & (vlSelf->PE__DOT__fm__DOT__mantissa 
                                                     << 1U));
            vlSelf->PE__DOT__fm__DOT__expF = (0xffU 
                                              & ((IData)(vlSelf->PE__DOT__fm__DOT__expF) 
                                                 - (IData)(1U)));
            vlSelf->PE__DOT__fm__DOT__mantissa = ((0x7ffffeU 
                                                   & vlSelf->PE__DOT__fm__DOT__mantissa) 
                                                  | (1U 
                                                     & (IData)(
                                                               (vlSelf->PE__DOT__fm__DOT__mantissaProd 
                                                                >> 0x18U))));
            vlSelf->PE__DOT__fm__DOT__mantissaProd 
                = (0xffffffffffffULL & (vlSelf->PE__DOT__fm__DOT__mantissaProd 
                                        << 1U));
        }
        vlSelf->PE__DOT__fm__DOT__i = ((IData)(1U) 
                                       + vlSelf->PE__DOT__fm__DOT__i);
    }
    vlSelf->PE__DOT__fm__DOT__mantissa = (0x7fffffU 
                                          & (vlSelf->PE__DOT__fm__DOT__mantissa 
                                             << 1U));
    vlSelf->PE__DOT__fm__DOT__expF = (0xffU & ((IData)(1U) 
                                               + (IData)(vlSelf->PE__DOT__fm__DOT__expF)));
    vlSelf->PE__DOT__fm__DOT__mantissa = ((0x7ffffeU 
                                           & vlSelf->PE__DOT__fm__DOT__mantissa) 
                                          | (1U & (IData)(
                                                          (vlSelf->PE__DOT__fm__DOT__mantissaProd 
                                                           >> 0x18U))));
    vlSelf->PE__DOT____Vcellout__fm____pinNumber3 = 
        ((0x80000000U & (vlSelf->PE__DOT__a_input_pins
                         [1U] ^ vlSelf->PE__DOT__b_input_pins
                         [1U])) | (((IData)(vlSelf->PE__DOT__fm__DOT__expF) 
                                    << 0x17U) | vlSelf->PE__DOT__fm__DOT__mantissa));
    vlSelf->PE__DOT__fa__DOT__finalSign = 0U;
    vlSelf->PE__DOT__fa__DOT__largerMag = 0U;
    vlSelf->PE__DOT__fa__DOT__num1Exp = (0xffU & (vlSelf->PE__DOT__a_input_pins
                                                  [0U] 
                                                  >> 0x17U));
    vlSelf->PE__DOT__fa__DOT__num2Exp = (0xffU & (vlSelf->PE__DOT__b_input_pins
                                                  [0U] 
                                                  >> 0x17U));
    vlSelf->PE__DOT__fa__DOT__num1Mant = (0x800000U 
                                          | (0x7fffffU 
                                             & vlSelf->PE__DOT__a_input_pins
                                             [0U]));
    vlSelf->PE__DOT__fa__DOT__num2Mant = (0x800000U 
                                          | (0x7fffffU 
                                             & vlSelf->PE__DOT__b_input_pins
                                             [0U]));
    if (((IData)(vlSelf->PE__DOT__fa__DOT__num1Exp) 
         < (IData)(vlSelf->PE__DOT__fa__DOT__num2Exp))) {
        vlSelf->PE__DOT__fa__DOT__finalExp = vlSelf->PE__DOT__fa__DOT__num2Exp;
        vlSelf->PE__DOT__fa__DOT__num1Mant = ((0x17U 
                                               >= (0xffU 
                                                   & ((IData)(vlSelf->PE__DOT__fa__DOT__finalExp) 
                                                      - (IData)(vlSelf->PE__DOT__fa__DOT__num2Exp))))
                                               ? (0xffffffU 
                                                  & (vlSelf->PE__DOT__fa__DOT__num1Mant 
                                                     >> 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->PE__DOT__fa__DOT__finalExp) 
                                                         - (IData)(vlSelf->PE__DOT__fa__DOT__num2Exp)))))
                                               : 0U);
        vlSelf->PE__DOT__fa__DOT__largerMag = 1U;
    } else if (((IData)(vlSelf->PE__DOT__fa__DOT__num2Exp) 
                < (IData)(vlSelf->PE__DOT__fa__DOT__num1Exp))) {
        vlSelf->PE__DOT__fa__DOT__finalExp = vlSelf->PE__DOT__fa__DOT__num1Exp;
        vlSelf->PE__DOT__fa__DOT__num2Mant = ((0x17U 
                                               >= (0xffU 
                                                   & ((IData)(vlSelf->PE__DOT__fa__DOT__finalExp) 
                                                      - (IData)(vlSelf->PE__DOT__fa__DOT__num2Exp))))
                                               ? (0xffffffU 
                                                  & (vlSelf->PE__DOT__fa__DOT__num2Mant 
                                                     >> 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->PE__DOT__fa__DOT__finalExp) 
                                                         - (IData)(vlSelf->PE__DOT__fa__DOT__num2Exp)))))
                                               : 0U);
        vlSelf->PE__DOT__fa__DOT__largerMag = 0U;
    } else {
        vlSelf->PE__DOT__fa__DOT__finalExp = vlSelf->PE__DOT__fa__DOT__num1Exp;
        vlSelf->PE__DOT__fa__DOT__largerMag = (vlSelf->PE__DOT__fa__DOT__num2Mant 
                                               > vlSelf->PE__DOT__fa__DOT__num1Mant);
    }
    if (((vlSelf->PE__DOT__a_input_pins[0U] & vlSelf->PE__DOT__b_input_pins
          [0U]) >> 0x1fU)) {
        vlSelf->PE__DOT__fa__DOT__sumMants = (0x1ffffffU 
                                              & (vlSelf->PE__DOT__fa__DOT__num2Mant 
                                                 + vlSelf->PE__DOT__fa__DOT__num1Mant));
        vlSelf->PE__DOT__fa__DOT__finalExp = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->PE__DOT__fa__DOT__finalExp)));
        vlSelf->PE__DOT__fa__DOT__finalSign = 0U;
        vlSelf->PE__DOT__fa__DOT__finalMant = (0xffffffU 
                                               & (vlSelf->PE__DOT__fa__DOT__sumMants 
                                                  >> 1U));
    } else if ((1U & ((vlSelf->PE__DOT__a_input_pins
                       [0U] >> 0x1fU) & (~ (vlSelf->PE__DOT__b_input_pins
                                            [0U] >> 0x1fU))))) {
        vlSelf->PE__DOT__fa__DOT__sumMants = (0x1ffffffU 
                                              & (vlSelf->PE__DOT__fa__DOT__num1Mant 
                                                 - vlSelf->PE__DOT__fa__DOT__num2Mant));
        vlSelf->PE__DOT__fa__DOT__finalSign = vlSelf->PE__DOT__fa__DOT__largerMag;
        vlSelf->PE__DOT__fa__DOT__finalMant = (0xffffffU 
                                               & vlSelf->PE__DOT__fa__DOT__sumMants);
        vlSelf->PE__DOT__fa__DOT__finalMant = (0xffffffU 
                                               & ((0x1000000U 
                                                   & vlSelf->PE__DOT__fa__DOT__sumMants)
                                                   ? 
                                                  ((IData)(0xffffffffU) 
                                                   * vlSelf->PE__DOT__fa__DOT__finalMant)
                                                   : vlSelf->PE__DOT__fa__DOT__finalMant));
    } else if ((1U & ((~ (vlSelf->PE__DOT__a_input_pins
                          [0U] >> 0x1fU)) & (vlSelf->PE__DOT__b_input_pins
                                             [0U] >> 0x1fU)))) {
        vlSelf->PE__DOT__fa__DOT__sumMants = (0x1ffffffU 
                                              & (vlSelf->PE__DOT__fa__DOT__num2Mant 
                                                 - vlSelf->PE__DOT__fa__DOT__num1Mant));
        vlSelf->PE__DOT__fa__DOT__finalSign = (1U & 
                                               (~ (IData)(vlSelf->PE__DOT__fa__DOT__largerMag)));
        vlSelf->PE__DOT__fa__DOT__finalMant = (0xffffffU 
                                               & vlSelf->PE__DOT__fa__DOT__sumMants);
        vlSelf->PE__DOT__fa__DOT__finalMant = (0xffffffU 
                                               & ((0x1000000U 
                                                   & vlSelf->PE__DOT__fa__DOT__sumMants)
                                                   ? 
                                                  ((IData)(0xffffffffU) 
                                                   * vlSelf->PE__DOT__fa__DOT__finalMant)
                                                   : vlSelf->PE__DOT__fa__DOT__finalMant));
    } else {
        vlSelf->PE__DOT__fa__DOT__sumMants = (0x1ffffffU 
                                              & (vlSelf->PE__DOT__fa__DOT__num2Mant 
                                                 + vlSelf->PE__DOT__fa__DOT__num1Mant));
        vlSelf->PE__DOT__fa__DOT__finalExp = (0xffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->PE__DOT__fa__DOT__finalExp)));
        vlSelf->PE__DOT__fa__DOT__finalSign = 1U;
        vlSelf->PE__DOT__fa__DOT__finalMant = (0xffffffU 
                                               & (vlSelf->PE__DOT__fa__DOT__sumMants 
                                                  >> 1U));
    }
    vlSelf->PE__DOT__fa__DOT__i = 0U;
    while (VL_GTS_III(32, 0x17U, vlSelf->PE__DOT__fa__DOT__i)) {
        if ((0x800000U & vlSelf->PE__DOT__fa__DOT__finalMant)) {
            vlSelf->PE__DOT__fa__DOT__i = 0x17U;
        } else {
            vlSelf->PE__DOT__fa__DOT__finalMant = (0xffffffU 
                                                   & (vlSelf->PE__DOT__fa__DOT__finalMant 
                                                      << 1U));
            vlSelf->PE__DOT__fa__DOT__finalExp = (0xffU 
                                                  & ((IData)(vlSelf->PE__DOT__fa__DOT__finalExp) 
                                                     - (IData)(1U)));
        }
        vlSelf->PE__DOT__fa__DOT__i = ((IData)(1U) 
                                       + vlSelf->PE__DOT__fa__DOT__i);
    }
    vlSelf->PE__DOT__fa__DOT__finalMant = (0xffffffU 
                                           & (vlSelf->PE__DOT__fa__DOT__finalMant 
                                              << 1U));
    if (((0U == vlSelf->PE__DOT__a_input_pins[0U]) 
         & (0U == (IData)(vlSelf->PE__DOT__fa__DOT__num2Exp)))) {
        vlSelf->PE__DOT__fa__DOT__finalMant = 0U;
        vlSelf->PE__DOT__fa__DOT__finalExp = 0U;
    }
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_a 
        = ((0U == vlSelf->PE__DOT__a_input_pins[2U])
            ? 0U : (0x800000U | (0x7fffffU & vlSelf->PE__DOT__a_input_pins
                                 [2U])));
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_b 
        = ((0U == vlSelf->PE__DOT__b_input_pins[2U])
            ? 0U : (0x800000U | (0x7fffffU & vlSelf->PE__DOT__b_input_pins
                                 [2U])));
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c 
        = ((0U == vlSelf->PE__DOT__c_input_pins[2U])
            ? 0U : (0x800000U | (0x7fffffU & vlSelf->PE__DOT__c_input_pins
                                 [2U])));
    vlSelf->PE__DOT__systolic_fma__DOT__sign_out = 
        ((vlSelf->PE__DOT__a_input_pins[2U] ^ vlSelf->PE__DOT__b_input_pins
          [2U]) >> 0x1fU);
    vlSelf->PE__DOT__systolic_fma__DOT__exp_out = (0xffU 
                                                   & (((vlSelf->PE__DOT__a_input_pins
                                                        [2U] 
                                                        >> 0x17U) 
                                                       + 
                                                       (vlSelf->PE__DOT__b_input_pins
                                                        [2U] 
                                                        >> 0x17U)) 
                                                      - (IData)(0x7fU)));
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_out 
        = (0xffffffffffffULL & ((QData)((IData)(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_a)) 
                                * (QData)((IData)(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_b))));
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
        = (0xffffffU & (IData)((vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_out 
                                >> 0x18U)));
    if ((0x800000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 1U));
    } else if ((0x400000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 2U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(1U)));
    } else if ((0x200000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 3U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(2U)));
    } else if ((0x100000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 4U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(3U)));
    } else if ((0x80000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 5U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(4U)));
    } else if ((0x40000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 6U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(5U)));
    } else if ((0x20000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 7U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(6U)));
    } else if ((0x10000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 8U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(7U)));
    } else if ((0x8000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 9U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(8U)));
    } else if ((0x4000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0xaU));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(9U)));
    } else if ((0x2000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0xbU));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0xaU)));
    } else if ((0x1000U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0xcU));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0xbU)));
    } else if ((0x800U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0xdU));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0xcU)));
    } else if ((0x400U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0xeU));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0xdU)));
    } else if ((0x200U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0xfU));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0xeU)));
    } else if ((0x100U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0x10U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0xfU)));
    } else if ((0x80U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0x11U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0x10U)));
    } else if ((0x40U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0x12U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0x11U)));
    } else if ((0x20U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0x13U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0x12U)));
    } else if ((0x10U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0x14U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0x13U)));
    } else if ((8U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0x15U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0x14U)));
    } else if ((4U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0x16U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0x15U)));
    } else if ((2U & vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                            << 0x17U));
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
                        - (IData)(0x16U)));
    } else {
        vlSelf->PE__DOT__systolic_fma__DOT__exp_out = 0xffU;
    }
    vlSelf->PE__DOT__systolic_fma__DOT__exp_out = (0xffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out)));
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
        = (((0U == vlSelf->PE__DOT__a_input_pins[2U]) 
            | (0U == vlSelf->PE__DOT__b_input_pins[2U]))
            ? 0U : (0x800000U | (0x7fffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                                              >> 1U))));
    if (((IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out) 
         < (0xffU & (vlSelf->PE__DOT__c_input_pins[2U] 
                     >> 0x17U)))) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & (vlSelf->PE__DOT__c_input_pins
                        [2U] >> 0x17U));
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
            = ((0x17U >= (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                                   - (IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out))))
                ? (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                                >> (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                                             - (IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out)))))
                : 0U);
        vlSelf->PE__DOT__systolic_fma__DOT__largerMag = 1U;
    } else if (((0xffU & (vlSelf->PE__DOT__c_input_pins
                          [2U] >> 0x17U)) < (IData)(vlSelf->PE__DOT__systolic_fma__DOT__exp_out))) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = vlSelf->PE__DOT__systolic_fma__DOT__exp_out;
        vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c 
            = ((0x17U >= (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                                   - (vlSelf->PE__DOT__c_input_pins
                                      [2U] >> 0x17U))))
                ? (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c 
                                >> (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                                             - (vlSelf->PE__DOT__c_input_pins
                                                [2U] 
                                                >> 0x17U)))))
                : 0U);
        vlSelf->PE__DOT__systolic_fma__DOT__largerMag = 0U;
    } else {
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = vlSelf->PE__DOT__systolic_fma__DOT__exp_out;
        vlSelf->PE__DOT__systolic_fma__DOT__largerMag 
            = (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c 
               > vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm);
    }
    if (((IData)(vlSelf->PE__DOT__systolic_fma__DOT__sign_out) 
         & (vlSelf->PE__DOT__c_input_pins[2U] >> 0x1fU))) {
        vlSelf->PE__DOT__systolic_fma__DOT__sum_mants 
            = (0x1ffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c 
                             + vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp)));
        vlSelf->PE__DOT__systolic_fma__DOT__sign_out = 0U;
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__sum_mants 
                            >> 1U));
    } else if (((IData)(vlSelf->PE__DOT__systolic_fma__DOT__sign_out) 
                & (~ (vlSelf->PE__DOT__c_input_pins
                      [2U] >> 0x1fU)))) {
        vlSelf->PE__DOT__systolic_fma__DOT__sum_mants 
            = (0x1ffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm 
                             - vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c));
        vlSelf->PE__DOT__systolic_fma__DOT__sign_out 
            = vlSelf->PE__DOT__systolic_fma__DOT__largerMag;
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & vlSelf->PE__DOT__systolic_fma__DOT__sum_mants);
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & ((0x1000000U & vlSelf->PE__DOT__systolic_fma__DOT__sum_mants)
                             ? ((IData)(0xffffffffU) 
                                * vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)
                             : vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa));
    } else if ((1U & ((~ (IData)(vlSelf->PE__DOT__systolic_fma__DOT__sign_out)) 
                      & (vlSelf->PE__DOT__c_input_pins
                         [2U] >> 0x1fU)))) {
        vlSelf->PE__DOT__systolic_fma__DOT__sum_mants 
            = (0x1ffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c 
                             - vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm));
        vlSelf->PE__DOT__systolic_fma__DOT__sign_out 
            = (1U & (~ (IData)(vlSelf->PE__DOT__systolic_fma__DOT__largerMag)));
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & vlSelf->PE__DOT__systolic_fma__DOT__sum_mants);
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & ((0x1000000U & vlSelf->PE__DOT__systolic_fma__DOT__sum_mants)
                             ? ((IData)(0xffffffffU) 
                                * vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)
                             : vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa));
    } else {
        vlSelf->PE__DOT__systolic_fma__DOT__sum_mants 
            = (0x1ffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c 
                             + vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp)));
        vlSelf->PE__DOT__systolic_fma__DOT__sign_out = 1U;
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__sum_mants 
                            >> 1U));
    }
    if ((0x800000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 1U));
    } else if ((0x400000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 2U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(1U)));
    } else if ((0x200000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 3U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(2U)));
    } else if ((0x100000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 4U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(3U)));
    } else if ((0x80000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 5U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(4U)));
    } else if ((0x40000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 6U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(5U)));
    } else if ((0x20000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 7U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(6U)));
    } else if ((0x10000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 8U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(7U)));
    } else if ((0x8000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 9U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(8U)));
    } else if ((0x4000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0xaU));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(9U)));
    } else if ((0x2000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0xbU));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0xaU)));
    } else if ((0x1000U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0xcU));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0xbU)));
    } else if ((0x800U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0xdU));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0xcU)));
    } else if ((0x400U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0xeU));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0xdU)));
    } else if ((0x200U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0xfU));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0xeU)));
    } else if ((0x100U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0x10U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0xfU)));
    } else if ((0x80U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0x11U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0x10U)));
    } else if ((0x40U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0x12U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0x11U)));
    } else if ((0x20U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0x13U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0x12U)));
    } else if ((0x10U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0x14U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0x13U)));
    } else if ((8U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0x15U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0x14U)));
    } else if ((4U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0x16U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0x15U)));
    } else if ((2U & vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa)) {
        vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                            << 0x17U));
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(0x16U)));
    } else {
        vlSelf->PE__DOT__systolic_fma__DOT__final_exp 
            = (0xffU & ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                        - (IData)(1U)));
    }
    vlSelf->PE__DOT__fma2__DOT__mantissa_a = ((0U == 
                                               vlSelf->PE__DOT__a_input_pins
                                               [3U])
                                               ? 0U
                                               : (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelf->PE__DOT__a_input_pins
                                                     [3U])));
    vlSelf->PE__DOT__fma2__DOT__mantissa_b = ((0U == 
                                               vlSelf->PE__DOT__b_input_pins
                                               [3U])
                                               ? 0U
                                               : (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelf->PE__DOT__b_input_pins
                                                     [3U])));
    vlSelf->PE__DOT__fma2__DOT__mantissa_c = ((0U == 
                                               vlSelf->PE__DOT__c_input_pins
                                               [3U])
                                               ? 0U
                                               : (0x800000U 
                                                  | (0x7fffffU 
                                                     & vlSelf->PE__DOT__c_input_pins
                                                     [3U])));
    vlSelf->PE__DOT__fma2__DOT__sign_out = ((vlSelf->PE__DOT__a_input_pins
                                             [3U] ^ 
                                             vlSelf->PE__DOT__b_input_pins
                                             [3U]) 
                                            >> 0x1fU);
    vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU & 
                                           (((vlSelf->PE__DOT__a_input_pins
                                              [3U] 
                                              >> 0x17U) 
                                             + (vlSelf->PE__DOT__b_input_pins
                                                [3U] 
                                                >> 0x17U)) 
                                            - (IData)(0x7fU)));
    vlSelf->PE__DOT__fma2__DOT__mantissa_mul_out = 
        (0xffffffffffffULL & ((QData)((IData)(vlSelf->PE__DOT__fma2__DOT__mantissa_a)) 
                              * (QData)((IData)(vlSelf->PE__DOT__fma2__DOT__mantissa_b))));
    vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm = 
        (0xffffffU & (IData)((vlSelf->PE__DOT__fma2__DOT__mantissa_mul_out 
                              >> 0x18U)));
    if ((0x800000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 1U));
    } else if ((0x400000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 2U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(1U)));
    } else if ((0x200000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 3U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(2U)));
    } else if ((0x100000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 4U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(3U)));
    } else if ((0x80000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 5U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(4U)));
    } else if ((0x40000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 6U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(5U)));
    } else if ((0x20000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 7U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(6U)));
    } else if ((0x10000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 8U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(7U)));
    } else if ((0x8000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 9U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(8U)));
    } else if ((0x4000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0xaU));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(9U)));
    } else if ((0x2000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0xbU));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0xaU)));
    } else if ((0x1000U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0xcU));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0xbU)));
    } else if ((0x800U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0xdU));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0xcU)));
    } else if ((0x400U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0xeU));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0xdU)));
    } else if ((0x200U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0xfU));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0xeU)));
    } else if ((0x100U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0x10U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0xfU)));
    } else if ((0x80U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0x11U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0x10U)));
    } else if ((0x40U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0x12U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0x11U)));
    } else if ((0x20U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0x13U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0x12U)));
    } else if ((0x10U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0x14U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0x13U)));
    } else if ((8U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0x15U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0x14U)));
    } else if ((4U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0x16U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0x15U)));
    } else if ((2U & vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm)) {
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                            << 0x17U));
        vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU 
                                               & ((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
                                                  - (IData)(0x16U)));
    } else {
        vlSelf->PE__DOT__fma2__DOT__exp_out = 0xffU;
    }
    vlSelf->PE__DOT__fma2__DOT__exp_out = (0xffU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->PE__DOT__fma2__DOT__exp_out)));
    vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm = 
        (((0U == vlSelf->PE__DOT__a_input_pins[3U]) 
          | (0U == vlSelf->PE__DOT__b_input_pins[3U]))
          ? 0U : (0x800000U | (0x7fffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                                            >> 1U))));
    if (((IData)(vlSelf->PE__DOT__fma2__DOT__exp_out) 
         < (0xffU & (vlSelf->PE__DOT__c_input_pins[3U] 
                     >> 0x17U)))) {
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & (vlSelf->PE__DOT__c_input_pins
                                                    [3U] 
                                                    >> 0x17U));
        vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
            = ((0x17U >= (0xffU & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                   - (IData)(vlSelf->PE__DOT__fma2__DOT__exp_out))))
                ? (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                                >> (0xffU & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                             - (IData)(vlSelf->PE__DOT__fma2__DOT__exp_out)))))
                : 0U);
        vlSelf->PE__DOT__fma2__DOT__largerMag = 1U;
    } else if (((0xffU & (vlSelf->PE__DOT__c_input_pins
                          [3U] >> 0x17U)) < (IData)(vlSelf->PE__DOT__fma2__DOT__exp_out))) {
        vlSelf->PE__DOT__fma2__DOT__final_exp = vlSelf->PE__DOT__fma2__DOT__exp_out;
        vlSelf->PE__DOT__fma2__DOT__mantissa_c = ((0x17U 
                                                   >= 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                       - 
                                                       (vlSelf->PE__DOT__c_input_pins
                                                        [3U] 
                                                        >> 0x17U))))
                                                   ? 
                                                  (0xffffffU 
                                                   & (vlSelf->PE__DOT__fma2__DOT__mantissa_c 
                                                      >> 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                          - 
                                                          (vlSelf->PE__DOT__c_input_pins
                                                           [3U] 
                                                           >> 0x17U)))))
                                                   : 0U);
        vlSelf->PE__DOT__fma2__DOT__largerMag = 0U;
    } else {
        vlSelf->PE__DOT__fma2__DOT__final_exp = vlSelf->PE__DOT__fma2__DOT__exp_out;
        vlSelf->PE__DOT__fma2__DOT__largerMag = (vlSelf->PE__DOT__fma2__DOT__mantissa_c 
                                                 > vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm);
    }
    if (((IData)(vlSelf->PE__DOT__fma2__DOT__sign_out) 
         & (vlSelf->PE__DOT__c_input_pins[3U] >> 0x1fU))) {
        vlSelf->PE__DOT__fma2__DOT__sum_mants = (0x1ffffffU 
                                                 & (vlSelf->PE__DOT__fma2__DOT__mantissa_c 
                                                    + vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->PE__DOT__fma2__DOT__final_exp)));
        vlSelf->PE__DOT__fma2__DOT__sign_out = 0U;
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__sum_mants 
                            >> 1U));
    } else if (((IData)(vlSelf->PE__DOT__fma2__DOT__sign_out) 
                & (~ (vlSelf->PE__DOT__c_input_pins
                      [3U] >> 0x1fU)))) {
        vlSelf->PE__DOT__fma2__DOT__sum_mants = (0x1ffffffU 
                                                 & (vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm 
                                                    - vlSelf->PE__DOT__fma2__DOT__mantissa_c));
        vlSelf->PE__DOT__fma2__DOT__sign_out = vlSelf->PE__DOT__fma2__DOT__largerMag;
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & vlSelf->PE__DOT__fma2__DOT__sum_mants);
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & ((0x1000000U & vlSelf->PE__DOT__fma2__DOT__sum_mants)
                             ? ((IData)(0xffffffffU) 
                                * vlSelf->PE__DOT__fma2__DOT__final_mantissa)
                             : vlSelf->PE__DOT__fma2__DOT__final_mantissa));
    } else if ((1U & ((~ (IData)(vlSelf->PE__DOT__fma2__DOT__sign_out)) 
                      & (vlSelf->PE__DOT__c_input_pins
                         [3U] >> 0x1fU)))) {
        vlSelf->PE__DOT__fma2__DOT__sum_mants = (0x1ffffffU 
                                                 & (vlSelf->PE__DOT__fma2__DOT__mantissa_c 
                                                    - vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm));
        vlSelf->PE__DOT__fma2__DOT__sign_out = (1U 
                                                & (~ (IData)(vlSelf->PE__DOT__fma2__DOT__largerMag)));
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & vlSelf->PE__DOT__fma2__DOT__sum_mants);
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & ((0x1000000U & vlSelf->PE__DOT__fma2__DOT__sum_mants)
                             ? ((IData)(0xffffffffU) 
                                * vlSelf->PE__DOT__fma2__DOT__final_mantissa)
                             : vlSelf->PE__DOT__fma2__DOT__final_mantissa));
    } else {
        vlSelf->PE__DOT__fma2__DOT__sum_mants = (0x1ffffffU 
                                                 & (vlSelf->PE__DOT__fma2__DOT__mantissa_c 
                                                    + vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->PE__DOT__fma2__DOT__final_exp)));
        vlSelf->PE__DOT__fma2__DOT__sign_out = 1U;
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__sum_mants 
                            >> 1U));
    }
    if ((0x800000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 1U));
    } else if ((0x400000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 2U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(1U)));
    } else if ((0x200000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 3U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(2U)));
    } else if ((0x100000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 4U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(3U)));
    } else if ((0x80000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 5U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(4U)));
    } else if ((0x40000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 6U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(5U)));
    } else if ((0x20000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 7U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(6U)));
    } else if ((0x10000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 8U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(7U)));
    } else if ((0x8000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 9U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(8U)));
    } else if ((0x4000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0xaU));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(9U)));
    } else if ((0x2000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0xbU));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0xaU)));
    } else if ((0x1000U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0xcU));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0xbU)));
    } else if ((0x800U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0xdU));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0xcU)));
    } else if ((0x400U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0xeU));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0xdU)));
    } else if ((0x200U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0xfU));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0xeU)));
    } else if ((0x100U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0x10U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0xfU)));
    } else if ((0x80U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0x11U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0x10U)));
    } else if ((0x40U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0x12U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0x11U)));
    } else if ((0x20U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0x13U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0x12U)));
    } else if ((0x10U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0x14U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0x13U)));
    } else if ((8U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0x15U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0x14U)));
    } else if ((4U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0x16U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0x15U)));
    } else if ((2U & vlSelf->PE__DOT__fma2__DOT__final_mantissa)) {
        vlSelf->PE__DOT__fma2__DOT__final_mantissa 
            = (0xffffffU & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                            << 0x17U));
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(0x16U)));
    } else {
        vlSelf->PE__DOT__fma2__DOT__final_exp = (0xffU 
                                                 & ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    - (IData)(1U)));
    }
    vlSelf->PE__DOT__out_pins[1U] = vlSelf->PE__DOT____Vcellout__fm____pinNumber3;
    vlSelf->PE__DOT__out_pins[0U] = (((~ (IData)(vlSelf->PE__DOT__fa__DOT__finalSign)) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->PE__DOT__fa__DOT__finalExp) 
                                                    << 0x17U) 
                                                   | (0x7fffffU 
                                                      & (vlSelf->PE__DOT__fa__DOT__finalMant 
                                                         >> 1U))));
    vlSelf->PE__DOT__out_pins[2U] = (((~ (IData)(vlSelf->PE__DOT__systolic_fma__DOT__sign_out)) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                                                    << 0x17U) 
                                                   | (0x7fffffU 
                                                      & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                                                         >> 1U))));
    vlSelf->PE__DOT__out_pins[3U] = (((~ (IData)(vlSelf->PE__DOT__fma2__DOT__sign_out)) 
                                      << 0x1fU) | (
                                                   ((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                    << 0x17U) 
                                                   | (0x7fffffU 
                                                      & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                                                         >> 1U))));
}

void VPE___024root___eval_nba(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VPE___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VPE___024root___eval_triggers__act(VPE___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__act(VPE___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__nba(VPE___024root* vlSelf);
#endif  // VL_DEBUG

void VPE___024root___eval(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VPE___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPE___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../PE.sv", 13, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VPE___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPE___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../PE.sv", 13, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPE___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPE___024root___eval_debug_assertions(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->load & 0xfeU))) {
        Verilated::overWidthError("load");}
    if (VL_UNLIKELY((vlSelf->instruction & 0xf0U))) {
        Verilated::overWidthError("instruction");}
}
#endif  // VL_DEBUG
