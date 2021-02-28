/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:16:36 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/27 16:48:33 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);
void	compair_strchr(char *s, int c);

void	test_ft_strchr(void)
{
	printf("\n\n\n*****************************ft_strchr function*****************************\n");

	printf("\ntest 1: the memory area contains c \n");
	char str1[25] = "This is the destination.";
	compair_strchr(&str1[0], 'd');

	printf("\ntest 2: the memory area doesn't contain c \n");
	compair_strchr(&str1[0], '1');

	printf("\ntest 3: c = null\n");
	compair_strchr(&str1[0], 0);

	printf("\ntest 4: c = null and null in the middle of the string\n");
	str1[10] = 0;
	compair_strchr(&str1[0], 0);

	printf("\ntest 5: str[0] = null and memory area contains c\n");
	str1[0] = 0;
	compair_strchr(&str1[0], 'd');

	printf("\ntest 6: str = null\n");
	memset(&str1[0], 0, 25);
	compair_strchr(&str1[0], 'd');

	printf("\ntest 7: str contains more than one c\n");
	memset(&str1[0], '1', 25);
	str1[10] = '2';
	str1[20] = '2';
	compair_strchr(&str1[0], '2');
}

void	compair_strchr(char *s, int c)
{
	char *ptr;
	char *ptrft;
	printf("Content from memory area = %s\n", s);
	ptr = strchr(&s[0], c);
	ptrft = ft_strchr(&s[0], c);
	printf("return from strchr - string    = %s\n", ptr);
	printf("return from ft_strchr - string = %s\n", ptrft);
	printf("return from strchr - memory address    = %p\n", ptr);
	printf("return from ft_strchr - memory address = %p\n", ptrft);
}
