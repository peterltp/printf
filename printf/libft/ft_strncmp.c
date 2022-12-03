/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:35:54 by ple-              #+#    #+#             */
/*   Updated: 2022/11/02 21:07:19 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
	{
		return ((unsigned char)c1 - (unsigned char)c2);
	}
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		if (compare(str1[i], str2[i]))
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (compare(str1[i], str2[i]));
	}
	return (0);
}
