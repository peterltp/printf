/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:06:26 by ple-              #+#    #+#             */
/*   Updated: 2022/11/17 18:40:53 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*source;

	i = 0;
	dst = (char *)dest;
	source = (char *)src;
	if (dest == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dst);
}
