/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_line2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:18:02 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 14:18:04 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_c2(t_game *game, int i, int j)
{
	if (game->map[j][i] == 'C')
	{
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_money, i * 70, j * 70);
	}
}

void	ft_zero2(t_game *game, int i, int j)
{
	if (game->map[j][i] == '0')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
}

void	ft_one2(t_game *game, int i, int j)
{
	if (game->map[j][i] == '1')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_wall, i * 70, j * 70);
}

void	ft_p2(t_game *game, int i, int j)
{
	if (game->map[j][i] == 'P')
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
}

void	ft_e2(t_game *game, int i, int j)
{
	if (game->map[j][i] == 'E')
	{
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_floor, i * 70, j * 70);
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_tom, i * 70, j * 70);
	}
}
