#include "push_swap.h"

int	ft_atoi_push(char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (str[i] != '\0')
		ft_error("Error\n");
	if (result > 2147483647 || result < -2147483648 || (result == -1 && sign == 1))
		ft_error("Error\n");
	result *= sign;
	return (result);
}