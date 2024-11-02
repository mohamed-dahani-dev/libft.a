/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:28:07 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/02 19:47:59 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (!lst)
	{
		current = ft_lstnew(f(lst -> content));
		if (!current)
		{
			ft_lstclear(&current, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, current);
		lst = lst -> next;
	}
	return (new);
}
