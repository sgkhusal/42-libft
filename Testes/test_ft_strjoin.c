/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 02:07:33 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/02 03:25:02 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	check_strjoin(char const *s1, char const *s2);

void	test_ft_strjoin(void)
{
	printf("\n\n\n*****************************ft_strjoin function*****************************\n");

	printf("\ntest 1:\n");
	char str1[] = "Hello World!!";
	char str2[] = " Welcome to 42!";
	char *ptr1 = &str1[0];
	char *ptr2 = &str2[0];
	check_strjoin((char const *)ptr1, (char const *)ptr2);

	printf("\ntest 2: s1 = \\0\n");
	str1[0] = '\0';
	check_strjoin((char const *)ptr1, (char const *)ptr2);

	/*printf("\ntest 3: !s1\n");*/
	char *ptr3;
	/*check_strjoin((char const *)ptr3, (char const *)ptr2);*/

	printf("\ntest 4: s2 = \\0\n");
	char *str3 = "Hello World!!";
	str2[0] = '\0';
	check_strjoin((char const *)str3, (char const *)ptr2);

	/*printf("\ntest 5: !s2\n");*/
	char *ptr4;
	/*check_strjoin((char const *)str3, (char const *)ptr4);*/

	printf("\ntest 6: s1[0] = \\0 e s2[0] = \\0\n");
	check_strjoin((char const *)ptr1, (char const *)ptr2);

	printf("\ntest 7: !s1 && !s2 (apontam para nenhum lugar)\n");
	check_strjoin((char const *)ptr3, (char const *)ptr4);
}

void	check_strjoin(char const *s1, char const *s2)
{
	char *ft_strjoin_return;
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	ft_strjoin_return = ft_strjoin(s1, s2);
	printf("Result:\n");
	if (ft_strjoin_return == NULL)
		printf("NULL\n");
	else
		puts(ft_strjoin_return);
}
