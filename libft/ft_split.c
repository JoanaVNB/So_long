/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 02:29:53 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:23:11 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	freestr(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static void	copy(char *dest, const char *from, char c)
{
	int	i;

	i = 0;
	while ((from[i] == c || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int	write_split(char **split, const char *str, char c)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c || str[i] == '\0')
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == c || str[i + j] == '\0') == 0)
				j++;
			split[word] = (char *) malloc (sizeof (char) * (j + 1));
			if (!split[word])
				return (freestr(split, word - 1));
			copy(split[word], str + i, c);
				i = i + j;
				word++;
		}
	}
	return (0);
}

char	**ft_split(const char *str, char c)
{
	char	**split;

	split = (char **) malloc (sizeof (char *) * (count_words(str, c) + 1));
	if (!split)
		return (NULL);
	split[count_words(str, c)] = 0;
	if (write_split(split, str, c) == -1)
		return (NULL);
	return (split);
}

/* #include <stdio.h>

int main ()
{
	char const *s = "a cadete da 42";
	char c = 'a';
	char **res; 

	if (!(res = ft_split(s, c)))
		printf("string == %s", res[0]);
	int i = 0;
	while (res[i])
	{
		printf("string: '%s'\n", res[i]);
		i++;
	}
} */
