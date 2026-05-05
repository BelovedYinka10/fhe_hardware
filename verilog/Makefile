# ================================================================
# Makefile — Build NTT Verilog simulation shared library
#
# Requirements:
#   verilator >= 5.x   (brew install verilator)
#   g++ / clang++
#
# Usage:
#   cd verilog/
#   make          → builds ../src/ntt_hw.so
#   make clean    → remove build artefacts
# ================================================================

LOGN    ?= 13
Q_WIDTH ?= 40
CT_SIZE ?= 3

# ── NTT target ────────────────────────────────────────────────
NTT_TOP  := ntt
NTT_VDIR := obj_dir
NTT_LIB  := ../src/ntt_hw.so

# ── Hash verifier target ──────────────────────────────────────
HV_TOP   := hash_verifier
HV_VDIR  := obj_dir_hv
HV_LIB   := ../src/hash_verifier_hw.so

VERILATOR      := verilator
VERILATOR_ROOT := $(shell $(VERILATOR) --getenv VERILATOR_ROOT)
CXX            := g++
CXXFLAGS       := -O2 -fPIC -std=c++17

all: $(NTT_LIB)

# ════════════════════════════════════════════════════════════════
# NTT shared library
# ════════════════════════════════════════════════════════════════

$(NTT_VDIR)/V$(NTT_TOP).mk: $(NTT_TOP).v
	$(VERILATOR) --cc \
	    -GLOGN=$(LOGN) -GQ_WIDTH=$(Q_WIDTH) \
	    --Mdir $(NTT_VDIR) \
	    --Wno-WIDTHTRUNC --Wno-WIDTHEXPAND \
	    $(NTT_TOP).v

$(NTT_VDIR)/Vntt__ALL.a: $(NTT_VDIR)/V$(NTT_TOP).mk
	$(MAKE) -C $(NTT_VDIR) -f V$(NTT_TOP).mk

$(NTT_LIB): $(NTT_VDIR)/Vntt__ALL.a ntt_sim.cpp
	$(CXX) $(CXXFLAGS) \
	    -shared \
	    -I$(NTT_VDIR) \
	    -I$(VERILATOR_ROOT)/include \
	    -I$(VERILATOR_ROOT)/include/vltstd \
	    ntt_sim.cpp \
	    $(NTT_VDIR)/Vntt__ALL.a \
	    $(NTT_VDIR)/libverilated.a \
	    -o $(NTT_LIB)
	@echo "✓  Built $(NTT_LIB)"

# ════════════════════════════════════════════════════════════════
# Hash verifier shared library
# Verilog sources: hash_verifier → cipher_hash → poly_mul → ntt
#                                              → poly_add
# ════════════════════════════════════════════════════════════════

HV_SRCS := hash_verifier.v cipher_hash.v poly_mul.v poly_add.v ntt.v

$(HV_VDIR)/V$(HV_TOP).mk: $(HV_SRCS)
	$(VERILATOR) --cc \
	    -GLOGN=$(LOGN) -GQ_WIDTH=$(Q_WIDTH) -GCT_SIZE=$(CT_SIZE) \
	    --Mdir $(HV_VDIR) \
	    --Wno-WIDTHTRUNC --Wno-WIDTHEXPAND \
	    --Wno-MULTIDRIVEN \
	    --top-module $(HV_TOP) \
	    $(HV_SRCS)

$(HV_VDIR)/V$(HV_TOP)__ALL.a: $(HV_VDIR)/V$(HV_TOP).mk
	$(MAKE) -C $(HV_VDIR) -f V$(HV_TOP).mk

$(HV_LIB): $(HV_VDIR)/V$(HV_TOP)__ALL.a hash_verifier_sim.cpp
	$(CXX) $(CXXFLAGS) \
	    -shared \
	    -I$(HV_VDIR) \
	    -I$(VERILATOR_ROOT)/include \
	    -I$(VERILATOR_ROOT)/include/vltstd \
	    hash_verifier_sim.cpp \
	    $(HV_VDIR)/V$(HV_TOP)__ALL.a \
	    $(HV_VDIR)/libverilated.a \
	    -o $(HV_LIB)
	@echo "✓  Built $(HV_LIB)"

hash_verifier: $(HV_LIB)

# ════════════════════════════════════════════════════════════════
clean:
	rm -rf $(NTT_VDIR) $(HV_VDIR) $(NTT_LIB) $(HV_LIB)

.PHONY: all hash_verifier clean
