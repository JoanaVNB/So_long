/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:05:28 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:44:45 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int main ()
{
	char c;
	c = 127;
	printf("Retornará maior que zero se for um caract. ascii.\n");
	printf("Retorna ft_: %d\n", ft_isascii(c));
	printf("Retorna Orig: %d\n", isascii(c));
	char d;
	d = 128; 
	printf("Retornará 0 por não ser um caract. ascii.\n");
	printf("Retorna ft_: %d\n", ft_isascii(d));
	printf("Retorna Orig: %d\n", isascii(d));
} */