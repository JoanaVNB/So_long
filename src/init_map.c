/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:11:07 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/19 00:50:26 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_game_zero(t_game *game)
{
	game->x = 0;
	game->y = 0;
	game->end = 0;
	game->collectible = 0;
	game->total_collected = 0;
	game->moves = 0;
	game->map.p = 0;
	game->map.c = 0;
	game->map.e = 0;
	game->map.row = 0;
	game->map.col = 0;
	game->size = 64;
	game->player_direction = 0;
}

void	get_map_dimension(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->matrix[i])
	{
		j = 0;
		while (map->matrix[i][j++])
			map->col++;
		i++;
	}
	map->row = i;
	if (!map->row)
	{
		ft_printf("Error\nEmpty map file\n");
		ft_free_matrix(map->matrix);
		exit(1);
	}
	map->col /= map->row;
	if (map->col < 3 || map->row < 3)
	{
		ft_printf("Error\nInvalid map dimension\n");
		ft_free_matrix(map->matrix);
		exit(1);
	}
}

void	read_map(char *path_to_file, t_game *game)
{
	char	*temp;
	char	*line;
	int		fd;
	char	*buffer;

	buffer = 0;
	fd = open(path_to_file, O_RDONLY);
	buffer = ft_strdup("");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
		{
			free(line);
			break ;
		}
		temp = buffer;
		buffer = ft_strjoin(temp, line);
		free(line);
		free(temp);
	}
	game->map.matrix = ft_split(buffer, '\n');
	free(buffer);
	close(fd);
}

void	init_map(char *path_to_file, t_game *game)
{
	init_game_zero(game);
	read_map(path_to_file, game);
	get_map_dimension(&game->map);
	check_sprites(&game->map);
	check_sides(&game->map);
}
