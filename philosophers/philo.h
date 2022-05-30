/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:46 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/30 15:50:36 by hakermad         ###   ########.fr       */
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
#include <stdbool.h>     
# include <sys/time.h>
# include <inttypes.h>


typedef struct s_global
{
	int				number_of_philo;
	int				time_to_death;
	int				time_to_eat;
	int				time_to_sleep;
	atomic_bool			dead;
	pthread_t		*thread_id;
	pthread_mutex_t *forks;
	pthread_mutex_t printf_mutex;
	long			start_timer;
	struct s_philo	*philo;
}t_global;

typedef struct s_philo
{
	int		id;
	int		left_fork;
	int		right_fork;
	int		counter_meal;
	int		last_meal; 
	t_global *global;
}t_philo;


int		ft_parse(t_global *global, int argc, char* argv[]);
int		ft_atoi(const char *str);
long	real_time(void);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		create_thread(t_global *global);
void	routine_thread();
int		msg_exit(char *msg);
void	ft_sleep(int64_t time);
void	print_log(t_philo *philo, char *message);
int		init_mutex(t_global *global);
void    routine_printf(t_philo *philo, char *message);

#endif

