/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 04:04:11 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/21 04:30:54 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);
void	check_memmove(char *str1, char *str2);

void	test_ft_memmove()
{
	/*
	The memmove function copies n bytes from src to dest
	The memory area may overlap? src is first copied into a temporary array
	that does not overlap src or dest and the bytes are then copied
	from the temporary array to dest.
	The memmove function does not check for any terminating null character in source
	it always copies exactly n bytes
	To avoid overflows, the size of the arrays pointed to by both
	destination and source parameters shall be at least n bytes
	*/

	printf("\n\n\n*****************************ft_memmove function*****************************\n");

	printf("\ntest 1: n = strlen(src) \n");
	char dest1[] = "This is the destination.";
	char dest1ft[] = "This is the destination.";
	char src1[] = "This is the source.";
	size_t cpy1 = strlen(src1);
	printf("dest memmove = %s\n", dest1);
	printf("dest ft_memmove = %s\n", dest1ft);
	printf("src = %s\n", src1);
	memmove(&dest1[0], &src1[0], cpy1);
	puts(dest1);
	ft_memmove(&dest1ft[0], &src1[0], cpy1);
	puts(dest1ft);
	check_memmove(&dest1[0], &dest1ft[0]);

	printf("\ntest 2: n = strlen(src) + null\n");
	char dest2[] = "This is the destination.";
	char dest2ft[] = "This is the destination.";
	char src2[] = "This is the source.";
	size_t cpy2 = 21;
	printf("dest memmove = %s\n", dest2);
	printf("dest ft_memmove = %s\n", dest2ft);
	printf("src = %s\n", src2);
	memmove(&dest2[0], &src2[0], cpy2);
	puts(dest2);
	ft_memmove(&dest2ft[0], &src2[0], cpy2);
	puts(dest2ft);
	check_memmove(&dest2[0], &dest2ft[0]);

	printf("\ntest 3: n = 0\n");
	char dest3[] = "destination.";
	char dest3ft[] = "destination.";
	char src3[] = "source.";
	size_t cpy3 = 0;
	printf("dest memmove = %s\n", dest3);
	printf("dest ft_memmove = %s\n", dest3ft);
	printf("src = %s\n", src3);
	memmove(&dest3[0], &src3[0], cpy3);
	puts(dest3);
	ft_memmove(&dest3ft[0], &src3[0], cpy3);
	puts(dest3ft);
	check_memmove(&dest3[0], &dest3ft[0]);

	printf("\ntest 4: n = strlen(src) > strlen(dest) (overlap in memcpy)\n");
	char dest4[] = "This is the destination.";
	char src4[] = "This is the source. It is much more bigger than the destination.";
	size_t cpy4 = strlen(src4);
	printf("dest memmove = %s\n", dest4);
	printf("src = %s\n", src4);
	memmove(&dest4[0], &src4[0], cpy4);
	puts(dest4);
	char dest4ft[] = "This is the destination.";
	char src4ft[] = "This is the source. It is much more bigger than the destination.";
	printf("dest ft_memmove = %s\n", dest4ft);
	printf("src = %s\n", src4ft);
	ft_memmove(&dest4ft[0], &src4ft[0], cpy4);
	puts(dest4ft);
	check_memmove(&dest4[0], &dest4ft[0]);
}

void	check_memmove(char *str1, char *str2)
{
	size_t i = 0;

	if (strlen(str1) != strlen(str2))
	{
		printf("NOT OK\n");
		printf("destination final size from memmove function: %lu\n", strlen(str1));
		printf("destination final size from ft_memmove function: %lu\n", strlen(str2));
	}
	else
	{
		while (i < strlen(str1))
		{
			if (str1[i] != str2[i])
			{
				printf("NOT OK at position %lu\n", i);
				printf("memmove value: %c\n", str1[i]);
				printf("ft_memmove value: %c\n", str2[i]);
			}
			else
				printf("OK at position %lu\n", i);
			i++;
		}
	}
}
