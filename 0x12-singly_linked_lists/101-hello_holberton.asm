section .data
   msg: db "Hello, Holberton", 0
   fmt: db "%s", 10, 0

main:
	push	rbp
	mov	rsi, msg
	mov	rdi, fmt
	mov	rax, 0
	call 	printf
	pop	rbp
	mov	rax, 0
	ret

extern printf

section .text
   global main

