/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:10:30 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:44:55 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

/* int main ()
{
	int c;
	c = '-';
	printf("Retornará maior que zero se for um caract. printável.\n");
	printf("Retorna ft_: %d\n", ft_isprint(c));
	printf("Retorna Orig: %d\n", isprint(c));
	char d;
	d = 184;
	printf("Retornará 0 por não ser um caract. printável.\n");
	printf("Retorna ft_: %d\n", ft_isprint(d));
	printf("Retorna Orig: %d\n", isprint(d));
} */