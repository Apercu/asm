; ============================================================================ ;
;                                                                              ;
;     ██╗  ██╗██████╗                                                          ;
;     ██║  ██║╚════██╗                                                         ;
;     ███████║ █████╔╝              created by: bgronon                        ;
;     ╚════██║██╔═══╝                       at: 2015-01-26 12:43:02            ;
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

extern _ft_puts
extern _ft_bzero

global _ft_cat

section .data

buffer times 302 db 0
bufflen equ $ - buffer

section .text

_ft_cat:

while:

	mov rax, 0x2000003
	mov rsi, buffer
	mov rdx, bufflen
	syscall

	cmp rax, -1
	je error

	push rdi

	cmp rax, 0
	je out

	mov rdx, rax
	mov rax, 0x2000004
	mov rdi, 1
	mov rsi, buffer
	syscall

	pop rdi

	cmp rax, -1
	je error

	jmp while

out:

	pop rdi

	ret

error:

	jmp out

last:

	mov rax, 0x2000004
	mov rdi, 1
	mov rsi, buffer
	mov rdx, bufflen
	syscall
	jmp out
