/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvidon-n <joanavidon@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:12:41 by jvidon-n          #+#    #+#             */
/*   Updated: 2022/07/18 22:49:50 by jvidon-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	count_sprites(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->matrix[i])
	{
		j = 0;
		while (map->matrix[i][j])
		{
			if (map->matrix[i][j] == 'P')
				map->p++;
			if (map->matrix[i][j] == 'C')
				map->c++;
			if (map->matrix[i][j] == 'E')
				map->e++;
			j++;
		}
		i++;
	}
}

static void	validate_sprites(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->matrix[i])
	{
		j = 0;
		while (map->matrix[i][j])
		{
			if (!ft_strchr("01CEP", map->matrix[i][j]))
			{
				ft_printf("Error\nInvalid map attribute\n");
				ft_free_matrix(map->matrix);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	check_sprites(t_map *map)
{
	map->p = 0;
	map->c = 0;
	map->e = 0;
	validate_sprites(map);
	count_sprites(map);
	if (map->p == 1 && map->c > 0 && map->e == 1)
		return ;
	ft_printf("Error\nThe numbers of sprites is not valid\n");
	if (map->p > 1 || map->e > 1)
		ft_printf("Error\nMust have just one player and one exit\n");
	ft_free_matrix(map->matrix);
	exit(1);
}

int	check_sides(t_map *map)
{
	int	i;
	int	last_line;

	i = 0;
	last_line = map->row - 1;
	while (map->matrix[0][i] && map->matrix[last_line][i])
	{
		if (map->matrix[0][i] != '1' || map->matrix[last_line][i] != '1')
		{
			ft_printf("Error\nInvalid wall or is not rectangular\n");
			exit(1);
		}
		i++;
	}
	i = 0;
	while (i <= last_line)
	{
		if (map->matrix[i][map->col - 1] != '1' || map->matrix[i][0] != '1')
		{
			ft_printf("Error\nInvalid wall or is not rectangular\n");
			exit(1);
		}
		i++;
	}
	return (1);
}

int	valid_extension(char *file)
{	
	char	*ext;

	if (!file)
		return (0);
	ext = ft_strrchr(file, '.');
	if (ft_strncmp(ext, ".ber", 5))
		return (0);
	return (1);
}
