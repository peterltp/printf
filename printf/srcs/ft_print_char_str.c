/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:11:01 by ple-              #+#    #+#             */
/*   Updated: 2022/12/07 14:56:43 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_char(int chr)
{
	unsigned char	c;

	c = (unsigned char) chr;
	write (1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	total_length;

	if (!str)
	{
		total_length = write (1, "(null)", 6);
		return (total_length);
	}
	total_length = write (1, str, ft_strlen(str));
	return (total_length);
}
