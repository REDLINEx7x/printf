/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_upper_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:02:11 by moamhouc          #+#    #+#             */
/*   Updated: 2025/12/22 21:18:49 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upper_hex(unsigned long n)
{
	int		count;
	char	*str;

	str = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
		count += ft_upper_hex(n / 16);
	count += ft_putchar(str[n % 16]);
	return (count);
}
