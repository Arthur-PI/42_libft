/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:05:09 by apigeon           #+#    #+#             */
/*   Updated: 2021/11/25 21:08:30 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	contain_char(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*strndupl(const char *s, size_t n)
{
	char	*dup;

	dup = malloc(sizeof(*dup) * (n + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, n + 1);
	return (dup);
}

static int	count_words(char *s, char *sep)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] && !contain_char(sep, s[i]))
			i++;
		nb_words++;
		while (contain_char(sep, s[i]))
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

	while (contain_char(sep, *s))
		s++;
	nb_words = count_words(s, sep);
	tab = malloc(sizeof(*tab) * (nb_words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i])
	{
		word_start = i;
		while (s[i] && !contain_char(sep, s[i]))
			i++;
		*(tab++) = strndupl(s + word_start, i - word_start);
		while (contain_char(sep, s[i]))
			i++;
	}
	*(tab++) = 0;
	return (tab - nb_words);
}
