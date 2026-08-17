set_device GW2AR-LV18QN88C8/I7
add_file "../common/src/cod5_soc.v" -type verilog
add_file "../common/src/uart.v" -type verilog
add_file "../common/src/ternary.v" -type verilog
add_file "../common/src/cod5_alu.v" -type verilog
add_file "../common/src/cod5_cpu.v" -type verilog
add_file "../common/src/cod5_writeback.v" -type verilog
add_file "../common/src/cod5_fetch.v" -type verilog
add_file "../common/src/cod5_memory.v" -type verilog
add_file "../common/src/cod5_decode.v" -type verilog
add_file "../common/src/cod5_execute.v" -type verilog
add_file "../common/src/cod5_bsram.v" -type verilog
add_file "../common/src/sdcard.v" -type verilog
add_file "../common/src/display.v" -type verilog
add_file "../common/src/spi_master.v" -type verilog
add_file "../common/src/async_fifo.v" -type verilog
add_file "../common/src/tmds_encoder.v" -type verilog
add_file "../tangnano20k/src/gpdi.v" -type verilog
add_file "../tangnano20k/src/sdram.v" -type verilog
add_file "../tangnano20k/src/gowin_rpll/TMDS_rPLL.v" -type verilog
add_file "../tangnano20k/src/gowin_rpll/gowin_rpll.v" -type verilog
add_file "../tangnano20k/src/cod5_top.v" -type verilog
add_file "../tangnano20k/src/physical_constraint.cst" -type cst
add_file "../tangnano20k/src/timing_constraint.sdc" -type sdc
set_option -top_module cod5_top
set_option -print_all_synthesis_warning 1
set_option -place_option 1
set_option -route_option 1
set_option -rpt_auto_place_io_info 1
set_option -synthesis_onoff_pragma 1
#set_option -correct_hold_violation 0
set_option -gen_sdf 1
set_option -gen_posp 1
set_option -gen_io_cst 1
set_option -gen_ibis 1
set_option -gen_text_timing_rpt 1
set_option -gen_verilog_sim_netlist 1
set_option -show_init_in_vo 1
set_option -show_all_warn 1
set_option -use_jtag_as_gpio 0
set_option -use_sspi_as_gpio 0
set_option -use_mspi_as_gpio 0
saveto -all_options project.tcl
run all

