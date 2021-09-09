/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:18:06 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/09 09:00:03 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len;
	char	*res;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (NULL);
	*res = 0;
	ft_strcat(res, s1);
	ft_strcat(res, s2);
	return (res);
}
