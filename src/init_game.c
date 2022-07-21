/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 00:55:37 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/20 00:55:37 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	objective(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	while (++i < game->map.row)
	{
		j = -1;
		while (++j < game->map.col)
			if (game->map.matrix[i][j] == 'C')
				game->total_collected++;
	}
}

static void	*convert_sprite(char *pathname, t_game *game)
{
	int	i;
	int	j;

	i = game->size;
	j = game->size;
	return (mlx_xpm_file_to_image(game->mlx, pathname, &i, &j));
}

static void	init_sprites(t_game *game)
{
		game->img.floor = convert_sprite(FILE_SPACE, game);
		game->img.wall = convert_sprite(FILE_WALL, game);
		game->img.collect = convert_sprite(FILE_COLLECTIBLE, game);
		game->img.player = convert_sprite(FILE_PLAYER, game);
		game->img.player_l = convert_sprite(FILE_PLAYER_L, game);
		game->img.exit = convert_sprite(FILE_EXIT, game);
}

static void	init_window(t_game *game)
{
	int		x;
	int		y;

	x = game->map.col * game->size;
	y = game->map.row * game->size;
	game->mlx = mlx_init();
	game->window = mlx_new_window(game->mlx, x, y, "the_witch");
	objective(game);
}

void	init_game(t_game *game)
{
	init_window(game);
	init_sprites(game);
	mlx_loop_hook(game->mlx, loop_hook, game);
	mlx_key_hook(game->window, key_hook, game);
	mlx_hook(game->window, 17, 0, clean_before_exit, game);
	mlx_loop(game->mlx);
}
