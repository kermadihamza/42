/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:46:30 by hakermad          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/04 15:17:29 by hakermad         ###   ########.fr       */
=======
/*   Updated: 2022/03/22 15:00:27 by hakermad         ###   ########.fr       */
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_duplicate(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_args(int argc, char **argv)
{
	int		i;
	long	tmp;
<<<<<<< HEAD
	char	**args;

	(void) argc;
	i = 1;
	args = argv;
=======
	char	**args;	

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!ft_isnum(args[i]))
			ft_error("Error\n");
		if (ft_check_duplicate(tmp, args, i))
			ft_error("Error\n");
		i++;
	}
<<<<<<< HEAD
=======
	if (argc == 2)
		ft_free(args);
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
}
