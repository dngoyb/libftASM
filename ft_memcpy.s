global _ft_memcpy

section .text

_ft_memcpy:
	mov	rcx, rdx
	cld
	push rdi
	repnz movsb
	pop rax
	ret



;void memcpy(void *dst, void * src, size_t n)
;rax			rdi				rsi,	rdx
