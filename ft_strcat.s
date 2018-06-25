global _ft_strcat

section	.text

_ft_strcat:
	xor	rcx, rcx
	xor r8, r8
	jmp len
len:
	cmp [rdi + rcx], byte 0
	je	cat
	inc rcx
	jmp len
cat:
	cmp	[rsi + r8], byte 0
	je exit
	mov r10, [rsi + r8]
	mov [rdi + rcx], r10
	inc r8
	inc rcx
	jmp cat
exit:
	mov [rdi + rcx], byte 0
	mov rax, rdi
	ret
