/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:19:28 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/07 16:23:15 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisnum(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_isnum(s[i]))
			return (0);
		i++
	}
	return (1);
}
