/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:10:40 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/18 22:42:48 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static int	is_arrow(int key)
{
	if (key == UP || key == DOWN || key == LEFT || key == RIGHT)
		return (1);
	return (0);
}

int	loop_hook(t_game *game)
{
	render_map(game);
	return (0);
}

int	key_hook(int key, t_game *game)
{
	if (key == 'q' || key == ESC)
		clean_before_exit(game);
	if (ft_strchr("wasd", key) || is_arrow(key))
		move_sprites(key, game);
	ft_printf("\r\033[0;31mMoves:\033[0;33m %d\033[0m ", game->moves);
	return (0);
}
