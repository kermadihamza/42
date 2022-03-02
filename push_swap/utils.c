#include "./libft/libft.h"
#include "push_swap.h"

void ft_printlst(t_list *lst)
{
    while (lst)
    {
    printf("%d\n", *((int *) lst->content));
        lst = lst->next;
    }
}

void ft_swap_a(t_list **stack_a)
{
	t_list *first;
	t_list *second;

		first				= *stack_a;
		second				= (*stack_a)->next;
		(*stack_a)->next	= second->next;
		second->next		= first;
		*stack_a			= second;
		write(1, "sa\n", 3);
}

void ft_swap_b(t_list **stack_b)
{
	t_list *first;
	t_list *second;

		first				= *stack_b;
		second				= (*stack_b)->next;
		(*stack_b)->next	= second->next;
		second->next		= first;
		*stack_b			= second;
		write(1, "sb\n", 3);
}

void ft_swap_ss(t_list **stack_a, t_list **stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
	write(1, "ss\n", 3);
}

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

void ft_rotate_a(t_list **stack_a)
{
	t_list *last;
	t_list *second;

	last				= ft_lstlast(*stack_a);
	last->next			= *stack_a;
	second				= (*stack_a)->next;
	(*stack_a)->next	= NULL;
	*stack_a			= second;
	write(1, "ra\n", 3);
}

void ft_rotate_b(t_list **stack_b)
{
	t_list *last;
	t_list *second;

	last				= ft_lstlast(*stack_b);
	last->next			= *stack_b;
	second				= (*stack_b)->next;
	(*stack_b)->next	= NULL;
	*stack_b			= second;
	write(1, "rb\n", 3);
}

void ft_rotate_r(t_list **stack_a, t_list **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
	write(1, "rr\n", 3);
}

t_list *ft_one_before_last(t_list *stack_a)
{
    while (stack_a->next->next)
        stack_a = stack_a->next;
    return(stack_a);
}

void ft_reverse_retate_a(t_list **stack_a)
{
    t_list *last;
    t_list *second;
    t_list *before_last;

    before_last			= ft_one_before_last(*stack_a);
    last				= ft_lstlast(*stack_a);
    second				= (*stack_a)->next;
    last->next			= *stack_a;
    before_last->next	= NULL;
    *stack_a			= last;
	write(1, "rra\n", 4);
}

void ft_reverse_retate_b(t_list **stack_b)
{
    t_list *last;
    t_list *second;
    t_list *before_last;

    before_last			= ft_one_before_last(*stack_b);
    last				= ft_lstlast(*stack_b);
    second				= (*stack_b)->next;
    last->next			= *stack_b;
    before_last->next	= NULL;
    *stack_b			= last;
	write(1, "rrb\n", 4);
}

void ft_reverse_retate_r(t_list **stack_a, t_list **stack_b)
{
	ft_reverse_retate_a(stack_a);
	ft_reverse_retate_b(stack_b);
	write(1, "rrr\n", 4);
}

int *ft_pars(int argc, char **argv)
{
	int i;
	int *numbers;

	i = 1;
	if (argc < 2)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	numbers = malloc(sizeof(int) * (argc - 1));

	while (argc > i)
	{
		numbers[i - 1] = ft_atoi_push(argv[i]);
		i++;
	}

	return (numbers);
}