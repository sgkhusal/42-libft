/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:16:36 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/07 02:12:35 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);
void	compair_strnstr(const char *b, const char *l, size_t len);

void	test_ft_strnstr(void)
{
	/*
	function poorly explained in man...
	strnstr searchs if all contents from string little are contained in the string big
	and return the text in big from that content on.
	*/

	printf("\n\n\n*****************************ft_strnstr function*****************************\n");

	printf("\ntest 1: little in the middle of big and len > strlen(big)\n");
	const char *big1 = "Foo Bar Baz";
	const char *little1 = "Bar";
	compair_strnstr(&big1[0], &little1[0], 23);

	printf("\ntest 1.1: little in the middle of big\n");
	const char *big51 = "Hello World! Welcome to 42!!";
	const char *little51 = "Welcome to";
	compair_strnstr(&big51[0], &little51[0], 29);

	printf("\ntest 1.2: little in the middle of big but differs in the last character\n");
	const char *big52 = "Hello World! Welcome to 42";
	const char *little52 = "Welcome!";
	compair_strnstr(&big52[0], &little52[0], 20);

	printf("\ntest 1.3: little in the middle of big , len < \n");
	compair_strnstr(&big51[0], &little51[0], 7);

	printf("\ntest 2: big contains some characters from little but len doesn't take it\n");
	compair_strnstr(&big1[0], &little1[0], 4);

	printf("\ntest 3: big doesn't contain little \n");
	char little2[11] = "2222222222";
	compair_strnstr(&big1[0], &little2[0], 25);

	printf("\ntest 4: little is empty\n");
	memset(&little2[0], 0, strlen(little2));
	compair_strnstr(&big1[0], &little2[0], 25);

	printf("\ntest 5: null in the middle of big and big contains little after the null\n");
	char big5[30] = "Hello World!! Welcome to 42!";
	const char little5[15] = "Welcome";
	big5[10] = '\0';
	compair_strnstr(&big5[0], &little5[0], 30);

	printf("\ntest 6: big = null\n");
	big5[0] = '\0';
	compair_strnstr(&big5[0], &little5[0], 30);
}

void	compair_strnstr(const char *b, const char *l, size_t len)
{
	char *ptr;
	char *ptrft;
	printf("Content of big = %s\n", b);
	printf("Content of little = %s\n", l);
	ptr = strnstr(&b[0], &l[0], len);
	ptrft = ft_strnstr(&b[0], &l[0], len);
	printf("return from strnstr - string    = %s\n", ptr);
	printf("return from ft_strnstr - string = %s\n", ptrft);
	printf("return from strnstr - memory address    = %p\n", ptr);
	printf("return from ft_strnstr - memory address = %p\n", ptrft);
}
