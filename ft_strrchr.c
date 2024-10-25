/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:20:40 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/25 15:34:24 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int	i;
	char			*result;
	char			cc;

	i = 0;
	result = NULL;
	cc = (char) c;
	while (str[i])
	{
		if (str[i] == cc)
			result = (char *) &str[i];
		i++;
	}
	if (str[i] == cc)
		result = ((char *) &str[i]);
	return (result);
}

/*
int main() {
    const char *str = "Hello, world!";
    char c = 'w';

    char *result = ft_strrchr(str, c);
    if (result) {
        printf("Found %c at position: %i", c);
    } else {
        printf("'%c' not found.\n", c);
    }

    return 0;
}
*/
