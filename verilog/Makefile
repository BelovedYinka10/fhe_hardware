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

LOGN     ?= 13
Q_WIDTH  ?= 60
CT_SIZE  ?= 3
N_PRIMES ?= 2
SEL_W    ?= 1    # ceil(log2(N_PRIMES)); update when changing N_PRIMES

# ── NTT target ────────────────────────────────────────────────
NTT_TOP  := ntt
NTT_VDIR := obj_dir
NTT_LIB  := ../src/ntt_hw.so

# ── RNS NTT target ───────────────────────────────────────────
RNS_TOP  := rns_ntt
RNS_VDIR := obj_dir_rns
RNS_LIB  := ../src/rns_ntt_hw.so

# ── Hash verifier target ──────────────────────────────────────
HV_TOP   := hash_verifier
HV_VDIR  := obj_dir_hv
HV_LIB   := ../src/hash_verifier_hw.so

# ── RNS Hash verifier target ──────────────────────────────────
RNS_HV_TOP  := rns_hash_verifier
RNS_HV_VDIR := obj_dir_rns_hv
RNS_HV_LIB  := ../src/rns_hash_verifier_hw.so

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
# RNS NTT shared library
# Verilog sources: rns_ntt → ntt (N_PRIMES instances)
# ════════════════════════════════════════════════════════════════

RNS_SRCS := rns_ntt.v ntt.v

$(RNS_VDIR)/V$(RNS_TOP).mk: $(RNS_SRCS)
	$(VERILATOR) --cc \
	    -GLOGN=$(LOGN) -GQ_WIDTH=$(Q_WIDTH) -GN_PRIMES=$(N_PRIMES) -GSEL_W=$(SEL_W) \
	    --Mdir $(RNS_VDIR) \
	    --Wno-WIDTHTRUNC --Wno-WIDTHEXPAND \
	    --top-module $(RNS_TOP) \
	    $(RNS_SRCS)

$(RNS_VDIR)/V$(RNS_TOP)__ALL.a: $(RNS_VDIR)/V$(RNS_TOP).mk
	$(MAKE) -C $(RNS_VDIR) -f V$(RNS_TOP).mk

$(RNS_LIB): $(RNS_VDIR)/V$(RNS_TOP)__ALL.a rns_ntt_sim.cpp
	$(CXX) $(CXXFLAGS) \
	    -shared \
	    -I$(RNS_VDIR) \
	    -I$(VERILATOR_ROOT)/include \
	    -I$(VERILATOR_ROOT)/include/vltstd \
	    -DN_PRIMES=$(N_PRIMES) \
	    rns_ntt_sim.cpp \
	    $(RNS_VDIR)/V$(RNS_TOP)__ALL.a \
	    $(RNS_VDIR)/libverilated.a \
	    -o $(RNS_LIB)
	@echo "✓  Built $(RNS_LIB)"

rns_ntt: $(RNS_LIB)

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
# RNS Hash verifier shared library
# Verilog sources: rns_hash_verifier → hash_verifier → cipher_hash → poly_mul → ntt
#                                                                    → poly_add
# ════════════════════════════════════════════════════════════════

RNS_HV_SRCS := rns_hash_verifier.v hash_verifier.v cipher_hash.v poly_mul.v poly_add.v ntt.v

$(RNS_HV_VDIR)/V$(RNS_HV_TOP).mk: $(RNS_HV_SRCS)
	$(VERILATOR) --cc \
	    -GLOGN=$(LOGN) -GQ_WIDTH=$(Q_WIDTH) -GCT_SIZE=$(CT_SIZE) \
	    -GN_PRIMES=$(N_PRIMES) -GSEL_W=$(SEL_W) \
	    --Mdir $(RNS_HV_VDIR) \
	    --Wno-WIDTHTRUNC --Wno-WIDTHEXPAND \
	    --Wno-MULTIDRIVEN \
	    --top-module $(RNS_HV_TOP) \
	    $(RNS_HV_SRCS)

$(RNS_HV_VDIR)/V$(RNS_HV_TOP)__ALL.a: $(RNS_HV_VDIR)/V$(RNS_HV_TOP).mk
	$(MAKE) -C $(RNS_HV_VDIR) -f V$(RNS_HV_TOP).mk

$(RNS_HV_LIB): $(RNS_HV_VDIR)/V$(RNS_HV_TOP)__ALL.a rns_hash_verifier_sim.cpp
	$(CXX) $(CXXFLAGS) \
	    -shared \
	    -I$(RNS_HV_VDIR) \
	    -I$(VERILATOR_ROOT)/include \
	    -I$(VERILATOR_ROOT)/include/vltstd \
	    -DN_PRIMES=$(N_PRIMES) \
	    rns_hash_verifier_sim.cpp \
	    $(RNS_HV_VDIR)/V$(RNS_HV_TOP)__ALL.a \
	    $(RNS_HV_VDIR)/libverilated.a \
	    -o $(RNS_HV_LIB)
	@echo "✓  Built $(RNS_HV_LIB)"

rns_hash_verifier: $(RNS_HV_LIB)

# ════════════════════════════════════════════════════════════════
clean:
	rm -rf $(NTT_VDIR) $(RNS_VDIR) $(HV_VDIR) $(RNS_HV_VDIR) \
	       $(NTT_LIB) $(RNS_LIB) $(HV_LIB) $(RNS_HV_LIB)

.PHONY: all rns_ntt hash_verifier rns_hash_verifier clean
