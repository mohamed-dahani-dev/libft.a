/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:15:38 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/25 12:27:29 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	unsigned int	i;
	size_t			src_len;

	src_len = ft_strlen(src);
	if (dest_size == 0)
		return (src_len);
	i = 0;
	while (i < dest_size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (dest_size > 0)
		dest[i] = '\0';
	return (src_len);
}
/*
int main() {
    char src[] = "Hello, World!";
    char dest[20];
    size_t src_len;
    src_len = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("dest: %s\n", dest);
    printf("Source Length: %i\n", src_len);

    return 0;
}
*/
