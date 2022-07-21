/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:10:57 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/18 22:50:13 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int n, char **file)
{
	t_game	game;

	if (n == 1)
	{
		ft_printf("Error\nNo args\n");
		return (1);
	}
	if (n > 2)
	{
		ft_printf("Error\nOnly the first file would be used\n");
		return (1);
	}
	if (!valid_extension(file[1]))
	{
		ft_printf("Error\nInvalid file extension\n");
		return (1);
	}
	init_map(file[1], &game);
	init_game(&game);
	return (0);
}
