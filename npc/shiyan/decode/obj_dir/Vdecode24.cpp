// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecode24.h"
#include "Vdecode24__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdecode24::Vdecode24(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdecode24__Syms(_vcontextp__, _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , en{vlSymsp->TOP.en}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdecode24::Vdecode24(const char* _vcname__)
    : Vdecode24(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdecode24::~Vdecode24() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdecode24___024root___eval_initial(Vdecode24___024root* vlSelf);
void Vdecode24___024root___eval_settle(Vdecode24___024root* vlSelf);
void Vdecode24___024root___eval(Vdecode24___024root* vlSelf);
QData Vdecode24___024root___change_request(Vdecode24___024root* vlSelf);
#ifdef VL_DEBUG
void Vdecode24___024root___eval_debug_assertions(Vdecode24___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecode24___024root___final(Vdecode24___024root* vlSelf);

static void _eval_initial_loop(Vdecode24__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdecode24___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdecode24___024root___eval_settle(&(vlSymsp->TOP));
        Vdecode24___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdecode24___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/decode24.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdecode24___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdecode24::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecode24::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecode24___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdecode24___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdecode24___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/decode24.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdecode24___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdecode24::final() {
    Vdecode24___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdecode24::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdecode24::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vdecode24___024root__traceInitTop(Vdecode24___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdecode24___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdecode24___024root*>(voidSelf);
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vdecode24___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vdecode24___024root__traceRegister(Vdecode24___024root* vlSelf, VerilatedVcd* tracep);

void Vdecode24::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vdecode24___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
