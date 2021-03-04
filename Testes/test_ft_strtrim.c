/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:57:02 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/02 22:32:17 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	result_strtrim(char const *s, char const *set);

void	test_ft_strtrim(void)
{
	/*
	qualquer dos caracteres do set, em qualquer ordem, vai sendo ignorado ate achar
	algum fora do set

	Ex: set = "42 oi" and string = "44 o2io2 42o quarenta e dois 42oi21 o2i4"
	ft_strtrim return: "quarenta e dois"
	o espaco vale como um caracter no set, assim como \n, \t

	str = "0 012345789abcdefg021574987"
	set = "012345689" --> returns "789abcdefg0211549987"
	set = "0123456789" --> returns "abcdefg"
	*/

	printf("\n\n\n*****************************ft_strtrim function*****************************\n");

	printf("\ntest 1:\n");
	char const *s1 = "44 o2io2 42o quarenta e dois 42oi21 o2i4";
	char const *set1 = "42 oi";
	result_strtrim(s1, set1);

	printf("\ntest 2:\n");
	char const *s2 = "0 012345789abcdefg021574987";
	char const *set2 = " 0123456789";
	result_strtrim(s2, set2);

	printf("\ntest 3:\n");
	char const *s3 = "0 012345789abcdefg021574987";
	char const *set3 = " 012345689";
	result_strtrim(s3, set3);

	printf("\ntest 4:\n");
	char const *s4 = "0 012345789abcdefg021574987";
	char const *set4 = "42 oi";
	result_strtrim(s4, set4);

	printf("\ntest 5: \\n and \\t\n");
	char const *s5 = "\t  \n\n\n \n\n \t   Hello\tPlease\n Trim me !\t\t\t\n \t\t\t\t ";
	char const *set5 = " \n\t";
	result_strtrim(s5, set5);

	printf("\ntest 6: set = \\0Hello \n");
	char const *s6 = "Hello World!";
	char const *set6 = "\0Hello ";
	result_strtrim(s6, set6);

	printf("\ntest 7: set = \\0 \n");
	char const *set7 = "\0";
	result_strtrim(s6, set7);

	printf("\ntest 8: s = \\0Hello World!\n");
	char const *s8 = "\0Hello World!";
	char const *set8 = " World!";
	result_strtrim(s8, set8);

	printf("\ntest 9: s = \\0\n");
	char const *s9 = "\0";
	result_strtrim(s9, set8);

	printf("\ntest 10: s = \\0 and set = \\0\n");
	result_strtrim(s9, set7);

	printf("\ntest 11: s = \\0Hello World! and set = \\0Hello \n");
	result_strtrim(s8, set6);

	printf("\ntest 12: set points to nothing \n");
	char const *s12 = "Hello World!";
	char const *set12 = NULL;
	result_strtrim(s12, set12);

	printf("\ntest 13: s points to nothing \n");
	char const *s13 = NULL;
	char const *set13 = "0123";
	result_strtrim(s13, set13);
}

void	result_strtrim(char const *s, char const *set)
{
	char *ft_strtrim_return;
	printf("s = %s\n", s);
	printf("set = %s\n", set);
	ft_strtrim_return = ft_strtrim(s, set);
	printf("Result:\n");
	if (ft_strtrim_return == NULL)
		printf("NULL\n");
	else
		puts(ft_strtrim_return);
}
