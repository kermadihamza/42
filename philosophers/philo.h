/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:46 by hakermad          #+#    #+#             */
/*   Updated: 2022/07/04 16:49:46 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <stdatomic.h>
# include <stdbool.h>     
# include <sys/time.h>
# include <inttypes.h>
# include <limits.h>

typedef struct s_global
{
	int				number_of_philo;
	int				time_to_death;
	int				time_to_eat;
	int				time_to_sleep;
	int				argc;
	int				number_eat;
	atomic_bool		dead;
	pthread_mutex_t	*forks;
	pthread_mutex_t	printf_mutex;
	int64_t			start_timer;
	struct s_philo	*philo;
}t_global;

typedef struct s_philo
{
	atomic_int				id;
	int						left_fork;
	int						right_fork;
	atomic_int_fast64_t		counter_meal;
	atomic_int_fast64_t		last_meal;
	pthread_t				thread_id;
	t_global				*global;
}t_philo;

int		ft_parse(int argc, char **argv, t_global *global);
long	real_time(void);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
void	create_thread(t_philo *philo, t_global *global);
void	*routine_thread(t_philo *philo);
int		msg_exit(char *msg);
void	ft_sleep(int64_t time);
void	print_log(t_philo *philo, char *message);
int		init_mutex(t_global *global);
void	routine_printf(t_philo *philo, char *message);
void	ft_death(t_philo *philo, t_global *global);
void	death_checker(t_philo *philo, t_global *global);
void	ft_join_destro(t_philo *philos, t_global *global);
int		ft_init_fork(t_global *global);
void	ft_mix_func(t_philo *philo, t_global *global);
void	ft_fork(t_philo *philo);
#endif
