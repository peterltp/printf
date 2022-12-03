/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:18:36 by ple-              #+#    #+#             */
/*   Updated: 2022/11/17 19:26:05 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	sign;
	long int	result;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\v' || *str == '\n' || *str == '\t'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
		if (result < 0)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
	}
	return ((int)result * (int)sign);
}
