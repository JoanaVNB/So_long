/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:33:45 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:24:11 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, 0, len + 1));
}

/* #include <stdio.h>
int main (void)
{
	char const *s1 = "XXcadeXteXX";
	char const *set = "X";
	char *ptr;
	
	ptr=ft_strtrim(s1, set);
	printf("%s\n", ptr);
} */

/* irá aparar a string S1, com o comando SET. A função irá copiar a 
string S1 e ignorar o caractere SET no inicio e no final. */

// CADETE --> STRCHR ("CADETE", 'C') --> C
// CADETE --> STRCHR ('C', "CADETE") --> ADETE
// CADETE --> STRCHR ('X', "XXCADEXTEXX") --> CADEXTEXX