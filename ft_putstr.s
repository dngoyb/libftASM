%define SYSCALL(n) 0x2000000 | n
global _ft_putstr

section .text

_ft_putstr:
	xor	rcx, rcx
length:
	cmp [rdi + rcx], byte 0
	je 	putst
	inc	rcx
	jmp length
putst:
	mov	rax, SYSCALL(4)
	mov	rsi, rdi
	mov	rdi, 1
	mov	rdx, rcx
	syscall
	ret
