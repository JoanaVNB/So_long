/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:28:02 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/23 07:51:49 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *) s + i) = 0;
		i++;
	}
}

/* #include <stdio.h>
int main()
{
	char str[100] = "Cadete da 42";
	size_t n = 20;
	printf("Antes do bzero:%s\n", str);
	ft_bzero(str, n);
	printf("Após o bzero:%s\n", str);
} */
