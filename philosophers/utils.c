/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:37:40 by hakermad          #+#    #+#             */
/*   Updated: 2022/08/08 13:49:22 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int64_t	real_time(void)
{
	struct timeval	time;
	int64_t			res;

	gettimeofday(&time, NULL);
	res = (time.tv_sec * 1000) + (time.tv_usec / 1000);
	return (res);
}

void	ft_sleep(int64_t time)
{
	int64_t	new_time;
	int64_t	start;

	start = real_time();
	while (true)
	{
		new_time = real_time();
		if (new_time - start >= time)
			break ;
		usleep(50);
	}
}
