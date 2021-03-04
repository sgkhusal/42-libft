/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:12:05 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/04 11:47:16 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
void	compair_memcpy(char *d, const char *s, char *dft, const char *sft, size_t ncpy);
void	*check_memcpy(char *str1, char *str2, size_t ncpy);

void	test_ft_memcpy()
{
	/*
	The memcpy function does not check for any terminating null character in source
	it always copies exactly n bytes
	To avoid overflows, the size of the arrays pointed to by both
	destination and source parameters shall be at least n bytes, and should not overlap
	*/

	/*
	O src nao muda porque ele eh do tipo const?
	*/

	printf("\n\n\n*****************************ft_memcpy function*****************************\n");

	printf("\ntest 1: n = strlen(src) \n");
	char dest1[] = "This is the destination.";
	char dest1ft[] = "This is the destination.";
	char src1[] = "This is the source.";
	size_t cpy1 = strlen(src1);
	compair_memcpy(&dest1[0], &src1[0], &dest1ft[0], &src1[0], cpy1);

	printf("\ntest 2: n = strlen(src) + null\n");
	char dest2[] = "This is the destination.";
	char dest2ft[] = "This is the destination.";
	char src2[] = "This is the source.";
	size_t cpy2 = 21;
	compair_memcpy(&dest2[0], &src2[0], &dest2ft[0], &src2[0], cpy2);

	printf("\ntest 3: n = 0\n");
	char dest3[] = "destination.";
	char dest3ft[] = "destination.";
	char src3[] = "source.";
	size_t cpy3 = 0;
	compair_memcpy(&dest3[0], &src3[0], &dest3ft[0], &src3[0], cpy3);

	printf("\ntest 4: overlap: d < s, n = strlen(s) > strlen(d)\n");
	/* obs: here the correct use of memcpy function shall be with the strlen(dest) >= ncpy
	in this case >= 65*/
	char dest4[] = "This is the destination.";
	char src4[100] = "This is the source. It is much more bigger than the destination.";
	char dest4ft[] = "This is the destination.";
	char src4ft[100] = "This is the source. It is much more bigger than the destination.";
	size_t cpy4 = strlen(src4);
	compair_memcpy(&dest4[0], &src4[0], &dest4ft[0], &src4ft[0], cpy4);

	/*printf("\ntest 4.1: overlap: d < s, n = strlen(s) > strlen(d)\n");
	char dest41ft[] = "This is the destination.";
	char src41ft[100] = "This is the source. It is much more bigger than the destination.";
	printf("Applying memcpy:\n");
	puts(memcpy(&dest41ft[0], &src41ft[0], cpy4));
	printf("The source after applying the functions:\n");
	puts(src41ft);
	printf("&dest41ft[%lu] : %p --endereco\n", strlen(dest41ft) - 47, &dest41ft[strlen(dest41ft) - 47]);
	printf("&src4ft[17] : %p --endereco\n", &src4ft[17]);
	puts(src4ft);*/

/*	printf("\ntest 5: overlap: dest inicialize in the middle of src\n");
	char src5[100] = "This is the source. It is much more bigger than the destination.";
	char src5ft[100] = "This is the source. It is much more bigger than the destination.";
	size_t cpy5 = strlen(src5);
	compair_memcpy(&src5[10], &src5[0], &src5ft[10], &src5ft[0], cpy5);

	printf("\ntest 6: overlap: d is in the middle of s\n");
	char src6[50] = "Geeksfor";
	char src6ft[50] = "Geeksfor";
	compair_memcpy(src6+5, src6, src6ft+5, src6ft, strlen(src6)+1);
*/
	printf("\ntest 7: overlap: s is in the middle of d\n");
	char dest7[100] = "Oi, tudo bem?";
	char dest7ft[100] = "Oi, tudo bem?";
	size_t cpy7 = 9;
	compair_memcpy(&dest7[0], &dest7[4], &dest7ft[0], &dest7ft[4], cpy7);

	printf("\ntest 8: src = null\n");
	char src8[100] = "Welcome to 42";
	char src8ft[100] = "Welcome to 42";
	char dest8[100] = "Hello World";
	char dest8ft[100] = "Hello World";
	src8[0] = '\0';
	src8ft[0] = '\0';
	compair_memcpy(&dest8[0], &src8[0], &dest8ft[0], &src8ft[0], 9);

	printf("\ntest 9: dest = null\n");
	char src9[100] = "Welcome to 42";
	char src9ft[100] = "Welcome to 42";
	char dest9[100] = "Hello World";
	char dest9ft[100] = "Hello World";
	dest9[0] = '\0';
	dest9ft[0] = '\0';
	compair_memcpy(&dest9[0], &src9[0], &dest9ft[0], &src9ft[0], 9);

	printf("\ntest 10: dest and scr = null\n");
	char src10[100] = "Welcome to 42";
	char src10ft[100] = "Welcome to 42";
	char dest10[100] = "Hello World";
	char dest10ft[100] = "Hello World";
	dest10[0] = '\0';
	dest10ft[0] = '\0';
	src10[0] = '\0';
	src10ft[0] = '\0';
	compair_memcpy(&dest10[0], &src10[0], &dest10ft[0], &src10ft[0], 9);
}

void	compair_memcpy(char *d, const char *s, char *dft, const char *sft, size_t ncpy)
{
	printf("src = %s\n", s);
	printf("dest memcpy = %s\n", d);
	printf("dest ft_memcpy = %s\n", dft);
	printf("Applying memcpy and ft_memcpy:\n");
	puts(memcpy(&d[0], &s[0], ncpy));
	puts(ft_memcpy(&dft[0], &sft[0], ncpy));
	printf("The sources after applying the functions:\n");
	puts(s);
	puts(sft);
	puts(check_memcpy(&d[0], &dft[0], ncpy));
}

void	*check_memcpy(char *str1, char *str2, size_t ncpy)
{
	size_t i = 0;

	while (i < ncpy)
	{
		if (str1[i] != str2[i])
		{
			printf("NOT OK at position %lu\n", i);
			printf("memcpy value: %c\n", str1[i]);
			printf("ft_memcpy value: %c\n", str2[i]);
			return("NOT OK");
		}
		i++;
	}
	return ("OK");
}
