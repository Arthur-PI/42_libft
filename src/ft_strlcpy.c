/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:04:26 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/07 17:07:45 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n - 1)
		dest[i] = src[i];
	dest[i] = 0;
	while (src[i])
		i++;
	return (i);
}
