section .text
	global  main

main:
	push    rbp
	mov     rbp,rsp
	mov     rdx,len
	mov     rcx,message
	mov     rax,4
	int     0x80

	pop     rbp
	mov     rax,0
	ret

	section .data
message:	db "Hello, Holberton", 10, 0
len:	equ $ - message
