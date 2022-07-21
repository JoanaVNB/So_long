/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:35:54 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:46:07 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/* #include <stdio.h>

void ft_test(unsigned int i, char *str)
{
 	printf("index = %d string = %s\n", i, str);
}

int main()
{
 	ft_striteri("cadete", ft_test);
} */

//a diferença com strmapi é que não criará uma string,
//irá alterar o próprio *s.