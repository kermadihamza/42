/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:59:16 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/18 16:22:05 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_c(va_list args)
{
	int	count;

	count = 0;
	count += 1;
	ft_putchar_fd(va_arg(args, int), 1);
	return (count);
}
