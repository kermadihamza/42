/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protect_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:49:28 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 18:17:45 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	protect(char *str)
{
	if (!str)
	{
		exit(EXIT_FAILURE);
	}
}

void	protect_line(char *str)
{
	if (str[0] == '\n')
		exit(EXIT_FAILURE);
}

void	ft_protection_arg(int argc, char **argv)
{
	int	x;

	if (argc < 2)
	{
		printf("Error\nYou need the name of the map\n");
		exit(EXIT_FAILURE);
	}
	else if (argc > 2)
	{
		printf("Error\nOnly one map is needed\n");
		exit(EXIT_FAILURE);
	}
	x = ft_strlen(argv[1]) - 1;
	if ((argv[1][x] != 'r') || (argv[1][x - 1] != 'e') || (argv[1][x - 2]
		!= 'b') || (argv[1][x - 3] != '.'))
	{
		printf("Error\nThe map must end in .ber!\n");
		exit(EXIT_FAILURE);
	}
}
