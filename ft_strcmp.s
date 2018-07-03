global _ft_strcmp

section .text

_ft_strcmp:
	xor rcx, rcx
	cmp [rdi + rcx], byte 0
	je	exit
	cmp	[rsi + rcx], byte 0
	je	exit
	mov	rdx, [rsi + rcx]
	cmp [rdi + rcx], rdx
	je	exit
	jne exit
	inc rcx
	jmp	_ft_strcmp
exit:
	mov	r8, [rdi + rcx]
	mov	r9, [rsi + rcx]
	sub r8, r9
	mov rax, r8
	ret
