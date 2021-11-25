/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:24:53 by apigeon           #+#    #+#             */
/*   Updated: 2021/11/23 09:22:45 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s_s;

	i = 0;
	s_s = s;
	while (i < n)
	{
		if ((unsigned)s_s[i] == (unsigned)c)
			return ((void *)s_s + i);
		i++;
	}
	return (NULL);
}
