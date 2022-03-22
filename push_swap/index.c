/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:52:23 by hakermad          #+#    #+#             */
/*   Updated: 2022/03/22 15:00:27 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	the_index(t_list *stack_a, int *number, int argc)
{
	int		i;
	int		j;
	int		*data;
	int		count;
	t_list	*copy_stack_a;

	i = 0;
	copy_stack_a = stack_a;
	data = malloc(sizeof(int) * argc);
	if (!data)
	{
		free(data);
		ft_error("Error\n");
	}
	while (stack_a)
	{
		j = 0;
		count = 1;
		while (j < argc - 1)
		{
			if (j != i && number[j] < number[i])
				count++;
			j++;
		}
		data[i] = count;
		stack_a = stack_a->next;
		i++;
	}
	i = 0;
	while (copy_stack_a)
	{
		(*(int *)copy_stack_a->content) = data[i];
		copy_stack_a = copy_stack_a->next;
		i++;
	}
	free(data);
}

// int	the_index(t_list *stack, int number)
// {
// 	int	i;

// 	i = 0;
// 	while (stack)
// 	{
// 		if (*(int *)stack->content == number)
// 			break ;
// 		stack = stack->next;
// 		i++;
// 	}
// 	return (i);
// }