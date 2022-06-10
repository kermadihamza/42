/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_death.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:25:41 by hakermad          #+#    #+#             */
/*   Updated: 2022/06/10 13:32:53 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_death(t_philo *philo, t_global *global)
{
	int i;

	i = 0;
	while (global->dead == 0)
	{
		if ((int)(real_time() - philo->last_meal) > global->time_to_death)
		{
			pthread_mutex_lock(&global->printf_mutex);
			global->dead = 1;
			printf("%"PRId64" %d is dead\n", real_time() - global->start_timer, global->philo[i].id);
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
	int i;

	i = 0;
	if (global->number_eat < philo->counter_meal)
		global->dead = 1;
	i++;
}