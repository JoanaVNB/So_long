/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:11:01 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:05:48 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_itoa(int n)
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

/* #include <stdio.h>
int main (void)
{
	int n = 48785;
	char *ptr;

	int n2 = -48785;
	char *vtr;

	int n3 = 0;
	char *a;
	
	ptr= ft_itoa(n);
	vtr= ft_itoa(n2);
	a= ft_itoa(n3);
	printf("%s\n" "%s\n" "%s\n", ptr, vtr, a);
} */