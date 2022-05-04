/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_windows.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:34:14 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 17:06:16 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_windows(t_game *game, char *argv)
{
	int		fd;
	char	*line;
	int		y;
	int		x;

	fd = open(argv, O_RDONLY);
	line = get_next_line(fd);
	protect(line);
	y = 0;
	while (line)
	{
		x = 0;
		while (line[x] && line[x] != '\n')
			x++;
		free(line);
		line = get_next_line(fd);
		y++;
	}
	game->win = mlx_new_window(game->mlx, x * 70, y * 70, "so_long");
	return (0);
}
