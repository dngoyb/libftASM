global ft_strncat

section .text

ft_strncat:
	push rbp
	mov	 rbp, rsp
	xor rcx, rcx
	xor r8, r8
	jmp len
len:
	cmp [rdi + rcx], byte 0
	je	cat
	inc	rcx
	jmp	len
cat:
	cmp r8, rdx
	je	exit
	cmp [rsi + r8], byte 0
	je	exit
	mov r10, [rsi + r8]
	mov	[rdi + rcx], r10
	inc	r8
	inc	rcx
	jmp	cat
exit:
	mov	[rdi + rcx], byte 0
	mov	rax, rdi
	leave
	ret


; char *strncat(char *dest, const char *src, size_t n)
;rax				rdi				rsi			rdx
