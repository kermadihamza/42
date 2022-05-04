/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:41:21 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 13:04:30 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	nbr_column(char **argv)
{
	int	count;

	count = 0;
	while (argv[count])
		count++;
	return (count);
}

void	move_on_display(t_game *game)
{
	char	*count;

	count = ft_itoa(game->move);
	if (!count)
		exit(EXIT_FAILURE);
	mlx_put_image_to_window(game->mlx, game->win, game->score, 10, 10);
	mlx_string_put(game->mlx, game->win, 26, 7, 0xFFFFFF, count);
	free(count);
}
