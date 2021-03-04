/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 01:55:35 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/04 11:37:40 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	compair_memccpy(char *d, const char *s, char *dft, const char *sft, int c, size_t ncpy);
void	*check_memccpy(char *str1, char *str2, size_t ncpy);

void	test_ft_memccpy()
{
	/*
	The memccpy function copies no more than n bytes from src to dest,
	stopping when the first occurencce of c has been copied or after n bytes have been copied,
	whiever comes first
	*/

	printf("\n\n\n*****************************ft_memccpy function*****************************\n");

	printf("\ntest 1: n = strlen(src) and c = o\n");
	char dest1[] = "This is the destination.";
	char dest1ft[] = "This is the destination.";
	char src1[] = "This is the source.";
	compair_memccpy(&dest1[0], &src1[0], &dest1ft[0], &src1[0], 'o', strlen(src1));

	printf("\ntest 2: n = strlen(src) and c = d\n");
	char dest2[] = "This is the destination.";
	char dest2ft[] = "This is the destination.";
	char src2[] = "This is the source.";
	compair_memccpy(&dest2[0], &src2[0], &dest2ft[0], &src2[0], 'd', strlen(src2));

	printf("\ntest 3: n = 0\n");
	char dest3[] = "destination.";
	char dest3ft[] = "destination.";
	char src3[] = "source.";
	compair_memccpy(&dest3[0], &src3[0], &dest3ft[0], &src3[0], 'd', 0);

	printf("\ntest 4: src size = 1, n > strlen(src) and c = 0 (NULL)\n");
	char dest4[] = "This is the destination.";
	char dest4ft[] = "This is the destination.";
	char src4[] = "A";
	compair_memccpy(&dest4[0], &src4[0], &dest4ft[0], &src4[0], 0, 10);

/*	printf("\ntest 5: overlap: dest inicialize in the middle of src, c = m\n");
	char src5[100] = "This is the source. It is much more bigger than the destination.";
	char src5ft[100] = "This is the source. It is much more bigger than the destination.";
	compair_memccpy(&src5[10], &src5[0], &src5ft[10], &src5ft[0], 'e', strlen(src5));

*/	printf("\ntest 6: overlap: d is in the middle of s\n");
	char src6[50] = "Geeksfor";
	char src6ft[50] = "Geeksfor";
	compair_memccpy(src6+5, src6, src6ft+5, src6ft, 'k', strlen(src6)+1);

	printf("\ntest 7: overlap: s is in the middle of d, c = m e n = 9\n");
	char dest7[100] = "Oi, tudo bem?";
	char dest7ft[100] = "Oi, tudo bem?";
	compair_memccpy(&dest7[0], &dest7[4], &dest7ft[0], &dest7ft[4], 'o', 9);

	printf("\ntest 8: src = null\n");
	char src8[100] = "Welcome to 42";
	char src8ft[100] = "Welcome to 42";
	char dest8[100] = "Hello World";
	char dest8ft[100] = "Hello World";
	src8[0] = '\0';
	src8ft[0] = '\0';
	compair_memccpy(&dest8[0], &src8[0], &dest8ft[0], &src8ft[0], 'o', 9);

	printf("\ntest 9: dest = null\n");
	char src9[100] = "Welcome to 42";
	char src9ft[100] = "Welcome to 42";
	char dest9[100] = "Hello World";
	char dest9ft[100] = "Hello World";
	dest9[0] = '\0';
	dest9ft[0] = '\0';
	compair_memccpy(&dest9[0], &src9[0], &dest9ft[0], &src9ft[0], 'o', 9);

	printf("\ntest 10: dest and scr = null\n");
	char src10[100] = "Welcome to 42";
	char src10ft[100] = "Welcome to 42";
	char dest10[100] = "Hello World";
	char dest10ft[100] = "Hello World";
	dest10[0] = '\0';
	dest10ft[0] = '\0';
	src10[0] = '\0';
	src10ft[0] = '\0';
	compair_memccpy(&dest10[0], &src10[0], &dest10ft[0], &src10ft[0], 'o', 9);

}

void	compair_memccpy(char *d, const char *s, char *dft, const char *sft, int c, size_t ncpy)
{
	printf("src = %s\n", s);
	printf("dest memccpy = %s\n", d);
	printf("dest ft_memccpy = %s\n", dft);
	printf("Return from memccpy and ft_memccpy:\n");
	if (memccpy(&d[0], &s[0], c, ncpy) == 0)
		printf("NULL\n");
	else
		puts(memccpy(&d[0], &s[0], c, ncpy));
	if (ft_memccpy(&dft[0], &sft[0], c, ncpy) == 0)
		printf("NULL\n");
	else
		puts(ft_memccpy(&dft[0], &sft[0], c, ncpy));
	printf("The destinations after applying the functions:\n");
	puts(d);
	puts(dft);
	puts(check_memccpy(&d[0], &dft[0], ncpy));
}

void	*check_memccpy(char *d, char *dft, size_t ncpy)
{
	size_t i = 0;

	while (i < ncpy)
	{
		if (d[i] != dft[i])
		{
			printf("NOT OK at position %lu\n", i);
			printf("memcpy value: %c\n", d[i]);
			printf("ft_memcpy value: %c\n", dft[i]);
			return("NOT OK");
		}
		i++;
	}
	return ("OK");
}
