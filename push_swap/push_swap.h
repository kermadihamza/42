/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:07:48 by hakermad          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/04 15:12:08 by hakermad         ###   ########.fr       */
=======
/*   Updated: 2022/03/22 14:25:49 by hakermad         ###   ########.fr       */
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
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
<<<<<<< HEAD
int		ft_atoi_push(const char *str, int *numbers);
void	ft_free_exit(int *numbers);
void	case_two(t_list **stack_a);
void	case_three(t_list **stack_a);
void	case_five(t_list **stack_a, t_list **stack_b);
void	the_index(t_list *stack_a, int *number, int argc);
void	ft_copy_stack(t_list *stack_a,	int	*data);
void	case_four(t_list **stack_a, t_list **stack_b);
void	ft_sort(int argc, t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
void	ft_error(char *str);
void	ft_check_args(int argc, char **argv);
int		if_sort(t_list *lst);
=======
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
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
#endif
