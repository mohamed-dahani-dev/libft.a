/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:19:11 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/28 13:38:24 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char *str, char c)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (!word)
			{
				count++;
				word = 1;
			}
		}
		else
			word = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**array;

	if (!s)
		return (NULL);
	array = (char **) malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			array[j] = (char *) malloc((i - start + 1) * sizeof (char));
			if (!array[j])
			{
				while (j > 0)
				{
					free(array[j] - 1);
					j--;
				}
				free(array);
				return (NULL);
			}
			ft_memcpy(array[j], s + start, i - start);
			array[j][i - start] = '\0';
			j++;
		}
		i++;
	}
	array[j] = '\0';
	return (array);
}

/*
int main() {
    char **result;
    result = ft_split("Hello, World! This is a test.", ' ');
    int i = 0;
    while (result[i])
    {
        printf("%s\n",result[i]);
        i++;
    }
    return 0;
}
*/