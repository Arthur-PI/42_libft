/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:18:03 by apigeon           #+#    #+#             */
/*   Updated: 2021/09/10 11:35:31 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

#define GRN  "\x1B[32m"
#define WHT  "\x1B[0m"

void	print_success(char *f_name)
{
	printf("%s: %sOK!%s\n", f_name, GRN, WHT);
}

void	test_atoi(void)
{
	assert(ft_atoi(" \t\n\r\v\f123") == atoi("\t\n\r\v\f123"));
	assert(ft_atoi("--123") == atoi("--123"));
	assert(ft_atoi("-123") == atoi("-123"));
	assert(ft_atoi("+123") == atoi("+123"));
	assert(ft_atoi("-+123") == atoi("-+123"));
	assert(ft_atoi("+-123") == atoi("+-123"));
	assert(ft_atoi("++123") == atoi("++123"));
	assert(ft_atoi("-2147483648") == atoi("-2147483648"));
	assert(ft_atoi("-0") == atoi("-0"));
	assert(ft_atoi("123abc456") == atoi("123abc456"));
	assert(ft_atoi("a123b456") == atoi("a123b456"));
	assert(ft_atoi("- 123") == atoi("- 123"));
	assert(ft_atoi("123 4") == atoi("123 4"));
	assert(ft_atoi("") == atoi(""));
	print_success("ft_atoi");
}

void	test_isalnum(void)
{
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('z') == 1);
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('Z') == 1);
	assert(ft_isalnum('0') == 1);
	assert(ft_isalnum('9') == 1);
	assert(ft_isalnum('\0') == 0);
	assert(ft_isalnum('\n') == 0);
	assert(ft_isalnum('\t') == 0);
	assert(ft_isalnum(':') == 0);
	assert(ft_isalnum('/') == 0);
	assert(ft_isalnum('[') == 0);
	assert(ft_isalnum('@') == 0);
	assert(ft_isalnum('`') == 0);
	assert(ft_isalnum('{') == 0);
	print_success("islanum");
}

void	test_isupper(void)
{
	assert(ft_isupper('A') == 1);
	assert(ft_isupper('Z') == 1);
	assert(ft_isupper('a') == 0);
	assert(ft_isupper('z') == 0);
	assert(ft_isupper('0') == 0);
	assert(ft_isupper('9') == 0);
	assert(ft_isupper('@') == 0);
	assert(ft_isupper('[') == 0);
	print_success("isupper");
}

void	test_islower(void)
{
	assert(ft_islower('a') == 1);
	assert(ft_islower('z') == 1);
	assert(ft_islower('A') == 0);
	assert(ft_islower('Z') == 0);
	assert(ft_islower('0') == 0);
	assert(ft_islower('9') == 0);
	assert(ft_islower('@') == 0);
	assert(ft_islower('[') == 0);
	print_success("islower");
}

void	test_isalpha(void)
{
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('z') == 1);
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('0') == 0);
	assert(ft_isalpha('9') == 0);
	assert(ft_isalpha('@') == 0);
	assert(ft_isalpha('[') == 0);
	assert(ft_isalpha('`') == 0);
	assert(ft_isalpha('{') == 0);
	print_success("isalpha");
}

void	test_isdigit(void)
{
	assert(ft_isdigit('0') == 1);
	assert(ft_isdigit('9') == 1);
	assert(ft_isdigit('A') == 0);
	assert(ft_isdigit('Z') == 0);
	assert(ft_isdigit('a') == 0);
	assert(ft_isdigit('z') == 0);
	assert(ft_isdigit(':') == 0);
	assert(ft_isdigit('/') == 0);
	print_success("isdigit");
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
	test_islower();
	test_isupper();
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_atoi();
	return (0);
}
