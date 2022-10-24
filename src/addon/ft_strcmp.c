/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:30:33 by apigeon           #+#    #+#             */
/*   Updated: 2022/10/24 22:49:19 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	c1 = (unsigned char) s1[i];
	c2 = (unsigned char) s2[i];
	return (c1 - c2);
}
