/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:13:00 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/24 22:33:42 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
	else
		return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\t", ft_strncmp("Basecamp", "Basecamp", 0));
	printf("%d\t", ft_strncmp("Base", "basecamp", 4));
	printf("%d\t", ft_strncmp("Basecamp", "Base!", 5));
	printf("%d\n", ft_strncmp("\0", "\0", 1));

	printf("%d\t", strncmp("Basecamp", "Basecamp", 0));
	printf("%d\t", strncmp("Base", "basecamp", 4));
	printf("%d\t", strncmp("Basecamp", "Base!", 5));
	printf("%d\n", strncmp("\0", "\0", 1));
} */

/* #include <stdio.h>
printf("meu i é --> %d |  meu n é --> %d | letra 1 --> %c |
letra 2 --> %c\n", i, n, s1[i], s2[i]); */
