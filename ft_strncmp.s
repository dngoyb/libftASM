global ft_strncmp

section	.text

ft_strncmp:
	xor rcx, rcx
	;cmp [rdi + rcx], byte 0
	;je	exit
	;cmp [rsi + rcx], byte 0
	;je	exit
	mov	[rsi + rcx], r8
	cmp rcx, rdx
	je	exit
	cmp [rdi + rcx], r8
	jne	exit
	inc	rcx
	jmp ft_strncmp
exit:
	mov	r9, [rdi + rcx]
	mov	r10, [rsi + rcx]
	sub r9, r10
	mov	rax, r9
	ret
	

