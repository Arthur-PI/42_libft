/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:37:00 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/08 17:27:55 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (!needle[0])
		return (0);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[i])
		{
			if (!needle[j + 1])
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
