/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:14:13 by hakermad          #+#    #+#             */
/*   Updated: 2022/03/21 13:15:23 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_a(t_list **stack_a)
{
	t_list	*last;
	t_list	*second;

	last = ft_lstlast(*stack_a);
	last->next = *stack_a;
	second = (*stack_a)->next;
	(*stack_a)->next = NULL;
	*stack_a = second;
	write(1, "ra\n", 3);
}

void	ft_rotate_b(t_list **stack_b)
{
	t_list	*last;
	t_list	*second;

	last = ft_lstlast(*stack_b);
	last->next = *stack_b;
	second = (*stack_b)->next;
	(*stack_b)->next = NULL;
	*stack_b = second;
	write(1, "rb\n", 3);
}

void	ft_rotate_r(t_list **stack_a, t_list **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
	write(1, "rr\n", 3);
}
