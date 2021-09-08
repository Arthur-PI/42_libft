/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:37:58 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/07 15:43:01 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	u;

	u = n;
	if (n < 0)
	{
		ft_putchar('-');
		u = -n;
	}
	if (u < 10)
		ft_putchar(u + '0');
	else
	{
		ft_putnbr(u / 10);
		ft_putchar(u % 10 + '0');
	}
}
