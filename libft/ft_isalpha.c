/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:03:53 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:44:39 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

/* int main ()
{
	char c;
	c = 'a';
	printf("Retornará maior que zero se for letra ou zero se não for.\n");
	printf("Retorna ft_: %d\n", ft_isalpha(c));
	printf("Retorna Orig: %d\n", isalpha(c));
} */
