%define SYSCALL(n) 0x2000000 | n
global	_ft_puts
;section	.text
section .data
	nul db "(null)", 10
	len equ $ - nul
	nl db 10
section .text
_ft_puts:
	mov	rcx, 0
	cmp rdi, 0
	je null
length:
	cmp [rdi + rcx], byte 0
	je	put
	inc rcx
	jmp length
put:
	mov rax, SYSCALL(4)
	mov	rsi, rdi
	mov rdi, 1
	mov rdx, rcx
	syscall
	jmp newline
newline:
	mov	rax, SYSCALL(4)
	mov	rdi, 0
	lea rsi, [rel nl]
	mov	rdx, 1 
	syscall
	mov	rax, rcx
	ret
null:
	mov	rax, SYSCALL(4)
	mov rdi, 1
	lea rsi, [rel nul]
	mov	rdx, len
	syscall
	mov	rax, 7
	ret


