/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:33:58 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/08 11:30:32 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

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
int		ft_strlen(char *s);
int		ft_contains(char *s, char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int n);
int		ft_strlcpy(char *dest, char *src, int n);
int		ft_strlcat(char *dest, char *src, int n);
int		ft_atoi(char *s);

char	*ft_itoa(int nbr);
char	*ft_strdup(char *s);
char	*ft_strndup(char *s, int n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, int n);
char	*ft_strjoin(char **tab, char *sep);
char	*ft_strcat(char *s1, const char *s2);

char	**ft_split(char *s, char *sep);

#endif
