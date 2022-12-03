/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:18:47 by ple-              #+#    #+#             */
/*   Updated: 2022/11/07 16:03:52 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	big;
	size_t	small;

	big = 0;
	small = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (haystack == '\0' && len == 0)
		return (0);
	while (haystack[big] != '\0' && big < len && len != 0)
	{
		if (haystack[big] == needle[0])
		{
			while (needle[small] != '\0' && haystack[big + small] != '\0'
				&& big + small < len
				&& haystack[big + small] == needle[small])
				small++;
			if (needle[small] == '\0')
				return ((char *)haystack + big);
		}
		big++;
	}
	return (0);
}
