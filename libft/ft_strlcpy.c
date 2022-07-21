/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 03:45:32 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:30:40 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (dest_size > 0)
	{
		while (src[i] != '\0' && i < dest_size -1)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (src_size);
}

/*  #include <stdio.h>
 int    main(void)
{
	char dest[10] = "cadete";
	char src [10]= "da 42"; //5 caracteres
	size_t dest_size = 20;
	int a;

	a = ft_strlcpy(dest, src, dest_size);
	printf("%d\n", a);
} */

/* Copie src para string dest de tamanho size.
No máximo size-1 os caracteres serão copiados.
Sempre termina com NUL (a menos que size == 0).
Retorna strlen(src); */

/* As funções strlcpy () e strlcat () retornam o comprimento 
total da string que tentaram criar. 
Para strlcpy () isso significa o comprimento de src . 
Para strlcat () isso significa o comprimento inicial 
de dst mais o comprimento de src .  */