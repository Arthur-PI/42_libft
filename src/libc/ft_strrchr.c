/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 08:46:12 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/09 08:54:16 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c)
{
	int	i;

	if (ft_isascii(c))
	{
		i = ft_strlen(s);
		while (i >= 0)
		{
			if (s[i] == c)
				return ((char *)s + i);
			i--;
		}
	}
	return (NULL);
}
