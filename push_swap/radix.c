/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:10:55 by hakermad          #+#    #+#             */
/*   Updated: 2022/03/19 16:14:09 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = *(int *)(head->content);
	max_bits = 0;
	while (head)
	{
		if (*(int *)(head->content) > max)
			max = *(int *)(head->content);
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	max_bits = ft_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((*(int *)(head_a->content) >> i) & 1) == 1)
				ft_rotate_a(stack_a);
			else
				ft_push_b(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			ft_push_a(stack_a, stack_b);
		i++;
	}
}
