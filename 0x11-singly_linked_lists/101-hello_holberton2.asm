extern printf

	section .text
	global  main

main:
	push    rbp
	mov rdi,fmt
	mov     rsi,message
	mov     rax,0
	call 	printf
	pop     rbp
end:

	section .data
message:	db "Hello, Holberton",0
fmt:	 db "%s", 0xa
