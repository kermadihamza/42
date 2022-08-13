/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:00:09 by hakermad          #+#    #+#             */
/*   Updated: 2022/08/13 15:22:34 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	t_global	global;
	t_philo		*philo;
	int			i;

	if (ft_parse(argc, argv, &global) == 1)
	{
		printf("Arg not valid\n");
		return (0);
	}
	global.argc = argc;
	i = 0;
	if (pthread_mutex_init(&global.printf_mutex, NULL) != 0)
		return (0);
	global.dead = false;
	philo = malloc(sizeof(t_philo) * global.number_of_philo);
	if (!philo)
		return (0);
	global.philo = philo;
	global.start_timer = real_time();
	global.forks = malloc(sizeof(pthread_mutex_t) * global.number_of_philo);
	if (!global.forks)
		return (0);
	mix_functions(philo, &global);
	return (0);
}
