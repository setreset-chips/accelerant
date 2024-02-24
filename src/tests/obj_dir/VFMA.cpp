// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFMA__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VFMA::VFMA(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VFMA__Syms(contextp(), _vcname__, this)}
    , var1{vlSymsp->TOP.var1}
    , var2{vlSymsp->TOP.var2}
    , var3{vlSymsp->TOP.var3}
    , res{vlSymsp->TOP.res}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VFMA::VFMA(const char* _vcname__)
    : VFMA(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VFMA::~VFMA() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VFMA___024root___eval_debug_assertions(VFMA___024root* vlSelf);
#endif  // VL_DEBUG
void VFMA___024root___eval_static(VFMA___024root* vlSelf);
void VFMA___024root___eval_initial(VFMA___024root* vlSelf);
void VFMA___024root___eval_settle(VFMA___024root* vlSelf);
void VFMA___024root___eval(VFMA___024root* vlSelf);

void VFMA::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFMA::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFMA___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VFMA___024root___eval_static(&(vlSymsp->TOP));
        VFMA___024root___eval_initial(&(vlSymsp->TOP));
        VFMA___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VFMA___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VFMA::eventsPending() { return false; }

uint64_t VFMA::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VFMA::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VFMA___024root___eval_final(VFMA___024root* vlSelf);

VL_ATTR_COLD void VFMA::final() {
    VFMA___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VFMA::hierName() const { return vlSymsp->name(); }
const char* VFMA::modelName() const { return "VFMA"; }
unsigned VFMA::threads() const { return 1; }
void VFMA::prepareClone() const { contextp()->prepareClone(); }
void VFMA::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VFMA::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VFMA___024root__trace_decl_types(VerilatedVcd* tracep);

void VFMA___024root__trace_init_top(VFMA___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFMA___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VFMA___024root*>(voidSelf);
    VFMA__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VFMA___024root__trace_decl_types(tracep);
    VFMA___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VFMA___024root__trace_register(VFMA___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VFMA::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VFMA::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VFMA___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
