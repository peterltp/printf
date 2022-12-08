/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_thing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:26:28 by ple-              #+#    #+#             */
/*   Updated: 2022/12/07 13:50:29 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_base(unsigned long long number, const char *base)
{
	size_t	len;

	len = ft_strlen(base);
	if (number >= len)
	{
		ft_print_base(number / len, base);
		ft_print_base(number % len, base);
	}
	else
		write (1, &base[number % len], 1);
}

int	ft_print_i(int n, const char *base)
{
	int	total_length;

	total_length = 0;
	if (n == -2147483648)
	{
		total_length += write (1, "-2147483648", 11);
		return (total_length);
	}
	if (n < 0)
	{
		total_length += write (1, "-", 1);
		n = -n;
	}
	if (n == 0)
		total_length += write (1, "0", 1);
	else
		ft_print_base(n, base);
	while (n)
	{
		total_length += 1;
		n /= 10;
	}
	return (total_length);
}

int	ft_print_u(unsigned int n, const char *base)
{
	size_t	base_len;
	int		total_length;

	total_length = 0;
	base_len = ft_strlen(base);
	if (n == 0)
		total_length += write (1, "0", 1);
	else
		ft_print_base(n , base);
	while (n)
	{
		total_length += 1;
		n /= base_len;
	}
	return (total_length);
}

int	ft_print_p(unsigned long long n, const char *base)
{
	int	total_length;

	total_length = 0;
	total_length += write (1, "0x", 2);
	if (n == 0)
		total_length += write (1, "0", 1);
	else
		ft_print_base(n, base);
	while (n)
	{
		total_length += 1;
		n /= 16;
	}
	return (total_length);
}
