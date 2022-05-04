/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protections_ok.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 13:14:25 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/14 11:31:07 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	iflineok(t_game *game)
{
	int	first;
	int	second;
	int	size;

	second = 0;
	size = ft_strlen(game->map[second]);
	while (game->map[second])
	{
		first = 0;
		while (game->map[second][first])
			first++;
		if (size != first)
		{
			printf("Error\nYour wall is incomplete\n");
			exit(EXIT_SUCCESS);
		}
		second++;
	}
	return (0);
}

void	protections_ok(t_game *game)
{
	ifmoney(game);
	ifplayer(game);
	ifwall(game);
	ifexit(game);
	iflineok(game);
	ifenemy(game);
}
