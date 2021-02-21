/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:12:08 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/15 20:02:40 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
//#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	test_ft_bzero()
{
	printf("\n\n\n*****************************ft_bzero function*****************************\n");

	/* Testing bzero function */
    char str1[] = "Hello World!! Welcome to 42.";
	char str2[] = "Hello World!! Welcome to 42.";
	int n = 12;
	char c = str1[n];
	puts (str1);
	printf("bzero function: n = %d\n", n);
	bzero(str1, n);
	int i = 0;
	while (str1[i] == '\0')
		i++;
	if (i == n && str1[i - 1] == '\0')
		printf("OK\n");
	else
		printf("not OK\n");
	if (str1[i] == c)
		printf("position %d - not null: OK\n", i);
    printf("str: \n%s\nif empty --> OK\n\n", str1);

	printf("---------------------------------------------------------------------------\n");
	/* Testing ft_bzero function */
	printf("test 1 ft_bzero function:\n");
	puts (str2);
	printf("n = %d\n", n);
	ft_bzero(str2, n);
	i = 0;
	while (str2[i] == '\0')
		i++;
	if (i == n && str2[i - 1] == '\0')
		printf("OK\n");
	else
		printf("not OK\n");
	if (str2[i] == c)
		printf("position %d - not null: OK\n", i);
    printf("str: \n%s\nif empty --> OK\n\n", str2);

	/* Test 2 - n = 0 */
	printf("---------------------------------------------------------------------------\n");
	printf("test 2 ft_bzero function:\n");
	char str3[100];
	n = 0;
	memset(str3, 'A', 100);
	puts (str3);
	printf("n = %d\n", n);
	ft_bzero(str3, n);
	if (str3[0] == 'A')
		printf("OK\n");
	printf("str: \n%s\nif no modification --> OK\n\n", str3);

	/* Test 3 */
	printf("---------------------------------------------------------------------------\n");
	printf("test 3 ft_bzero function:\n");
	n = 42;
	puts (str3);
	printf("n = %d\n", n);
	ft_bzero(str3, n);
	i = 0;
	while (str3[i] == '\0')
		i++;
	if (i == n && str3[i - 1] == '\0')
		printf("OK\n");
	else
		printf("not OK\n");
	if (str3[i] == c)
		printf("position %d - not null: OK\n", i);
    printf("str: \n%s\nif empty --> OK\n\n", str3);
}
