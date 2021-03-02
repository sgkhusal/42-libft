/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 01:44:54 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/01 19:30:47 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c);
void	check_isalnum(int c, int i);

void	test_ft_isalnum()
{
	printf("\n\n\n*****************************ft_isalnum function*****************************\n");

	char str_alnum[] = "09azAZ";
	char not_alnum1 = 0;
	char not_alnum2 = 47;
	char not_alnum3 = 58;
	char not_alnum4 = 64;
	char not_alnum5 = 91;
	char not_alnum6 = 96;
	char not_alnum7 = 123;
	unsigned char not_alnum8 = 255;
	char not_alnum9 = EOF;
	unsigned long int i = 0;

	/********************* test 1 - alnum *****************/
	printf("Test for string \"%s\":\n", str_alnum);
	while (i < sizeof(str_alnum) - 1)
	{
		check_isalnum(str_alnum[i], i);
		i++;
	}

	/********************* test 2 - not alnum *****************/
	printf("\nTest for char = %d, \\0\n", not_alnum1);
	check_isalnum(not_alnum1, 0);

	printf("\nTest for char = %d, %c\n", not_alnum2, not_alnum2);
	check_isalnum(not_alnum2, 0);

	printf("\nTest for char = %d, %c\n", not_alnum3, not_alnum3);
	check_isalnum(not_alnum3, 0);

	printf("\nTest for char = %d, %c\n", not_alnum4, not_alnum4);
	check_isalnum(not_alnum4, 0);

	printf("\nTest for char = %d, %c\n", not_alnum5, not_alnum5);
	check_isalnum(not_alnum5, 0);

	printf("\nTest for char = %d, %c\n", not_alnum6, not_alnum6);
	check_isalnum(not_alnum6, 0);

	printf("\nTest for char = %d, %c\n", not_alnum7, not_alnum7);
	check_isalnum(not_alnum7, 0);

	printf("\nTest for maximum value of unsigned char = %d\n", not_alnum8);
	check_isalnum(not_alnum8, 0);

	printf("\nTest for EOF value = %i\n", not_alnum9);
	check_isalnum(not_alnum9, 0);
}

void	check_isalnum(int c, int i)
{
	if (ft_isalnum(c) > 0 && isalnum(c) > 0)
		printf("OK at position %d - it is alnum\n", i);
	else if (ft_isalnum(c) == 0 && isalnum(c) == 0)
		printf("OK at position %d - it is not alnum\n", i);
	else
		{
		printf("NOT OK\n");
		printf("isalnum value: %d\n", isalnum(c));
		printf("ft_isalnum value: %d\n", ft_isalnum(c));
	}
}
