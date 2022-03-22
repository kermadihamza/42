/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:33:38 by hakermad          #+#    #+#             */
/*   Updated: 2022/03/22 15:00:27 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_push(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign *= -1;
		if (*str == '\0')
		{
			ft_error("Error\n");
			exit(1);
		}
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
		if (result < 0)
		{
			if (result == -2147483648 && *str == '\0' && sign == -1)
				return (-2147483648);
			ft_error("Error\n");
			exit(1);
		}
	}
	if (*str && !(*str >= '0' && *str <= '9'))
	{
		ft_error("Error\n");
		exit(1);
	}
	return (sign * result);
}
