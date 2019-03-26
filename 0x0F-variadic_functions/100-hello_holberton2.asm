section .text
	global  main

main:
	push    rbp
	mov     rbp,rsp
	mov     rcx,message
	mov     rax,4
	int     0x80
	mov eax, 1
	pop     rbp
end:

	section .data
message:	db "Hello, Holberton",0 ,0xa
