#include <stdio.h>
#include "push_swap.h"

int main(int argc, char **argv)
{
    int *number;
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
    (void) stack_b;
    int i;

    i = 0;
    number = ft_pars(argc, argv);
    while(i < argc - 1)
    {
        //printf("%d\n", number[i]);
        ft_lstadd_back(&stack_a, ft_lstnew(&number[i]));
        i++;
    }
    ft_printlst(stack_a);
}