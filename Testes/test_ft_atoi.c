/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 00:37:59 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/28 02:55:39 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	compair_atoi(const char *n);
int		ft_atoi(const char *nptr);

void	test_ft_atoi(void)
{
	printf("\n\n\n*****************************ft_atoi function*****************************\n");

	printf("\ntest 1: n\n");
	compair_atoi("1");

	printf("\ntest 2: nnn\n");
	compair_atoi("109");

	printf("\ntest 3: 7n\n");
	compair_atoi("5000000");

	printf("\ntest 4: 0\n");
	compair_atoi("---++00000");

	printf("\ntest 5: maximum int\n");
	compair_atoi("+2147483647");

	printf("\ntest 6: minimum int\n");
	compair_atoi("-2147483648");

	printf("\ntest 7: < minimum int - not ok\n");
	compair_atoi("-2147483649");

	printf("\ntest 8: > maximum int - not ok\n");
	compair_atoi("2147483648");

	printf("\ntest 9: 0000n\n");
	compair_atoi("000753");

	printf("\ntest 10: 0000--n\n");
	compair_atoi("000--753");

	printf("\ntest 10.1: 001-+ n\n");
	compair_atoi("001-+ 753");

	printf("\ntest 11: sum\n");
	compair_atoi("100+83");

	printf("\ntest 12: subtraction\n");
	compair_atoi("-100+83");

	printf("\ntest 13: space in the middle\n");
	compair_atoi("-100 83");

	printf("\ntest 14: letters and numbers 1\n");
	compair_atoi("-10abcde83");

	printf("\ntest 15: letters and numbers 2\n");
	compair_atoi("jhjhsd-10abcde83");

	printf("\ntest 16: letters 1\n");
	compair_atoi("+++---abcde");

	printf("\ntest 17: letters 2\n");
	compair_atoi("ABcde");

	printf("\ntest 18: space 1\n");
	compair_atoi("   ");

	printf("\ntest 19: space 2\n");
	compair_atoi("   1");

	printf("\ntest 20: \\t\\t\\t\\-1\n");
	compair_atoi("\t\t\t-1");

	printf("\ntest 21: \\n\\n\\n-1\n");
	compair_atoi("\n\n\n-1");

	printf("\ntest 22: \\n in the middle\n");
	compair_atoi("+7\n-1");

	printf("\ntest 23: \\v\\v\\v-1\n");
	compair_atoi("\v\v\v-1");

	printf("\ntest 24: \\f\\f\\f-1\n");
	compair_atoi("\f\f\f-1");

	printf("\ntest 25: \\r\\r\\r-1\n");
	compair_atoi("\r\r\r-1");

	printf("\ntest 26: --n\n");
	compair_atoi("--7");

	printf("\ntest 27: ---n\n");
	compair_atoi("---7");

	printf("\ntest 28: -+n\n");
	compair_atoi("-+7");

	printf("\ntest 29: non printable - 0 to 8, 14 to 31\n");
	char str[] = "0123456789";
	str[0] = 0;
	compair_atoi(str);
}

void	compair_atoi(const char *n)
{
	printf("n = %s\n", n);
	printf("atoi result    = %d\n", atoi(n));
	printf("ft_atoi result = %d\n", ft_atoi(n));
	if (atoi(n) == ft_atoi(n))
		printf("OK\n");
	else
		printf("NOT OK\n");
}
