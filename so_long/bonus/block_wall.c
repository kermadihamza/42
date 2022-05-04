/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:23:19 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/11 16:47:57 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	block_wall(int keycode, t_game *game)
{
	if ((keycode == 2) && game->map[game->pos_y / 70]
		[(game->pos_x + 70) / 70] == '1')
		return (0);
	else if ((keycode == 0) && game->map[game->pos_y / 70]
		[(game->pos_x - 70) / 70] == '1')
		return (0);
	else if ((keycode == 13) && game->map[(game->pos_y - 70) / 70]
		[game->pos_x / 70] == '1')
		return (0);
	else if ((keycode == 1) && game->map[(game->pos_y + 70) / 70]
		[game->pos_x / 70] == '1')
		return (0);
	return (1);
}

int	block_wall_enemy(int keycode, t_game *game)
{
	if ((keycode == 124) && game->map[game->pos_y_enemy / 70]
		[(game->pos_x_enemy + 70) / 70] == '1')
		return (0);
	else if ((keycode == 123) && game->map[game->pos_y_enemy / 70]
		[(game->pos_x_enemy - 70) / 70] == '1')
		return (0);
	else if ((keycode == 126) && game->map[(game->pos_y_enemy - 70) / 70]
		[game->pos_x_enemy / 70] == '1')
		return (0);
	else if ((keycode == 125) && game->map[(game->pos_y_enemy + 70) / 70]
		[game->pos_x_enemy / 70] == '1')
		return (0);
	return (1);
}
