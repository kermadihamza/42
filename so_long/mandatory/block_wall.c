/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   block_wall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:23:19 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 13:06:26 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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
