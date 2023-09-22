// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello.h for the primary calling header

#ifndef VERILATED_VHELLO_IF_M_WB_H_
#define VERILATED_VHELLO_IF_M_WB_H_  // guard

#include "verilated.h"


class Vhello__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_if_m_wb final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mem_load;
    CData/*0:0*/ reg_wr;
    CData/*4:0*/ reg_wnum;
    IData/*31:0*/ aluresult;
    IData/*31:0*/ mem_dat_i_w;
    IData/*31:0*/ Data_out;

    // INTERNAL VARIABLES
    Vhello__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello_if_m_wb(Vhello__Syms* symsp, const char* v__name);
    ~Vhello_if_m_wb();
    VL_UNCOPYABLE(Vhello_if_m_wb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vhello_if_m_wb* obj);

#endif  // guard
