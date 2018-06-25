global _len

section .text

_len:
	xor rcx, rcx
	jmp	central
central:
	cmp [rdi + rcx], byte 0
	je	exit
	inc	rcx
	jmp	central
exit:
	mov	rax, rcx
	ret
