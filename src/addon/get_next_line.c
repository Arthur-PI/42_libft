/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_v2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:16:59 by apigeon           #+#    #+#             */
/*   Updated: 2022/07/31 23:04:31 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_until_end(char *src, char *dst)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

static char	*extract_line_and_save(char **line, char *save, int size)
{
	char	*tmp_save;

	tmp_save = malloc(ft_strlen(save + size) + 1);
	if (!tmp_save)
		return (NULL);
	copy_until_end(save + size, tmp_save);
	*line = malloc(size + 1);
	if (*line)
	{
		save[size] = 0;
		copy_until_end(save, *line);
	}
	free(save);
	return (tmp_save);
}

static char	*read_line(int fd, char **line, char *save)
{
	int		ret;
	char	*tmp;
	char	*buff;

	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	tmp = ft_strchr(save, '\n');
	while (tmp == NULL && ret != 0)
	{
		ret = read(fd, buff, BUFFER_SIZE);
		if (ret == -1)
		{
			free(buff);
			free(save);
			return (NULL);
		}
		buff[ret] = 0;
		tmp = ft_strjoin(save, buff);
		free(save);
		save = tmp;
		tmp = ft_strchr(save, '\n');
	}
	free(buff);
	return (extract_line_and_save(line, save, (save - tmp) + 1));
}

char	*get_next_line(int fd)
{
	char	*line;
	char	*save[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	line = NULL;
	if (!save[fd])
		save[fd] = ft_strdup("");
	save[fd] = read_line(fd, &line, save[fd]);
	return (line);
}
