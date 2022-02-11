/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:55:39 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/18 16:25:48 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_sort_u(va_list args)
{
	int				count;
	unsigned int	u;

	count = 0;
	u = va_arg(args, unsigned int);
	count += ft_counter(u);
	ft_putpositive_fd(u, 1);
	return (count);
}
