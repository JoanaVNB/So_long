/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:48:47 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/14 00:12:34 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == '%')
		count += print_char(format);
	if (format == 'c')
		count += print_char(va_arg(args, int));
	if (format == 's')
		count += print_str(va_arg(args, char *));
	if (format == 'd' || format == 'i')
		count += print_nbr(va_arg(args, int));
	if (format == 'u')
		count += print_nbr_u(va_arg(args, unsigned int));
	if (format == 'x')
		count += print_hex_lower(va_arg(args, unsigned int));
	if (format == 'X')
		count += print_hex_upper(va_arg(args, unsigned int));
	if (format == 'p')
		count += print_ptr(va_arg(args, void *));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr_("cspdiuxX%", str[i + 1]))
		{
			count += print_format(args, str[i + 1]);
			i++;
		}
		else
			count += print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
