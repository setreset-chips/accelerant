// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPE.h for the primary calling header

#include "verilated.h"

#include "VPE__Syms.h"
#include "VPE___024root.h"

VL_ATTR_COLD void VPE___024root___eval_static(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPE___024root___eval_initial(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VPE___024root___eval_final(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPE___024root___eval_triggers__stl(VPE___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__stl(VPE___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPE___024root___eval_stl(VPE___024root* vlSelf);

VL_ATTR_COLD void VPE___024root___eval_settle(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPE___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPE___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../PE.sv", 13, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPE___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__stl(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPE___024root___stl_sequent__TOP__0(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___stl_sequent__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void VPE___024root___eval_stl(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VPE___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__act(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPE___024root___dump_triggers__nba(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPE___024root___ctor_var_reset(VPE___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->load = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(4);
    vlSelf->a = VL_RAND_RESET_I(32);
    vlSelf->b = VL_RAND_RESET_I(32);
    vlSelf->c = VL_RAND_RESET_I(32);
    vlSelf->internal_data_in = VL_RAND_RESET_I(32);
    vlSelf->out_to_switch = VL_RAND_RESET_I(32);
    vlSelf->PE__DOT__internal_register = VL_RAND_RESET_I(32);
    vlSelf->PE__DOT__configuration = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->PE__DOT__a_input_pins[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->PE__DOT__b_input_pins[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->PE__DOT__c_input_pins[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->PE__DOT__out_pins[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PE__DOT____Vcellout__fm____pinNumber3 = VL_RAND_RESET_I(32);
    vlSelf->PE__DOT____Vlvbound_hf8e8f9d8__0 = VL_RAND_RESET_I(32);
    vlSelf->PE__DOT____Vlvbound_hfc62d1fa__0 = VL_RAND_RESET_I(32);
    vlSelf->PE__DOT____Vlvbound_hfc62d1fa__1 = VL_RAND_RESET_I(32);
    vlSelf->PE__DOT____Vlvbound_h810938b2__0 = VL_RAND_RESET_I(32);
    vlSelf->PE__DOT__fa__DOT__largerMag = VL_RAND_RESET_I(1);
    vlSelf->PE__DOT__fa__DOT__finalSign = VL_RAND_RESET_I(1);
    vlSelf->PE__DOT__fa__DOT__num1Exp = VL_RAND_RESET_I(8);
    vlSelf->PE__DOT__fa__DOT__num2Exp = VL_RAND_RESET_I(8);
    vlSelf->PE__DOT__fa__DOT__finalExp = VL_RAND_RESET_I(8);
    vlSelf->PE__DOT__fa__DOT__num1Mant = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__fa__DOT__num2Mant = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__fa__DOT__finalMant = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__fa__DOT__sumMants = VL_RAND_RESET_I(25);
    vlSelf->PE__DOT__fa__DOT__i = 0;
    vlSelf->PE__DOT__fm__DOT__expF = VL_RAND_RESET_I(8);
    vlSelf->PE__DOT__fm__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->PE__DOT__fm__DOT__mantissaProd = VL_RAND_RESET_Q(48);
    vlSelf->PE__DOT__fm__DOT__i = 0;
    vlSelf->PE__DOT__systolic_fma__DOT__sign_out = VL_RAND_RESET_I(1);
    vlSelf->PE__DOT__systolic_fma__DOT__largerMag = VL_RAND_RESET_I(1);
    vlSelf->PE__DOT__systolic_fma__DOT__exp_out = VL_RAND_RESET_I(8);
    vlSelf->PE__DOT__systolic_fma__DOT__final_exp = VL_RAND_RESET_I(8);
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_a = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_b = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_out = VL_RAND_RESET_Q(48);
    vlSelf->PE__DOT__systolic_fma__DOT__sum_mants = VL_RAND_RESET_I(25);
    vlSelf->PE__DOT__fma2__DOT__sign_out = VL_RAND_RESET_I(1);
    vlSelf->PE__DOT__fma2__DOT__largerMag = VL_RAND_RESET_I(1);
    vlSelf->PE__DOT__fma2__DOT__exp_out = VL_RAND_RESET_I(8);
    vlSelf->PE__DOT__fma2__DOT__final_exp = VL_RAND_RESET_I(8);
    vlSelf->PE__DOT__fma2__DOT__mantissa_a = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__fma2__DOT__mantissa_b = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__fma2__DOT__mantissa_c = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__fma2__DOT__final_mantissa = VL_RAND_RESET_I(24);
    vlSelf->PE__DOT__fma2__DOT__mantissa_mul_out = VL_RAND_RESET_Q(48);
    vlSelf->PE__DOT__fma2__DOT__sum_mants = VL_RAND_RESET_I(25);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
