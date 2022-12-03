/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ple- <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:25:11 by ple-              #+#    #+#             */
/*   Updated: 2022/12/03 15:36:01 by ple-             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print	*ft_initialize_tab(t_print tab)
{
	tab->width = 0;
	tab->precision = 0;
	tab->zero_padding = 0;
	tab->point = 0;
	tab->dash = 0;
	tab->total_length = 0;
	tab->sign = 0;
	tab->is_zero = 0;
	tab->percent = 0;
	tab->space_flag = 0;
	return (tab);
}

ft_print_char(char *tab)
{
    char a;

    a = va_arg(tab->args, int);  # variadic function
    ft_update_tab(tab, 1);      # calculate special cases and length
    if (tab->wdt && !tab->dash)  # if width and not - flag
        ft_right_cs(tab, 0);     # handle right alignment
    tab->tl += write(1, &a, 1);  # print char
    if (tab->wdt && tab->dash)   # if width and - flag
        ft_left_cs(tab, 0);      # handle left alignment

}

ft_eval_format()
{
	while not udcsupxX%
  if (format[pos] == '.')
      tab->pnt = 1; # we set it to true, 1
      pos++;
  if (format[pos] == '-')
      tab->dash = 1;
      pos++;
// etc
// out of while loop
	if (format[pos] == 'c')
   ft_print_char(tab);
if (format[pos] == 'd' || format[pos] == 'i')
   ft_print_integer(tab);
//etc
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	ret;
	t_print	*tab;

	tab = (t_print *)malloc (sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialize_tab(tab);
	va_start(tab->args, format);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_eval_format(tab, format, i + 1);
		else
			ret += write (1, &format[i], i);
	}
	va_end(tab->args);
	ret += tab->total_length;
	free(tab);
	return (ret);
}

