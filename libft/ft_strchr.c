/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:43:17 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/05/18 22:20:07 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	ptr[50] = "ola-cadete\n-da-42";
	char	*letra;
	char	*letraft;

	letraft = ft_strchr(ptr, '\n');
	letra = strchr(ptr, '\n');
	printf("FT: %c\n", *letraft);
	printf("Original: %c\n", *letra);
	printf("Tamanho da str: %d\n", ft_strlen(ptr));
	printf("Tamanho da strchr: %d\n", ft_strlen(letraft));
} */

/* A função irá varrer a sting até que 
encontre a char informada pela primeira vez.  */