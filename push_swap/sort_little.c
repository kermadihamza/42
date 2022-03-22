/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_little.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:14:45 by hakermad          #+#    #+#             */
/*   Updated: 2022/03/21 18:23:23 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_two(t_list **lst)
{
	if (*(int *)(*lst)->content > *(int *)(*lst)->next->content)
		ft_swap_a(lst);
}

void	case_three(t_list **stack_a)
{
    t_list *stack = *stack_a;
    int a = (*(int *) stack->content);
    int b = (*(int *) stack->next->content);
    int c = (*(int *) stack->next->next->content);

    if (a < b && b < c)
        return ;
    if (a > b && a < c)
        ft_swap_a(stack_a);
    else if (a > b && b > c)
    {
        ft_swap_a(stack_a);
        ft_reverse_retate_a(stack_a);
    }
    else if (a > b && b < c)
        ft_rotate_a(stack_a);
    else if (a < b && a < c)
    {
        ft_swap_a(stack_a);
        ft_rotate_a(stack_a);
    }
    else if (a < b && b > c)
        ft_reverse_retate_a(stack_a);
}

void	case_four(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;
	t_list	*ptr;

	i = 0;
	j = 0;
	while (i++ < 2)
	{
		ptr = *stack_a;
		j = 0;
		while (ptr)
		{
			if ((*(int *) ptr->content) < 2)
				break ;
			ptr = ptr->next;
			j++;
		}
		if (j <= 3)
		{
			while (j-- > 0)
				ft_rotate_a(stack_a);
		}
		else
		{
			while (j++ < 4)
				ft_reverse_retate_a(stack_a);
		}
		ft_push_b(stack_a, stack_b);
		i++;
	}
	case_three(stack_a);
	ft_push_a(stack_a, stack_b);
}

void case_five(t_list **stack_a, t_list **stack_b)
{
    int i;
    int j;
    t_list *ptr;
    i = 0;
    j = 0;
    while (i++ < 3)
    {
        ptr = *stack_a;
        j = 0;
        while(ptr)
        {
            if((*(int *) ptr->content) < 3)
                break;
            ptr = ptr->next;
            j++;
        }
        if (j <= 3)
        {
            while (j-- > 0)
                ft_rotate_a(stack_a);
        }
        else
        {
            while (j++ < 5)
                ft_reverse_retate_a(stack_a);
        }
        ft_push_b(stack_a, stack_b);
        i++;
    }
    t_list *stack = *stack_b;
    int a = (*(int *) stack->content);
    int b = (*(int *) stack->next->content);
    if(a < b)
        ft_swap_b(stack_b);
    case_three(stack_a);
    ft_push_a(stack_a, stack_b);
    ft_push_a(stack_a, stack_b);
}
