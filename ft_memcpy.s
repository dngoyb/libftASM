global _ft_memcpy

section .text

_ft_memcpy:
	push rbp
	mov rbp, rsp
	push rdi
	mov rcx, rdx
	rep movsb
	pop rdi
	mov rax, rdi
	leave
	ret

;void memcpy(void *dst, void * src, size_t n)
;rax			rdi				rsi,	rdx
