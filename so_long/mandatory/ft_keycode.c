/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_keycode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:50:13 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 16:06:45 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

int	collect(int keycode, t_game *game)
{
	ft_keycode(keycode, game);
	if (game->map[game->pos_y / 70][game->pos_x / 70] == 'C')
	{
		game->money++;
		game->map[game->pos_y / 70][game->pos_x / 70] = '0';
	}
	if ((game->map[game->pos_y / 70]
			[game->pos_x / 70]) == 'E' && (game->money == game->max_money))
	{
		exit(0);
	}
	if (game->map[game->pos_y / 70][game->pos_x / 70] == 'M')
		exit(EXIT_SUCCESS);
	ft_run_map(game);
	if (game->money > 0)
		mlx_put_image_to_window(game->mlx, game->win, game->c_money,
			game->pos_x, game->pos_y);
	else
		mlx_put_image_to_window(game->mlx, game->win, game->img_celia,
			game->pos_x, game->pos_y);
	printf("Number of move : %d\n", game->move);
	return (0);
}
