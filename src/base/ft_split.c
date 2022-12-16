/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:05:09 by apigeon           #+#    #+#             */
/*   Updated: 2022/07/11 15:19:47 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ERROR 1
#define SUCCESS 0

static char	*strndupl(const char *s, size_t n)
{
	size_t	i;
	char	*dup;

	dup = malloc(sizeof(*dup) * (n + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

static int	count_words(const char *s, char c)
{
	int	i;
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		nb_words++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (nb_words);
}

static int	extract_words(const char *s, char c, char **tab)
{
	int	i;
	int	word_start;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		word_start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[word] = strndupl(s + word_start, i - word_start);
		if (tab[word] == NULL)
			return (ERROR);
		word++;
		while (s[i] && s[i] == c)
			i++;
	}
	tab[word] = 0;
	return (SUCCESS);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		nb_words;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	nb_words = count_words((char *)s + i, c);
	tab = malloc(sizeof(*tab) * (nb_words + 1));
	if (!tab)
		return (NULL);
	if (extract_words(s + i, c, tab) == ERROR)
	{
		i = 0;
		while (tab[i])
			free(tab[i++]);
		free(tab);
		return (NULL);
	}
	return (tab);
}
