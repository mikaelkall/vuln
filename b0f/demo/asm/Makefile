all:
	nasm -f elf32 shellcode.asm -o shellcode.o
	ld -m elf_i386 shellcode.o -o shellcode
clean:
	rm -f peda* && rm -f shellcode.o shellcode
