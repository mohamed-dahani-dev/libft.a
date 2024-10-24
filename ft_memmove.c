/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:39:49 by mdahani           #+#    #+#             */
/*   Updated: 2024/10/24 18:26:13 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*tmp_dest;
	char	*tmp_src;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	tmp_dest = (char *) dest;
	tmp_src = (char *) src;
	i = 0;
	if (tmp_dest > tmp_src)
	{
		while (len > 0)
		{
			tmp_dest[len] = tmp_src[len];
			len--;
		}
	}
	else
	{
		while (i++ < len)
			tmp_dest[i] = tmp_src[i];
	}
	return (dest);
}
