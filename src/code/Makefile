all: code.bin code.txt code.coe code.dat

clean:
	-@rm code.o code.bin code.txt code.coe code.dat

code.o: code.s
	riscv64-elf-gcc -c -fno-pic -march=rv32i -mabi=ilp32 -O0 code.s -o code.o

code.bin: code.o
	riscv64-elf-objcopy -O binary code.o code.bin

code.txt: code.bin
	riscv64-elf-objdump -D -b binary -m riscv code.bin > code.txt

code.coe: code.bin
	python3 coe_gen.py > code.coe

code.dat: code.bin
	python3 dat_gen.py > code.dat

show:
	gtkwave tb_core.vcd

.PHONY: all clean