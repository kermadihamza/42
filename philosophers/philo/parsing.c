/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:50:21 by hakermad          #+#    #+#             */
/*   Updated: 2022/08/13 14:45:31 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static bool	ft_myatoi(const char *str, int *nb)
{
	unsigned int	result;

	result = 0;
	if (!*str)
		return (true);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
		if (result > INT_MAX)
			return (true);
	}
	if (*str)
		return (true);
	if (nb)
		*nb = result;
	return (false);
}

int	msg_exit(char *message)
{
	printf("%s\n", message);
	exit (EXIT_FAILURE);
	return (0);
}

int	ft_parse(int argc, char **argv, t_global *global)
{
	if (argc != 5 && argc != 6)
		return (1);
	if (ft_myatoi(argv[1], &global->number_of_philo))
		return (1);
	if (global->number_of_philo == 0 || global->number_of_philo > 200)
		msg_exit("Incorrect number of philosophers.");
	if (ft_myatoi(argv[2], (int *) &global->time_to_death))
		return (1);
	if (ft_myatoi(argv[3], &global->time_to_eat))
		return (1);
	if (ft_myatoi(argv[4], &global->time_to_sleep))
		return (1);
	if (argc == 6 && (ft_myatoi(argv[5], &global->number_eat)))
		return (1);
	if (global->time_to_death < 60 || global->time_to_eat < 60
		|| global->time_to_sleep < 60)
		return (msg_exit("time argument is invalid"));
	if (argc == 6 && global->number_eat <= 0)
		return (msg_exit("number of eat is invalid"));
	return (0);
}
