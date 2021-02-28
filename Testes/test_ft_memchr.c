/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:13:39 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/26 18:46:38 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);
void	compair_memchr(char *s, int c, size_t n);

void	test_ft_memchr()
{
	/*

	*/

	printf("\n\n\n*****************************ft_memchr function*****************************\n");

	printf("\ntest 1: the memory area contains c \n");
	char str1[] = "This is the destination.";
	compair_memchr(&str1[0], 'd', strlen(str1));

	printf("\ntest 2: the memory area doesn't contain c \n");
	compair_memchr(&str1[0], '1', strlen(str1));

	printf("\ntest 3: n > strlen(str)\n");
	compair_memchr(&str1[0], '1', strlen(str1) + 10);

	printf("\ntest 4: c = null\n");
	compair_memchr(&str1[0], 0, strlen(str1) + 10);

	printf("\ntest 5: str[0] = null and memory area contains c\n");
	str1[0] = 0;
	compair_memchr(&str1[0], 'd', strlen(str1));

	printf("\ntest 6: str = null\n");
	memset(&str1[0], 0, strlen(str1));
	compair_memchr(&str1[0], 'd', strlen(str1));
}

void	compair_memchr(char *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char *ptrft;
	printf("Content from memory area = %s\n", s);
	ptr = memchr(&s[0], c, n);
	ptrft = ft_memchr(&s[0], c, n);
	printf("return from memchr - string    = %s\n", ptr);
	printf("return from ft_memchr - string = %s\n", ptrft);
	printf("return from memchr - memory address    = %p\n", ptr);
	printf("return from ft_memchr - memory address = %p\n", ptrft);
}
