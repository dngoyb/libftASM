global _ft_bzero

section	.text

_ft_bzero:
	xor	rcx, rcx
	jmp	central
central: 
	cmp	rsi, rcx
	je	exit
	mov	[rdi + rcx], byte 0
	inc	rcx
	inc rdi
	jmp	central
exit:
	ret
