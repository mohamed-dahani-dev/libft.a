/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:36 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/07 12:32:00 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dest && dest_size == 0)
		return (ft_strlen(src));
	dest_len = ft_strlen(dest);
	if (dest_size <= dest_len)
		return (dest_size + src_len);
	i = dest_len;
	j = 0;
	while (i < dest_size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*
int main() {
	char dest[20] = "";
    const char *src = "hello world";
    ft_strlcat(dest, src, 12);
    printf("dest: %s\n", dest);
    printf("%zu",  ft_strlcat(dest, src, 11));
    return 0;
}
*/
