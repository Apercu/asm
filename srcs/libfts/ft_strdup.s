; ============================================================================ ;
;                                                                              ;
;     ██╗  ██╗██████╗                                                          ;
;     ██║  ██║╚════██╗                                                         ;
;     ███████║ █████╔╝              created by: bgronon                        ;
;     ╚════██║██╔═══╝                       at: 2015-01-23 11:00:02            ;
;          ██║███████╗                                                         ;
;          ╚═╝╚══════╝                                                         ;
;     ███████╗ █████╗ ██╗   ██╗ █████╗ ████████╗████████╗ █████╗ ███████╗      ;
;     ╚══███╔╝██╔══██╗██║   ██║██╔══██╗╚══██╔══╝╚══██╔══╝██╔══██╗██╔════╝      ;
;       ███╔╝ ███████║██║   ██║███████║   ██║      ██║   ███████║███████╗      ;
;      ███╔╝  ██╔══██║╚██╗ ██╔╝██╔══██║   ██║      ██║   ██╔══██║╚════██║      ;
;     ███████╗██║  ██║ ╚████╔╝ ██║  ██║   ██║      ██║   ██║  ██║███████║      ;
;     ╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝      ;
;                                                                              ;
; ============================================================================ ;

extern _malloc
extern _ft_strlen
extern _ft_memcpy
;extern _ft_strcat

global _ft_strdup

section .text

_ft_strdup:

	push rbp
	mov rbp, rsp

	push rdi

	mov rcx, rdi
	call _ft_strlen

	mov r9, rax
	push r9

	inc rax

	mov rcx, rax

	mov rax, 8
	mov dl, cl
	mul al

	xor rdi, rdi
	mov dil, al

	call _malloc
	cmp rax, 0
	je out

	pop r9
	pop rdi

	mov rsi, rdi
	mov rdi, rax
	mov rdx, r9

	call _ft_memcpy

	mov rsp, rbp
	pop rbp

out:
	ret

