/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:28:07 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/05 19:28:40 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		current = ft_lstnew(new_content);
		if (!current)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, current);
		lst = lst -> next;
	}
	return (new_list);
}

/*
void *ft_strtoupper(void *str)
{
    char *original_str = (char *)str;
    char *new_str = strdup(original_str);

    if (new_str == NULL)
        return NULL;

    int i = 0;
    while (new_str[i] != '\0')
    {
        new_str[i] = ((unsigned char)new_str[i] - 32);
        i++;
    }
    return (void *)new_str;
}

void ft_free(void *content)
{
    free(content);
}

int main()
{
    t_list *lst = ft_lstnew("hello");
    t_list *new_list = ft_lstmap(lst, ft_strtoupper, ft_free);
    while (new_list)
    {
        printf("%s\n", (char *)new_list->content);
        new_list = new_list->next;
    }
    ft_lstclear(&lst, ft_free);
    ft_lstclear(&new_list, ft_free);
    return 0;
}
*/
