/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 21:25:20 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/04 11:16:47 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>

size_t	ft_strlcat (char *dst, const char *src, size_t size);
void	compair_strlcat(char *d1, char *d2, char *s1, char *s2, int n);
void	*check_strlcat(size_t ncpy1, size_t ncpy2);

void	test_ft_strlcat()
{
	/*

	*/

	printf("\n\n\n*****************************ft_strlcat function*****************************\n");

	printf("\ntest 1: n = strlen(src) + strlen(dest)\n");
	char dest1[100] = "This is the destination.";
	char dest1ft[100] = "This is the destination.";
	char src1[] = "This is the source.";
	compair_strlcat(&dest1[0], &dest1ft[0], &src1[0], &src1[0], strlen(dest1) + strlen(src1));

	printf("\ntest 2: n = strlen(src) + strlen(dest) + null\n");
	char dest2[100] = "This is the destination.";
	char dest2ft[100] = "This is the destination.";
	compair_strlcat(&dest2[0], &dest2ft[0], &src1[0], &src1[0], strlen(src1) + strlen(dest2) + 1);

	printf("\ntest 3: n = 0\n");
	char dest3[100] = "destination.";
	char dest3ft[100] = "destination.";
	char src3[] = "source.";
	compair_strlcat(&dest3[0], &dest3ft[0], &src3[0], &src3[0], 0);

	printf("\ntest 3.1: n = 1\n");
	compair_strlcat(&dest3[0], &dest3ft[0], &src3[0], &src3[0], 1);

	printf("\ntest 3.2: n = 2\n");
	char dest32[20] = "destination.";
	char dest32ft[20] = "destination.";
	char src32[] = "source.";
	printf("dest size = %lu\n", sizeof(dest32));
	compair_strlcat(&dest32[0], &dest32ft[0], &src32[0], &src32[0], 2);

	/*printf("\ntest 3.3: n = -1\n");
	char dest33[20] = "destination.";
	char dest33ft[20] = "destination.";
	char src33[] = "source.";
	printf("dest size = %lu\n", sizeof(dest33));
	//compair_strlcat(&dest33[0], &dest33ft[0], &src33[0], &src33[0], 2);
	size_t strlcat_return;
	size_t ft_strlcat_return;
	printf("src = %s\n", src33);
	printf("strlen of src + dest = %lu\n", strlen(src33) + strlen(dest33));
	printf("strlen of src = %lu\n", strlen(src33));
	printf("strlen of dst = %lu\n", strlen(dest33));
	printf("dest strlcat    = %s\n", dest33);
	printf("dest ft_strlcat = %s\n", dest33ft);
	//strlcat_return = strlcat(&dest33[0], &src33[0], -1);
	ft_strlcat_return = ft_strlcat(&dest33ft[0], &src33[0], -1);
	printf("The destinations after applying the functions:\n");
	//puts(dest33);
	puts(dest33ft);
	printf("The sources after applying the functions:\n");
	//puts(src33);
	puts(src33);
	printf("strlen of src = %lu\n", strlen(src33));
	puts(check_strlcat(strlcat_return, ft_strlcat_return));*/

	printf("\ntest 3.4: n = strlen(dest) + 1\n");
	compair_strlcat(&dest3[0], &dest3ft[0], &src3[0], &src3[0], strlen(dest3) + 1);

	printf("\ntest 3.5: n = strlen(dest) + 2\n");
	char dest35[20] = "destination.";
	char dest35ft[20] = "destination.";
	char src35[20] = "source.";
	printf("dest size = %lu\n", sizeof(dest35));
	compair_strlcat(&dest35[0], &dest35ft[0], &src35[0], &src35[0], strlen(dest35) + 2);

	printf("\ntest 3.6: n = strlen(dest) + 5\n");
	char dest36[30] = "destination.";
	char dest36ft[30] = "destination.";
	char src36[] = "source.";
	compair_strlcat(&dest36[0], &dest36ft[0], &src36[0], &src36[0], strlen(dest36) + 5);

	printf("\ntest 4: n > strlen(d)\n");
	char dest4[100] = "This is the destination.";
	char src4[100] = "This is the source. It is much more bigger than the destination.";
	char dest4ft[100] = "This is the destination.";
	compair_strlcat(&dest4[0], &dest4ft[0], &src4[0], &src4[0], strlen(src4) + 1);

	/*printf("\ntest 5: overlap: dest inicialize in the middle of src\n");
	char src5[100] = "This is the source. It is much more bigger than the destination.";	
	char src5ft[100] = "This is the source. It is much more bigger than the destination.";
	printf("\ntest 6: overlap: d is in the middle of s\n");
	char src6[50] = "Geeksfor\0";
	char src6ft[50] = "Geeksfor\0";
	compair_strlcat(src6+5, src6ft+5, src6, src6ft, strlen(src6)+1);

	printf("\ntest 7: overlap: s is in the middle of d\n");
	char dest7[50] = "Oi, tudo bem?";
	char dest7ft[50] = "Oi, tudo bem?";
	compair_strlcat(&dest7[0], &dest7ft[0], &dest7[4], &dest7ft[4], strlen(dest7) + 10);*/

	printf("\ntest 8: src = null\n");
	char src8[100] = "Welcome to 42";
	char dest8[100] = "Hello World";
	char dest8ft[100] = "Hello World";
	src8[0] = '\0';
	compair_strlcat(&dest8[0], &dest8ft[0],  &src8[0], &src8[0], 9);

	printf("\ntest 9: dest = null\n");
	char src9[100] = "Welcome to 42";
	char dest9[100] = "Hello World";
	char dest9ft[100] = "Hello World";
	dest9[0] = '\0';
	dest9ft[0] = '\0';
	compair_strlcat(&dest9[0], &dest9ft[0], &src9[0], &src9[0], 9);

	printf("\ntest 10: dest and scr = null\n");
	char src10[100] = "Welcome to 42";
	char dest10[100] = "Hello World";
	char dest10ft[100] = "Hello World";
	dest10[0] = '\0';
	dest10ft[0] = '\0';
	src10[0] = '\0';
	compair_strlcat(&dest10[0], &dest10ft[0], &src10[0], &src10[0], 9);
}

void	compair_strlcat(char *d1, char *d2, char *s1, char *s2, int n)
{
	size_t strlcat_return;
	size_t ft_strlcat_return;
	printf("src = %s\n", s1);
	printf("strlen of src + dest = %lu\n", strlen(s1) + strlen(d1));
	printf("strlen of src = %lu\n", strlen(s1));
	printf("strlen of dst = %lu\n", strlen(d1));
	printf("dest strlcat    = %s\n", d1);
	printf("dest ft_strlcat = %s\n", d2);
	strlcat_return = strlcat(&d1[0], &s1[0], n);
	ft_strlcat_return = ft_strlcat(&d2[0], &s2[0], n);
	printf("The destinations after applying the functions:\n");
	puts(d1);
	puts(d2);
	printf("The sources after applying the functions:\n");
	puts(s1);
	puts(s2);
	printf("strlen of src = %lu\n", strlen(s1));
	puts(check_strlcat(strlcat_return, ft_strlcat_return));
}

void	*check_strlcat(size_t ncpy1, size_t ncpy2)
{
	printf("strlcat value: %lu\n", ncpy1);
	printf("ft_strlcat value: %lu\n", ncpy2);
	if (ncpy1 != ncpy2)
		return("NOT OK");
	else
		return ("OK");
}
