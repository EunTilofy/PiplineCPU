// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vhello__Syms.h"
#include "Vhello.h"
#include "Vhello___024root.h"
#include "Vhello_if_if_id.h"
#include "Vhello_if_id_ex.h"
#include "Vhello_if_ex_m.h"
#include "Vhello_if_m_wb.h"

// FUNCTIONS
Vhello__Syms::~Vhello__Syms()
{
}

Vhello__Syms::Vhello__Syms(VerilatedContext* contextp, const char* namep, Vhello* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__core_als__DOT__if_ex_m_m{this, Verilated::catName(namep, "core_als.if_ex_m_m")}
    , TOP__core_als__DOT__if_id_ex_ex{this, Verilated::catName(namep, "core_als.if_id_ex_ex")}
    , TOP__core_als__DOT__if_if_id_id{this, Verilated::catName(namep, "core_als.if_if_id_id")}
    , TOP__core_als__DOT__if_m_wb_wb{this, Verilated::catName(namep, "core_als.if_m_wb_wb")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__core_als__DOT__if_ex_m_m = &TOP__core_als__DOT__if_ex_m_m;
    TOP.__PVT__core_als__DOT__if_id_ex_ex = &TOP__core_als__DOT__if_id_ex_ex;
    TOP.__PVT__core_als__DOT__if_if_id_id = &TOP__core_als__DOT__if_if_id_id;
    TOP.__PVT__core_als__DOT__if_m_wb_wb = &TOP__core_als__DOT__if_m_wb_wb;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__core_als__DOT__if_ex_m_m.__Vconfigure(true);
    TOP__core_als__DOT__if_id_ex_ex.__Vconfigure(true);
    TOP__core_als__DOT__if_if_id_id.__Vconfigure(true);
    TOP__core_als__DOT__if_m_wb_wb.__Vconfigure(true);
}
