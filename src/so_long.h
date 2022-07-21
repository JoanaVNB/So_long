/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:12:16 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/19 00:49:15 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include <mlx.h>

enum	e_alter
{
	ESC = 65307,
	LEFT = 65361,
	UP,
	RIGHT,
	DOWN
};

# define FILE_WALL	"assets/FILE_WALL.xpm"
# define FILE_SPACE	"assets/FILE_SPACE.xpm"
# define FILE_COLLECTIBLE	"assets/FILE_COLLECTIBLE.xpm"
# define FILE_EXIT	"assets/FILE_EXIT.xpm"
# define FILE_PLAYER_L	"assets/FILE_PLAYER_L.xpm"
# define FILE_PLAYER	"assets/FILE_PLAYER.xpm"

typedef struct s_img
{
	void	*player;
	void	*player_l;
	void	*floor;
	void	*wall;
	void	*collect;
	void	*exit;
}			t_img;

typedef struct s_map
{
	char	**matrix;
	int		row;
	int		col;
	int		p;
	int		c;
	int		e;
}			t_map;

typedef struct s_game
{
	void	*mlx;
	void	*window;
	t_map	map;
	t_img	img;
	int		x;
	int		y;
	int		collectible;
	int		total_collected;
	int		moves;
	int		end;
	int		size;
	int		player_direction;
}			t_game;

void	init_map(char *filename, t_game *game);
int		check_sides(t_map *map);
void	check_sprites(t_map *map);
void	init_game(t_game *game);
int		loop_hook(t_game *game);
void	render_map(t_game *game);
int		key_hook(int key, t_game *game);
void	up(t_game *game);
void	down(t_game *game);
void	left(t_game *game);
void	right(t_game *game);
int		clean_before_exit(t_game *game);
void	ft_free_matrix(char **matrix);
void	check_win_condition(t_game *game);
void	move_sprites(int key, t_game *game);
void	free_window(t_game *game);
void	unlock_exit(t_game *game);
int		valid_extension(char *file);

#endif
