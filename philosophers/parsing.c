/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:50:21 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/23 17:35:56 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
# include "ft_strncmp.c"
# include <sys/time.h>
# include "philo.h"


int	ft_parse(t_global *global, int argc, char* argv[])
{
	if(argc != 5 && argc != 6)
		return (1);
	global->number_of_philo = ft_atoi(argv[1]);
	global->time_to_death = ft_atoi(argv[2]);
	global->time_to_eat = ft_atoi(argv[3]);
	global->time_to_sleep = ft_atoi(argv[4]);
	return 0;
}

int ma_boucle_philo(t_global *global, t_philo *philo)
{
	//int i;

	while(philo->global = global->number_of_philo)
	{
		philo->id++;
	}
}


int main(int argc, char* argv[])
{
	t_global global;
	ft_parse(&global, argc, argv);
	printf("Number of Phiolosophers : %d\n", global.number_of_philo);
	printf("Time To Death : %d\n", global.time_to_death);
	printf("Time To Eat : %d\n", global.time_to_eat);
	printf("Time To Sleep : %d\n", global.time_to_sleep);
}
 
// int main(int argc, char* argv[])
// {
// 	int count = 10;
// 	int i = 0;
	
// 	printf("number_of_philosophers: %d\n", i);
	
// 	if (ft_strncmp(argv[1], "number_of_philosophers", 24) == 0)
// 	{
// 		while (i < count)
// 		{
// 			i++;
// 			printf("number_of_philosophers: %d\n", i);
// 		}
// 	}

	
// 	if (ft_strncmp(argv[2], "time_to_die", 12) == 0)
// 	{
// 		struct timeval current_time;
// 		gettimeofday(&current_time, NULL);
// 		printf("time_to_die : %ld\n",current_time.tv_sec * 1000);
// 		return 0 ;
// 	}
// }