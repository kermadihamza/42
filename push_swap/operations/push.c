#include "../push_swap.h"

void ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list *second;
	second		= (*stack_b)->next;
	ft_lstadd_front(stack_a, *stack_b);
	*stack_b	= second;
	write(1, "pa\n", 3);
}

void ft_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list *second;

	second		= (*stack_a)->next;
	ft_lstadd_front(stack_b, *stack_a);
	*stack_a	= second;
	write(1, "pb\n", 3);
}