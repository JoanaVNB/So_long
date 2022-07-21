/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:27:39 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/05/20 00:58:53 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_preceding_string(char *str)
{
	int	counter;

	counter = print_str(str);
	return (counter);
}

int	print_ptr(void *ptr)
{
	int				counter;
	char			*str;
	unsigned long	addr;

	if (ptr == 0)
		return (print_str("(nil)"));
	addr = (unsigned long long)ptr;
	counter = print_preceding_string("0x");
	str = itoa_base(addr, HEX_BASE_LOWER);
	counter += print_str(str);
	free(str);
	return (counter);
}
