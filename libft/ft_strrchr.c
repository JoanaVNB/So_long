/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:16:33 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/24 22:20:13 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_end;

	s_end = s;
	while (*s_end)
		s_end++;
	while (s_end != s)
	{
		if (*s_end == (char) c)
			return ((char *)s_end);
		else
			s_end--;
	}
	if (*s_end == (char) c)
		return ((char *) s_end);
	else
		return (NULL);
}

/* #include <string.h>
#include <stdio.h>
int main (void)
{
	printf("%s\n", ft_strrchr("Sou cadete da 42", 'e'));
	printf("%s\n", strrchr("Sou cadete da 42", 'e'));
} */