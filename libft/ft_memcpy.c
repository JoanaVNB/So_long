/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:42:40 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/22 05:43:36 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *to, const void *from, size_t count)
{
	unsigned int		i;
	unsigned char		*dest;
	unsigned const char	*str;

	if (to == NULL && from == NULL)
		return (NULL);
	i = 0;
	dest = (unsigned char *)to;
	str = (unsigned char *)from;
	while (i < count)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char to[10] = "cadete";
	const char from[10] = "da 42";
	size_t count = 10;
	char *ptr;
	
	
	ptr = ft_memcpy (to, from, count);
	printf("%s\n", ptr);
} */
// The function memcpy() copies count characters
// from the array from to the array to.
// The return value of memcpy() is to. 
// count deve ser do tamanho da string from
