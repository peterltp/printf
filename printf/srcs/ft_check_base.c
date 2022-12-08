/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 08:57:42 by ple-              #+#    #+#             */
/*   Updated: 2022/12/07 19:01:47 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*base_type(const char type)
{
	if (type == 'u' || type == 'd' || type ==  'i')
		return ("0123456789");
	else if (type == 'x' || type == 'p')
		return ("0123456789abcdef");
	else if (type == 'X')
		return ("0123456789ABCDEF");
	return (0);
}

int	ft_check_base(va_list ap, const char format)
{
	int		total_length;
	char	*base;

	base = base_type(format);
	total_length = 0;
	if (format == 'd' || format == 'i')
		total_length += ft_print_i(va_arg(ap, int), base);
	else if (format == 'u' || format == 'x' || format == 'X')
		total_length += ft_print_u(va_arg(ap, unsigned int), base);
	else if (format == 'p')
		total_length += ft_print_p(va_arg(ap, unsigned long long), base);
	return (total_length);
}
