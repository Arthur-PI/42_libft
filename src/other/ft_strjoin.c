/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:18:06 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/08 17:28:29 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char **tab, char *sep)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	while (tab[i])
		len += ft_strlen(tab[i]);
	len += (i - 1) * ft_strlen(sep);
	res = malloc(sizeof(*res) * (len + 1));
	if (!res)
		return (res);
	i = 0;
	while (tab[i])
	{
		ft_strcat(res, tab[i]);
		if (tab[i + 1])
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
