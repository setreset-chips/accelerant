// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPE.h"
#include "VPE__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPE::VPE(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPE__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , load{vlSymsp->TOP.load}
    , instruction{vlSymsp->TOP.instruction}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , internal_data_in{vlSymsp->TOP.internal_data_in}
    , out_to_switch{vlSymsp->TOP.out_to_switch}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPE::VPE(const char* _vcname__)
    : VPE(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPE::~VPE() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPE___024root___eval_debug_assertions(VPE___024root* vlSelf);
#endif  // VL_DEBUG
void VPE___024root___eval_static(VPE___024root* vlSelf);
void VPE___024root___eval_initial(VPE___024root* vlSelf);
void VPE___024root___eval_settle(VPE___024root* vlSelf);
void VPE___024root___eval(VPE___024root* vlSelf);

void VPE::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPE::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPE___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPE___024root___eval_static(&(vlSymsp->TOP));
        VPE___024root___eval_initial(&(vlSymsp->TOP));
        VPE___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPE___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPE::eventsPending() { return false; }

uint64_t VPE::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPE::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPE___024root___eval_final(VPE___024root* vlSelf);

VL_ATTR_COLD void VPE::final() {
    VPE___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPE::hierName() const { return vlSymsp->name(); }
const char* VPE::modelName() const { return "VPE"; }
unsigned VPE::threads() const { return 1; }
void VPE::prepareClone() const { contextp()->prepareClone(); }
void VPE::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VPE::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPE___024root__trace_init_top(VPE___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPE___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPE___024root*>(voidSelf);
    VPE__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPE___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPE___024root__trace_register(VPE___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPE::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPE::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPE___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
