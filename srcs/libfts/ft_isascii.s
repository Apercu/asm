; ============================================================================ ;
;                                                                              ;
;     ██╗  ██╗██████╗                                                          ;
;     ██║  ██║╚════██╗                                                         ;
;     ███████║ █████╔╝              created by: bgronon                        ;
;     ╚════██║██╔═══╝                       at: 2015-01-22 10:00:02            ;
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

global _ft_isascii

section .text

_ft_isascii:

  xor rax, rax

  cmp rdi, 0
  jl out
  cmp rdi, 127
  jg out
  mov rax, 1

out:
  ret