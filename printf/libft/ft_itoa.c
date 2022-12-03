/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:11:36 by ple-              #+#    #+#             */
/*   Updated: 2022/11/14 19:20:35 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_length_number(int nb)
{
	int	length;

	length = 0;
	if (nb <= 0)
		length++;
	while (nb)
	{
		length++;
		nb = nb / 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int			length;
	long		nb;
	char		*str;

	length = ft_length_number(n);
	nb = n;
	str = malloc (sizeof(char) * length + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[length--] = '\0';
	while (nb)
	{
		str[length] = nb % 10 + '0';
		length--;
		nb = nb / 10;
	}
	return (str);
}
