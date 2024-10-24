/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:25:22 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/24 17:06:30 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*tmp_ptr;
	size_t			i;

	tmp_ptr = (unsigned char *) str;
	i = 0;
	while (i < len)
	{
		tmp_ptr[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
/*
int main()
{
    char str[50] = "hello world!";
    ft_memset(str, '*', 5);
    printf("%s\n", str);
    return 0;
}
*/
