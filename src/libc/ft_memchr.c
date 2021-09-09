/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:24:53 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/09 12:27:26 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*s_s;

	i = 0;
	s_s = s;
	while (i < n)
		if (s_s[i] == c)
			return ((void *)s_s + i);
	return (NULL);
}
