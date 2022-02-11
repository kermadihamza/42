/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:27:36 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/19 11:27:06 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sort_s(va_list args)
{
	int		count;
	char	*string;

	count = 0;
	string = va_arg(args, char *);
	if (!string)
	{
		ft_putstr_fd("(null)", 1);
		count += 6;
	}
	else
	{
		count += ft_strlen(string);
		ft_putstr_fd(string, 1);
	}
	return (count);
}
