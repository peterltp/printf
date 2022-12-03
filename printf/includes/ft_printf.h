/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:15:12 by ple-              #+#    #+#             */
/*   Updated: 2022/12/03 14:24:21 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include "libft.h"

typedef struct s_print
{
	va_list	args;
	int	width;
	int	precision;
	int	zero_padding;
	int	point;
	int	dash;
	int	total_length;
	int	sign;
	int	is_zero;
	int	percent;
	int	space_flag;
}	t_print;


#endif
