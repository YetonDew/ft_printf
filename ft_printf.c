/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:35:45 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/21 14:30:31 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printer_conversion(char *str, va_list args, int *counter)
{
	if (*str == 'c')
		*counter += ft_print_char(va_arg(args, int));
	else if (*str == 's')
		*counter += ft_print_str(va_arg(args, char *));
	else if (*str == 'p')
		*counter += ft_print_ptr(va_arg(args, void *));
	else if (*str == 'd' || *str == 'i')
		*counter += ft_print_nbr(va_arg(args, int));
	else if (*str == 'u')
		*counter += ft_print_unsig(va_arg(args, unsigned int));
	else if (*str == 'x')
		*counter += ft_print_hex(va_arg(args, int), false);
	else if (*str == 'X')
		*counter += ft_print_hex(va_arg(args, int), true);
	else
		*counter += ft_print_percent();
}

static bool	is_valid(char c)
{
	char	*valid_c;

	valid_c = "cspdiuxX%";
	while (*valid_c)
	{
		if (c == *valid_c)
			return (true);
		valid_c++;
	}
	return (false);
}

static void	print_or_find(char *str, va_list args, int *counter)
{
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str && is_valid(*str))
				printer_conversion(str, args, counter);
			str++;
		}
		else
		{
			*counter += ft_print_char(*str);
			str++;
		}
	}
}

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, str);
	print_or_find(str, args, &counter);
	va_end(args);
	return (counter);
}
