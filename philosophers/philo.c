/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:44 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/26 17:51:29 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void routine_thread()
{
	printf("??? Routine thread\n");
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