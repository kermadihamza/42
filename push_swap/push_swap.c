#include "push_swap.h"

void the_index(t_list *stack_a, int *number, int argc)
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

void    case_three(t_list **stack_a)
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

void    case_five(t_list **stack_a, t_list **stack_b)
{
    int i;
    int first;
    int j;
    //int temp_stack;
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
        //ft_push_b(stack_a, stack_b);
        i++;
    }
    ft_printlst(*stack_a);
    printf("_________________\n");
    ft_printlst(*stack_b);
    printf("_________________\n");
    t_list *stack = *stack_b;
    int a = (*(int *) stack->content);
    int b = (*(int *) stack->next->content);

    if (a < b)
        ft_swap_a(stack_b);
    case_three(stack_a);
    ft_push_a(stack_a, stack_b);
    ft_push_a(stack_a, stack_b);
}