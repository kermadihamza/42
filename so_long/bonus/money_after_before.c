/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   money_after_before.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:44:30 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 12:59:49 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	money_after_zero(t_game *game)
{
	if (game->orientation == 1)
		mlx_put_image_to_window(game->mlx, game->win,
			game->tarentule_left, game->pos_x_enemy, game->pos_y_enemy);
	else if (game->orientation == 0)
		mlx_put_image_to_window(game->mlx, game->win,
			game->tarentule_right, game->pos_x_enemy, game->pos_y_enemy);
	else if (game->orientation == 2)
		mlx_put_image_to_window(game->mlx, game->win,
			game->tarentule_top, game->pos_x_enemy, game->pos_y_enemy);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			game->tarentule_down, game->pos_x_enemy, game->pos_y_enemy);
	return (0);
}

int	money_before_zero(t_game *game)
{
	if (game->orientation == 1)
		mlx_put_image_to_window(game->mlx, game->win,
			game->tarentule_left, game->pos_x_enemy, game->pos_y_enemy);
	else if (game->orientation == 0)
		mlx_put_image_to_window(game->mlx, game->win,
			game->tarentule_right, game->pos_x_enemy, game->pos_y_enemy);
	else if (game->orientation == 2)
		mlx_put_image_to_window(game->mlx, game->win,
			game->tarentule_top, game->pos_x_enemy, game->pos_y_enemy);
	else
		mlx_put_image_to_window(game->mlx, game->win,
			game->tarentule_down, game->pos_x_enemy, game->pos_y_enemy);
	return (0);
}
