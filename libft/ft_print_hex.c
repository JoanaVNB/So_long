/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:57:03 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/05/19 21:52:30 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex_lower(unsigned int value)
{
	int		counter;
	char	*str;

	str = itoa_base(value, HEX_BASE_LOWER);
	counter = print_str(str);
	free(str);
	return (counter);
}

int	print_hex_upper(unsigned int value)
{
	int		counter;
	char	*str;

	str = itoa_base(value, HEX_BASE_UPPER);
	counter = print_str(str);
	free(str);
	return (counter);
}
