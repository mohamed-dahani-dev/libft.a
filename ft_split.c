/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:53:05 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/04 20:35:39 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
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
			if (word == 0)
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

static int	ft_get_len_word(const char *str, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] && (str[i] != c))
	{
		len++;
		i++;
	}
	return (len);
}

static	void	ft_free_all(char **strings, int i)
{
	while (i--)
		free(strings[i]);
	free(strings);
}

static	char	*ft_get_word(const char *str, char c)
{
	char	*word;
	int		i;
	int		len_word;

	len_word = ft_get_len_word(str, c);
	word = (char *)malloc((len_word + 1) * sizeof(char));
	if (!word)
	{
		return (NULL);
	}
	i = 0;
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;

	strings = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	i = 0;
	while (*s && s)
	{
		while (*s && (*s == c))
			s++;
		if (*s)
		{
			strings[i++] = ft_get_word(s, c);
			if (strings[i - 1] == NULL)
			{
				ft_free_all(strings, i - 1);
				return (NULL);
			}
		}
		while (*s && (*s != c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}

/*
int main() {
    char **result = ft_split("hello, is, me", ',');
    int i = 0;
    while (result[i])
    {
        printf("%s \n", result[i]);
        i++;
    }
    return 0;
}
*/