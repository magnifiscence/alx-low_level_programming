global _start

section .text
extern printf
_start:
mov edi, msg
xor eax, eax
call printf
mov eax, 0
ret
msg: db `Hello, Holberton\n`,0
