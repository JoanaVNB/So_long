/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:28:52 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/14 00:13:03 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write (1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int	len;

	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = ft_strlen_(str);
	write (1, str, len);
	return (len);
}

int	print_nbr(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa_(nbr);
	len = print_str(str);
	free(str);
	return (len);
}

int	print_nbr_u(unsigned int nbr)
{
	char	*str;
	int		len;

	str = ft_uitoa(nbr);
	len = print_str(str);
	free(str);
	return (len);
}
