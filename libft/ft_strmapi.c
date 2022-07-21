/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:06:39 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:46:47 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (0);
	str = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>

char	ft_test(unsigned int i, char str)
{
	printf("index = %d letra = %c\n", i, str);
	return (str);
}

int main()
{
	char *ptr;
	ptr = ft_strmapi("cadete", ft_test);
	printf("Retorna a string = %s\n", ptr);
} */
