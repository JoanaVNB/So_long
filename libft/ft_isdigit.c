/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 00:58:41 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:44:49 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

/* int main ()
{
	int c;
	c = 9;
	printf("Retornará maior que zero se for número ou zero se não for.\n");
	printf("Retorna ft_: %d\n", ft_isdigit(c));
	printf("Retorna Orig: %d\n", isdigit(c));
} */