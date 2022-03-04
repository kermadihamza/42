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

void	the_index(t_list *stack_a, int *number, int argc)
{
    int i;
    int j;
    int *data;
    t_list *copy_stack_a;
    i = 0;
    int count;

    copy_stack_a = stack_a;
    data = malloc(sizeof(int) * argc);
    while(stack_a)
    {
        j = 0;
        count = 1;
        while(j < argc - 1)
        {
            if (j != i && number[j] < number[i])
                count++;
            j++;
        }
        data[i] = count;
       // (*(int *) stack_a->content) = data[i];  
        stack_a = stack_a->next;
        i++;
    }
    i = 0;
    while (copy_stack_a)
    {
        (*(int *) copy_stack_a->content) = data[i];  
        copy_stack_a = copy_stack_a->next;
        i++;
    }
}

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->content > head->next->content)
			return (0);
		head = head->next;
	}
	return (1);
}

void	free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}