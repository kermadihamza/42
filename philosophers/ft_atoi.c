#include "philo.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
	}
	// if (*str && !(*str >= '0' && *str <= '9'))
	// 	ft_free_exit(numbers);
	return (sign * result);
}
