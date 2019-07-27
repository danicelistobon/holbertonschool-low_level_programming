section .data
	msg db "Hello, Holberton", 0x0a
	len equ $ - msg
section .text
	global main
main:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov eax, 1
	int 0x80
