/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:44:08 by ple-              #+#    #+#             */
/*   Updated: 2022/11/07 17:54:12 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		d;
	size_t		dest_leng;

	if (dstsize == 0 && dst == NULL)
		return (0);
	dest_leng = ft_strlen(dst);
	i = 0;
	d = dest_leng;
	if (dest_leng < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dest_leng + i < dstsize - 1)
		{
			dst[d] = src[i];
			d++;
			i++;
		}
		dst[d] = '\0';
	}
	if (dest_leng >= dstsize)
	{
		dest_leng = dstsize;
	}
	return (dest_leng + ft_strlen((char *)src));
}
