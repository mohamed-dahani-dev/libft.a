/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:09:40 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/01 11:26:36 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;
	size_t	i;

	if (size && count > __SIZE_MAX__ / size)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, (count * size));
	return (tmp);
}

/*
int main() {
    int *array = (int *)ft_calloc(5, sizeof(int));
    size_t i = 5;
        while (i)
        {
            printf("%d\n", array[i]);
            i--;
        }
    return 0;
}
*/
