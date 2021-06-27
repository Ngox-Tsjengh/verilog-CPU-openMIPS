#!/bin/bash

cd ../src
mkdir -p ../test/out/

compile_all_test()
{
	cd ../src
	xargs -P 0 -I {} sh -c ' eval "$1"' - {} <<'EOF'
	iverilog -s ori_forwarding_test     -o  ../test/out/ori_forwarding_test.out      ../src/*.v  ../test/ori_forwarding_test.v
	iverilog -s inst_logic_test         -o  ../test/out/inst_logic_test.out          ../src/*.v  ../test/inst_logic_test.v
	iverilog -s inst_shift_test         -o  ../test/out/inst_shift_test.out          ../src/*.v  ../test/inst_shift_test.v
	iverilog -s inst_move_test          -o  ../test/out/inst_move_test.out           ../src/*.v  ../test/inst_move_test.v
	iverilog -s inst_simple_arith_test  -o  ../test/out/inst_simple_arith_test.out   ../src/*.v  ../test/inst_simple_arith_test.v
	iverilog -s inst_br_test            -o  ../test/out/inst_br_test.out            ../src/*.v  ../test/inst_br_test.v
	iverilog -s inst_jump_test          -o  ../test/out/inst_jump_test.out           ../src/*.v  ../test/inst_jump_test.v
	iverilog -s inst_load_store_test    -o  ../test/out/inst_load_store_test.out     ../src/*.v  ../test/inst_load_store_test.v
	iverilog -s inst_ll_sc_test         -o  ../test/out/inst_ll_sc_test.out          ../src/*.v  ../test/inst_ll_sc_test.v
	iverilog -s inst_load_stall_test    -o  ../test/out/inst_load_stall_test.out     ../src/*.v  ../test/inst_load_stall_test.v

EOF
}

simulation() {
	cd ../src
	xargs -P 0 -I {} sh -c ' eval "$1"' - {} <<'EOF'
    vvp ../test/out/ori_forwarding_test.out
    vvp ../test/out/inst_logic_test.out
    vvp ../test/out/inst_shift_test.out
    vvp ../test/out/inst_move_test.out
    vvp ../test/out/inst_simple_arith_test.out
    vvp ../test/out/inst_br_test.out
    vvp ../test/out/inst_jump_test.out
    vvp ../test/out/inst_load_store_test.out
    vvp ../test/out/inst_ll_sc_test.out
    vvp ../test/out/inst_load_stall_test.out

EOF
}

clean_all()
{
    rm -rf ../test/out/
    rm -rf ../test/*.vcd
}

run_all_program()
{
    echo -e "\nthere are no programs yet "
}

print_options()
{
      echo -e "please use: \n  -t  to run all function test\n  -c  to clean all generated files\n  -p  to run programs already writed"  
}

if [ $# == 0 ]; then
    echo "no options!"
    print_options
fi

while getopts "tcp" opt  
do
    case $opt in  
        t)
            compile_all_test
			simulation
			echo -e "\njust ignore all warnings above.\nerrors are what you should consider."
        ;;
        p)
            run_all_program
        ;;
        c)
            clean_all
        ;;
        ?)
            print_options
            exit 1;;  
    esac  
done
