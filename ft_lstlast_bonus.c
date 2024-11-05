/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:28:07 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/05 17:48:15 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/*
int main()
{
	t_list *element = ft_lstnew("Hello World");
	t_list *element2 = ft_lstnew("Hello World 2");
	t_list *element3 = ft_lstnew("Hello World 3");
	ft_lstadd_front(&element, element2);
	ft_lstadd_front(&element, element3);
	printf("%s\n", ft_lstlast(element) -> content);
	return 0;
}
*/