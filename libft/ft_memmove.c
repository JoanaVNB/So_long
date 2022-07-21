/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:52:44 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 02:01:29 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>

int main ()
{
	char dest[10] = "cadete";
	char src[10] = "da 42";
	size_t n = 10;
	char *ptr;

	ptr = ft_memmove(dest, src, n);
	printf("%s\n", ptr);
} */

//memcpy() leva a problemas quando os endereços de 
//origem e destino se sobrepõem (quando d > s),
//pois memcpy() simplesmente copia os dados um por um de um local para outro.
// Como os endereços de entrada estão sobrepostos,
//o programa memcpy sobrescreve a 
//string original e causa perda de dados.
// O truque aqui é usar um array temporário em vez
//de copiar diretamente de src para dest.