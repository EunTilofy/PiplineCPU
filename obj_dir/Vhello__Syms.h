// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHELLO__SYMS_H_
#define VERILATED_VHELLO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhello.h"

// INCLUDE MODULE CLASSES
#include "Vhello___024root.h"
#include "Vhello_if_if_id.h"
#include "Vhello_if_id_ex.h"
#include "Vhello_if_ex_m.h"
#include "Vhello_if_m_wb.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vhello__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhello* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhello___024root               TOP;
    Vhello_if_ex_m                 TOP__core_als__DOT__if_ex_m_m;
    Vhello_if_id_ex                TOP__core_als__DOT__if_id_ex_ex;
    Vhello_if_if_id                TOP__core_als__DOT__if_if_id_id;
    Vhello_if_m_wb                 TOP__core_als__DOT__if_m_wb_wb;

    // CONSTRUCTORS
    Vhello__Syms(VerilatedContext* contextp, const char* namep, Vhello* modelp);
    ~Vhello__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
