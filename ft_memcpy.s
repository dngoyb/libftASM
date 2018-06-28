global _ft_memcpy

section .text

_ft_memcpy:
	mov	rcx, rdx
	repnz movsb
	mov	rax, rdi
	ret



;void memcpy(void *dst, void * src, size_t n)
;rax			rdi				rsi,	rdx
