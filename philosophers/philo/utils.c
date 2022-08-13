/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:37:40 by hakermad          #+#    #+#             */
/*   Updated: 2022/08/13 15:25:10 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long	real_time(void)
{
	struct timeval	time;
	long			res;

	gettimeofday(&time, NULL);
	res = (time.tv_sec * 1000) + (time.tv_usec / 1000);
	return (res);
}

void	ft_sleep(t_global *global, int time)
{
	long	new_time;
	long	start;

	start = real_time();
	while (true)
	{
		new_time = real_time();
		if (new_time - start >= time)
			break ;
		if (global->dead == true)
			break ;
		usleep(100);
	}
}
