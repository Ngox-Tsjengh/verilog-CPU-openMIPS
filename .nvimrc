let b:ale_verilog_xvlog_executable=''
let b:ale_verilog_iverilog_executable="/home/linuxbrew/.linuxbrew/bin/iverilog"
let b:ale_verilog_verilator_executable="/home/linuxbrew/.linuxbrew/bin/verilator"
let g:ale_linters_ignore = {
      \   'verilog': ['xvlog'],
      \}
