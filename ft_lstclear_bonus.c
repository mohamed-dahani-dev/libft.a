/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:28:07 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/05 18:28:04 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !*lst)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

/*
int main()
{
	t_list *element = ft_lstnew("Hello World");
	t_list *element2 = ft_lstnew("Hello World 2");
	ft_lstadd_front(&element, element2);
	ft_lstclear(&element, free);
	printf("%s\n", element -> content);
	return 0;
}
*/