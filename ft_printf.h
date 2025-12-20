# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int ft_printf(const char * format, ...);
int    ft_putchar(char c);
int    ft_putstr(char *str);
int    ft_putnbr(int n);
int    ft_print_hex(int n);
int    ft_print_HEX(int n);
int    ft_unsigned( unsigned int n);

# endif
