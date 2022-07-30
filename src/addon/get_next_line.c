/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:45:57 by apigeon           #+#    #+#             */
/*   Updated: 2022/07/30 20:01:50 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	contains_newline(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		if (s[i++] == '\n')
			return (1);
	return (0);
}

static int	getline_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (i + 1);
		i++;
	}
	return (i);
}

static char	*extract_line(char *s, char **leftover)
{
	int		i;
	int		size;
	char	*line;

	size = getline_len(s);
	if (size == 0)
		return (NULL);
	line = malloc(size + 1);
	if (line)
		ft_strlcpy2(line, s, size + 1);
	i = size;
	while (s[size])
		size++;
	if (size - i == 0)
		return (line);
	*leftover = malloc((size - i) + 1);
	if (*leftover)
		ft_strlcpy2(*leftover, s + i, (size - i) + 1);
	return (line);
}

char	*get_next_line(int fd)
{
	int			ret;
	char		*buff;
	char		*tmp;
	char		*string;
	static char	*leftover[OPEN_MAX] = {0};

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, leftover[fd], 0) == -1)
		return (NULL);
	ret = BUFFER_SIZE;
	string = leftover[fd];
	leftover[fd] = NULL;
	while (ret == BUFFER_SIZE && !contains_newline(string))
	{
		buff = malloc(BUFFER_SIZE + 1);
		if (!buff)
			return (NULL);
		ret = read(fd, buff, BUFFER_SIZE);
		buff[ret] = 0;
		string = ft_strjoin2(string, buff);
	}
	tmp = extract_line(string, &leftover[fd]);
	free(string);
	return (tmp);
}
