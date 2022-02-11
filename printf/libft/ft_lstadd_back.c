/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:04:45 by hakermad          #+#    #+#             */
/*   Updated: 2022/01/12 14:26:16 by hakermad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last_element;
	t_list	*ptr;

	ptr = *alst;
	if (ptr == NULL)
	{
		*alst = new;
		return ;
	}
	last_element = ft_lstlast(ptr);
	last_element->next = new;
}
