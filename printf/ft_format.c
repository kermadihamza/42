/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:56:50 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/19 14:13:40 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args, int i)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_sort_c(args);
	else if (format[i] == 's')
		count += ft_sort_s(args);
	else if (format[i] == 'p')
		count += ft_sort_p(args);
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_sort_di(args);
	else if (format[i] == 'u')
		count += ft_sort_u(args);
	else if (format[i] == 'x')
		count += ft_sort_x(args);
	else if (format[i] == 'X')
		count += ft_sort_upperx(args);
	else if (format[i] == '%')
		count += ft_sort_percent();
	return (count);
}
