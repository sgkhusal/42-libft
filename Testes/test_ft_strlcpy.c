/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:12:13 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/27 16:36:37 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlcpy (char *dst, const char *src, size_t size);
void	compair_strlcpy(char *d1, char *d2, char *s1, char *s2, size_t n);
void	*check_strlcpy(size_t ncpy1, size_t ncpy2);

void	test_ft_strlcpy()
{
	/*

	*/

	printf("\n\n\n*****************************ft_strlcpy function*****************************\n");

	printf("\ntest 1: n = strlen(src) \n");
	char dest1[] = "This is the destination.";
	char dest1ft[] = "This is the destination.";
	char src1[] = "This is the source.";
	compair_strlcpy(&dest1[0], &dest1ft[0], &src1[0], &src1[0], strlen(src1));

	printf("\ntest 2: n = strlen(src) + null\n");
	char dest2[] = "This is the destination.";
	char dest2ft[] = "This is the destination.";
	compair_strlcpy(&dest2[0], &dest2ft[0], &src1[0], &src1[0], strlen(src1) + 1);

	printf("\ntest 3: n = 0\n");
	char dest3[] = "destination.";
	char dest3ft[] = "destination.";
	char src3[] = "source.";
	compair_strlcpy(&dest3[0], &dest3ft[0], &src3[0], &src3[0], 0);

	printf("\ntest 3.1: n = 1\n");
	compair_strlcpy(&dest3[0], &dest3ft[0], &src3[0], &src3[0], 1);

	printf("\ntest 3.2: n = 2\n");
	char dest32[] = "destination.";
	char dest32ft[] = "destination.";
	char src32[] = "source.";
	compair_strlcpy(&dest32[0], &dest32ft[0], &src32[0], &src32[0], 2);

	printf("\ntest 3.3: n = -1\n");
	char dest33[] = "destination.";
	char dest33ft[] = "destination.";
	char src33[] = "source.";
	compair_strlcpy(&dest33[0], &dest33ft[0], &src33[0], &src33[0], 2);

	printf("\ntest 4: n > strlen(d)\n");
	char dest4[] = "This is the destination.";
	char src4[100] = "This is the source. It is much more bigger than the destination.";
	char dest4ft[] = "This is the destination.";
	compair_strlcpy(&dest4[0], &dest4ft[0], &src4[0], &src4[0], strlen(src4) + 1);

	/*printf("\ntest 5: overlap: dest inicialize in the middle of src\n");
	char src5[100] = "This is the source. It is much more bigger than the destination.";
	char src5ft[100] = "This is the source. It is much more bigger than the destination.";
	compair_strlcpy(&src5[10], &src5ft[10], &src5[0], &src5ft[0], strlen(src5) + 1);

	printf("\ntest 6: overlap: d is in the middle of s\n");
	char src6[50] = "Geeksfor\0";
	char src6ft[50] = "Geeksfor\0";
	compair_strlcpy(src6+5, src6ft+5, src6, src6ft, strlen(src6)+1);

	printf("\ntest 7: overlap: s is in the middle of d\n");
	char dest7[] = "Oi, tudo bem?";
	char dest7ft[] = "Oi, tudo bem?";
	compair_strlcpy(&dest7[0], &dest7ft[0], &dest7[4], &dest7ft[4], 10);*/

	printf("\ntest 8: src = null\n");
	char src8[100] = "Welcome to 42";
	char dest8[100] = "Hello World";
	char dest8ft[100] = "Hello World";
	src8[0] = '\0';
	compair_strlcpy(&dest8[0], &dest8ft[0],  &src8[0], &src8[0], 9);

	printf("\ntest 9: dest = null\n");
	char src9[100] = "Welcome to 42";
	char dest9[100] = "Hello World";
	char dest9ft[100] = "Hello World";
	dest9[0] = '\0';
	dest9ft[0] = '\0';
	compair_strlcpy(&dest9[0], &dest9ft[0], &src9[0], &src9[0], 9);

	printf("\ntest 10: dest and scr = null\n");
	char src10[100] = "Welcome to 42";
	char dest10[100] = "Hello World";
	char dest10ft[100] = "Hello World";
	dest10[0] = '\0';
	dest10ft[0] = '\0';
	src10[0] = '\0';
	compair_strlcpy(&dest10[0], &dest10ft[0], &src10[0], &src10[0], 9);
}

void	compair_strlcpy(char *d1, char *d2, char *s1, char *s2, size_t n)
{
	size_t strlcpy_return;
	size_t ft_strlcpy_return;
	printf("src = %s\n", s1);
	printf("strlen of src = %lu\n", strlen(s1));
	printf("dest strlcpy    = %s\n", d1);
	printf("dest ft_strlcpy = %s\n", d2);
	strlcpy_return = strlcpy(&d1[0], &s1[0], n);
	ft_strlcpy_return = ft_strlcpy(&d2[0], &s2[0], n);
	printf("The destinations after applying the functions:\n");
	puts(d1);
	puts(d2);
	printf("The sources after applying the functions:\n");
	puts(s1);
	puts(s2);
	puts(check_strlcpy(strlcpy_return, ft_strlcpy_return));
}

void	*check_strlcpy(size_t ncpy1, size_t ncpy2)
{
	printf("strlcpy value: %lu\n", ncpy1);
	printf("ft_strlcpy value: %lu\n", ncpy2);
	if (ncpy1 != ncpy2)
		return("NOT OK");
	else
		return ("OK");
}
