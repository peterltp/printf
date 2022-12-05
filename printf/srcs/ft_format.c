/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:00:08 by ple-              #+#    #+#             */
/*   Updated: 2022/12/05 16:16:06 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_eval_format(va_list args, const char format)
{
	int	total_length;

	total_length = 0;
	if (format == '%')
		total_length += write(1, "%", 1);
	else if (format == 'c')
		total_length += ft_print_char(va_args(args, int));
	else if (format == 's')
		total_length += ft_print_str(va_args(args, char *));
	else 
		total_length += ft_check_base(args, format);
	return (total_length);
}

int	ft_format(va_list ap, const char *format)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			total_length += ft_eval_format(ap, format[i + 1]);
			i++;
		}
		else 
		{
			total_length += write(1, (format + i), 1);
			i++;
		}
	}
	return (total_length);
}
