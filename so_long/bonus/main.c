/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:01:06 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/14 11:14:17 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	img_departure(t_game *game)
{
	mlx_put_image_to_window(game->mlx, game->win, game->img_celia,
		game->pos_x, game->pos_y);
	mlx_put_image_to_window(game->mlx, game->win, game->tarentule_right,
		game->pos_x_enemy, game->pos_y_enemy);
}

int	main(int argc, char **argv)
{
	t_game	game;
	int		width;
	int		height;

	width = 0;
	height = 0;
	if (argc != 2)
		return (0);
	ft_protection_arg(argc, argv);
	game.mlx = mlx_init();
	game.money = 0;
	game.max_money = 0;
	game.touch = 3;
	game.time = 0;
	game.move = 0;
	all_img(&game, width, height);
	ft_windows(&game, argv[1]);
	ft_map(&game, argv[1]);
	img_departure(&game);
	protections_ok(&game);
	mlx_key_hook(game.win, collect, &game);
	mlx_loop_hook(game.mlx, animation, &game);
	mlx_hook(game.win, 17, 0, ft_close, game.win);
	mlx_loop(game.mlx);
}
