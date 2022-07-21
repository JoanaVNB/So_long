/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:37:41 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 04:38:32 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		c = c - 32;
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
	c = 'a';
	printf("Retornará o caractere em maiúsculo.\n");
	printf("Retorna ft_: %c\n", ft_toupper(c));
	printf("Retorna Orig: %c\n", toupper(c));
	char d;
	d = 'Z'; 
	printf("Retornará o caractere de origem.\n");
	printf("Retorna ft_: %c\n", ft_toupper(d));
	printf("Retorna Orig: %c\n", toupper(d));
	char e;
	e = '-'; 
	printf("Retornará o caractere de origem.\n");
	printf("Retorna ft_: %c\n", ft_toupper(e));
	printf("Retorna Orig: %c\n", toupper(e));
} */