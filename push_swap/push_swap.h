#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "./libft/libft.h"
#include <stdio.h>

void ft_printlst(t_list *lst);
void ft_swap_a(t_list **stack_a);
void ft_swap_b(t_list **stack_b);
void ft_push_a(t_list **stack_a, t_list **stack_b);
void ft_push_b(t_list **stack_a, t_list **stack_b);
void ft_rotate_a(t_list **stack_a);
t_list *ft_one_before_last(t_list *stack_a);
void ft_reverse_retate_a(t_list **stack_a);
void ft_reverse_retate_b(t_list **stack_b);
void ft_reverse_retate_r(t_list **stack_a, t_list **stack_b);
int *ft_pars(int argc, char **argv);
int	ft_atoi_push(const char *str);
#endif
