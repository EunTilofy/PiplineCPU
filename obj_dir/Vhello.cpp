// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhello.h"
#include "Vhello__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhello::Vhello(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhello__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , MemRW_Mem{vlSymsp->TOP.MemRW_Mem}
    , MemRW_EX{vlSymsp->TOP.MemRW_EX}
    , inst_IF{vlSymsp->TOP.inst_IF}
    , inst_ID{vlSymsp->TOP.inst_ID}
    , Data_in{vlSymsp->TOP.Data_in}
    , Addr_out{vlSymsp->TOP.Addr_out}
    , PC_out_IF{vlSymsp->TOP.PC_out_IF}
    , PC_out_ID{vlSymsp->TOP.PC_out_ID}
    , PC_out_EX{vlSymsp->TOP.PC_out_EX}
    , Data_out{vlSymsp->TOP.Data_out}
    , Data_out_WB{vlSymsp->TOP.Data_out_WB}
    , __PVT__core_als__DOT__if_m_wb_m{vlSymsp->TOP.__PVT__core_als__DOT__if_m_wb_m}
    , __PVT__core_als__DOT__if_m_wb_wb{vlSymsp->TOP.__PVT__core_als__DOT__if_m_wb_wb}
    , __PVT__core_als__DOT__if_ex_m_ex{vlSymsp->TOP.__PVT__core_als__DOT__if_ex_m_ex}
    , __PVT__core_als__DOT__if_ex_m_m{vlSymsp->TOP.__PVT__core_als__DOT__if_ex_m_m}
    , __PVT__core_als__DOT__if_id_ex_id{vlSymsp->TOP.__PVT__core_als__DOT__if_id_ex_id}
    , __PVT__core_als__DOT__if_id_ex_ex{vlSymsp->TOP.__PVT__core_als__DOT__if_id_ex_ex}
    , __PVT__core_als__DOT__if_if_id_if{vlSymsp->TOP.__PVT__core_als__DOT__if_if_id_if}
    , __PVT__core_als__DOT__if_if_id_id{vlSymsp->TOP.__PVT__core_als__DOT__if_if_id_id}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vhello::Vhello(const char* _vcname__)
    : Vhello(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhello::~Vhello() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhello___024root___eval_debug_assertions(Vhello___024root* vlSelf);
#endif  // VL_DEBUG
void Vhello___024root___eval_static(Vhello___024root* vlSelf);
void Vhello___024root___eval_initial(Vhello___024root* vlSelf);
void Vhello___024root___eval_settle(Vhello___024root* vlSelf);
void Vhello___024root___eval(Vhello___024root* vlSelf);

void Vhello::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhello::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhello___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhello___024root___eval_static(&(vlSymsp->TOP));
        Vhello___024root___eval_initial(&(vlSymsp->TOP));
        Vhello___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhello___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhello::eventsPending() { return false; }

uint64_t Vhello::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhello::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhello___024root___eval_final(Vhello___024root* vlSelf);

VL_ATTR_COLD void Vhello::final() {
    Vhello___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhello::hierName() const { return vlSymsp->name(); }
const char* Vhello::modelName() const { return "Vhello"; }
unsigned Vhello::threads() const { return 1; }
void Vhello::prepareClone() const { contextp()->prepareClone(); }
void Vhello::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhello::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhello___024root__trace_init_top(Vhello___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhello___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhello___024root*>(voidSelf);
    Vhello__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vhello___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vhello___024root__trace_register(Vhello___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhello::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhello::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhello___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
