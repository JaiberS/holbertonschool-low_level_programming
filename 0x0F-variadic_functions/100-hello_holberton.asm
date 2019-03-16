section .data
	text db "Hello, world!",10,0

section .text
	global _start

_start:
	mov rax, text
	call _print

	mov rax, 60
	mov rdi, 0
	syscall

_print:
	push rax
	mov rbx, 0
_printloop:
	inc rax
	inc rbx
	mov cl, [rax]
	cmp cl, 0
	jne _printloop

	mov rax, 1
	mov rdi, 1
	pop rsi
	mov rdx, rbx
	syscalll

	ret
