/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 09:44:00 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/14 15:39:40 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*word;
	size_t			count;

	word = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (word[count] == (unsigned char)c)
			return ((void *)&word[count]);
		count++;
	}
	return (0);
}
