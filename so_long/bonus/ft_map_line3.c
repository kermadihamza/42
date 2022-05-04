/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_line3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:57:19 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 14:04:45 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_m(t_game *game, int i, int j, char *line)
{
	if (line[i] == 'M')
	{
		game->pos_x_enemy = i * 70;
		game->pos_y_enemy = j * 70;
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
	}
}

void	ft_m2(t_game *game, int i, int j)
{
	if (game->map[j][i] == 'M')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
}
