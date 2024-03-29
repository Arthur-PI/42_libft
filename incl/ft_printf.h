/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:36:43 by apigeon           #+#    #+#             */
/*   Updated: 2022/05/30 21:46:19 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

# define APPEND	1
# define FLUSH	2
# define FREE	4
# define CHAR	8

# define OPTIONS "cspdiuxX%"
# define O_CHAR 'c'
# define O_STRING 's'
# define O_POINTER 'p'
# define O_DECIMAL 'd'
# define O_INT 'i'
# define O_UINT 'u'
# define O_HEX 'x'
# define O_HEXMAJ 'X'
# define O_PERCENT '%'

# define FLAGS "-0.# +"
# define F_MINUS '-'
# define F_ZERO '0'
# define F_POINT '.'
# define F_HASH '#'
# define F_SPACE ' '
# define F_PLUS '+'

# define CAPS 1
# define NO_CAPS 0

# define BASE16 "0123456789abcdef"
# define BASE16_CAPS "0123456789ABCDEF"

# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

int		ft_printf(const char *format, ...);
int		buffer_manip(char *s, char option);
void	buffer_manip_char(char c, char option);

void	option_pointer(void *p);
void	option_int(int n);
void	option_uint(unsigned int n);
void	option_hex(unsigned int n);
void	option_hexcaps(unsigned int n);
void	option_char(int c);
void	option_string(char *s);

#endif
