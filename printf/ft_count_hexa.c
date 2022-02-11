/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:18:11 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/18 16:19:57 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_hexa(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
	{
		nb = nb * -1;
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 16;
		count++;
	}
	return (count);
}
