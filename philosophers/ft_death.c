/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_death.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:25:41 by hakermad          #+#    #+#             */
/*   Updated: 2022/08/08 15:55:29 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_death(t_philo *philo, t_global *global)
{
	int	i;

	i = 0;
	while (global->dead != true)
	{
		if ((int)(real_time() - philo[i].last_meal)
			> global->time_to_death)
		{
			pthread_mutex_lock(&global->printf_mutex);
			global->dead = true;
			if (global->number_of_philo == 0)
				printf("Arg not valid\n");
			else
				printf("%"PRId64 " %d died\n", real_time()
					- global->start_timer, global->philo[i].id + 1);
			pthread_mutex_unlock(&global->printf_mutex);
		}
		i++;
		if (i == global->number_of_philo)
			i = 0;
		if (global->argc == 6)
			death_checker(philo, global);
	}
}

void	death_checker(t_philo *philo, t_global *global)
{
	int	i;

	i = 0;
	if (global->number_eat < philo->counter_meal)
	{
		global->dead = true;
	}
	i++;
}

int	init_mutex(t_global *global)
{
	int	i;

	i = 0;
	while (i < global->number_of_philo)
	{
		if (pthread_mutex_init(&global->forks[i], NULL) != 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_join_destro(t_philo *philo, t_global *global)
{
	int	i;

	i = 0;
	while (i < global->number_of_philo)
	{
		philo[i].id = i;
		pthread_join(philo[i].thread_id, NULL);
		pthread_mutex_destroy(&global->forks[i]);
		i++;
	}
}

void	mix_functions(t_philo *philo, t_global *global)
{
	init_mutex(global);
	create_thread(philo, global);
	ft_death(philo, global);
	ft_join_destro(philo, global);
}
