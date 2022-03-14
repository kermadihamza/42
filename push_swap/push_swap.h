#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "./libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

void	ft_printlst(t_list *lst);
void	ft_swap_a(t_list **stack_a);
void	ft_swap_b(t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_rotate_a(t_list **stack_a);
void	ft_rotate_b(t_list **stack_b);
void	ft_rotate_r(t_list **stack_a, t_list **stack_b);
t_list	*ft_one_before_last(t_list *stack_a);
void	ft_reverse_retate_a(t_list **stack_a);
void	ft_reverse_retate_b(t_list **stack_b);
void	ft_reverse_retate_r(t_list **stack_a, t_list **stack_b);
int		*ft_pars(int argc, char **argv);
int	    ft_atoi_push(char *str);
void	case_two(t_list **lst);
void	case_three(t_list **stack_a);
void    case_five(t_list **stack_a, t_list **stack_b);
void	the_index(t_list *stack_a, int *number, int argc);
void	case_four(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
//void	free_stack(t_list **stack);
void	ft_free(char **str);
int	ft_error(char *str);
int	ft_check_double(t_list *stack_a);

void	ft_check_args(int argc, char **argv);

// int	do_commands(char *line, t_list **stack_a, t_list **stack_b);
// void	print_checker_res(t_list **stack_a, t_list **stack_b);
// void	ft_error(char *msg);
// char	*get_next_line(int fd);

#endif
