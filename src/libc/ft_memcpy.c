/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:56:10 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/09 12:21:33 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
