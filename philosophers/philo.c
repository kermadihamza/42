/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:44 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/27 19:03:18 by hakermad         ###   ########.fr       */
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
    return (1);
}

void routine_thread(t_philo *philo)
{
    if (philo->id % 2 == 0)
        ft_sleep(philo->global, 50);
    if (philo->global->number_of_philo > 1)
        {
            pthread_mutex_lock(&philo->global->forks[philo->left_fork]);
	        printf("has taken a fork\n");
            pthread_mutex_lock(&philo->global->forks[philo->right_fork]);
	        printf("has taken a fork\n");
	        printf("is eating\n");
            pthread_mutex_unlock(&philo->global->forks[philo->left_fork]);
            pthread_mutex_unlock(&philo->global->forks[philo->right_fork]);
        }
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
        if (pthread_create(&global->thread_id[i], NULL, (void *)routine_thread,
                &(global->philo[i])) != 0)
            return (0);
        i++;
    }
    i = 0;
    return (1);
}