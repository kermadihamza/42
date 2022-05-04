/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:01:32 by hakermad          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/04 15:09:20 by hakermad         ###   ########.fr       */
=======
/*   Updated: 2022/03/22 14:23:24 by hakermad         ###   ########.fr       */
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
<<<<<<< HEAD
	int		*number;
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = 0;
	ft_check_args(argc, argv);
	number = ft_pars(argc, argv);
	while (i < argc - 1)
		ft_lstadd_back(&stack_a, ft_lstnew(&number[i++]));
	the_index(stack_a, number, argc);
	if (if_sort(stack_a))
	{
		free(number);
		ft_lstclear(&stack_a, NULL);
		exit(0);
	}
	ft_sort(argc, &stack_a, &stack_b);
	free(number);
	ft_lstclear(&stack_a, NULL);
	ft_lstclear(&stack_b, NULL);
	system("leaks push_swap");
=======
	t_list	**stack_a;
	t_list	**stack_b;
	int		*number;
	int		i;

	i = 0;
	if (argc < 2)
		return (-1);
	ft_check_args(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	number = ft_pars(argc, argv);
	while (i < argc - 1)
	{
		ft_lstadd_back(stack_a, ft_lstnew(&number[i]));
		i++;
	}
	the_index(*stack_a, number, argc);
	if (if_sort(*stack_a))
	{
		free(number);
		ft_lstclear(stack_a, NULL);
		ft_lstclear(stack_b, NULL);
		free(stack_a);
		free(stack_b);
		return (0);
	}
	sort(stack_a, stack_b, argc);
	free(number);
	ft_lstclear(stack_a, NULL);
	ft_lstclear(stack_b, NULL);
	free(stack_a);
	free(stack_b);
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
}
