/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:50:44 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/25 15:18:51 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			cc;

	i = 0;
	cc = (char) c;
	while (str[i])
	{
		if (str[i] == cc)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == cc)
		return ((char *) &str[i]);
	return (0);
}

/*
int main() {
    const char *str = "Hello, world!";
    char c = 'w';

    char *result = ft_strchr(str, c);
    if (result) {
        printf("Found %c at position: %i", c);
    } else {
        printf("'%c' not found.\n", c);
    }

    return 0;
}
*/
