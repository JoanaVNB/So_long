/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:12:08 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/19 00:47:53 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	insert_sprite(char *sprite, t_game *game, int x, int y)
{
	void	*mlx;
	void	*window;

	x *= game->size;
	y *= game->size;
	mlx = game->mlx;
	window = game->window;
	mlx_put_image_to_window(mlx, window, sprite, x, y);
}

static void	player_side(t_game *game, int i, int j)
{
	insert_sprite(game->img.player, game, i, j);
	if (game->player_direction == 'l')
		insert_sprite(game->img.player_l, game, i, j);
	if (game->player_direction == 'r')
		insert_sprite(game->img.player, game, i, j);
	game->x = i;
	game->y = j;
}

void	move_sprites(int key, t_game *game)
{
	int	py;
	int	px;

	py = game->y;
	px = game->x;
	if (key == 'a' || key == LEFT)
	{
		left(game);
		game->player_direction = 'l';
	}
	else if (key == 'd' || key == RIGHT)
	{
		right(game);
		game->player_direction = 'f';
	}
	else if (key == 'w' || key == UP)
	{
		up(game);
		game->player_direction = 'r';
	}
	else if (key == 's' || key == DOWN)
	{
		down(game);
		game->player_direction = 'r';
	}
}

void	render_map(t_game *game)
{
	int	i;
	int	j;

	i = -1;
	while (++i < game->map.row)
	{
		j = -1;
		while (++j < game->map.col)
		{
			if (game->map.matrix[i][j] == '1')
				insert_sprite(game->img.wall, game, j, i);
			if (game->map.matrix[i][j] == '0')
				insert_sprite(game->img.floor, game, j, i);
			if (game->map.matrix[i][j] == 'C')
				insert_sprite(game->img.collect, game, j, i);
			if (game->map.matrix[i][j] == 'P')
				player_side(game, j, i);
			if (game->map.matrix[i][j] == 'E')
				insert_sprite(game->img.exit, game, j, i);
		}
	}
}
