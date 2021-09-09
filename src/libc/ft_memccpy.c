/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:28:00 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/09 12:34:09 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*s_dst;
	const char	*s_src;

	i = 0;
	s_dst = dst;
	s_src = src;
	while (i < n)
	{
		s_dst[i] = s_src[i];
		if ((unsigned)s_dst[i] == (unsigned)c)
			return (s_dst + i + 1);
		i++;
	}
	return (NULL);
}
