global _ft_isalnum

section .text

_ft_isalnum:
	cmp rdi, 48
	jl	exit
	cmp	rdi, 57
	jg	cap
	mov rax, 1
	ret
cap:
	cmp	rdi, 65
	jl	exit
	cmp	rdi, 90
	jg	Small
	mov rax, 1
	ret
Small:
	cmp rdi, 97
	jl 	exit
	cmp rdi, 122
	jg	exit
	mov rax, 1
	ret
exit:
	mov rax, 0
	ret
