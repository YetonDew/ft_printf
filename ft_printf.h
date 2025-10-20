/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeffers <ajeffers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:40:21 by ajeffers          #+#    #+#             */
/*   Updated: 2025/10/20 19:24:45 by ajeffers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
int		ft_print_char(int c);
int		ft_print_nbr(int n);
int		ft_print_percent(void);
int		ft_print_hex(int n, bool uppercase);
int		ft_print_ptr(void *ptr);
int		ft_print_unsig(const unsigned int n);
int		ft_print_str(char *str);
char	*ft_itoa(int n);

#endif
