/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:16:34 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/14 11:31:47 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_pars_map(t_game *game, int i, int j, char *line)
{
	if (line[game->x] == '1')
		ft_one(game, i, j, line);
	else if (line[game->x] == '0')
		ft_zero(game, i, j, line);
	else if (line[game->x] == 'C')
	{
		game->max_money++;
		ft_c(game, i, j, line);
	}
	else if (line[game->x] == 'P')
		ft_p(game, i, j, line);
	else if (line[game->x] == 'E')
		ft_e(game, i, j, line);
	if (line[game->x] != 'C' && line[game->x] != 'P' && line[game->x] != '1'
		&& line[game->x] != '0' && line[game->x] != 'E'
		&& line[game->x] != '\n')
	{
		printf("Error\n");
		exit(1);
	}
	game->x++;
}

void	ft_pars_map2(t_game *game, int i, int j)
{
	if (game->map[j][i] == '1')
		ft_one2(game, i, j);
	else if (game->map[j][i] == '0')
		ft_zero2(game, i, j);
	else if (game->map[j][i] == 'C')
		ft_c2(game, i, j);
	else if (game->map[j][i] == 'P')
		ft_p2(game, i, j);
	else if (game->map[j][i] == 'E')
		ft_e2(game, i, j);
}

void	ft_map(t_game *game, char *argv)
{
	char	*line;
	char	*result;
	int		fd;

	result = ft_calloc(1, sizeof(char));
	game->y = 0;
	fd = open(argv, O_RDONLY);
	line = get_next_line(fd);
	protect(line);
	protect(result);
	while (line)
	{
		game->x = 0;
		while (line[game->x])
			ft_pars_map(game, game->x, game->y, line);
		protect_line(line);
		result = ft_strjoin(result, line);
		protect(result);
		free(line);
		line = get_next_line(fd);
		if (!line)
			break ;
		game->y++;
	}
	split_free_close(game, result, fd);
}

void	split_free_close(t_game *game, char *result, int fd)
{
	game->map = ft_split(result, '\n');
	free(result);
	close(fd);
}

int	ft_run_map(t_game *game)
{
	int	i;
	int	j;

	j = 0;
	while (game->map[j])
	{
		i = 0;
		while (game->map[j][i])
		{
			ft_pars_map2(game, i, j);
			i++;
		}
		j++;
	}
	return (0);
}
