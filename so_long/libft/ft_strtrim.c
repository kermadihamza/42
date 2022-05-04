/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:04:46 by hakermad          #+#    #+#             */
/*   Updated: 2022/04/04 14:09:54 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	setting(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*word;
	int		start;
	int		end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && setting(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && setting(s1[end], set))
		end--;
	end += 1;
	if (start > end)
		return (ft_strdup(""));
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s1 + start, (end - start + 1));
	return (word);
}
