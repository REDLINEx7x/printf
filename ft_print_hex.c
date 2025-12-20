#include "ft_printf.h"

int    ft_print_hex(int n)
{
    int count;
    char *str;

    str = "0123456789abcdef";
    count = 0;
    if(n > 15)
    {
        count += ft_print_hex(n / 16);
    }
    count += ft_putchar(str[n % 16]);
    return (count);
}
