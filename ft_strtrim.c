/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:21:07 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/28 12:39:46 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);

	len = ft_strlen(s1);
	start = 0;
	while (start < len && ft_strchr(set, s1[start]))
		start++;
	end = len;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc((end - start) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	str[end - start] = '\0';
	return (str);
}

/*
int main() {
    char const *s1 = "   Hello World!   ";
    char const *set = " ";
        printf("%s\n", ft_strtrim(s1, set));
    return 0;
}
*/
