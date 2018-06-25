global	_ft_toupper

section	.text

_ft_toupper:
	cmp	rdi, 97
	jl	exit
	cmp	rdi, 122
	jg	exit
	sub	rax, 32
	ret
exit:
	mov	rax, rdi
	ret
