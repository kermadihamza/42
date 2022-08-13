/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:44 by hakermad          #+#    #+#             */
/*   Updated: 2022/08/13 15:25:36 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	routine_printf(t_philo *philo, char *message)
{
	pthread_mutex_lock(&philo->global->printf_mutex);
	if (philo->global->dead != true)
		printf("%"PRId64 " %d %s\n", real_time()
			-philo->global->start_timer, philo->id + 1, message);
	pthread_mutex_unlock(&philo->global->printf_mutex);
}

void	ft_fork(t_philo *philo)
{
	if (philo->id % 2)
	{
		pthread_mutex_lock(&philo->global->forks[philo->left_fork]);
		routine_printf(philo, "has taken a fork");
		pthread_mutex_lock(&philo->global->forks[philo->right_fork]);
		routine_printf(philo, "has taken a fork");
	}
	else
	{
		pthread_mutex_lock(&philo->global->forks[philo->right_fork]);
		routine_printf(philo, "has taken a fork");
		pthread_mutex_lock(&philo->global->forks[philo->left_fork]);
		routine_printf(philo, "has taken a fork");
	}
}

void	*routine_thread(t_philo *philo)
{
	if (philo->id % 2 == 0)
		ft_sleep(philo->global, philo->global->time_to_eat / 2);
	while (philo->global->dead != true)
	{
		if (philo->global->number_of_philo == 1)
			continue ;
		ft_fork(philo);
		routine_printf(philo, "is eating");
		philo->last_meal = real_time();
		ft_sleep(philo->global, philo->global->time_to_eat);
		pthread_mutex_unlock(&philo->global->forks[philo->right_fork]);
		pthread_mutex_unlock(&philo->global->forks[philo->left_fork]);
		philo->counter_meal++;
		routine_printf(philo, "is sleeping");
		ft_sleep(philo->global, philo->global->time_to_sleep);
		routine_printf(philo, "is thinking");
	}
	return (NULL);
}

void	create_thread(t_philo *philo, t_global *global)
{
	int	i;

	i = 0;
	while (i < global->number_of_philo)
	{
		philo[i].counter_meal = 0;
		philo[i].id = i;
		philo[i].global = global;
		philo[i].left_fork = i;
		philo[i].right_fork = (i + 1) % global->number_of_philo;
		philo[i].last_meal = real_time();
		pthread_create(&philo[i].thread_id, NULL,
			(void *)routine_thread, &philo[i]);
		i++;
	}
}
