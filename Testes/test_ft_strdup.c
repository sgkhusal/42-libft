/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:50:24 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/01 22:24:36 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	compair_strdup(const char *s);

void	test_ft_strdup(void)
{
	/*

	*/

	printf("\n\n\n*****************************ft_strdup function*****************************\n");

	printf("\ntest 1:\n");
	const char *src1 = "This is the source.";
	compair_strdup(src1);

	printf("\ntest 2:\n");
	const char src2[] = "Hello World!! Welcome to 42.";
	compair_strdup(&src2[0]);

	printf("\ntest 3: \\0\n");
	char src3[20];
	ft_bzero(src3, 19);
	compair_strdup(&src3[0]);

	printf("\ntest 3.1: n = 1\n");
	ft_memset(src3, 'z', 19);
	compair_strdup(&src3[0]);
}

void	compair_strdup(const char *s)
{
	char *strdup_return;
	char* ft_strdup_return;
	printf("src = %s\n", s);
	strdup_return = strdup(&s[0]);
	ft_strdup_return = ft_strdup(&s[0]);
	printf("Results:\n");
	puts(strdup_return);
	puts(ft_strdup_return);
}
