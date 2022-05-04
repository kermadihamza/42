/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:52:23 by hakermad          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/04 12:57:16 by hakermad         ###   ########.fr       */
=======
/*   Updated: 2022/03/22 15:00:27 by hakermad         ###   ########.fr       */
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
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

<<<<<<< HEAD
	copy_stack_a = stack_a;
	i = 0;
	data = malloc(sizeof(int) * argc);
	if (!data)
		ft_error("Error\n");
=======
	i = 0;
	copy_stack_a = stack_a;
	data = malloc(sizeof(int) * argc);
	if (!data)
	{
		free(data);
		ft_error("Error\n");
	}
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
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
<<<<<<< HEAD
		data[i++] = count;
		stack_a = stack_a->next;
	}
	ft_copy_stack(copy_stack_a, data);
}

void	ft_copy_stack(t_list *stack_a,	int	*data)
{
	t_list	*copy_stack_a;
	int		i;

	copy_stack_a = stack_a;
	i = 0;
	while (copy_stack_a)
	{
		(*(int *) copy_stack_a->content) = data[i];
=======
		data[i] = count;
		stack_a = stack_a->next;
		i++;
	}
	i = 0;
	while (copy_stack_a)
	{
		(*(int *)copy_stack_a->content) = data[i];
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
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