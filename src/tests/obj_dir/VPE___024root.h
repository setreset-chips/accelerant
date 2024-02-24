// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPE.h for the primary calling header

#ifndef VERILATED_VPE___024ROOT_H_
#define VERILATED_VPE___024ROOT_H_  // guard

#include "verilated.h"


class VPE__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPE___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(load,0,0);
    VL_IN8(instruction,3,0);
    CData/*3:0*/ PE__DOT__configuration;
    CData/*0:0*/ PE__DOT__fa__DOT__largerMag;
    CData/*0:0*/ PE__DOT__fa__DOT__finalSign;
    CData/*7:0*/ PE__DOT__fa__DOT__num1Exp;
    CData/*7:0*/ PE__DOT__fa__DOT__num2Exp;
    CData/*7:0*/ PE__DOT__fa__DOT__finalExp;
    CData/*7:0*/ PE__DOT__fm__DOT__expF;
    CData/*0:0*/ PE__DOT__systolic_fma__DOT__sign_out;
    CData/*0:0*/ PE__DOT__systolic_fma__DOT__largerMag;
    CData/*7:0*/ PE__DOT__systolic_fma__DOT__exp_out;
    CData/*7:0*/ PE__DOT__systolic_fma__DOT__final_exp;
    CData/*0:0*/ PE__DOT__fma2__DOT__sign_out;
    CData/*0:0*/ PE__DOT__fma2__DOT__largerMag;
    CData/*7:0*/ PE__DOT__fma2__DOT__exp_out;
    CData/*7:0*/ PE__DOT__fma2__DOT__final_exp;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_IN(c,31,0);
    VL_IN(internal_data_in,31,0);
    VL_OUT(out_to_switch,31,0);
    IData/*31:0*/ PE__DOT__internal_register;
    IData/*31:0*/ PE__DOT____Vcellout__fm____pinNumber3;
    IData/*31:0*/ PE__DOT____Vlvbound_hf8e8f9d8__0;
    IData/*31:0*/ PE__DOT____Vlvbound_hfc62d1fa__0;
    IData/*31:0*/ PE__DOT____Vlvbound_hfc62d1fa__1;
    IData/*31:0*/ PE__DOT____Vlvbound_h810938b2__0;
    IData/*23:0*/ PE__DOT__fa__DOT__num1Mant;
    IData/*23:0*/ PE__DOT__fa__DOT__num2Mant;
    IData/*23:0*/ PE__DOT__fa__DOT__finalMant;
    IData/*24:0*/ PE__DOT__fa__DOT__sumMants;
    IData/*31:0*/ PE__DOT__fa__DOT__i;
    IData/*22:0*/ PE__DOT__fm__DOT__mantissa;
    IData/*31:0*/ PE__DOT__fm__DOT__i;
    IData/*23:0*/ PE__DOT__systolic_fma__DOT__mantissa_a;
    IData/*23:0*/ PE__DOT__systolic_fma__DOT__mantissa_b;
    IData/*23:0*/ PE__DOT__systolic_fma__DOT__mantissa_c;
    IData/*23:0*/ PE__DOT__systolic_fma__DOT__mantissa_mul_norm;
    IData/*23:0*/ PE__DOT__systolic_fma__DOT__final_mantissa;
    IData/*24:0*/ PE__DOT__systolic_fma__DOT__sum_mants;
    IData/*23:0*/ PE__DOT__fma2__DOT__mantissa_a;
    IData/*23:0*/ PE__DOT__fma2__DOT__mantissa_b;
    IData/*23:0*/ PE__DOT__fma2__DOT__mantissa_c;
    IData/*23:0*/ PE__DOT__fma2__DOT__mantissa_mul_norm;
    IData/*23:0*/ PE__DOT__fma2__DOT__final_mantissa;
    IData/*24:0*/ PE__DOT__fma2__DOT__sum_mants;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ PE__DOT__fm__DOT__mantissaProd;
    QData/*47:0*/ PE__DOT__systolic_fma__DOT__mantissa_mul_out;
    QData/*47:0*/ PE__DOT__fma2__DOT__mantissa_mul_out;
    VlUnpacked<IData/*31:0*/, 6> PE__DOT__a_input_pins;
    VlUnpacked<IData/*31:0*/, 6> PE__DOT__b_input_pins;
    VlUnpacked<IData/*31:0*/, 6> PE__DOT__c_input_pins;
    VlUnpacked<IData/*31:0*/, 6> PE__DOT__out_pins;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPE__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPE___024root(VPE__Syms* symsp, const char* v__name);
    ~VPE___024root();
    VL_UNCOPYABLE(VPE___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
