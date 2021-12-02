/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:05:09 by apigeon           #+#    #+#             */
/*   Updated: 2021/12/02 12:49:06 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ERROR 1
#define SUCCESS 0

static char	*strndupl(const char *s, size_t n)
{
	char	*dup;

	dup = malloc(sizeof(*dup) * (n + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, n + 1);
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
	int	nb_words;

	i = 0;
	nb_words = 0;
	while (s[i])
	{
		word_start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[nb_words] = strndupl(s + word_start, i - word_start);
		if (tab[nb_words++] == NULL)
			return (ERROR);
		while (s[i] && s[i] == c)
			i++;
	}
	tab[nb_words] = 0;
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
	return (tab - nb_words);
}
