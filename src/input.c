/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:12:02 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/18 22:41:24 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_win_condition(t_game *game)
{
	if (game->collectible == game->total_collected)
	{
		game->end = 1;
		ft_printf("\nYOU WON!");
	}
}

void	up(t_game *game)
{
	int	next_x;
	int	next_y;

	next_x = game->x;
	next_y = game->y - 1;
	if (game->map.matrix[next_y][next_x] != '1')
	{
		if (game->map.matrix[next_y][next_x] == 'E'
			&& game->collectible == game->total_collected)
		{
			game->end = 1;
			check_win_condition(game);
			clean_before_exit(game);
		}
		if (game->map.matrix[next_y][next_x] == 'E'
			&& game->collectible != game->total_collected)
			return ;
		if (game->map.matrix[next_y][next_x] == 'C')
			game->collectible++;
		game->map.matrix[game->y][game->x] = '0';
		game->map.matrix[next_y][next_x] = 'P';
		game->moves++;
	}
}

void	down(t_game *game)
{
	int	next_x;
	int	next_y;

	next_x = game->x;
	next_y = game->y + 1;
	if (game->map.matrix[next_y][next_x] != '1')
	{
		if (game->map.matrix[next_y][next_x] == 'E'
			&& game->collectible == game->total_collected)
		{
			game->end = 1;
			check_win_condition(game);
			clean_before_exit(game);
		}
		if (game->map.matrix[next_y][next_x] == 'E'
			&& game->collectible != game->total_collected)
			return ;
		if (game->map.matrix[next_y][next_x] == 'C')
			game->collectible++;
		game->map.matrix[game->y][game->x] = '0';
		game->map.matrix[next_y][next_x] = 'P';
		game->moves++;
	}
}

void	left(t_game *game)
{
	int	next_x;
	int	next_y;

	next_x = game->x - 1;
	next_y = game->y;
	if (game->map.matrix[next_y][next_x] != '1')
	{
		if (game->map.matrix[next_y][next_x] == 'E'
			&& game->collectible == game->total_collected)
		{
			game->end = 1;
			check_win_condition(game);
			clean_before_exit(game);
		}
		if (game->map.matrix[next_y][next_x] == 'E'
			&& game->collectible != game->total_collected)
			return ;
		if (game->map.matrix[next_y][next_x] == 'C')
			game->collectible++;
		game->map.matrix[game->y][game->x] = '0';
		game->map.matrix[next_y][next_x] = 'P';
		game->moves++;
	}
}

void	right(t_game *game)
{
	int	next_x;
	int	next_y;

	next_x = game->x + 1;
	next_y = game->y;
	if (game->map.matrix[next_y][next_x] != '1')
	{
		if (game->map.matrix[next_y][next_x] == 'E'
			&& game->collectible == game->total_collected)
		{
			game->end = 1;
			check_win_condition(game);
			clean_before_exit(game);
		}
		if (game->map.matrix[next_y][next_x] == 'E'
			&& game->collectible != game->total_collected)
			return ;
		if (game->map.matrix[next_y][next_x] == 'C')
			game->collectible++;
		game->map.matrix[game->y][game->x] = '0';
		game->map.matrix[next_y][next_x] = 'P';
		game->moves++;
	}
}
