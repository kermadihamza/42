/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:15:31 by hakermad          #+#    #+#             */
/*   Updated: 2022/03/21 13:16:28 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_a(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;

	first = *stack_a;
	second = (*stack_a)->next;
	(*stack_a)->next = second->next;
	second->next = first;
	*stack_a = second;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_list **stack_b)
{
	t_list	*first;
	t_list	*second;

	first = *stack_b;
	second = (*stack_b)->next;
	(*stack_b)->next = second->next;
	second->next = first;
	*stack_b = second;
	write(1, "sb\n", 3);
}

void	ft_swap_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
	write(1, "ss\n", 3);
}
