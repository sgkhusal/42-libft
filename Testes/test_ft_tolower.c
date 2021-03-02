/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 22:32:53 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/01 19:36:32 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int c);
void	check_tolower(int c1, int c2, int i);

void	test_ft_tolower()
{
	printf("\n\n\n*****************************ft_tolower function*****************************\n");

	char str1[] = "09 az@AZ [`{";
	char str2[] = "09 az@AZ [`{";
	char not_print1 = 0;
	char not_print2 = 0;
	char not_print3 = 127;
	char not_print4 = 127;
	unsigned char not_print5 = 255;
	unsigned char not_print6 = 255;
	char not_print7 = EOF;
	char not_print8 = EOF;
	unsigned long i = 0;

	/********************* test 1 - char printable *****************/
	printf("Test for string \"%s\":\n", str1);
	while (i < sizeof(str1) - 1)
	{
		check_tolower(str1[i], str2[i], i);
		i++;
	}

	/********************* test 2 - char not printable *****************/

	printf("\nTest for char = %d, \\0\n", not_print1);

	check_tolower(not_print1, not_print2, 0);

	printf("\nTest for char = %d, DEL\n", not_print3);
	check_tolower(not_print3, not_print4, 0);

	printf("\nTest for maximum value of unsigned char = %d\n", not_print5);
	check_tolower(not_print5, not_print6, 0);

	printf("\nTest for EOF value = %i\n", not_print7);
	check_tolower(not_print7, not_print8, 0);
}

void	check_tolower(int c1, int c2, int i)
{
	c1 = ft_tolower(c1);
	c2 = tolower(c2);
	if (c1 == c2)
		printf("OK at position %d = %c\n", i, c1);
	else
	{
		printf("NOT OK\n");
		printf("tolower value: %d\n", c2);
		printf("ft_tolower value: %d\n", c1);
	}
}
