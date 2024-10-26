/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:55:32 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/26 12:19:18 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			i;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

/*
int main() {
    const char *s = "Hello, World!";
    char c = 'W';
    size_t n = 13;

    char *result = (char *)ft_memchr(s, c, n);
    if (result) {
        printf("Found '%c' at position: %ld\n", c, result - s);
    } else {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}
*/
