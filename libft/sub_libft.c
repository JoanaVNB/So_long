/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_libft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:54:34 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/14 00:11:51 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen_(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar_fd_(char c, int fd)
{
	write(fd, &c, 1);
}

static char	*write_char(long int n, char *str, size_t i)
{	
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
		while (i >= 1)
		{
			str[i] = (n % 10) + 48;
			n = n / 10;
			i--;
		}
	}
	else
	{
		while (i >= 1)
		{
			str[i] = (n % 10) + 48;
			n = n / 10;
			i--;
		}
			str[0] = (n % 10) + 48;
	}
	return (str);
}

char	*ft_itoa_(int n)
{
	long int	temp;
	long int	nb;
	size_t		i;
	char		*str;

	i = 1;
	temp = n;
	nb = temp;
	if (temp < 0)
		temp = temp * -1;
	while (temp / 10 >= 10)
	{
		temp = temp / 10;
		i++;
	}
	if (nb < 0)
		i++;
	if (temp > 9)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	return (write_char(nb, str, i));
}

char	*ft_strchr_(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}
