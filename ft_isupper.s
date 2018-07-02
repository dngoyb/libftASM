global _ft_isupper

section	.text

_ft_isupper:
	cmp	rdi, 97
	jl	exit
	cmp rdi, 122
	jg	exit
	mov	rax, 1
	ret
exit:
	mov rax, 0
		
