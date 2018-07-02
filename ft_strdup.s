global ft_strdup

extern ft_strlen
extern malloc
extern ft_memcpy
section .text

ft_strdup:
	cmp rdi, 0
	je	exit
	call ft_strlen
	push rdi
	push rax
	mov rdi, rax
	call malloc
	mov	rdi, rax
	pop rdx
	pop	rsi
	call ft_memcpy
exit:
	ret

