; ============================================================================ ;
;                                                                              ;
;     ██╗  ██╗██████╗                                                          ;
;     ██║  ██║╚════██╗                                                         ;
;     ███████║ █████╔╝              created by: bgronon                        ;
;     ╚════██║██╔═══╝                       at: 2015-01-24 15:20:02            ;
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

global _ft_memcpy

section .text

_ft_memcpy:

	push rdi
	mov rcx, rdx
	cld

	mov al, sil

	rep movsb

	pop rdi
	mov rax, rdi

  ret
