/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:12:11 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/21 00:23:10 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
//#include "libft.h"

void	*ft_memset(void *s, int c, size_t len);
void	check_memset(char *str1, char *str2);

void	test_ft_memset()
{
	printf("\n\n\n*****************************ft_memset function*****************************\n");

	/* Testing memset function */
	printf("test 1:\n");
	char str1[] = "Hello world!! Welcome to 42!";
	char str2[] = "Hello world!! Welcome to 42!";
	printf("memset function:\n");
	puts(str1);
	memset(str1, 48, 10);
	puts(str1);
	printf("ft_memset function:\n");
	puts(str2);
	ft_memset(str2, 48, 10);
	puts(str2);
	check_memset(&str1[0], &str2[0]);

	printf("\ntest 2:\n");
	size_t n = 45;
	char str3[n+1];
	str3[n+1] = '\0';
	memset(str3, 'A', n);
	puts(str3);
	char str4[n+1];
	str4[n+1] = '\0';
	//ft_memset(str4, '\0', 38);
	ft_memset(str4, 'A', n);
	puts(str4);
	check_memset(&str3[0], &str4[0]);

	printf("\ntest 3:\n");
	ft_memset(str4, '\0', 10);
	puts(str4);
	if (strlen(str4) == 0)
		printf("OK for null");
	else
		printf("NOT OK for null");

	printf("\ntest 4:\n");
	ft_memset(str4, 'A', 0);
	puts(str4);
	if (strlen(str4) == 0)
		printf("OK");
	else
		printf("NOT");
}

void	check_memset(char *str1, char *str2)
{
	size_t i = 0;

	if (strlen(str1) != strlen(str2))
	{
		printf("NOT OK\n");
		printf("string final size from memset function: %lu\n", strlen(str1));
		printf("string final size from ft_memset function: %lu\n", strlen(str2));
	}
	else
	{
		while (i < strlen(str1))
		{
			if (str1[i] != str2[i])
			{
				printf("NOT OK at position %lu\n", i);
				printf("memset value: %c\n", str1[i]);
				printf("ft_memset value: %c\n", str2[i]);
			}
			else
				printf("OK at position %lu\n", i);
			i++;
		}
	}
}
