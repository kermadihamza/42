/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:00:09 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/27 19:00:56 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int argc, char* argv[])
{
	t_global global;
	ft_parse(&global, argc, argv);
	init_mutex(&global);
	create_thread(&global);
}
