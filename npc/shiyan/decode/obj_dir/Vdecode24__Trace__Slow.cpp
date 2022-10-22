// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode24__Syms.h"


void Vdecode24___024root__traceInitSub0(Vdecode24___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdecode24___024root__traceInitTop(Vdecode24___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdecode24___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vdecode24___024root__traceInitSub0(Vdecode24___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"x", false,-1, 1,0);
        tracep->declBit(c+2,"en", false,-1);
        tracep->declBus(c+3,"y", false,-1, 3,0);
        tracep->declBus(c+1,"decode24 x", false,-1, 1,0);
        tracep->declBit(c+2,"decode24 en", false,-1);
        tracep->declBus(c+3,"decode24 y", false,-1, 3,0);
    }
}

void Vdecode24___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vdecode24___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vdecode24___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vdecode24___024root__traceRegister(Vdecode24___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vdecode24___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vdecode24___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vdecode24___024root__traceCleanup, vlSelf);
    }
}

void Vdecode24___024root__traceFullSub0(Vdecode24___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vdecode24___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vdecode24___024root* const __restrict vlSelf = static_cast<Vdecode24___024root*>(voidSelf);
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vdecode24___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vdecode24___024root__traceFullSub0(Vdecode24___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdecode24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->x),2);
        tracep->fullBit(oldp+2,(vlSelf->en));
        tracep->fullCData(oldp+3,(vlSelf->y),4);
    }
}
