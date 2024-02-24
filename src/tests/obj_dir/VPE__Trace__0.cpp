// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPE__Syms.h"


void VPE___024root__trace_chg_sub_0(VPE___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPE___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_chg_top_0\n"); );
    // Init
    VPE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE___024root*>(voidSelf);
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPE___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPE___024root__trace_chg_sub_0(VPE___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->PE__DOT__internal_register),32);
        bufp->chgCData(oldp+1,(vlSelf->PE__DOT__configuration),4);
        bufp->chgIData(oldp+2,(vlSelf->PE__DOT__a_input_pins[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->PE__DOT__a_input_pins[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->PE__DOT__a_input_pins[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->PE__DOT__a_input_pins[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->PE__DOT__a_input_pins[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->PE__DOT__a_input_pins[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->PE__DOT__b_input_pins[0]),32);
        bufp->chgIData(oldp+9,(vlSelf->PE__DOT__b_input_pins[1]),32);
        bufp->chgIData(oldp+10,(vlSelf->PE__DOT__b_input_pins[2]),32);
        bufp->chgIData(oldp+11,(vlSelf->PE__DOT__b_input_pins[3]),32);
        bufp->chgIData(oldp+12,(vlSelf->PE__DOT__b_input_pins[4]),32);
        bufp->chgIData(oldp+13,(vlSelf->PE__DOT__b_input_pins[5]),32);
        bufp->chgIData(oldp+14,(vlSelf->PE__DOT__c_input_pins[0]),32);
        bufp->chgIData(oldp+15,(vlSelf->PE__DOT__c_input_pins[1]),32);
        bufp->chgIData(oldp+16,(vlSelf->PE__DOT__c_input_pins[2]),32);
        bufp->chgIData(oldp+17,(vlSelf->PE__DOT__c_input_pins[3]),32);
        bufp->chgIData(oldp+18,(vlSelf->PE__DOT__c_input_pins[4]),32);
        bufp->chgIData(oldp+19,(vlSelf->PE__DOT__c_input_pins[5]),32);
        bufp->chgIData(oldp+20,(vlSelf->PE__DOT__out_pins[0]),32);
        bufp->chgIData(oldp+21,(vlSelf->PE__DOT__out_pins[1]),32);
        bufp->chgIData(oldp+22,(vlSelf->PE__DOT__out_pins[2]),32);
        bufp->chgIData(oldp+23,(vlSelf->PE__DOT__out_pins[3]),32);
        bufp->chgIData(oldp+24,(vlSelf->PE__DOT__out_pins[4]),32);
        bufp->chgIData(oldp+25,(vlSelf->PE__DOT__out_pins[5]),32);
        bufp->chgIData(oldp+26,(vlSelf->PE__DOT__a_input_pins
                                [0U]),32);
        bufp->chgIData(oldp+27,(vlSelf->PE__DOT__b_input_pins
                                [0U]),32);
        bufp->chgIData(oldp+28,((((~ (IData)(vlSelf->PE__DOT__fa__DOT__finalSign)) 
                                  << 0x1fU) | (((IData)(vlSelf->PE__DOT__fa__DOT__finalExp) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & (vlSelf->PE__DOT__fa__DOT__finalMant 
                                                     >> 1U))))),32);
        bufp->chgBit(oldp+29,(vlSelf->PE__DOT__fa__DOT__largerMag));
        bufp->chgBit(oldp+30,(vlSelf->PE__DOT__fa__DOT__finalSign));
        bufp->chgCData(oldp+31,(vlSelf->PE__DOT__fa__DOT__num1Exp),8);
        bufp->chgCData(oldp+32,(vlSelf->PE__DOT__fa__DOT__num2Exp),8);
        bufp->chgCData(oldp+33,(vlSelf->PE__DOT__fa__DOT__finalExp),8);
        bufp->chgIData(oldp+34,(vlSelf->PE__DOT__fa__DOT__num1Mant),24);
        bufp->chgIData(oldp+35,(vlSelf->PE__DOT__fa__DOT__num2Mant),24);
        bufp->chgIData(oldp+36,(vlSelf->PE__DOT__fa__DOT__finalMant),24);
        bufp->chgIData(oldp+37,(vlSelf->PE__DOT__fa__DOT__sumMants),25);
        bufp->chgIData(oldp+38,(vlSelf->PE__DOT__fa__DOT__i),32);
        bufp->chgIData(oldp+39,(vlSelf->PE__DOT__a_input_pins
                                [1U]),32);
        bufp->chgIData(oldp+40,(vlSelf->PE__DOT__b_input_pins
                                [1U]),32);
        bufp->chgIData(oldp+41,(vlSelf->PE__DOT____Vcellout__fm____pinNumber3),32);
        bufp->chgBit(oldp+42,(((vlSelf->PE__DOT__a_input_pins
                                [1U] ^ vlSelf->PE__DOT__b_input_pins
                                [1U]) >> 0x1fU)));
        bufp->chgCData(oldp+43,(vlSelf->PE__DOT__fm__DOT__expF),8);
        bufp->chgIData(oldp+44,(vlSelf->PE__DOT__fm__DOT__mantissa),23);
        bufp->chgIData(oldp+45,((0x800000U | (0x7fffffU 
                                              & vlSelf->PE__DOT__a_input_pins
                                              [1U]))),24);
        bufp->chgIData(oldp+46,((0x800000U | (0x7fffffU 
                                              & vlSelf->PE__DOT__b_input_pins
                                              [1U]))),24);
        bufp->chgQData(oldp+47,(vlSelf->PE__DOT__fm__DOT__mantissaProd),48);
        bufp->chgIData(oldp+49,(vlSelf->PE__DOT__fm__DOT__i),32);
        bufp->chgIData(oldp+50,(vlSelf->PE__DOT__a_input_pins
                                [3U]),32);
        bufp->chgIData(oldp+51,(vlSelf->PE__DOT__b_input_pins
                                [3U]),32);
        bufp->chgIData(oldp+52,(vlSelf->PE__DOT__c_input_pins
                                [3U]),32);
        bufp->chgIData(oldp+53,((((~ (IData)(vlSelf->PE__DOT__fma2__DOT__sign_out)) 
                                  << 0x1fU) | (((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                                                     >> 1U))))),32);
        bufp->chgBit(oldp+54,(vlSelf->PE__DOT__fma2__DOT__sign_out));
        bufp->chgBit(oldp+55,(vlSelf->PE__DOT__fma2__DOT__largerMag));
        bufp->chgCData(oldp+56,(vlSelf->PE__DOT__fma2__DOT__exp_out),8);
        bufp->chgCData(oldp+57,(vlSelf->PE__DOT__fma2__DOT__final_exp),8);
        bufp->chgIData(oldp+58,(vlSelf->PE__DOT__fma2__DOT__mantissa_a),24);
        bufp->chgIData(oldp+59,(vlSelf->PE__DOT__fma2__DOT__mantissa_b),24);
        bufp->chgIData(oldp+60,(vlSelf->PE__DOT__fma2__DOT__mantissa_c),24);
        bufp->chgIData(oldp+61,(vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm),24);
        bufp->chgIData(oldp+62,(vlSelf->PE__DOT__fma2__DOT__final_mantissa),24);
        bufp->chgQData(oldp+63,(vlSelf->PE__DOT__fma2__DOT__mantissa_mul_out),48);
        bufp->chgIData(oldp+65,(vlSelf->PE__DOT__fma2__DOT__sum_mants),25);
        bufp->chgIData(oldp+66,(vlSelf->PE__DOT__a_input_pins
                                [2U]),32);
        bufp->chgIData(oldp+67,(vlSelf->PE__DOT__b_input_pins
                                [2U]),32);
        bufp->chgIData(oldp+68,(vlSelf->PE__DOT__c_input_pins
                                [2U]),32);
        bufp->chgIData(oldp+69,((((~ (IData)(vlSelf->PE__DOT__systolic_fma__DOT__sign_out)) 
                                  << 0x1fU) | (((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                                                     >> 1U))))),32);
        bufp->chgBit(oldp+70,(vlSelf->PE__DOT__systolic_fma__DOT__sign_out));
        bufp->chgBit(oldp+71,(vlSelf->PE__DOT__systolic_fma__DOT__largerMag));
        bufp->chgCData(oldp+72,(vlSelf->PE__DOT__systolic_fma__DOT__exp_out),8);
        bufp->chgCData(oldp+73,(vlSelf->PE__DOT__systolic_fma__DOT__final_exp),8);
        bufp->chgIData(oldp+74,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_a),24);
        bufp->chgIData(oldp+75,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_b),24);
        bufp->chgIData(oldp+76,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c),24);
        bufp->chgIData(oldp+77,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm),24);
        bufp->chgIData(oldp+78,(vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa),24);
        bufp->chgQData(oldp+79,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_out),48);
        bufp->chgIData(oldp+81,(vlSelf->PE__DOT__systolic_fma__DOT__sum_mants),25);
    }
    bufp->chgBit(oldp+82,(vlSelf->clk));
    bufp->chgBit(oldp+83,(vlSelf->reset));
    bufp->chgBit(oldp+84,(vlSelf->load));
    bufp->chgCData(oldp+85,(vlSelf->instruction),4);
    bufp->chgIData(oldp+86,(vlSelf->a),32);
    bufp->chgIData(oldp+87,(vlSelf->b),32);
    bufp->chgIData(oldp+88,(vlSelf->c),32);
    bufp->chgIData(oldp+89,(vlSelf->internal_data_in),32);
    bufp->chgIData(oldp+90,(vlSelf->out_to_switch),32);
}

void VPE___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_cleanup\n"); );
    // Init
    VPE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE___024root*>(voidSelf);
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
