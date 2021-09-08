/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:33:58 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/07 17:06:41 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
int		ft_strlen(char *s);
int		ft_contains(char *s, char c);
int		ft_isalpha(char c);
int		ft_isnum(char c);
int		ft_strisalpha(char *s);
int		ft_strisnum(char *s);
int		ft_strisalnum(char *s);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strdup(char *s);
char	*ft_strndup(char *s, int n);
char	*ft_strcpy(char *dest, char *src);
int		ft_strlcpy(char *dest, char *src, int n);

#endif
