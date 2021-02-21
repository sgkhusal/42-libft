/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 02:06:50 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/16 02:56:40 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c);
void	check_isascii(int c, int i);

void	test_ft_isascii()
{
	printf("\n\n\n*****************************ft_isascii function*****************************\n");

	char str_ascii1[] = "09azAZ";
	char str_ascii2 = 0;
	char str_ascii3 = 127;
	unsigned char not_ascii1 = 128;
	unsigned char not_ascii2 = 255;
	char not_ascii3 = EOF;
	int i = 0;

	/********************* test 1 - ascii *****************/
	printf("Test for string \"%s\":\n", str_ascii1);
	while (i < sizeof(str_ascii1) - 1)
	{
		check_isascii(str_ascii1[i], i);
		i++;
	}

	printf("\nTest for char = %d, \\0\n", str_ascii2);
	check_isascii(str_ascii2, 0);

	printf("\nTest for char = %d\n", str_ascii3);
	check_isascii(str_ascii3, 0);

	/********************* test 2 - not ascii *****************/

	printf("\nTest for char = %d\n", not_ascii1);
	check_isascii(not_ascii1, 0);

	printf("\nTest for maximum value of unsigned char = %d\n", not_ascii2);
	check_isascii(not_ascii2, 0);

	printf("\nTest for EOF value = %i\n", not_ascii3);
	check_isascii(not_ascii3, 0);
}

void	check_isascii(int c, int i)
{
	if (ft_isascii(c) > 0 && isascii(c) > 0)
		printf("OK at position %d - it is ascii\n", i);
	else if (ft_isascii(c) == 0 && isascii(c) == 0)
		printf("OK at position %d - it is not ascii\n", i);
	else
		{
		printf("NOT OK\n");
		printf("isascii value: %d\n", isascii(c));
		printf("ft_isascii value: %d\n", ft_isascii(c));
	}
}
