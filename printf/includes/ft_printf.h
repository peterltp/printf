/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:15:12 by ple-              #+#    #+#             */
/*   Updated: 2022/12/07 15:54:28 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "../libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
char	*base_type(const char type);
int	ft_check_base(va_list ap, const char format);
int	ft_eval_format(va_list args, const char format);
int	ft_format(va_list ap, const char *format);
int	ft_print_p(unsigned long long n, const char *base);
int	ft_print_u(unsigned int n, const char *base);
int	ft_print_i(int n, const char *base);
void	ft_print_base(unsigned long long number, const char *base);
int	ft_print_char(int chr);
int	ft_print_str(char *str);
#endif
