/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:00:09 by hakermad          #+#    #+#             */
/*   Updated: 2022/06/10 15:14:47 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int argc, char* argv[])
{
	t_global global;
	//t_philo philo;
	
	ft_parse(&global, argc, argv);
	global.argc = argc;
	if (pthread_mutex_init(&global.printf_mutex, NULL) != 0)
		return (0);
	global.dead = 0;
	init_mutex(&global);
	//ft_death(&philo, &global);
	create_thread(&global);
}
