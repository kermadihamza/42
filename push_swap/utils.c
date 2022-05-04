/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:58:29 by hakermad          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/04 14:51:31 by hakermad         ###   ########.fr       */
=======
/*   Updated: 2022/03/22 15:05:01 by hakermad         ###   ########.fr       */
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

<<<<<<< HEAD
void	ft_error(char *str)
=======
int	ft_error(char *str)
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}		
<<<<<<< HEAD
	exit (1);
=======
	exit (0);
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
}

int	*ft_pars(int argc, char **argv)
{
	int	i;
	int	*numbers;

	i = 1;
	if (argc < 2)
<<<<<<< HEAD
		exit(1);
=======
	{
		exit(1);
	}
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
	numbers = malloc(sizeof(int) * (argc - 1));
	if (!numbers)
	{
		free(numbers);
<<<<<<< HEAD
		return (NULL);
	}
	while (argc > i)
	{
		numbers[i - 1] = ft_atoi_push(argv[i], numbers);
=======
		ft_error("Error\n");
	}
	if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_error("Error\n");
	while (argc > i)
	{
		numbers[i - 1] = ft_atoi_push(argv[i]);
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
		i++;
	}
	return (numbers);
}

int	if_sort(t_list *lst)
{
	int	i;

	i = 1;
	while (lst)
	{
		if (*(int *)lst->content != i)
			return (0);
		lst = lst->next;
		i++;
	}
	return (1);
<<<<<<< HEAD
}
=======
}
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
