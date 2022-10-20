global main

	section .text

main:
	mov	rax, 1
	mov	rdi, 1
	mov	rsi, m
	mov	rdx, 17
	syscall

m:
	db "Hello, Holberton\n", 10, 0
