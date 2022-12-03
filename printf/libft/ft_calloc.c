/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:18:20 by ple-              #+#    #+#             */
/*   Updated: 2022/11/16 20:30:07 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	total;

	total = count * size;
	if (count > 0 && size > 0)
	{
		if (total % count != 0 || total % size != 0)
			return (NULL);
	}
	memory = malloc(total);
	if (memory == NULL)
	{
		return (NULL);
	}
	ft_bzero(memory, (count * size));
	return (memory);
}
