/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 01:55:35 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/21 03:59:51 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	check_memccpy(char *str1, char *str2);

void	test_ft_memccpy()
{
	/*
	The memccpy function copies no more than n bytes from src to dest,
	stopping when the first occurencce of c has been copied or after n bytes have been copied,
	whiever comes first
	*/

	printf("\n\n\n*****************************ft_memccpy function*****************************\n");

	printf("\ntest 1: n = strlen(src) and char = o\n");
	char dest1[] = "This is the destination.";
	char dest1ft[] = "This is the destination.";
	char src1[] = "This is the source.";
	size_t cpy1 = strlen(src1);
	printf("dest memccpy = %s\n", dest1);
	printf("dest ft_memccpy = %s\n", dest1ft);
	printf("src = %s\n", src1);
	printf("\nResults:\n");
	puts(memccpy(&dest1[0], &src1[0], 'o', cpy1));
	puts(ft_memccpy(&dest1ft[0], &src1[0], 'o', cpy1));
	puts(dest1);
	puts(dest1ft);
	check_memccpy(&dest1[0], &dest1ft[0]);

	printf("\ntest 2: n = strlen(src) and char = d\n");
	char dest2[] = "This is the destination.";
	char dest2ft[] = "This is the destination.";
	char src2[] = "This is the source.";
	size_t cpy2 = strlen(src2);
	printf("dest memccpy = %s\n", dest2);
	printf("dest ft_memccpy = %s\n", dest2ft);
	printf("src = %s\n", src2);
	printf("\nResults:\n");
	if (memccpy(&dest2[0], &src2[0], 'd', cpy2) == 0)
		printf("NULL\n");
	if (ft_memccpy(&dest2ft[0], &src2[0], 'd', cpy2) == NULL)
		printf("OK - NULL\n");
	puts(dest2);
	puts(dest2ft);
	check_memccpy(&dest2[0], &dest2ft[0]);

	printf("\ntest 3: n = 0\n");
	char dest3[] = "destination.";
	char dest3ft[] = "destination.";
	char src3[] = "source.";
	size_t cpy3 = 0;
	printf("dest memccpy = %s\n", dest3);
	printf("dest ft_memccpy = %s\n", dest3ft);
	printf("src = %s\n", src3);
	printf("\nResults:\n");
	if (memccpy(&dest3[0], &src3[0], 's', cpy3) == 0)
		printf("NULL\n");
	if (ft_memccpy(&dest3ft[0], &src3[0], 's', cpy3) == 0)
		printf("OK - NULL\n");
	puts(dest3);
	puts(dest3ft);
	check_memccpy(&dest3[0], &dest3ft[0]);

	printf("\ntest 4: src size = 1, n > strlen(src) and c = 0 (NULL)\n");
	char dest4[] = "This is the destination.";
	char dest4ft[] = "This is the destination.";
	char src4[] = "A";
	size_t cpy4 = 10;
	printf("dest memccpy = %s\n", dest4);
	printf("dest ft_memccpy = %s\n", dest4ft);
	printf("src = %s\n", src4);
	printf("\nResults:\n");
	puts(memccpy(&dest4[0], &src4, 0, cpy4));
	puts(ft_memccpy(&dest4ft[0], &src4, 0, cpy4));
	puts(dest4);
	puts(dest4ft);
	check_memccpy(&dest4[0], &dest4ft[0]);

}

void	check_memccpy(char *str1, char *str2)
{
	size_t i = 0;

	if (strlen(str1) != strlen(str2))
	{
		printf("NOT OK\n");
		printf("destination final size from memccpy function: %lu\n", strlen(str1));
		printf("destination final size from ft_memccpy function: %lu\n", strlen(str2));
	}
	else
	{
		while (i < strlen(str1))
		{
			if (str1[i] != str2[i])
			{
				printf("NOT OK at position %lu\n", i);
				printf("memccpy value: %c\n", str1[i]);
				printf("ft_memccpy value: %c\n", str2[i]);
			}
			else
				printf("OK at position %lu\n", i);
			i++;
		}
	}
}
