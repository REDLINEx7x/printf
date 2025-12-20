#include "ft_printf.h"

int    ft_unsigned( unsigned int n)
{
    int count;

    count = 0;
    if(n > 9)
    {
        ft_unsigned(n / 10);
    }
    count += ft_putchar((n % 10) + 48);
    return (count);
}
