global _ft_strlen

section .text

_ft_strlen:
	push rbp
	mov	rbp, rsp
	cmp rdi, 0
	je	exit
strle:
	mov rax, 0
	mov	rcx, 0xffffffff

	cld
	repnz scasb
	mov rax, 0xffffffff
	sub	rax, rcx
	dec rax
	ret
exit:
	mov	rax, 0
	leave
	ret
