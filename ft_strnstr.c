/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:43:34 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/26 14:39:32 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (find[0] == '\0')
		return ((char *) str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == find[j] && find[j] && (i + j) < len)
			j++;
		if (find[j] == '\0')
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}

/*
int main() {
    const char *str = "mohamed soufiane dahani";
    const char *find = "soufiane";
    size_t len = 24;
    printf("%s", ft_strnstr(str, find, len));

    return 0;
}
*/
