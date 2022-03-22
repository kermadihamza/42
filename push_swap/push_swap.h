/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:07:48 by hakermad          #+#    #+#             */
/*   Updated: 2022/03/22 14:25:49 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <fcntl.h>

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
int		ft_atoi_push(const char *str);
void	case_two(t_list **lst);
void	case_three(t_list **stack_a);
void	case_five(t_list **stack_a, t_list **stack_b);
void	the_index(t_list *stack_a, int *number, int argc);
void	case_four(t_list **stack_a, t_list **stack_b);
void	check_duplicate(char **args);
void	sort(t_list **stack_a, t_list **stack_b, int argc);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	ft_free(char **str);
int		ft_error(char *str);
void	ft_check_args(int argc, char **argv);
int     if_sort(t_list *lst);
#endif
