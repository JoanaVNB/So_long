/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:24:24 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/04/29 02:43:46 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	n;

	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if ((*str == 43) || (*str == 45) || ft_isdigit(*str))
	{
		sign = 1;
		if (*str == 45)
			sign = -1;
		if ((*str == 45) || (*str == 43))
			str++;
		n = 0;
		while (*str && (ft_isdigit(*str)))
		{
			n = n * 10 + (*str - 48);
			str++;
		}
		return (n * sign);
	}
	return (0);
}

/* #include <stdio.h>
int main ()
{
	printf("%d\n", ft_atoi("joana"));
	printf("%d\n", ft_atoi(" 123456789"));
} */