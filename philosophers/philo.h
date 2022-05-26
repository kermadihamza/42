/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:46 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/26 17:21:46 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <stdatomic.h>
# include <sys/time.h>

typedef struct s_global
{
	int number_of_philo;
	int time_to_death;
	int time_to_eat;
	int time_to_sleep;
	pthread_t	*thread_id;
	long	start_timer;
	struct s_philo *philo;
}t_global;

typedef struct s_philo
{
	int id;
	int left;
	int	right;
	t_global *global;
}t_philo;

int		ft_parse(t_global *global, int argc, char* argv[]);
int		ft_atoi(const char *str);
long	real_time(void);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
int create_thread(t_global *global);
void routine_thread();

#endif

