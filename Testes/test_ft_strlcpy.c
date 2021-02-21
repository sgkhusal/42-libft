/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:12:13 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/16 22:59:49 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include "libft.h"

size_t	ft_strlen (const char *str);

void	test_ft_strlen()
{
	/* Testing strlen function */
	char str_len[] = "Hello World!!";
	if (strlen(&str_len[0]) == ft_strlen(&str_len[0]))
		printf("OK\n");
	else
	{
		printf("NOT OK\n");
		printf("strlen value: %d\n", strlen(&str_len[0]));
		printf("ft_strlen value: %d\n", ft_strlen(&str_len[0]));
	}

	/* Testing strlen function */
	char src1[] = "Essa eh a fonte\0";
	char dest1[] = "Esse eh o destino";
	size_t n = 5;
	size_t tamanho;
	printf("Tamanho da fonte1\n%s = %lu\n", src1, sizeof(src1));
	printf("Tamanho do destino1\n%s = %lu\n", dest1, sizeof(dest1));
	tamanho = strlcpy(&dest1[0], &src1[0], n);
	printf("Tamanho do destino1 alterado\n%s = %lu\n", dest1, tamanho);
}
