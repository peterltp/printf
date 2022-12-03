/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:34:34 by ple-              #+#    #+#             */
/*   Updated: 2022/11/11 17:27:23 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		first_index;
	int		second_index;
	size_t	s1_len;
	size_t	s2_len;

	first_index = 0;
	second_index = 0;
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	new_string = (char *) malloc(s1_len + s2_len + 1);
	if (!s1 || !s2 || !new_string)
		return (0);
	while (s1[first_index] != '\0')
	{
		new_string[first_index] = s1[first_index];
		first_index++;
	}
	while (s2[second_index] != '\0')
	{
		new_string[first_index++] = s2[second_index++];
	}
	new_string[first_index] = '\0';
	return (new_string);
}
