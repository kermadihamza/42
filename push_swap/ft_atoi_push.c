#include "push_swap.h"

int	ft_atoi_push(const char *str)
{
	int 	result;
	int		sign;

	result = 0;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
		{
			sign *= -1;
		}
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str++ - '0';
		if (result < 0)
        {
            ft_putstr_fd("Error\n", 2);
            exit(1);
        }
	}
    if (*str && !(*str >= '0' && *str <= '9'))
    {
        ft_putstr_fd("Error\n", 2);
        exit(1);
    }
	return (sign * result);
}