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
#include "libftasm.h"


void check_bzero (void)
{
  char str[4] = "aaa\0";

  printf("str before bzero: %s\n", str);
  ft_bzero(&str, 4);
  printf("str after  bzero: %s\n", str);

  //ft_bzero(NULL, 31);
  printf("-----------------\n");
}

void check_strlen (void)
{
  char str[4] = "aaa\0";

  printf("should be 3 = %d\n", (int)ft_strlen(str));
  ft_bzero(&str, 4);
  printf("should be 0 = %d\n", (int)ft_strlen(str));
  //printf("should be 0 = %d\n", (int)ft_strlen(NULL));
  printf("-----------------\n");
}

void check_alpha (void)
{
  printf("should be alpha %d\n", ft_isalpha('A'));
  printf("should be alpha %d\n", ft_isalpha('Z'));
  printf("should be alpha %d\n", ft_isalpha('B'));
  printf("should be alpha %d\n", ft_isalpha('a'));
  printf("should be alpha %d\n", ft_isalpha('z'));
  printf("should be alpha %d\n", ft_isalpha('b'));
  printf("should not be alpha %d\n", ft_isalpha('.'));
  printf("should not be alpha %d\n", ft_isalpha('0'));
  printf("-----------------\n");
}

void check_digit (void)
{
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
  printf("-----------------\n");
}

int main (void)
{
  check_bzero();
  check_strlen();
  check_alpha();
  check_digit();

  return 0;
}
