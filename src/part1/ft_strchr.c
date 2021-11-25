/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 08:43:08 by apigeon           #+#    #+#             */
/*   Updated: 2021/11/23 11:47:29 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (ft_isascii(c))
	{
		i = 0;
		while (s[i])
		{
			if (s[i] == c)
				return ((char *)s + i);
			i++;
		}
		if (s[i] == c)
			return ((char *)s + i);
	}
	return (NULL);
}
