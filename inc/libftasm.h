/* ========================================================================== */
/*                                                                            */
/*    ██╗  ██╗██████╗                                                         */
/*    ██║  ██║╚════██╗                                                        */
/*    ███████║ █████╔╝              created by: bgronon                       */
/*    ╚════██║██╔═══╝                       at: 2015-01-12 10:58:02           */
/*         ██║███████╗                                                        */
/*         ╚═╝╚══════╝                                                        */
/*    ███████╗ █████╗ ██╗   ██╗ █████╗ ████████╗████████╗ █████╗ ███████╗     */
/*    ╚══███╔╝██╔══██╗██║   ██║██╔══██╗╚══██╔══╝╚══██╔══╝██╔══██╗██╔════╝     */
/*      ███╔╝ ███████║██║   ██║███████║   ██║      ██║   ███████║███████╗     */
/*     ███╔╝  ██╔══██║╚██╗ ██╔╝██╔══██║   ██║      ██║   ██╔══██║╚════██║     */
/*    ███████╗██║  ██║ ╚████╔╝ ██║  ██║   ██║      ██║   ██║  ██║███████║     */
/*    ╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝   ╚═╝      ╚═╝   ╚═╝  ╚═╝╚══════╝     */
/*                                                                            */
/* ========================================================================== */

#ifndef LIB_ASM
# define LIB_ASM

# include <string.h>

int     ft_isalpha (int c);
int     ft_isdigit (int c);
int     ft_isalnum (int c);
int     ft_isprint (int c);
int     ft_isascii (int c);
int     ft_toupper (int c);
int     ft_tolower (int c);

int     ft_puts (const char * str);

size_t  ft_strlen (const char * s);
char *  ft_strcat (char * s1, const char * s2);
char *	ft_strncat (char * s1, const char * s2, size_t n);

void    ft_bzero (void * pt, size_t n);
void *	ft_memset (void * b, int c, size_t len);
void *	ft_memcpy (void * dest, const void * src, size_t n);
char *	ft_strdup (const char * s1);

void		ft_cat (int fd);


#endif
