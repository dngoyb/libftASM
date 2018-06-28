%define SYSCALL(n) 0x2000000 | n

global	_ft_putchar

section	.text

_ft_putchar:
	mov	rax, SYSCALL(4)
	mov	[rsi], rdi
	mov rdi, 1
	mov	rdx, 1
	syscall
	ret
