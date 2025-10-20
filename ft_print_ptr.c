/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:06:21 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/20 19:20:08 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	print_lower(unsigned long long int n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += print_lower(n / 16);
	write(1, &base[n % 16], 1);
	count++;
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int	count;
	unsigned long long int value;

	value = (unsigned long long int)ptr;
	write(1, "0x", 2);
	count = 2;
	count += print_lower(value);
	return (count);
}
