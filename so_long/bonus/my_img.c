/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_img.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:37:45 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 14:10:42 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	my_img(t_game *display, int width, int height)
{
	display->img_tom = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/img_tom.xpm", &width, &height);
	display->tom_right = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/tom_right.xpm", &width, &height);
	display->img_celia = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/img_celia.xpm", &width, &height);
	display->c_money = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/c_money.xpm", &width, &height);
	display->img_wall = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/img_wall.xpm", &width, &height);
	display->img_money = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/img_money.xpm", &width, &height);
	display->img_floor = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/img_floor.xpm", &width, &height);
	return (0);
}

int	my_img2(t_game *display, int width, int height)
{
	display->tarentule_left = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/tarentule_left.xpm", &width, &height);
	display->tarentule_right = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/tarentule_right.xpm", &width, &height);
	display->tarentule_top = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/tarentule_top.xpm", &width, &height);
	display->tarentule_down = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/tarentule_down.xpm", &width, &height);
	display->score = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/score.xpm", &width, &height);
	display->text = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/text.xpm", &width, &height);
	display->health_full = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/health_full.xpm", &width, &height);
	display->health_mi = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/health_mi.xpm", &width, &height);
	display->health_end = mlx_xpm_file_to_image(display->mlx,
			"./my_xpm/health_end.xpm", &width, &height);
	return (0);
}

int	all_img(t_game *display, int width, int height)
{
	my_img(display, width, height);
	my_img2(display, width, height);
	return (0);
}
