/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:58:29 by hakermad          #+#    #+#             */
/*   Updated: 2022/03/22 15:05:01 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_error(char *str)
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}		
	exit (0);
}

int	*ft_pars(int argc, char **argv)
{
	int	i;
	int	*numbers;

	i = 1;
	if (argc < 2)
	{
		exit(1);
	}
	numbers = malloc(sizeof(int) * (argc - 1));
	if (!numbers)
	{
		free(numbers);
		ft_error("Error\n");
	}
	if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_error("Error\n");
	while (argc > i)
	{
		numbers[i - 1] = ft_atoi_push(argv[i]);
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
}