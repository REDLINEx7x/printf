#include "ft_printf.h"

int ft_checker(char  c, va_list list)
{
    int count;

    count = 0;

    if (c == '%')
        count += ft_putchar('%');
    else if (c == 'c')
        count += ft_putchar(va_arg(list, int));
    else if(c == 'd' || c == 'i')
        count += ft_putnbr(va_arg(list, int));
    else if (c == 's')
        count += ft_putstr(va_arg(list, char *));
    else if (c == 'u')
        count += ft_unsigned(va_arg(list, unsigned int));

    else if (c == 'X')
    count += ft_print_HEX(va_arg(list, unsigned int ));
    else if (c == 'x')
    count += ft_print_hex(va_arg(list, unsigned int ));
    return (count);
}

int ft_printf(const char * format, ...)
{
    int i;
    int count;
    va_list list;

    i = 0;
    count = 0;
    va_start(list, format);
    while(format[i])
    {
        if(format[i] == '%')
        {
            count += ft_checker(format[++i], list);
        }
        else
           count += ft_putchar(format[i]);
        i++;
    }
    return (count);
}
int main ()
{
    int x = ft_printf("hi %s how old are u %i first character is %c  %x  %X  %u", "mohamed", 22, 'M', 256, 256, 566226);
    ft_printf("\nNumber of character is: %d", x);
}

