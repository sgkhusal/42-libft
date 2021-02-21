/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 00:57:51 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/16 01:30:35 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int c);
void	check_isdigit(int c, int i);

void	test_ft_isdigit()
{
	printf("\n\n\n*****************************ft_isdigit function*****************************\n");

	char str_digit[] = "09";
	char not_digit1 = 0;
	char not_digit2 = 47;
	char not_digit3 = 58;
	unsigned char not_digit4 = 255;
	char not_digit5 = EOF;
	char str[] = "azAZ";
	int i = 0;

	/********************* test 1 - digit *****************/
	printf("Test for string \"%s\":\n", str_digit);
	while (i < sizeof(str_digit) - 1)
	{
		check_isdigit(str_digit[i], i);
		i++;
	}

	/********************* test 2 - not digit *****************/
	printf("\nTest for char = %d, \\0\n", not_digit1);
	check_isdigit(not_digit1, 0);

	printf("\nTest for char = %d, %c\n", not_digit2, not_digit2);
	check_isdigit(not_digit2, 0);

	printf("\nTest for char = %d, %c\n", not_digit3, not_digit3);
	check_isdigit(not_digit3, 0);

	printf("\nTest for maximum value of unsigned char = %d\n", not_digit4);
	check_isdigit(not_digit4, 0);

	printf("\nTest for EOF value = %i\n", EOF);
	check_isdigit(not_digit5, 0);

	/********************* test 3 - mix digit and not digit *****************/
	printf("\nTest for string \"%s\":\n", str);
	i = 0;
	while (i < sizeof(str) - 1)
	{
		check_isdigit(str[i], i);
		i++;
	}
}

void	check_isdigit(int c, int i)
{
	if (ft_isdigit(c) > 0 && isdigit(c) > 0)
		printf("OK at position %d - it is digit\n", i);
	else if (ft_isdigit(c) == 0 && isdigit(c) == 0)
		printf("OK at position %d - it is not digit\n", i);
	else
		{
		printf("NOT OK\n");
		printf("isdigit value: %d\n", isdigit(c));
		printf("ft_isdigit value: %d\n", ft_isdigit(c));
	}
}
