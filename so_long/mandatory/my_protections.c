/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_protections.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:50:31 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/14 10:53:29 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ifmoney(t_game *game)
{
	int	first;
	int	second;
	int	collectible;

	second = 0;
	collectible = 0;
	while (game->map[second])
	{
		first = 0;
		while (game->map[second][first])
		{
			if (game->map[second][first] == 'C')
				collectible++;
			first++;
		}
		second++;
	}
	if (collectible == 0)
	{
		printf("Error\nYou have no collectibles in the map");
		exit(EXIT_SUCCESS);
	}
	return (0);
}

int	ifplayer(t_game *game)
{
	int	first;
	int	second;
	int	player;

	second = 0;
	player = 0;
	while (game->map[second])
	{
		first = 0;
		while (game->map[second][first])
		{
			if (game->map[second][first] == 'P')
				player++;
			first++;
		}
		second++;
	}
	if ((player == 0) || (player > 1))
	{
		printf("Error\nPlease check the number of players");
		exit(EXIT_SUCCESS);
	}
	return (0);
}

int	ifwall(t_game *game)
{
	int	first;
	int	second;

	second = 0;
	while (game->map[second])
	{
		first = 0;
		while (game->map[second][first])
		{
			if ((game->map[0][first] != '1') ||
				(game->map[second][0] != '1') ||
				(game->map[second][ft_strlen(game->map[second]) - 1] != '1') ||
				(game->map[nbr_column(game->map) - 1][first] != '1'))
			{
				printf("Error\nYou have a problem with your wall");
				exit(EXIT_SUCCESS);
			}
			first++;
		}
		second++;
	}
	return (0);
}

int	ifexit(t_game *game)
{
	int	first;
	int	second;
	int	exit_error;

	second = 0;
	exit_error = 0;
	while (game->map[second])
	{
		first = 0;
		while (game->map[second][first])
		{
			if (game->map[second][first] == 'E')
				exit_error++;
			first++;
		}
		second++;
	}
	if (exit_error == 0)
	{
		printf("Error\nYou don't have an exit");
		exit(EXIT_SUCCESS);
	}
	return (0);
}

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
