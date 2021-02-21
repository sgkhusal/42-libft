/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:12:05 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/21 04:16:29 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	check_memcpy(char *str1, char *str2);

void	test_ft_memcpy()
{
	/*
	The memcpy function does not check for any terminating null character in source
	it always copies exactly n bytes
	To avoid overflows, the size of the arrays pointed to by both
	destination and source parameters shall be at least n bytes, and should not overlap
	*/

	printf("\n\n\n*****************************ft_memcpy function*****************************\n");

	printf("\ntest 1: n = strlen(src) \n");
	char dest1[] = "This is the destination.";
	char dest1ft[] = "This is the destination.";
	char src1[] = "This is the source.";
	size_t cpy1 = strlen(src1);
	printf("dest memcpy = %s\n", dest1);
	printf("dest ft_memcpy = %s\n", dest1ft);
	printf("src = %s\n", src1);
	memcpy(&dest1[0], &src1[0], cpy1);
	puts(dest1);
	ft_memcpy(&dest1ft[0], &src1[0], cpy1);
	puts(dest1ft);
	check_memcpy(&dest1[0], &dest1ft[0]);

	printf("\ntest 2: n = strlen(src) + null\n");
	char dest2[] = "This is the destination.";
	char dest2ft[] = "This is the destination.";
	char src2[] = "This is the source.";
	size_t cpy2 = 21;
	printf("dest memcpy = %s\n", dest2);
	printf("dest ft_memcpy = %s\n", dest2ft);
	printf("src = %s\n", src2);
	memcpy(&dest2[0], &src2[0], cpy2);
	puts(dest2);
	ft_memcpy(&dest2ft[0], &src2[0], cpy2);
	puts(dest2ft);
	check_memcpy(&dest2[0], &dest2ft[0]);

	printf("\ntest 3: n = 0\n");
	char dest3[] = "destination.";
	char dest3ft[] = "destination.";
	char src3[] = "source.";
	size_t cpy3 = 0;
	printf("dest memcpy = %s\n", dest3);
	printf("dest ft_memcpy = %s\n", dest3ft);
	printf("src = %s\n", src3);
	memcpy(&dest3[0], &src3[0], cpy3);
	puts(dest3);
	ft_memcpy(&dest3ft[0], &src3[0], cpy3);
	puts(dest3ft);
	check_memcpy(&dest3[0], &dest3ft[0]);

	printf("\ntest 4: result = not ok because of overlap (n = strlen(src) > strlen(dest)\n");
	char dest4[] = "This is the destination.";
	char dest4ft[] = "This is the destination.";
	char src4[] = "This is the source. It is much more bigger than the destination.";
	size_t cpy4 = strlen(src4);
	printf("dest memcpy = %s\n", dest4);
	printf("dest ft_memcpy = %s\n", dest4ft);
	printf("src = %s\n", src4);
	memcpy(&dest4[0], &src4[0], cpy4);
	puts(dest4);
	ft_memcpy(&dest4ft[0], &src4[0], cpy4);
	puts(dest4ft);
	puts(dest4);
	check_memcpy(&dest4[0], &dest3ft[0]);
}

void	check_memcpy(char *str1, char *str2)
{
	size_t i = 0;

	if (strlen(str1) != strlen(str2))
	{
		printf("NOT OK\n");
		printf("destination final size from memcpy function: %lu\n", strlen(str1));
		printf("destination final size from ft_memcpy function: %lu\n", strlen(str2));
	}
	else
	{
		while (i < strlen(str1))
		{
			if (str1[i] != str2[i])
			{
				printf("NOT OK at position %lu\n", i);
				printf("memcpy value: %c\n", str1[i]);
				printf("ft_memcpy value: %c\n", str2[i]);
			}
			else
				printf("OK at position %lu\n", i);
			i++;
		}
	}
}
