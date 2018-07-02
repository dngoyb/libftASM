global	ft_strcmp

section	.text

ft_strcmp:
	xor rcx, rcx
cmpr:
	cmp [rdi + rcx], byte 0
	je exit
	cmp [rsi + rcx], byte 0
	je exit
	mov r8, [rsi + rcx]
	cmp [rdi + rcx], r8
	jne exit
	inc rcx
	jmp cmpr
results:
	mov r9, [rdi + r8]
	mov r10, [rsi + r8]
	sub r9, r10
	mov rax, r9	
;int	strcmp(char *s1, char *s2)
;rda				rdi			rsi
