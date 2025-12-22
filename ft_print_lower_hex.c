/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moamhouc <moamhouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:52:33 by moamhouc          #+#    #+#             */
/*   Updated: 2025/12/22 21:19:17 by moamhouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_hex(unsigned long n)
{
	int		count;
	char	*str;

	str = "0123456789abcdef";
	count = 0;
	if (n > 15)
		count += ft_lower_hex(n / 16);
	count += ft_putchar(str[n % 16]);
	return (count);
}
