/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:33:38 by ple-              #+#    #+#             */
/*   Updated: 2022/11/17 00:02:04 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_splited_string(char const *s, char c)
{
	int	i;
	int	splited_string;

	i = 0;
	splited_string = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			splited_string++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
		else
			i++;
	}
	return (splited_string);
}

static int	ft_size(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free_mem(char **result, int j)
{
	while (j > 0)
	{
		free(result[j]);
		j--;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	int		size;
	char	**result;

	i = 0;
	j = -1;
	result = malloc (((ft_count_splited_string (s, c)) + 1) * sizeof (char *));
	if (!result)
		return (NULL);
	while (++j < ft_count_splited_string(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_size(s, c, i);
		result [j] = ft_substr(s, i, size);
		if (!(result[j]) || !result)
		{
			ft_free_mem(result, i);
			return (NULL);
		}
		i += size;
	}
	result[j] = 0;
	return (result);
}
