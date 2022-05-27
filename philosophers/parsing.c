/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:50:21 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/27 19:00:38 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>
# include "philo.h"


int	ft_parse(t_global *global, int argc, char* argv[])
{
	int i;
	i = 0;
	if(argc != 5 && argc != 6)
		return (msg_exit("Please check the number of your argument"));
	global->number_of_philo = ft_atoi(argv[1]);
	global->time_to_death = ft_atoi(argv[2]);
	global->time_to_eat = ft_atoi(argv[3]);
	global->time_to_sleep = ft_atoi(argv[4]);
	global->philo = malloc(sizeof(t_philo) * global->number_of_philo);
	while (i < global->number_of_philo)
	{
		global->philo[i].id = i;
		global->philo[i].global = global;
		i++;
	}
	global->start_timer = real_time();
	return (1);
}
