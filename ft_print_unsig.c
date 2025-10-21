/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:58:54 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/21 14:02:27 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsig(const unsigned int n)
{
	int	count;

	count = 0;
	if (n / 10 != 0)
		count += ft_print_nbr(n / 10);
	count += ft_print_char(n % 10 + '0');
	return (count);
}
