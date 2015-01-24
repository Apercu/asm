# ========================================================================== #
#                                                                            #
#    ██╗  ██╗██████╗                                                         #
#    ██║  ██║╚════██╗                                                        #
#    ███████║ █████╔╝              created by: bgronon                       #
#    ╚════██║██╔═══╝                       at: 2015-01-22 10:00:02           #
#         ██║███████╗                                                        #
#         ╚═╝╚══════╝                                                        #
#    ███████╗ █████╗ ██╗   ██╗ █████╗ ████████╗████████╗ █████╗ ███████╗     #
#    ╚══███╔╝██╔══██╗██║   ██║██╔══██╗╚══██╔══╝╚══██╔══╝██╔══██╗██╔════╝     #
#      ███╔╝ ███████║██║   ██║███████║   ██║      ██║   ███████║███████╗     #
#     ███╔╝  ██╔══██║╚██╗ ██╔╝██╔══██║   ██║      ██║   ██╔══██║╚════██║     #
#    ███████╗██║  ██║ ╚████╔╝ ██║  ██║   ██║      ██║   ██║  ██║███████║     #
#    ╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝     #
#                                                                            #
# ========================================================================== #

LIBFT = libfts.a

NASM       = nasm
NASM_FLAGS = -f macho64

NASM_FILES = ft_puts.s \
						 ft_bzero.s \
						 ft_strlen.s \
						 ft_isalpha.s \
						 ft_isdigit.s \
						 ft_isalnum.s \
						 ft_isascii.s \
						 ft_isprint.s \
						 ft_toupper.s \
						 ft_tolower.s \
						 ft_strcat.s \
						 ft_memset.s \
						 ft_memcpy.s \
						 ft_strdup.s \

DIR_SRC    = srcs/libfts
DIR_OBJ    = .obj

NASM_SRC   = $(addprefix $(DIR_SRC)/, $(NASM_FILES))

NASM_OBJ = $(NASM_FILES:%.s=$(DIR_OBJ)/%.o)

$(DIR_OBJ)/%.o: $(DIR_SRC)/%.s
	@mkdir -p $(DIR_OBJ)
	$(NASM) $(NASM_FLAGS) $< -o $@

all: $(LIBFT)

$(LIBFT): $(NASM_OBJ)
	ar rcs $@ $^

clean:
	rm -rf $(DIR_OBJ)

fclean: clean
	rm -rf $(LIBFT)

re: fclean all

# ---------------------------------------------------------------------------- #

TEST = test

FLAGS     = -Wall -Werror -Wextra
LIB_FLAGS = -L. -lfts

$(TEST): $(NASM_OBJ) main.c
	gcc $(FLAGS) main.c $(LIB_FLAGS) -o $(TEST) -I inc

.PHONY: all clean fclean re
