/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:18:55 by hakermad          #+#    #+#             */
/*   Updated: 2022/05/09 16:20:16 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
// diff entre thread et processus, thread execute tout en meme temps et garde la meme valeur pour chaque routine


int x = 2;
int mails = 0;
pthread_mutex_t mutex;

void*	routine()
{
	for (int i = 0; i < 100000; i++)
	{
		pthread_mutex_lock(&mutex);
		mails++;
		pthread_mutex_unlock(&mutex);
		// lire mails
		// incrementer
		// ecrire mails
	}
	// sleep(3);
	// printf("Ending thread\n");
}

void*	routine2()
{
	sleep(2);
	printf("Value of x: %d\n", x);
	//printf("Process id %d\n", getpid());
	// sleep(3);
	// printf("Ending thread\n");
}

int	main(int argc, char* argv[])
{
	pthread_t t1, t2, t3, t4;
	pthread_mutex_init(&mutex, NULL);
	if (pthread_create(&t1, NULL, &routine, NULL) != 0)
	{
		return (1);
	}
	if (pthread_create(&t2, NULL, &routine, NULL) != 0)
	{
		return (2);
	}
	if (pthread_create(&t3, NULL, &routine, NULL) != 0)
	{
		return (3);
	}
	if (pthread_create(&t4, NULL, &routine, NULL) != 0)
	{
		return (4);
	}
	if (pthread_join(t1, NULL) != 0) //Pour attendre
	{
		return (5);
	}
	if (pthread_join(t2, NULL) != 0)
	{
		return (6);
	}
	if (pthread_join(t3, NULL) != 0) //Pour attendre
	{
		return (7);
	}
	if (pthread_join(t4, NULL) != 0)
	{
		return (8);
	}
	pthread_mutex_destroy(&mutex);
	printf("Number of mails: %d\n", mails);
	return (0);
}