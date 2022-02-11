/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_upperx.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:09:29 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/18 16:26:14 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_sort_upperx(va_list args)
{
	int				count;
	unsigned long	x;

	count = 0;
	x = va_arg(args, unsigned int);
	count += ft_count_hexa(x);
	ft_put_hex(x, 1, ft_toupper);
	return (count);
}
