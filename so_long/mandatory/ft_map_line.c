/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:01:05 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 14:17:20 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_c(t_game *game, int i, int j, char *line)
{
	if (line[i] == 'C')
	{
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_money, i * 70, j * 70);
	}
}

void	ft_zero(t_game *game, int i, int j, char *line)
{
	if (line[i] == '0')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
}

void	ft_one(t_game *game, int i, int j, char *line)
{
	if (line[i] == '1')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_wall, i * 70, j * 70);
}

void	ft_p(t_game *game, int i, int j, char *line)
{
	if (line[i] == 'P')
	{
		game->pos_x = i * 70;
		game->pos_y = j * 70;
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
	}
}

void	ft_e(t_game *game, int i, int j, char *line)
{
	if (line[i] == 'E')
	{
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_tom, i * 70, j * 70);
	}
}
