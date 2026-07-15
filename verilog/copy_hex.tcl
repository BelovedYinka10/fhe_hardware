# copy_hex.tcl — pre-simulation hook for the rns_hash_verifier sim_1 fileset.
#
# XSim's $readmemh calls resolve relative paths against its own working
# directory (<proj>.sim/sim_1/behav/xsim/), not the repo's verilog/ folder,
# so newly generated/updated .hex vectors never show up there on their own.
# This script copies every *.hex file from the repo's verilog/ directory
# into the current (xsim) working directory right before each launch.
set hex_src {C:/Users/80010113/Desktop/project/fhe_hardware/verilog}
foreach f [glob -nocomplain -directory $hex_src *.hex] {
    file copy -force $f .
}
