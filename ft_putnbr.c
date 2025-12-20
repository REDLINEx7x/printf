#include "ft_printf.h"

int    ft_putnbr(int n)
{
    int count;

    count = 0;
    if(n == -2147483648)
    {
        count += ft_putstr("-2147483648");
        return (count);
    }
    if(n < 0)
    {
        count += ft_putchar('-');
        n = n * -1;
    }
    if(n > 9)
    {
        ft_putnbr(n / 10);
    }
    count += ft_putchar((n % 10) + 48);
    return (count);
}
