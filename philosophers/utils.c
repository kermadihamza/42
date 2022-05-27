/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:37:40 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/27 17:15:00 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (i == (n - 1))
			return (0);
		++i;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	res;

	i = 0;
	res = 0;
	if (str[i] == '-')
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
	{
			res = res * 10 + str[i] - '0';
			i++;
	}
	if (str[i] != '\0')
		return (-1);
	return (res);
}

long	real_time(void)
{
	long	res;
	struct timeval time;
	
	gettimeofday(&time, NULL);
	res = (time.tv_sec * 1000) + (time.tv_usec / 1000);
	return (res);
}

void	ft_sleep(t_global *global, int total_time)
{
	int start;

	start = real_time();
	while (global->dead == false)
	{
		if (real_time() - start >= total_time)
			break;
		usleep(100);
	}
}