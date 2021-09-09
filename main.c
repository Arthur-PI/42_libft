/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:18:03 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/09 13:17:49 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

#define GRN  "\x1B[32m"
#define WHT  "\x1B[37m"

void	print_success(char *f_name)
{
	printf("%s: %sOK!%s\n", f_name, GRN, WHT);
}

void	test_strlen(void)
{
	assert(ft_strlen("abc") == 3);
	assert(ft_strlen("Hello, World !") == 14);
	assert(ft_strlen("") == 0);
	assert(ft_strlen("123\000456") == 3);
	print_success("ft_strlen");
}

int	main(void)
{
	test_strlen();
	return (0);
}
