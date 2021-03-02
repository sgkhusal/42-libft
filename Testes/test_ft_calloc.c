/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:39:15 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/01 23:13:45 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"

void	test_ft_calloc(void)
{
	int *ptr;
	int x;
	x = 1000;
	ptr = &x;
	printf("*ptr = %i\n", *ptr);
	ptr = (int *)ft_calloc(10, sizeof(int));
	printf("*ptr = %i\n", *ptr);
	*(ptr+1) = 10;
	printf("ptr[1] = %d\n", *(ptr+1));

	int i;
	for (i = 0; i < 10; ++i)
	{
		printf("*Endereco de ptr[%i] = %p | valor de ptr[%i] = %i\n", i, ptr+i, i, *(ptr+i));
	}

	char *ptr2;
	char c;
	c = 'a';
	ptr2 = &c;
	printf("*ptr2 = %i\n", *ptr2);
	ptr2 = (char *)ft_calloc(10, sizeof(char));
	printf("*ptr2 = %i\n", *ptr2);
	*(ptr2+1) = 'b';
	printf("ptr2[1] = %c\n", *(ptr2+1));

	for (i = 0; i < 10; ++i)
	{
		printf("*Endereco de ptr2[%i] = %p | valor de ptr2[%i] = %i\n", i, ptr2+i, i, *(ptr2+i));
	}
}
