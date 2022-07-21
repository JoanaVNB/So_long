/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:34:33 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 04:37:00 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c = c + 32;
		return (c);
	}
	else
		return (c);
}

/* #include <stdio.h>
#include <ctype.h>
int main ()
{
	char c;
	c = 'A';
	printf("Retornará o caractere em minúsculo.\n");
	printf("Retorna ft_: %c\n", ft_tolower(c));
	printf("Retorna Orig: %c\n", tolower(c));
	char d;
	d = 'z'; 
	printf("Retornará o caractere de origem.\n");
	printf("Retorna ft_: %c\n", ft_tolower(d));
	printf("Retorna Orig: %c\n", tolower(d));
} */