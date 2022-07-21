/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:13:28 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/19 21:18:47 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

static void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

static size_t	ft_intlen_base(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	baselen;

	len = 1;
	baselen = ft_strlen_(base);
	while (n >= baselen)
	{
		n /= baselen;
		len++;
	}
	return (len);
}

char	*itoa_base(unsigned long long n, char *base)
{
	char	*str;
	int		numlen;
	int		baselen;

	numlen = ft_intlen_base(n, base);
	baselen = ft_strlen_(base);
	str = ft_calloc((numlen + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (numlen)
	{
		numlen = numlen - 1;
		str[numlen] = base[n % baselen];
		n /= baselen;
	}
	return (str);
}
