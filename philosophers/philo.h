/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:46 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/23 17:32:55 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <sys/wait.h>
# include <fcntl.h>
# include <sys/time.h>

typedef struct s_global
{
	int number_of_philo;
	int time_to_death;
	int time_to_eat;
	int time_to_sleep;
	t_philo *philo;
}t_global;

typedef struct s_philo
{
	int id;
	int left;
	int	right;
	t_global *global;
}t_philo;

int	ft_parse(t_global *global, int argc, char* argv[]);
int	ft_atoi(const char *str);


#endif

