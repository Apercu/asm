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

#include <stdio.h>
#include <fcntl.h>
#include "libftasm.h"
#include <unistd.h>

void check_bzero (void)
{
	printf("----- BZERO -----\n");

	char str[4] = "aaa\0";

	printf("str before bzero: %s\n", str);
	ft_bzero(&str, 4);
	printf("str after  bzero: %s\n", str);

	//ft_bzero(NULL, 31);
	printf("-----------------\n\n");
}

void check_strlen (void)
{
	printf("----- STRLEN ----\n");

	char str[4] = "aaa\0";

	printf("should be 3 = %d\n", (int)ft_strlen(str));
	ft_bzero(&str, 4);
	printf("should be 0 = %d\n", (int)ft_strlen(str));
	//printf("should be 0 = %d\n", (int)ft_strlen(NULL));

	printf("-----------------\n\n");
}

void check_alpha (void)
{
	printf("----- ALPHA -----\n");

	printf("should be alpha %d\n", ft_isalpha('A'));
	printf("should be alpha %d\n", ft_isalpha('Z'));
	printf("should be alpha %d\n", ft_isalpha('B'));
	printf("should be alpha %d\n", ft_isalpha('a'));
	printf("should be alpha %d\n", ft_isalpha('z'));
	printf("should be alpha %d\n", ft_isalpha('b'));
	printf("should not be alpha %d\n", ft_isalpha('.'));
	printf("should not be alpha %d\n", ft_isalpha('0'));

	printf("-----------------\n\n");
}

void check_digit (void)
{
	printf("----- DIGIT -----\n");

	printf("should not be digit %d\n", ft_isdigit('A'));
	printf("should not be digit %d\n", ft_isdigit('Z'));
	printf("should not be digit %d\n", ft_isdigit('B'));
	printf("should not be digit %d\n", ft_isdigit('a'));
	printf("should not be digit %d\n", ft_isdigit('z'));
	printf("should not be digit %d\n", ft_isdigit('b'));
	printf("should not be digit %d\n", ft_isdigit('.'));
	printf("should not be digit %d\n", ft_isdigit('`'));
	printf("should be digit %d\n", ft_isdigit('0'));
	printf("should be digit %d\n", ft_isdigit('9'));
	printf("should be digit %d\n", ft_isdigit('4'));

	printf("-----------------\n\n");
}

void check_alnum (void)
{
	printf("----- ALNUM -----\n");

	printf("should be alnum %d\n", ft_isalnum('A'));
	printf("should be alnum %d\n", ft_isalnum('Z'));
	printf("should be alnum %d\n", ft_isalnum('B'));
	printf("should be alnum %d\n", ft_isalnum('a'));
	printf("should be alnum %d\n", ft_isalnum('z'));
	printf("should be alnum %d\n", ft_isalnum('b'));
	printf("should be alnum %d\n", ft_isalnum('0'));
	printf("should be alnum %d\n", ft_isalnum('9'));
	printf("should be alnum %d\n", ft_isalnum('4'));

	printf("should not be alnum %d\n", ft_isalnum('.'));
	printf("should not be alnum %d\n", ft_isalnum('`'));
	printf("should not be alnum %d\n", ft_isalnum('!'));
	printf("should not be alnum %d\n", ft_isalnum('#'));

	printf("-----------------\n\n");
}

void check_ascii (void)
{
	printf("----- ASCII -----\n");

	printf("should be ascii %d\n", ft_isascii('A'));
	printf("should be ascii %d\n", ft_isascii('Z'));
	printf("should be ascii %d\n", ft_isascii('B'));
	printf("should be ascii %d\n", ft_isascii('a'));
	printf("should be ascii %d\n", ft_isascii('z'));
	printf("should be ascii %d\n", ft_isascii('b'));
	printf("should be ascii %d\n", ft_isascii('0'));
	printf("should be ascii %d\n", ft_isascii('9'));
	printf("should be ascii %d\n", ft_isascii('4'));
	printf("should be ascii %d\n", ft_isascii('.'));
	printf("should be ascii %d\n", ft_isascii('`'));

	printf("should not be ascii %d\n", ft_isascii(-42));
	printf("should not be ascii %d\n", ft_isascii(142));
	printf("should not be ascii %d\n", ft_isascii(1022));

	printf("-----------------\n\n");
}

