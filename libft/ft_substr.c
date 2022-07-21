/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:23:22 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:13:48 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_size;
	char	*str;

	if (!s)
		return (NULL);
	if (start < ft_strlen(s))
		str_size = ft_strlen(s) - start + 1;
	if (start >= ft_strlen(s))
		str_size = 1;
	if (str_size > len)
		str_size = len + 1;
	str = (char *)malloc(str_size * sizeof(char));
	if (!str)
		return (NULL);
	if (str_size - 1 == 0)
		str[0] = '\0';
	else
		ft_strlcpy(str, &s[start], str_size);
	return (str);
}

/* #include <stdio.h>
int main ()
{
	char const s[7] = "cadete";
	unsigned int start = 2; // no d
	size_t len = 4; // apenas 4 caracteres
	char *str;
	
	str = ft_substr(s, start, len);
	printf("%s\n", str);
} */

/* busca pela string S começe na posição START enquanto 
tiver o tamanho LEN, na minha função retorna o ponteiro criado STR. */