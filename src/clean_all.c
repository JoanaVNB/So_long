/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 00:55:21 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/20 00:55:27 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	free_sprites(t_game *game)
{
	void	*mlx;

	mlx = game->mlx;
	mlx_destroy_image(mlx, game->img.floor);
	mlx_destroy_image(mlx, game->img.wall);
	mlx_destroy_image(mlx, game->img.collect);
	mlx_destroy_image(mlx, game->img.player);
	mlx_destroy_image(mlx, game->img.player_l);
	mlx_destroy_image(mlx, game->img.exit);
}

void	free_window(t_game *game)
{
	mlx_clear_window(game->mlx, game->window);
	mlx_destroy_window(game->mlx, game->window);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
}

static void	free_matrix(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map.row)
		free(game->map.matrix[i++]);
	free(game->map.matrix);
}

int	clean_before_exit(t_game *game)
{
	free_matrix(game);
	free_sprites(game);
	free_window(game);
	ft_printf("\n");
	exit(0);
	return (0);
}

void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
		free(matrix[i++]);
	free(matrix);
}
