/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:15:35 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/01 19:34:06 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c);
void	check_isalpha(int c, int i);

void	test_ft_isalpha()
{
	printf("\n\n\n*****************************ft_isalpha function*****************************\n");

	char str_alpha[] = "azAZ";
	char not_alpha1[] = "09 .@[{";
	char not_alpha2 = 0;
	char not_alpha3 = 96;
	unsigned char not_alpha4 = 255;
	char not_alpha5 = EOF;
	unsigned long i = 0;

	/********************* test 1 - all alpha *****************/
	printf("Test for string \"%s\":\n", str_alpha);
	while (i < sizeof(str_alpha) - 1)
	{
		check_isalpha(str_alpha[i], i);
		i++;
	}

	/********************* test 2 - not alpha *****************/
	printf("\nTest for string \"%s\":\n", not_alpha1);
	i = 0;
	while (i < sizeof(not_alpha1) - 1)
	{
		check_isalpha(not_alpha1[i], i);
		i++;
	}

	printf("\nTest for char = %d\n", not_alpha2);
	check_isalpha(not_alpha2, 0);

	printf("\nTest for char = %d, %c\n", not_alpha3, not_alpha3);
	check_isalpha(not_alpha3, 0);

	printf("\nTest for maximum value of unsigned char = %d\n", not_alpha4);
	check_isalpha(not_alpha4, 0);

	printf("\nTest for EOF value = %i\n", EOF);
	check_isalpha(not_alpha5, 0);

	/********************* test 4 - input type int *****************/
	/*
	printf("\nTest for maximum unsigned char = %d\n", num2);
	printf("ft_isalpha result = %d\n", ft_isalpha(num2));
	//printf("isalpha result = %d\n", isalpha(num2));
	if (ft_isalpha(num2) == 0)
		printf("ok - it is not alpha\n");
	else
		printf("not ok\n");

	printf("\nTest for minimum int = %d\n", num4);
	printf("ft_isalpha result = %d\n", ft_isalpha(num4));
	//printf("isalpha result = %d\n", isalpha(num2));
	if (ft_isalpha(num4) == 0)
		printf("ok - it is not alpha\n");
	else
		printf("not ok\n"); */
}

void	check_isalpha(int c, int i)
{
	if (ft_isalpha(c) > 0 && isalpha(c) > 0)
		printf("OK at position %d - it is alpha\n", i);
	else if (ft_isalpha(c) == 0 && isalpha(c) == 0)
		printf("OK at position %d - it is not alpha\n", i);
	else
		{
		printf("NOT OK\n");
		printf("isalpha value: %d\n", isalpha(c));
		printf("ft_isalpha value: %d\n", ft_isalpha(c));
	}
}
