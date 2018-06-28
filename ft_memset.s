global _ft_memset

section	.text

_ft_memset:
	cmp rdi, 0
	je	exit
mems:
	mov rax, rsi
	mov rcx, rdx
	cld
	repz stosb
	mov rax, rdi
	ret
exit:
	ret
