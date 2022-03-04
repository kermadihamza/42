#include "push_swap.h"

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
	int i;
	int j;
	int k;
	int l;
	
	i = *(int *)(*stack_a)->content;
	j = *(int *)(*stack_a)->next->content;
	k = *(int *)(*stack_a)->next->next->content;
	l = *(int *)(*stack_a)->next->next->next->content;
	
	if (i == 0 && j == 1 && k == 2 && l == 3)
		return ;
	if (i == 0)
		ft_push_b(stack_a, stack_b);
	else if (j == 0)
	{
		ft_swap_a(stack_a);
		ft_push_b(stack_a, stack_b);
	}
	else if (k == 0)
	{
		ft_reverse_retate_a(stack_a);
		ft_reverse_retate_a(stack_a);
		ft_push_b(stack_a, stack_a);
	}
	else
	{
		ft_reverse_retate_a(stack_a);
		ft_push_b(stack_a, stack_b);
	}
	case_three(stack_a);
	ft_push_a(stack_b, stack_a);
}

void	case_five(t_list **stack_a, t_list **stack_b)
{
    int i;
    int first;
    int j;
    t_list *temp_stack;

    i = 0;
    first = 0;
    j = 0;
    (void) stack_b;

    while(i++ < 3)
    {
        temp_stack = *stack_a;
        j = 0;
        while (temp_stack)
        {
            if ((*(int *) temp_stack->content) < 3)
            {
                first = j;
            }
            temp_stack = temp_stack->next;
            j++;
        }
        if (first <= 3)
        {
            while (first-- > 0)
                ft_rotate_a(stack_a);
        }
        else
        {
            while (first++ < 5)
                ft_reverse_retate_a(stack_a);
        }
        ft_push_b(stack_a, stack_b);
        i++;
    }
    //ft_printlst(*stack_a);
    //printf("_________________\n");
    //ft_printlst(*stack_b);
    //printf("_________________\n");
    t_list *stack = *stack_b;
    int a = (*(int *) stack->content);
    int b = (*(int *) stack->next->content);

    if (a < b)
        ft_swap_a(stack_b);
    case_three(stack_a);
    ft_push_a(stack_a, stack_b);
    ft_push_a(stack_a, stack_b);
}

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (is_sorted(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		ft_swap_a(stack_a);
	else if (size == 3)
		case_three(stack_a);
	else if (size == 4)
		case_four(stack_a, stack_b);
	else if (size == 5)
		case_five(stack_a, stack_b);
}
