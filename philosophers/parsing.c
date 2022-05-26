/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:50:21 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/26 17:25:45 by hakermad         ###   ########.fr       */
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
		return (1);
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

// int ma_boucle_philo(t_global *global, t_philo *philo)
// {
// 	//int i;

// 	while(philo->global = global->number_of_philo)
// 	{
// 		philo->id++;
// 	}
// }


int main(int argc, char* argv[])
{
	t_global global;
	ft_parse(&global, argc, argv);
	// printf("Philosopher number %d time to death %ld\n", global.number_of_philo, global.start_timer);
	// printf("Number of Phiolosophers : %d\n", global.number_of_philo);
	// printf("Time To Death : %d\n", global.time_to_death);
	// printf("Time To Eat : %d\n", global.time_to_eat);
	// printf("Time To Sleep : %d\n", global.time_to_sleep);
	create_thread(&global);
}
