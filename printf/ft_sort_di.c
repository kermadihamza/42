/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:27:28 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/18 16:22:58 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_di(va_list args)
{
	int	count;
	int	decimal;

	count = 0;
	decimal = va_arg(args, int);
	count += ft_counter(decimal);
	ft_putnbr_fd(decimal, 1);
	return (count);
}
