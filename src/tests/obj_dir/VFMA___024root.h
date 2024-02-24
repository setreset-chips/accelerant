// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFMA.h for the primary calling header

#ifndef VERILATED_VFMA___024ROOT_H_
#define VERILATED_VFMA___024ROOT_H_  // guard

#include "verilated.h"


class VFMA__Syms;

class alignas(VL_CACHE_LINE_BYTES) VFMA___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ FMA__DOT__fmul1__DOT__expF;
    CData/*0:0*/ FMA__DOT__fadd1__DOT__largerMag;
    CData/*0:0*/ FMA__DOT__fadd1__DOT__finalSign;
    CData/*7:0*/ FMA__DOT__fadd1__DOT__num1Exp;
    CData/*7:0*/ FMA__DOT__fadd1__DOT__num2Exp;
    CData/*7:0*/ FMA__DOT__fadd1__DOT__finalExp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(var1,31,0);
    VL_IN(var2,31,0);
    VL_IN(var3,31,0);
    VL_OUT(res,31,0);
    IData/*31:0*/ FMA__DOT__out;
    IData/*22:0*/ FMA__DOT__fmul1__DOT__mantissa;
    IData/*31:0*/ FMA__DOT__fmul1__DOT__i;
    IData/*23:0*/ FMA__DOT__fadd1__DOT__num1Mant;
    IData/*23:0*/ FMA__DOT__fadd1__DOT__num2Mant;
    IData/*23:0*/ FMA__DOT__fadd1__DOT__finalMant;
    IData/*24:0*/ FMA__DOT__fadd1__DOT__sumMants;
    IData/*31:0*/ FMA__DOT__fadd1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    QData/*47:0*/ FMA__DOT__fmul1__DOT__mantissaProd;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VFMA__Syms* const vlSymsp;

    // CONSTRUCTORS
    VFMA___024root(VFMA__Syms* symsp, const char* v__name);
    ~VFMA___024root();
    VL_UNCOPYABLE(VFMA___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
