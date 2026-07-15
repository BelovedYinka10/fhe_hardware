# vivado_setup.tcl — bind rns_hash_verifier design/testbench sources and the
# hex-vector auto-copy hook into the currently open Vivado project.
#
# Usage (Tcl console, with the project already open):
#   source {C:/Users/80010113/Desktop/project/fhe_hardware/verilog/vivado_setup.tcl}
#
# Uses add_files (reference in place), not import_files, so Vivado always
# reads the live files from the git repo instead of a stale copy.

set repo_dir {C:/Users/80010113/Desktop/project/fhe_hardware/verilog}

# ── Design sources needed by tb_rns_hash_verifier ──────────────────────
add_files -fileset sources_1 [list \
    "$repo_dir/rns_hash_verifier.v" \
    "$repo_dir/hash_verifier.v" \
    "$repo_dir/cipher_hash.v" \
    "$repo_dir/poly_mul.v" \
    "$repo_dir/poly_add.v" \
    "$repo_dir/ntt.v" \
]

# ── Testbench ───────────────────────────────────────────────────────────
add_files -fileset sim_1 "$repo_dir/tb_rns_hash_verifier.v"
set_property top tb_rns_hash_verifier [get_filesets sim_1]

# ── Auto-copy the .hex test vectors before every simulation launch ─────
set_property -name {xsim.simulate.tcl.pre} -value "$repo_dir/copy_hex.tcl" -objects [get_filesets sim_1]

update_compile_order -fileset sources_1
update_compile_order -fileset sim_1

puts "rns_hash_verifier sources + hex auto-copy hook bound. Run: launch_simulation"
