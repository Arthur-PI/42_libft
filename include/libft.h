/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:33:58 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/08 17:26:17 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *s);

int		ft_isnum(char c);
int		ft_isupper(char c);
int		ft_islower(char c);
int		ft_isalpha(char c);
int		ft_strisnum(char *s);
int		ft_strisalpha(char *s);
int		ft_strisalnum(char *s);
int		ft_strlen(const char *s);
int		ft_contains(char *s, char c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);

char	*ft_itoa(int nbr);
char	*ft_strdup(const char *s);
char	*ft_strndup(const char *s, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strjoin(char **tab, char *sep);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);

char	**ft_split(char *s, char *sep);

#endif
