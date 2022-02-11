/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpositive_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 13:04:13 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/18 16:21:41 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpositive_fd(unsigned int n, int fd)
{
	if (n >= 10)
	{
		ft_putpositive_fd(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + 48, fd);
	}
}
