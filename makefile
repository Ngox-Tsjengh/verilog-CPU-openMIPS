SRCS			=	$(wildcard src/*.v)
SRCS			+=	test/assert.v
SRCS			+=	test/openmips_min_sopc_tb.v
TOP				=	openmips_min_sopc_tb
TARGET			=	openMIPS.out

Target			=	openmips_min_sopc_tb
SimFile			=	$(addprefix V,$(Target))
DumpFile		=	test/waveform/dump.vcd

OS				=	$(shell uname -s)

ASMFILE			=	$(wildcard asm/*.S)

LDFLAGS			=	-Isrc/

LOG				=	iverilog
LOGFLAGS		=	-Wall 

SIM				=	vvp
SIMFLAGS		=	

VERILATOR		=	verilator
VERIFLAGS		=	
#-Wno-WIDTH -Wno-CASEINCOMPLETE -Wno-STMTDLY -Wno-UNUSED -Wno-INFINITELOOP -Wno-BLKSEQ
VERILATOR_ROOT	?=	$(shell bash -c 'verilator -V|grep VERILATOR_ROOT | head -1 | sed -e "s/^.*=\s*//"')
VINC 			:=	$(VERILATOR_ROOT)/include

#===================================================================
# Icarus Verilog
#===================================================================

$(TARGET): $(SRCS)
	@mkdir -p test/out test/waveform
	$(LOG) $(LOGFLAGS) $(LDFLAGS) -s $(TOP) -o $(addprefix test/out/,$(notdir $@)) $^ 

asm: $(ASMFILE)
	if [[ -z "${MIPS_CROSS}" ]]; then \
		export PATH="/opt/self/Cellar/mips-sde-elf/bin:$PATH"	\
		export MIPS_CROSS='True'	\
	fi
	make -C asm/

sim: $(TARGET) asm
	$(SIM) $(SIMFLAGS) $(addprefix test/out/,$(TARGET))

wave: sim
ifeq "$(OS)" "Darwin"
	$(shell /Applications/gtkwave.app/Contents/Resources/bin/gtkwave $(DumpFile) &)
else
	$(shell gtkwave $(DumpFile) &)
endif

#===================================================================
# Verilator
#===================================================================

veri: $(Target)

obj_dir/$(SimFile).cpp: $(Target).v
	$(VERILATOR) --trace -Wall -cc $(VERIFLAGS) $(LDFLAGS) $<

obj_dir/$(SimFile)__ALL.a: obj_dir/$(SimFile).cpp
	make -C obj_dir -f $(SimFile).mk

$(Target): $(Target).cpp obj_dir/$(SimFile)__ALL.a
	g++ -std=c++11	-I obj_dir		\
		-I $(VINC)					\
		$(VINC)/verilated.cpp       \
		$(VINC)/verilated_vcd_c.cpp \
		$^							\
		-o $(Target)

wave_veri: $(Target)
	$(shell ./$(Target))
ifeq "$(OS)" "Darwin"
	$(shell /Applications/gtkwave.app/Contents/Resources/bin/gtkwave $(DumpFile) &)
else
	$(shell gtkwave $(DumpFile) &)
endif

i_clean:
	rm -rf  $(TARGET)

veri_clean:
	rm -rf obj_dir/ $(Target) $(Target).vcd 

clean: i_clean veri_clean
