/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:53:43 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/09 12:22:14 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s_dst;
	const char	*s_src;

	i = 0;
	s_dst = dst;
	s_src = src;
	if ((size_t)dst > (size_t)src && (size_t)dst - (size_t)src - len < 0)
	{
		while (--len >= 0)
		{
			s_dst[len] = s_src[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			s_dst[i] = s_src[i];
			i++;
		}
	}
	return (dst);
}
