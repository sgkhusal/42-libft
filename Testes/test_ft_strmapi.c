/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:06:21 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/04 00:49:40 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	result_strmapi(char const *s, char (*f)(unsigned int, char));
char	alpha(unsigned int i, char c);
char	a_less_then_five(unsigned int i, char c);
char	tolower_new(unsigned int i, char c);
char	toupper_even(unsigned int i, char c);

void	test_ft_strmapi(void)
{
	printf("\n\n\n*****************************ft_strmapi function*****************************\n");

	printf("\ntest 1: alpha\n");
	char s[] = "Hello World!! Welcome to 42!";
	result_strmapi(&s[0], alpha);

	printf("\ntest 1: a_less_then_five\n");
	result_strmapi(&s[0], a_less_then_five);

	printf("\ntest 1: tolower_new\n");
	result_strmapi(&s[0], tolower_new);

	printf("\ntest 1: toupper_even\n");
	result_strmapi(&s[0], toupper_even);
}

void	result_strmapi(char const *s, char (*f)(unsigned int, char))
{
	printf("s = %s\n", s);
	char *p = ft_strmapi(s, f);
	printf("Result:\n");
	if (p == NULL)
		printf("NULL\n");
	else if (p[0] == '\0')
		printf("\\0\n");
	else
		printf("%s\n", p);
}


char	alpha(unsigned int i, char c)
{
	c = 0;
	return ('A' + (char)i);
}

char	a_less_then_five(unsigned int i, char c)
{
	if (i < 5)
		return ('A');
	else
		return (c);
}

char	tolower_new(unsigned int i, char c)
{
	if (i != 0)
	{
		if (c > 64 && c < 91)
		c = c + 32;
	}
	return (c);
}

char	toupper_even(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if (c > 96 && c < 123)
		c = c - 32;
	}
	return (c);
}
