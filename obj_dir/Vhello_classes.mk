# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vhello.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vhello \
	Vhello___024root__DepSet_he44dffde__0 \
	Vhello___024root__DepSet_hfaf3196b__0 \
	Vhello_if_if_id__DepSet_h6f2025da__0 \
	Vhello_if_id_ex__DepSet_he3d900d8__0 \
	Vhello_if_ex_m__DepSet_h20a21ec7__0 \
	Vhello_if_m_wb__DepSet_hfc616f0e__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vhello__ConstPool_0 \
	Vhello___024root__Slow \
	Vhello___024root__DepSet_he44dffde__0__Slow \
	Vhello___024root__DepSet_hfaf3196b__0__Slow \
	Vhello_if_if_id__Slow \
	Vhello_if_if_id__DepSet_h6f2025da__0__Slow \
	Vhello_if_id_ex__Slow \
	Vhello_if_id_ex__DepSet_he3d900d8__0__Slow \
	Vhello_if_ex_m__Slow \
	Vhello_if_ex_m__DepSet_h20a21ec7__0__Slow \
	Vhello_if_m_wb__Slow \
	Vhello_if_m_wb__DepSet_hfc616f0e__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vhello__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vhello__Syms \
	Vhello__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
