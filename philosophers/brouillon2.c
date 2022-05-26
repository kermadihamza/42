/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:56:47 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/26 14:19:33 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *function1(void *arg)
{
	//usleep(1000000);
	int i;
	i = 0;
	while (i < 10)
	{
		printf("\033[91mthread 1: %d\033[0m\n", i);
		i++;	
	}
	pthread_exit(NULL);
}

void *function2(void *arg)
{
	int i;
	i = 0;
	while (i < 10)
	{
		printf("\033[95mthread 2: %d\033[0m\n", i);
		i++;	
	}
	pthread_exit(NULL);
}

int main(void)
{
	pthread_t t1;
	pthread_t t2;
	
	pthread_create(&t1, NULL, function1, NULL);
	pthread_create(&t2, NULL, function2, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	
	return (0);
}