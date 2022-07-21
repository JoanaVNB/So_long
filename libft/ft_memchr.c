/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:16:34 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/24 23:29:23 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n-- > 0)
	{
		if (*str == ch)
			return (str);
		str++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main ()
{
	const void *s= "cadete";
	char c = 'c';
	size_t n = 20; 
	char *ptr;

	ptr = memchr (s, c, 20);
	printf("Original: %s\n", ptr);
	
	ptr = ft_memchr (s, c, n);
	printf("Ft: %s\n", ptr);
} */