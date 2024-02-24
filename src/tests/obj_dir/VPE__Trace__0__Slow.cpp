// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPE__Syms.h"


VL_ATTR_COLD void VPE___024root__trace_init_sub__TOP__0(VPE___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"reset", false,-1);
    tracep->declBit(c+85,"load", false,-1);
    tracep->declBus(c+86,"instruction", false,-1, 3,0);
    tracep->declBus(c+87,"a", false,-1, 31,0);
    tracep->declBus(c+88,"b", false,-1, 31,0);
    tracep->declBus(c+89,"c", false,-1, 31,0);
    tracep->declBus(c+90,"internal_data_in", false,-1, 31,0);
    tracep->declBus(c+91,"out_to_switch", false,-1, 31,0);
    tracep->pushNamePrefix("PE ");
    tracep->declBit(c+83,"clk", false,-1);
    tracep->declBit(c+84,"reset", false,-1);
    tracep->declBit(c+85,"load", false,-1);
    tracep->declBus(c+86,"instruction", false,-1, 3,0);
    tracep->declBus(c+87,"a", false,-1, 31,0);
    tracep->declBus(c+88,"b", false,-1, 31,0);
    tracep->declBus(c+89,"c", false,-1, 31,0);
    tracep->declBus(c+90,"internal_data_in", false,-1, 31,0);
    tracep->declBus(c+91,"out_to_switch", false,-1, 31,0);
    tracep->declBus(c+1,"internal_register", false,-1, 31,0);
    tracep->declBus(c+2,"configuration", false,-1, 3,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+3+i*1,"a_input_pins", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+9+i*1,"b_input_pins", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+15+i*1,"c_input_pins", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+21+i*1,"out_pins", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("fa ");
    tracep->declBus(c+27,"num1", false,-1, 31,0);
    tracep->declBus(c+28,"num2", false,-1, 31,0);
    tracep->declBus(c+29,"out_num", false,-1, 31,0);
    tracep->declBit(c+30,"largerMag", false,-1);
    tracep->declBit(c+31,"finalSign", false,-1);
    tracep->declBus(c+32,"num1Exp", false,-1, 7,0);
    tracep->declBus(c+33,"num2Exp", false,-1, 7,0);
    tracep->declBus(c+34,"finalExp", false,-1, 7,0);
    tracep->declBus(c+35,"num1Mant", false,-1, 23,0);
    tracep->declBus(c+36,"num2Mant", false,-1, 23,0);
    tracep->declBus(c+37,"finalMant", false,-1, 23,0);
    tracep->declBus(c+38,"sumMants", false,-1, 24,0);
    tracep->declBus(c+39,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fm ");
    tracep->declBus(c+40,"num1", false,-1, 31,0);
    tracep->declBus(c+41,"num2", false,-1, 31,0);
    tracep->declBus(c+42,"out_mul", false,-1, 31,0);
    tracep->declBit(c+43,"sign", false,-1);
    tracep->declBus(c+44,"expF", false,-1, 7,0);
    tracep->declBus(c+45,"mantissa", false,-1, 22,0);
    tracep->declBus(c+46,"mantissa1", false,-1, 23,0);
    tracep->declBus(c+47,"mantissa2", false,-1, 23,0);
    tracep->declQuad(c+48,"mantissaProd", false,-1, 47,0);
    tracep->declBus(c+50,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fma2 ");
    tracep->declBus(c+51,"a_fp", false,-1, 31,0);
    tracep->declBus(c+52,"b_fp", false,-1, 31,0);
    tracep->declBus(c+53,"c_fp", false,-1, 31,0);
    tracep->declBus(c+54,"out_fp", false,-1, 31,0);
    tracep->declBit(c+55,"sign_out", false,-1);
    tracep->declBit(c+56,"largerMag", false,-1);
    tracep->declBus(c+57,"exp_out", false,-1, 7,0);
    tracep->declBus(c+58,"final_exp", false,-1, 7,0);
    tracep->declBus(c+59,"mantissa_a", false,-1, 23,0);
    tracep->declBus(c+60,"mantissa_b", false,-1, 23,0);
    tracep->declBus(c+61,"mantissa_c", false,-1, 23,0);
    tracep->declBus(c+62,"mantissa_mul_norm", false,-1, 23,0);
    tracep->declBus(c+63,"final_mantissa", false,-1, 23,0);
    tracep->declQuad(c+64,"mantissa_mul_out", false,-1, 47,0);
    tracep->declBus(c+66,"sum_mants", false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("systolic_fma ");
    tracep->declBus(c+67,"a_fp", false,-1, 31,0);
    tracep->declBus(c+68,"b_fp", false,-1, 31,0);
    tracep->declBus(c+69,"c_fp", false,-1, 31,0);
    tracep->declBus(c+70,"out_fp", false,-1, 31,0);
    tracep->declBit(c+71,"sign_out", false,-1);
    tracep->declBit(c+72,"largerMag", false,-1);
    tracep->declBus(c+73,"exp_out", false,-1, 7,0);
    tracep->declBus(c+74,"final_exp", false,-1, 7,0);
    tracep->declBus(c+75,"mantissa_a", false,-1, 23,0);
    tracep->declBus(c+76,"mantissa_b", false,-1, 23,0);
    tracep->declBus(c+77,"mantissa_c", false,-1, 23,0);
    tracep->declBus(c+78,"mantissa_mul_norm", false,-1, 23,0);
    tracep->declBus(c+79,"final_mantissa", false,-1, 23,0);
    tracep->declQuad(c+80,"mantissa_mul_out", false,-1, 47,0);
    tracep->declBus(c+82,"sum_mants", false,-1, 24,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPE___024root__trace_init_top(VPE___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_init_top\n"); );
    // Body
    VPE___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPE___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPE___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPE___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPE___024root__trace_register(VPE___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPE___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPE___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPE___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPE___024root__trace_full_sub_0(VPE___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPE___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_full_top_0\n"); );
    // Init
    VPE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE___024root*>(voidSelf);
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPE___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPE___024root__trace_full_sub_0(VPE___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPE___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PE__DOT__internal_register),32);
    bufp->fullCData(oldp+2,(vlSelf->PE__DOT__configuration),4);
    bufp->fullIData(oldp+3,(vlSelf->PE__DOT__a_input_pins[0]),32);
    bufp->fullIData(oldp+4,(vlSelf->PE__DOT__a_input_pins[1]),32);
    bufp->fullIData(oldp+5,(vlSelf->PE__DOT__a_input_pins[2]),32);
    bufp->fullIData(oldp+6,(vlSelf->PE__DOT__a_input_pins[3]),32);
    bufp->fullIData(oldp+7,(vlSelf->PE__DOT__a_input_pins[4]),32);
    bufp->fullIData(oldp+8,(vlSelf->PE__DOT__a_input_pins[5]),32);
    bufp->fullIData(oldp+9,(vlSelf->PE__DOT__b_input_pins[0]),32);
    bufp->fullIData(oldp+10,(vlSelf->PE__DOT__b_input_pins[1]),32);
    bufp->fullIData(oldp+11,(vlSelf->PE__DOT__b_input_pins[2]),32);
    bufp->fullIData(oldp+12,(vlSelf->PE__DOT__b_input_pins[3]),32);
    bufp->fullIData(oldp+13,(vlSelf->PE__DOT__b_input_pins[4]),32);
    bufp->fullIData(oldp+14,(vlSelf->PE__DOT__b_input_pins[5]),32);
    bufp->fullIData(oldp+15,(vlSelf->PE__DOT__c_input_pins[0]),32);
    bufp->fullIData(oldp+16,(vlSelf->PE__DOT__c_input_pins[1]),32);
    bufp->fullIData(oldp+17,(vlSelf->PE__DOT__c_input_pins[2]),32);
    bufp->fullIData(oldp+18,(vlSelf->PE__DOT__c_input_pins[3]),32);
    bufp->fullIData(oldp+19,(vlSelf->PE__DOT__c_input_pins[4]),32);
    bufp->fullIData(oldp+20,(vlSelf->PE__DOT__c_input_pins[5]),32);
    bufp->fullIData(oldp+21,(vlSelf->PE__DOT__out_pins[0]),32);
    bufp->fullIData(oldp+22,(vlSelf->PE__DOT__out_pins[1]),32);
    bufp->fullIData(oldp+23,(vlSelf->PE__DOT__out_pins[2]),32);
    bufp->fullIData(oldp+24,(vlSelf->PE__DOT__out_pins[3]),32);
    bufp->fullIData(oldp+25,(vlSelf->PE__DOT__out_pins[4]),32);
    bufp->fullIData(oldp+26,(vlSelf->PE__DOT__out_pins[5]),32);
    bufp->fullIData(oldp+27,(vlSelf->PE__DOT__a_input_pins
                             [0U]),32);
    bufp->fullIData(oldp+28,(vlSelf->PE__DOT__b_input_pins
                             [0U]),32);
    bufp->fullIData(oldp+29,((((~ (IData)(vlSelf->PE__DOT__fa__DOT__finalSign)) 
                               << 0x1fU) | (((IData)(vlSelf->PE__DOT__fa__DOT__finalExp) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & (vlSelf->PE__DOT__fa__DOT__finalMant 
                                                  >> 1U))))),32);
    bufp->fullBit(oldp+30,(vlSelf->PE__DOT__fa__DOT__largerMag));
    bufp->fullBit(oldp+31,(vlSelf->PE__DOT__fa__DOT__finalSign));
    bufp->fullCData(oldp+32,(vlSelf->PE__DOT__fa__DOT__num1Exp),8);
    bufp->fullCData(oldp+33,(vlSelf->PE__DOT__fa__DOT__num2Exp),8);
    bufp->fullCData(oldp+34,(vlSelf->PE__DOT__fa__DOT__finalExp),8);
    bufp->fullIData(oldp+35,(vlSelf->PE__DOT__fa__DOT__num1Mant),24);
    bufp->fullIData(oldp+36,(vlSelf->PE__DOT__fa__DOT__num2Mant),24);
    bufp->fullIData(oldp+37,(vlSelf->PE__DOT__fa__DOT__finalMant),24);
    bufp->fullIData(oldp+38,(vlSelf->PE__DOT__fa__DOT__sumMants),25);
    bufp->fullIData(oldp+39,(vlSelf->PE__DOT__fa__DOT__i),32);
    bufp->fullIData(oldp+40,(vlSelf->PE__DOT__a_input_pins
                             [1U]),32);
    bufp->fullIData(oldp+41,(vlSelf->PE__DOT__b_input_pins
                             [1U]),32);
    bufp->fullIData(oldp+42,(vlSelf->PE__DOT____Vcellout__fm____pinNumber3),32);
    bufp->fullBit(oldp+43,(((vlSelf->PE__DOT__a_input_pins
                             [1U] ^ vlSelf->PE__DOT__b_input_pins
                             [1U]) >> 0x1fU)));
    bufp->fullCData(oldp+44,(vlSelf->PE__DOT__fm__DOT__expF),8);
    bufp->fullIData(oldp+45,(vlSelf->PE__DOT__fm__DOT__mantissa),23);
    bufp->fullIData(oldp+46,((0x800000U | (0x7fffffU 
                                           & vlSelf->PE__DOT__a_input_pins
                                           [1U]))),24);
    bufp->fullIData(oldp+47,((0x800000U | (0x7fffffU 
                                           & vlSelf->PE__DOT__b_input_pins
                                           [1U]))),24);
    bufp->fullQData(oldp+48,(vlSelf->PE__DOT__fm__DOT__mantissaProd),48);
    bufp->fullIData(oldp+50,(vlSelf->PE__DOT__fm__DOT__i),32);
    bufp->fullIData(oldp+51,(vlSelf->PE__DOT__a_input_pins
                             [3U]),32);
    bufp->fullIData(oldp+52,(vlSelf->PE__DOT__b_input_pins
                             [3U]),32);
    bufp->fullIData(oldp+53,(vlSelf->PE__DOT__c_input_pins
                             [3U]),32);
    bufp->fullIData(oldp+54,((((~ (IData)(vlSelf->PE__DOT__fma2__DOT__sign_out)) 
                               << 0x1fU) | (((IData)(vlSelf->PE__DOT__fma2__DOT__final_exp) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & (vlSelf->PE__DOT__fma2__DOT__final_mantissa 
                                                  >> 1U))))),32);
    bufp->fullBit(oldp+55,(vlSelf->PE__DOT__fma2__DOT__sign_out));
    bufp->fullBit(oldp+56,(vlSelf->PE__DOT__fma2__DOT__largerMag));
    bufp->fullCData(oldp+57,(vlSelf->PE__DOT__fma2__DOT__exp_out),8);
    bufp->fullCData(oldp+58,(vlSelf->PE__DOT__fma2__DOT__final_exp),8);
    bufp->fullIData(oldp+59,(vlSelf->PE__DOT__fma2__DOT__mantissa_a),24);
    bufp->fullIData(oldp+60,(vlSelf->PE__DOT__fma2__DOT__mantissa_b),24);
    bufp->fullIData(oldp+61,(vlSelf->PE__DOT__fma2__DOT__mantissa_c),24);
    bufp->fullIData(oldp+62,(vlSelf->PE__DOT__fma2__DOT__mantissa_mul_norm),24);
    bufp->fullIData(oldp+63,(vlSelf->PE__DOT__fma2__DOT__final_mantissa),24);
    bufp->fullQData(oldp+64,(vlSelf->PE__DOT__fma2__DOT__mantissa_mul_out),48);
    bufp->fullIData(oldp+66,(vlSelf->PE__DOT__fma2__DOT__sum_mants),25);
    bufp->fullIData(oldp+67,(vlSelf->PE__DOT__a_input_pins
                             [2U]),32);
    bufp->fullIData(oldp+68,(vlSelf->PE__DOT__b_input_pins
                             [2U]),32);
    bufp->fullIData(oldp+69,(vlSelf->PE__DOT__c_input_pins
                             [2U]),32);
    bufp->fullIData(oldp+70,((((~ (IData)(vlSelf->PE__DOT__systolic_fma__DOT__sign_out)) 
                               << 0x1fU) | (((IData)(vlSelf->PE__DOT__systolic_fma__DOT__final_exp) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & (vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa 
                                                  >> 1U))))),32);
    bufp->fullBit(oldp+71,(vlSelf->PE__DOT__systolic_fma__DOT__sign_out));
    bufp->fullBit(oldp+72,(vlSelf->PE__DOT__systolic_fma__DOT__largerMag));
    bufp->fullCData(oldp+73,(vlSelf->PE__DOT__systolic_fma__DOT__exp_out),8);
    bufp->fullCData(oldp+74,(vlSelf->PE__DOT__systolic_fma__DOT__final_exp),8);
    bufp->fullIData(oldp+75,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_a),24);
    bufp->fullIData(oldp+76,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_b),24);
    bufp->fullIData(oldp+77,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_c),24);
    bufp->fullIData(oldp+78,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_norm),24);
    bufp->fullIData(oldp+79,(vlSelf->PE__DOT__systolic_fma__DOT__final_mantissa),24);
    bufp->fullQData(oldp+80,(vlSelf->PE__DOT__systolic_fma__DOT__mantissa_mul_out),48);
    bufp->fullIData(oldp+82,(vlSelf->PE__DOT__systolic_fma__DOT__sum_mants),25);
    bufp->fullBit(oldp+83,(vlSelf->clk));
    bufp->fullBit(oldp+84,(vlSelf->reset));
    bufp->fullBit(oldp+85,(vlSelf->load));
    bufp->fullCData(oldp+86,(vlSelf->instruction),4);
    bufp->fullIData(oldp+87,(vlSelf->a),32);
    bufp->fullIData(oldp+88,(vlSelf->b),32);
    bufp->fullIData(oldp+89,(vlSelf->c),32);
    bufp->fullIData(oldp+90,(vlSelf->internal_data_in),32);
    bufp->fullIData(oldp+91,(vlSelf->out_to_switch),32);
}
