section .text
	global  main

main:
	mov eax,4
	mov ebx, 1
	mov ecx, message
	mov edx,length
	int 0x80
end:

section .data
	message db "Hello, Holberton", 0xa
	length equ $-message
