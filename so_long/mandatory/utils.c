/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 11:41:21 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/13 13:11:57 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	nbr_column(char **argv)
{
	int	count;

	count = 0;
	while (argv[count])
		count++;
	return (count);
}
