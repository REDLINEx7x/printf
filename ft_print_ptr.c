/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:02:20 by moamhouc          #+#    #+#             */
/*   Updated: 2025/12/23 21:37:33 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert_hex(unsigned long n)
{
	int		count;
	char	*str;

	str = "0123456789abcdef";
	count = 0;
	if (n > 15)
		count += convert_hex(n / 16);
	count += ft_putchar(str[n % 16]);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	address;
	int				count;

	count = 0;
	if (!ptr)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	address = (unsigned long)ptr;
	count += ft_putstr("0x");
	count += convert_hex(address);
	return (count);
}
