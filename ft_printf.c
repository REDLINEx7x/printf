/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:00:58 by moamhouc          #+#    #+#             */
/*   Updated: 2025/12/23 21:35:12 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checker(char c, va_list list)
{
	int	count;

	count = 0;
	if (c == '%')
		count += ft_putchar('%');
	else if (c == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (c == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (c == 'u')
		count += ft_unsigned(va_arg(list, unsigned int));
	else if (c == 'X')
		count += ft_upper_hex(va_arg(list, unsigned int));
	else if (c == 'x')
		count += ft_lower_hex(va_arg(list, unsigned int));
	else if (c == 'p')
		count += ft_print_ptr(va_arg(list, void *));
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	list;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_checker(format[++i], list);
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
