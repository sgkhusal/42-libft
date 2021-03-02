/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 23:21:01 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/02 03:55:05 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	check_substr(char const *s, unsigned int start, size_t len);

void	test_ft_substr(void)
{
	printf("\n\n\n*****************************ft_substr function*****************************\n");

	printf("\ntest 1:\n");
	char const *str1 = "Hello World!! Welcome to 42!";
	check_substr(&str1[0], 6, 5);

	printf("\ntest 1.2:\n");
	check_substr(&str1[0], 14, 13);

	printf("\ntest 1.3:\n");
	check_substr(&str1[0], 0, 12);

	printf("\ntest 1.4:\n");
	check_substr(&str1[0], 25, 2);

	printf("\ntest 2.1: len = 0\n");
	check_substr(&str1[0], 25, 0);

	printf("\ntest 2.2: len < 0\n");
	check_substr(&str1[0], 6, -10);

	printf("\ntest 3.1: start = strlen(s)\n");
	check_substr(&str1[0], 28, 10);

	printf("\ntest 3.2: start > strlen(s)\n");
	check_substr(&str1[0], 35, 10);

	printf("\ntest 3.3: start = 0\n");
	check_substr(&str1[0], 0, 11);

	/*printf("\ntest 3.4: start < 0\n");
	check_substr(&str1[0], -10, 10);*/
	// da segmentation fault

	printf("\ntest 4: s = \\0\n");
	char str2[11];
	char const *ptr;
	ptr = &str2[0];
	str2[0] = '\0';
	check_substr((char const *)ptr, 5, 5);
}

void	check_substr(char const *s, unsigned int start, size_t len)
{
	char *ft_substr_return;
	printf("src = %s\n", s);
	printf("start = %u\n", start);
	printf("len = %lu\n", len);
	printf("s[start] = %s\n", s + start);
	printf("s[final] = %c\n", s[start + len - 1]);
	ft_substr_return = ft_substr(s, start, len);
	printf("Result:\n");
	if (ft_substr_return == NULL)
		printf("NULL\n");
	else
		puts(ft_substr_return);
}
