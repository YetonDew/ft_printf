/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:16:23 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/21 18:59:35 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_lower(unsigned int n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_lower(n / 16);
	count += ft_print_char(base[n % 16]);
	return (count);
}

int	ft_print_hex(unsigned int n, bool uppercase)
{
	char	*base;
	int		count;

	count = 0;
	if (!uppercase)
		return (print_lower(n));
	else
	{
		base = "0123456789ABCDEF";
		if (n >= 16)
			count += ft_print_hex(n / 16, uppercase);
		count += ft_print_char(base[n % 16]);
	}
	return (count);
}
