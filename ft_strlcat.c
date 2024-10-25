/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:36 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/25 14:45:18 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dest_size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_size <= dest_len)
		return (dest_len + src_len);
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
    char dest[20] = "Hello, ";
    const char *src = "world!";

    size_t result = ft_strlcat(dest, src, sizeof(dest));
    printf("dest: %s\n", dest);
    printf("Total length after concatenation: %i\n", result);

    return 0;
}
*/
