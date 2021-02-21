/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:12:15 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/17 15:37:01 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
//#include "libft.h"

size_t	ft_strlen (const char *str);
void	check_ft_strlen(char * str);

void	test_ft_strlen()
{
	printf("\n\n\n*****************************ft_strlen function*****************************\n");

	/* Testing strlen function */

	char str1[30] = "Hello World!! Welcome to 42!!!";
	puts(str1);
	check_ft_strlen(&str1[0]);

	char str2[100];
	memset(str2, 'A', 100);
	puts(str2);
	check_ft_strlen(&str2[0]);

	memset(str2, '\0', 10);
	check_ft_strlen(&str2[0]);
}

void	check_ft_strlen(char *str)
{
	if (strlen(&str[0]) == ft_strlen(&str[0]))
		printf("OK, size = %zu\n", ft_strlen(&str[0]));
	else
	{
		printf("NOT OK\n");
		printf("strlen value: %lu\n", strlen(&str[0]));
		printf("ft_strlen value: %zu\n", ft_strlen(&str[0]));
	}
}
