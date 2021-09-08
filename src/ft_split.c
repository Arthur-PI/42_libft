/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:05:09 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/08 11:36:07 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	count_words(char *s, char *sep)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] && !ft_contains(sep, s[i]))
			i++;
		nb_words++;
		while (ft_contains(sep, s[i]))
			i++;
	}
	return (nb_words);
}

char	**ft_split(char *s, char *sep)
{
	int		i;
	int		word_start;
	int		nb_words;
	char	**tab;

	while (ft_contains(sep, *s))
		s++;
	nb_words = count_words(s, sep);
	tab = malloc(sizeof(*tab) * (nb_words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i])
	{
		word_start = i;
		while (s[i] && !ft_contains(sep, s[i]))
			i++;
		*(tab++) = ft_strndup(s + word_start, i - word_start);
		while (ft_contains(sep, s[i]))
			i++;
	}
	*(tab++) = 0;
	return (tab - nb_words);
}
