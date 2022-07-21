/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:22:19 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 01:37:52 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (one[i] != two[i])
			return (one[i] - two[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\t", ft_memcmp("Basecamp", "Basecamp", 8));
	printf("%d\t", ft_memcmp("Basecamp", "basecamp", 1));
	printf("%d\t", ft_memcmp("Basecamp", "Base!", 5));
	printf("%d\n", ft_memcmp("\0", "\0", 1));

	printf("%d\t", memcmp("Basecamp", "Basecamp", 8));
	printf("%d\t", memcmp("Basecamp", "basecamp", 1));
	printf("%d\t", memcmp("Basecamp", "Base!", 5));
	printf("%d\n", memcmp("\0", "\0", 1));
} */

//memcmp trata-se de comparar sequências de byte
//Esta função é usada para comparar duas variáveis ​​usando sua memória. 
//Não os compara um por um, compara quatro caracteres ao mesmo tempo.
