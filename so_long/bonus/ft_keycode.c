/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keycode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:50:13 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 16:06:49 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_keycode(int keycode, t_game *game)
{
	mlx_clear_window(game->mlx, game->win);
	if (keycode == 53)
		exit(EXIT_FAILURE);
	if ((keycode == 2) && block_wall(keycode, game))
	{
		game->pos_x += 70;
		game->move++;
	}
	else if ((keycode == 0) && block_wall(keycode, game))
	{
		game->move++;
		game->pos_x -= 70;
	}
	else if ((keycode == 13) && block_wall(keycode, game))
	{
		game->move++;
		game->pos_y -= 70;
	}
	else if ((keycode == 1) && block_wall(keycode, game))
	{
		game->move++;
		game->pos_y += 70;
	}
	return (0);
}

int	ft_keycode_enemy(int keycode, t_game *game)
{
	if ((keycode == 124) && block_wall_enemy(keycode, game))
	{
		game->orientation = 0;
		game->pos_x_enemy += 70;
	}
	else if ((keycode == 123) && block_wall_enemy(keycode, game))
	{
		game->orientation = 1;
		game->pos_x_enemy -= 70;
	}
	else if ((keycode == 126) && block_wall_enemy(keycode, game))
	{
		game->orientation = 2;
		game->pos_y_enemy -= 70;
	}
	else if ((keycode == 125) && block_wall_enemy(keycode, game))
	{
		game->orientation = 3;
		game->pos_y_enemy += 70;
	}
	if (game->pos_y / 70
		== game->pos_y_enemy / 70 && game->pos_x / 70 == game->pos_x_enemy / 70)
		game->touch--;
	return (0);
}

int	collect(int keycode, t_game *game)
{
	ft_keycode(keycode, game);
	ft_keycode_enemy(keycode, game);
	mlx_put_image_to_window(game->mlx, game->win, game->health_full, 70, -15);
	if (game->map[game->pos_y / 70][game->pos_x / 70] == 'C')
	{
		game->money++;
		game->map[game->pos_y / 70][game->pos_x / 70] = '0';
	}
	if ((game->map[game->pos_y / 70]
			[game->pos_x / 70]) == 'E' && (game->money == game->max_money))
		exit(EXIT_SUCCESS);
	ft_run_map(game);
	orientation(game);
	move_on_display(game);
	return (0);
}

int	orientation(t_game *game)
{
	if (game->money > 0)
	{
		mlx_put_image_to_window(game->mlx, game->win,
			game->c_money, game->pos_x, game->pos_y);
		money_after_zero(game);
	}
	else
	{
		mlx_put_image_to_window(game->mlx, game->win,
			game->img_celia, game->pos_x, game->pos_y);
		money_before_zero(game);
	}
	if (game->touch == 3)
		mlx_put_image_to_window(game->mlx, game->win,
			game->health_full, 70, -15);
	else if (game->touch == 2)
		mlx_put_image_to_window(game->mlx, game->win,
			game->health_mi, 70, -15);
	else if (game->touch == 1)
		mlx_put_image_to_window(game->mlx, game->win,
			game->health_end, 70, -15);
	else
		exit(EXIT_SUCCESS);
	return (0);
}

int	animation(t_game *game)
{
	if (game->money == game->max_money)
	{
		if (game->time % 15 < 5)
			game->orientation_player = 0;
		else if (game->time % 15 >= 5)
			game->orientation_player = 1;
		game->time++;
		mlx_clear_window(game->mlx, game->win);
		ft_run_map(game);
		orientation(game);
		move_on_display(game);
	}
	return (0);
}
