/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:03:35 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/18 16:20:26 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_hex(unsigned long num, const char format, int (*f)(int))
{
	if (num == 0)
		write(1, "0", 1);
	else
	{
		if (num >= 16)
		{
			ft_put_hex(num / 16, format, f);
			ft_put_hex(num % 16, format, f);
		}
		else
		{
			if (num < 10)
				ft_putchar_fd((num + '0'), 1);
			else
			{
				ft_putchar_fd(f(num + 55), 1);
			}
		}
	}
}
