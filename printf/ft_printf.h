/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:31:15 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/19 14:12:06 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
void			ft_putchar_fd(char c, int fd);
void			ft_put_hex(unsigned long num, const char format, int (*f)(int));
void			ft_putnbr_fd(int n, int fd);
void			ft_putpositive_fd(unsigned int n, int fd);
void			ft_putstr_fd(char *s, int fd);
int				ft_counter(long nb);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_count_hexa(unsigned long nb);
size_t			ft_strlen(const char *str);
int				ft_sort_di(va_list args);
int				ft_sort_s(va_list args);
unsigned int	ft_sort_u(va_list args);
int				ft_sort_c(va_list args);
unsigned long	ft_sort_p(va_list args);
unsigned long	ft_sort_x(va_list args);
unsigned long	ft_sort_upperx(va_list args);
int				ft_format(const char *format, va_list args, int i);
int				ft_sort_percent(void);

#endif
