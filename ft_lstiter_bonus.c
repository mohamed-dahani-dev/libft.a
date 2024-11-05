/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:28:07 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/05 19:01:37 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

/*
void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int main()
{
	t_list *element = ft_lstnew("Hello World");
	t_list *element2 = ft_lstnew("Hello World 2");
	t_list *element3 = ft_lstnew("Hello World 3");
	ft_lstadd_front(&element, element2);
	ft_lstadd_front(&element, element3);
	ft_lstiter(element, &print_content);
	return 0;
}
*/
