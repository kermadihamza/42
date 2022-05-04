/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:33:38 by hakermad          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/04/04 13:11:38 by hakermad         ###   ########.fr       */
=======
/*   Updated: 2022/03/22 15:00:27 by hakermad         ###   ########.fr       */
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

<<<<<<< HEAD
int	ft_atoi_push(const char *str, int *numbers)
=======
int	ft_atoi_push(const char *str)
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
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
<<<<<<< HEAD
			ft_free_exit(numbers);
=======
		{
			ft_error("Error\n");
			exit(1);
		}
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
		if (result < 0)
		{
			if (result == -2147483648 && *str == '\0' && sign == -1)
				return (-2147483648);
<<<<<<< HEAD
			ft_free_exit(numbers);
		}
	}
	if (*str && !(*str >= '0' && *str <= '9'))
		ft_free_exit(numbers);
	return (sign * result);
}

void	ft_free_exit(int *numbers)
{
	free(numbers);
	ft_error("Error\n");
}
=======
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
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
