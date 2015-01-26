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

buffer times 3 db 0
bufflen equ $ - buffer

section .text

_ft_cat:

while:

	push rdi

	mov rdi, buffer
	mov rsi, bufflen
	call _ft_bzero
	mov rsi, rax

	pop rdi

	mov rax, 0x2000003
	mov rsi, buffer
	mov rdx, bufflen
	syscall

	cmp rax, -1
	je error

	push rdi

	cmp rax, 0
	je out

	mov rax, 0x2000004
	mov rdi, 1
	mov rsi, buffer
	mov rdx, bufflen
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
