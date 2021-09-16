OS				=	$(shell uname -s)
ifeq "$(OS)" "Darwin"
CROSS_COMPILE	=	/opt/self/Cellar/mips-sde-elf/bin/mips-sde-elf-
else
CROSS_COMPILE	=	mips-linux-gnu-
endif
CC				=	$(CROSS_COMPILE)as
LD				=	$(CROSS_COMPILE)ld
OBJCOPY			=	$(CROSS_COMPILE)objcopy
OBJDUMP			=	$(CROSS_COMPILE)objdump

vpath	%.s ../data

Targets			=	$(patsubst %.S,%.data,$(wildcard ../data/*.S))

# ********************
# Rules of Compilation
# ********************

all: Bin2Mem $(Targets)

%.o: %.S
	$(CC) -mips32 $< -o $@

%.om: %.o ram.ld
	$(LD) -T ram.ld $< -o $@

%.bin: %.om
	$(OBJCOPY) -O binary $< $@

%.asm: %.om
	$(OBJDUMP) -D $< > $@

%.data: %.bin 
	./Bin2Mem -o $@ $<

Bin2Mem: Bin2Mem.cpp
	g++ -o Bin2Mem $<

clean:
	rm -f Bin2Mem
	cd ../data ; \
	rm -f *.o *.om *.bin *.data *.mif *.asm Bin2Mem
