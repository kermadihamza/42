/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:10:02 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/10 12:43:04 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		result;
	int		i;
	char	*sentence;

	i = 0;
	if (!s1)
		return (NULL);
	result = ft_strlen (s1) + ft_strlen (s2);
	sentence = malloc (sizeof(char) * (result + 1));
	if (sentence == 0)
		return (0);
	while (s1[i] != '\0')
	{
		sentence[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		sentence[ft_strlen (s1) + i] = s2[i];
		i++;
	}
	sentence[result] = '\0';
	return (sentence);
}
