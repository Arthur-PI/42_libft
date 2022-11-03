/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:14:56 by apigeon           #+#    #+#             */
/*   Updated: 2022/11/03 19:19:57 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, int n)
{
	int		i;
	char	*new;

	new = malloc(n + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		new[i] = src[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
