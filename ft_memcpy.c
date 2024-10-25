/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:51:58 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/24 19:32:33 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	tmp_dest = (unsigned char *) dest;
	tmp_src = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}

/*
int main() {
    char src[] = "hello world!";
    char dest[50];
    ft_memcpy(dest, src, sizeof(src));
    printf("%s", dest);
    return 0;
}
*/
