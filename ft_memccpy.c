/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:21:57 by apigeon           #+#    #+#             */
/*   Updated: 2021/11/26 16:55:08 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*s_dst;
	unsigned char	*s_src;

	uc = c;
	s_dst = (unsigned char *)dst;
	s_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		s_dst[i] = s_src[i];
		if (s_src[i] == uc)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
