/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 13:28:11 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/14 11:21:05 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <stddef.h>
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"

typedef struct s_game
{
	void	*mlx;
	void	*win;
	void	*img_tom;
	void	*tom_right;
	void	*img_tree;
	void	*img_wall;
	void	*img_floor;
	void	*img_money;
	void	*img_celia;
	void	*c_money;
	void	*tarentule_right;
	void	*tarentule_left;
	void	*tarentule_top;
	void	*tarentule_down;
	void	*health_full;
	void	*health_mi;
	void	*health_end;
	void	*score;
	void	*text;
	char	**map;
	int		x;
	int		y;
	int		pos_x;
	int		pos_y;
	int		pos_x_enemy;
	int		pos_y_enemy;
	int		move;
	int		money;
	int		touch;
	int		max_money;
	int		orientation;
	int		orientation_player;
	int		time;
}				t_game;

int		ft_keycode(int keycode, t_game *game);
int		my_img(t_game *display, int width, int height);
void	ft_map(t_game *game, char *argv);
int		ft_windows(t_game *game, char *argv);
int		ft_run_map(t_game *game);
int		ft_close(int keycode);
int		block_wall(int keycode, t_game *game);
int		collect(int keycode, t_game *game);
int		nbr_column(char **argv);
int		ifmoney(t_game *game);
int		ifplayer(t_game *game);
int		ifwall(t_game *game);
int		ifexit(t_game *game);
int		my_protections(t_game *game);
int		iflineok(t_game *game);
void	move_on_display(t_game *game);
int		ft_keycode_enemy(int keycode, t_game *game);
int		block_wall_enemy(int keycode, t_game *game);
int		orientation(t_game *game);
int		animation(t_game *game);
int		money_after_zero(t_game *game);
int		money_before_zero(t_game *game);
int		ft_line(t_game *game);
void	ft_c(t_game *game, int i, int j, char *line);
void	ft_zero(t_game *game, int i, int j, char *line);
void	ft_one(t_game *game, int i, int j, char *line);
void	ft_p(t_game *game, int i, int j, char *line);
void	ft_e(t_game *game, int i, int j, char *line);
void	ft_c2(t_game *game, int i, int j);
void	ft_zero2(t_game *game, int i, int j);
void	ft_one2(t_game *game, int i, int j);
void	ft_p2(t_game *game, int i, int j);
void	ft_e2(t_game *game, int i, int j);
void	ft_m(t_game *game, int i, int j, char *line);
void	ft_m2(t_game *game, int i, int j);
void	ft_pars_map(t_game *game, int i, int j, char *line);
void	ft_pars_map2(t_game *game, int i, int j);
int		my_img2(t_game *display, int width, int height);
void	protections_ok(t_game *game);
int		all_img(t_game *display, int width, int height);
void	split_free_close(t_game *game, char *result, int fd);
void	protect(char *str);
void	protect_line(char *str);
void	img_departure(t_game *game);
void	ft_protection_arg(int argc, char **argv);
int		ifenemy(t_game *game);
#endif