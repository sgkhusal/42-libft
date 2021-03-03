/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:53:58 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/03 20:05:14 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	result_itoa(int n);

void	test_ft_itoa(void)
{
	printf("\n\n\n*****************************ft_itoa function*****************************\n");

	printf("\ntest 1: 42\n");
	result_itoa(42);

	printf("\ntest 2: -42\n");
	result_itoa(-42);

	printf("\ntest 3:\n");
	result_itoa(1234567890);

	printf("\ntest 4: 0\n");
	result_itoa(0);

	printf("\ntest 5: maximum int\n");
	result_itoa(2147483647);

	printf("\ntest 6: minimum int\n");
	result_itoa(-2147483648);

	/*printf("\ntest 7: n = -2147483649 < minimum int - not ok\n");
	result_itoa((int)-2147483649);

	printf("\ntest 8: n = 2147483648 > maximum int - not ok\n");
	result_itoa((int)2147483648);*/

	printf("\ntest 9: input is a char\n");
	result_itoa('a');
}

void	result_itoa(int n)
{
	printf("n = %d\n", n);
	printf("Result:\n");
	char *p = ft_itoa(n);
	int i = 0;
	while (p[i])
	{
		write(1, &p[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
