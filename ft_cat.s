%define SYSCALL(n) 0x2000000 | n	
global _ft_cat

section .data
	buffer times 5000 db 0
section .text

_ft_cat:
	mov	r8, rdi
read:
	mov	rax, SYSCALL(3)
	mov	rdi, r8
	lea rsi, [rel buffer]
	mov	rdx, 5000
	syscall
	jc exit
	mov r9, rax
	cmp r9, 0
	je	exit
write:
	mov rax, SYSCALL(4)
	mov rdi, 1
	lea rsi, [rel buffer]
	mov rdx, 5000
	syscall
	jmp	read
exit:
	ret
