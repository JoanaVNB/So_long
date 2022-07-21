/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:02:36 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:44:27 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (1);
	else
		return (0);
}

/* int main ()
{
	char c;
	c = '?';
	printf("Retornará maior que zero se for letra ou número e 0 se não for.\n");
	printf("Retorna ft_: %d\n", ft_isalnum(c));
	printf("Retorna Orig: %d\n", isalnum(c));
} */