/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:28:07 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/05 17:56:23 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = *lst;
		while (last -> next != NULL)
			last = last -> next;
		last -> next = new;
	}
}

/*
int main()
{
	t_list *element = ft_lstnew("Hello World");
	t_list *element2 = ft_lstnew("Hello World 2");
	t_list *element3 = ft_lstnew("Hello World 3");
	ft_lstadd_back(&element, element2);
	ft_lstadd_back(&element, element3);
	printf("%s\n", element -> next -> next -> content);
	return 0;
}
*/