void check_print (void)
{
	printf("----- PRINT -----\n");

	printf("should be print %d\n", ft_isprint('A'));
	printf("should be print %d\n", ft_isprint('Z'));
	printf("should be print %d\n", ft_isprint('B'));
	printf("should be print %d\n", ft_isprint('a'));
	printf("should be print %d\n", ft_isprint('z'));
	printf("should be print %d\n", ft_isprint('b'));
	printf("should be print %d\n", ft_isprint('0'));
	printf("should be print %d\n", ft_isprint('9'));
	printf("should be print %d\n", ft_isprint('4'));
	printf("should be print %d\n", ft_isprint('.'));
	printf("should be print %d\n", ft_isprint('`'));

	printf("should not be print %d\n", ft_isprint(31));
	printf("should not be print %d\n", ft_isprint(-42));
	printf("should not be print %d\n", ft_isprint(142));
	printf("should not be print %d\n", ft_isprint(1022));

	printf("-----------------\n\n");
}

void check_toupper (void)
{
	printf("----- TOUPPER -----\n");

	printf("should be uppered %c\n", ft_toupper('a'));
	printf("should be uppered %c\n", ft_toupper('z'));
	printf("should be uppered %c\n", ft_toupper('b'));

	printf("should stay as is %c\n", ft_toupper('A'));
	printf("should stay as is %c\n", ft_toupper('Z'));
	printf("should stay as is %c\n", ft_toupper('B'));
	printf("should stay as is %c\n", ft_toupper('0'));
	printf("should stay as is %c\n", ft_toupper('9'));
	printf("should stay as is %c\n", ft_toupper('4'));
	printf("should stay as is %c\n", ft_toupper('.'));
	printf("should stay as is %c\n", ft_toupper('`'));

	printf("-----------------\n\n");
}

void check_tolower (void)
{
	printf("----- TOLOWER -----\n");

	printf("should stay as is %c\n", ft_tolower('a'));
	printf("should stay as is %c\n", ft_tolower('z'));
	printf("should stay as is %c\n", ft_tolower('b'));
	printf("should stay as is %c\n", ft_tolower('0'));
	printf("should stay as is %c\n", ft_tolower('9'));
	printf("should stay as is %c\n", ft_tolower('4'));
	printf("should stay as is %c\n", ft_tolower('.'));
	printf("should stay as is %c\n", ft_tolower('`'));

	printf("should be lowered %c\n", ft_tolower('A'));
	printf("should be lowered %c\n", ft_tolower('Z'));
	printf("should be lowered %c\n", ft_tolower('B'));

	printf("-----------------\n\n");
}

void check_puts (void)
{
	printf("----- PUTS ------\n");

	int ret = ft_puts("LOLO |");
	printf("ret %d\n", ret);
	ft_puts("91005\n");
	ft_puts("withoutbackslashn");
	ft_puts("ss\n");

	printf("-----------------\n\n");
}

void check_strcat (void)
{
	printf("----- STRCAT ------\n");

	char one[5] = "This\0";
	char two[12] = " with this.\0";

	printf("ret: [%s]\n", ft_strcat(one, two));
	printf("one: [%s]\n", one);
	printf("two: [%s]\n", two);

	printf("-----------------\n\n");
}

void check_memset (void)
{
	printf("----- MEMSET ------\n");

	char one[6] = "Hello\0";
	char two[6] = "Hello\0";

	ft_memset(one, 'A', 2);
	printf("one after memset: [%s]\n", one);
	printf("ret after memset: [%s]\n", (char *)ft_memset(two, 'A', 2));

	printf("-----------------\n\n");
}

void check_memcpy (void)
{
	printf("----- MEMCPY ------\n");

	char one[6] = "Hello\0";
	char two[6] = "CHATS\0";

	printf("%p\n", one);
	printf("%p\n", two);
	char * res = ft_memcpy(one, two, 2);
	printf("one after memcpy: [%s] (%p)\n", one, one);
	printf("two after memcpy: [%s] (%p)\n", two, two);
	printf("ret after memcpy: [%s] (%p)\n", res, res);

	printf("-----------------\n\n");
}

void check_strdup (void)
{
	printf("----- STRDUP ------\n");

	char str[5] = "Test\0";

	printf("str [%s] ptr [%p]\n", str, str);

	char * cpy = ft_strdup(str);

	printf("cpy [%s] ptr [%p]\n", cpy, cpy);

	printf("-----------------\n\n");
}

void check_cat (void)
{
	printf("----- CAT ------\n");

	int fd = open("testfile", O_RDONLY);

	ft_cat(fd);

	close(fd);
	printf("-----------------\n\n");
}

int main (void)
{
	/* Classic shit */
	check_alpha();
	check_digit();
	check_alnum();
	check_ascii();
	check_print();
	check_toupper();
	check_tolower();

	/* Put */
	check_puts();

	/* Strings */
	check_strcat();
	check_strlen();

	/* Memory */
	check_bzero();
	check_memset();
	check_memcpy();
	check_strdup();

	check_cat();

	return 0;
}
