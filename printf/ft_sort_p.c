/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:02:06 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/18 16:23:32 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_sort_p(va_list args)
{
	int				count;
	unsigned long	hexa;

	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	hexa = va_arg(args, unsigned long);
	count += ft_count_hexa(hexa);
	ft_put_hex(hexa, 1, ft_tolower);
	return (count);
}
