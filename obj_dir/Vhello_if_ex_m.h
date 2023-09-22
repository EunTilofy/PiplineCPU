// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello.h for the primary calling header

#ifndef VERILATED_VHELLO_IF_EX_M_H_
#define VERILATED_VHELLO_IF_EX_M_H_  // guard

#include "verilated.h"


class Vhello__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_if_ex_m final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mem_load;
    CData/*0:0*/ reg_wr;
    CData/*0:0*/ mem_wr;
    CData/*2:0*/ mem_opt;
    CData/*0:0*/ mem_signed;
    CData/*4:0*/ reg_wnum;
    IData/*31:0*/ aluresult;
    IData/*31:0*/ rbdata;

    // INTERNAL VARIABLES
    Vhello__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello_if_ex_m(Vhello__Syms* symsp, const char* v__name);
    ~Vhello_if_ex_m();
    VL_UNCOPYABLE(Vhello_if_ex_m);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vhello_if_ex_m* obj);

#endif  // guard
