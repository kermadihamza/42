/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:44 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/30 16:07:27 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int init_mutex(t_global *global)
{
    int i;

    global->forks = malloc(sizeof(pthread_mutex_t) * global->number_of_philo);
    if (!global->forks)
        return (0);
    i = 0;
    while (i < global->number_of_philo)
    {
        if (pthread_mutex_init(&global->forks[i], NULL) != 0)
            return (0);
        i++;
    }
	if (pthread_mutex_init(&global->printf_mutex, NULL) != 0)
		return (0);
    return (1);
}

void routine_thread(t_philo *philo)
{
    if (philo->id % 2 == 0)
        ft_sleep(philo->global->time_to_eat / 2);
    ft_sleep(philo->global->time_to_eat);
    while (19)
    {
        if (philo->id % 2)
        {

            pthread_mutex_lock(&philo->global->forks[philo->left_fork]);
            routine_printf(philo, "has taken a fork\n");
            pthread_mutex_lock(&philo->global->forks[philo->right_fork]);
            routine_printf(philo, "has taken a fork\n");
        }
        else
        {
            pthread_mutex_lock(&philo->global->forks[philo->right_fork]);
            routine_printf(philo, "has taken a fork\n");     
            pthread_mutex_lock(&philo->global->forks[philo->left_fork]);
            routine_printf(philo, "has taken a fork\n");
        }
        //printf("%i %i\n", philo->left_fork, philo->right_fork);
        //printf("C'est l'id %i\n", philo->id);
        routine_printf(philo, "is eating\n");
        philo->counter_meal++;
        philo->last_meal = real_time();
        ft_sleep(philo->global->time_to_eat);
        pthread_mutex_unlock(&philo->global->forks[philo->right_fork]);
        pthread_mutex_unlock(&philo->global->forks[philo->left_fork]);
        routine_printf(philo, "is sleeping\n");
        ft_sleep(philo->global->time_to_eat);
        routine_printf(philo, "is thinking\n");
}
}

void    routine_printf(t_philo *philo, char *message)
{

    pthread_mutex_lock(&philo->global->printf_mutex);
    if (philo->global->dead == 0)
        printf("%ld %d %s\n", real_time() - philo->global->start_timer, philo->id, message);
    pthread_mutex_unlock(&philo->global->printf_mutex);
}

int create_thread(t_global *global)
{
    int     i;

    i = 0;
    global->thread_id = malloc(sizeof(pthread_t) * global->number_of_philo);
    if (!global->thread_id)
        return (0);
    while (i < global->number_of_philo)
    {
        global->philo[i].id = i + 1;
		global->philo[i].left_fork = i;
        global->philo[i].right_fork = (i + 1) % global->number_of_philo;
		global->philo[i].counter_meal = 0;
        global->philo[i].last_meal = real_time();
		global->philo[i].global = global;
        if (pthread_create(&global->thread_id[i], NULL, (void *)routine_thread, &global->philo[i]))
            return (0);
        i++;
    }
    i = 0;
	while (i < global->number_of_philo)
	{
		pthread_join(global->thread_id[i], NULL);
		i++;
	}
    return (1);
}