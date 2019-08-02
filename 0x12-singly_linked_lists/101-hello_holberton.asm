	msg db "Hello, Holberton", 10, 0
section .text
	extern printf
	global main
main:
	mov rax, 0
	mov rdi, msg
	call printf
