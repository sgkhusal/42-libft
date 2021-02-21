/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 02:09:44 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/16 14:37:36 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c);
void	check_isprint(int c, int i);

void	test_ft_isprint()
{
	printf("\n\n\n*****************************ft_isprint function*****************************\n");

	char str_print1[] = "09azAZ";
	char str_ascii2 = 32;
	char str_ascii3 = 126;
	char not_print1 = 0;
	char not_print2 = 31;
	char not_print3 = 127;
	unsigned char not_print4 = 255;
	char not_print5 = EOF;
	unsigned char not_print6 = 132;
	int i = 0;

	/********************* test 1 - printable *****************/
	printf("Test for string \"%s\":\n", str_print1);
	while (i < sizeof(str_print1) - 1)
	{
		check_isprint(str_print1[i], i);
		i++;
	}

	printf("\nTest for char = %d, space\n", str_ascii2);
	check_isprint(str_ascii2, 0);

	printf("\nTest for char = %d, %c\n", str_ascii3, str_ascii3);
	check_isprint(str_ascii3, 0);

	/********************* test 2 - not printable *****************/

	printf("\nTest for char = %d, \\0\n", not_print1);
	check_isprint(not_print1, 0);

	printf("\nTest for char = %d\n", not_print2);
	check_isprint(not_print2, 0);

	printf("\nTest for char = %d, DEL\n", not_print3);
	check_isprint(not_print3, 0);

	printf("\nTest for maximum value of unsigned char = %d\n", not_print4);
	check_isprint(not_print4, 0);

	printf("\nTest for EOF value = %i\n", not_print5);
	check_isprint(not_print5, 0);

	printf("\nTest for char = %d, %c\n", not_print6, not_print6);
	check_isprint(not_print6, 0);
}

void	check_isprint(int c, int i)
{
	if (ft_isprint(c) > 0 && isprint(c) > 0)
		printf("OK at position %d - it is printable\n", i);
	else if (ft_isprint(c) == 0 && isprint(c) == 0)
		printf("OK at position %d - it is not printable\n", i);
	else
		{
		printf("NOT OK\n");
		printf("isprint value: %d\n", isprint(c));
		printf("ft_isprint value: %d\n", ft_isprint(c));
	}
}
