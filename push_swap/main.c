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
    the_index(stack_a, number, argc);
    if(argc - 1 == 2)
        case_two(&stack_a);
    if(argc - 1 == 3)
        case_three(&stack_a);
    //if(argc - 1 == 4 || argc - 1 == 5)
        //case_four(&stack_a,&stack_b);
    if(argc - 1 == 4 || argc - 1 == 5)
        case_five(&stack_a,&stack_b);
     if(argc - 1 > 5)
        radix_sort(&stack_a,&stack_b);


    //case_three(&stack_a);
    //case_four(&stack_a, &stack_b);
    //radix_sort(&stack_a, &stack_b);
    //case_five(&stack_a, &stack_b);
    //ft_printlst(stack_a);
}

// int	main(int argc, char **argv)
// {
// 	t_list	**stack_a;
// 	t_list	**stack_b;

// 	if (argc < 2)
// 		return (-1);
// 	ft_pars(argc, argv);
// 	stack_a = (t_list **)malloc(sizeof(t_list));
// 	stack_b = (t_list **)malloc(sizeof(t_list));
// 	*stack_a = NULL;
// 	*stack_b = NULL;
// 	initStack(stack_a, argc, argv);
// 	if (is_sorted(stack_a))
// 	{
// 		return (0);
// 	}
// 	sort_stack(stack_a, stack_b);
// 	return (0);
// }