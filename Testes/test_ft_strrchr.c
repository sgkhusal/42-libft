/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:16:36 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/27 16:55:53 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c);
void	compair_strrchr(char *s, int c);

void	test_ft_strchr(void)
{
	printf("\n\n\n*****************************ft_strrchr function*****************************\n");

	printf("\ntest 1: the memory area contains c \n");
	char str1[25] = "This is the destination.";
	compair_strrchr(&str1[0], 'd');

	printf("\ntest 2: the memory area doesn't contain c \n");
	compair_strrchr(&str1[0], '1');

	printf("\ntest 3: c = null\n");
	compair_strrchr(&str1[0], 0);

	printf("\ntest 4: c = null and null in the middle of the string\n");
	str1[10] = 0;
	compair_strrchr(&str1[0], 0);

	printf("\ntest 5: str[0] = null and memory area contains c\n");
	str1[0] = 0;
	compair_strrchr(&str1[0], 'd');

	printf("\ntest 6: str = null\n");
	memset(&str1[0], 0, 25);
	compair_strrchr(&str1[0], 'd');

	printf("\ntest 7: str contains more than one c\n");
	memset(&str1[0], '1', 25);
	str1[10] = '2';
	str1[20] = '2';
	compair_strrchr(&str1[0], '2');

	printf("\ntest 8: c is in the position 0\n");
	char str2[25] = "Hello World";
	compair_strrchr(&str2[0], 'H');
}

void	compair_strrchr(char *s, int c)
{
	char *ptr;
	char *ptrft;
	printf("Content from memory area = %s\n", s);
	ptr = strrchr(&s[0], c);
	ptrft = ft_strrchr(&s[0], c);
	printf("return from strrchr - string    = %s\n", ptr);
	printf("return from ft_strrchr - string = %s\n", ptrft);
	printf("return from strrchr - memory address    = %p\n", ptr);
	printf("return from ft_strrchr - memory address = %p\n", ptrft);
}
