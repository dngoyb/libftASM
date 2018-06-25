global _ft_isalpha

section	.text

_ft_isalpha:
	cmp	rdi, 65
	jl	exit
	cmp rdi, 90
	jg	Small
	mov	rax, 1
	ret
Small:
	cmp	rdi, 97
	jl	exit
	cmp	rdi, 122
	jg	exit
	mov rax, 1
	ret
exit:
	mov	rax, 0
	ret
