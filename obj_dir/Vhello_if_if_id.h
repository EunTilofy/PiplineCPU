// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhello.h for the primary calling header

#ifndef VERILATED_VHELLO_IF_IF_ID_H_
#define VERILATED_VHELLO_IF_IF_ID_H_  // guard

#include "verilated.h"


class Vhello__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhello_if_if_id final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ inst;
    IData/*31:0*/ pc;

    // INTERNAL VARIABLES
    Vhello__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhello_if_if_id(Vhello__Syms* symsp, const char* v__name);
    ~Vhello_if_if_id();
    VL_UNCOPYABLE(Vhello_if_if_id);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vhello_if_if_id* obj);

#endif  // guard
