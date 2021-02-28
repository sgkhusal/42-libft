/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 15:39:46 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/26 18:11:58 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	test_ft_memcmp()
{
	printf("\n\n\n*****************************ft_memcmp function*****************************\n");

	printf("%d", ft_memcmp("ABC", "ABC", 3));
	printf("\n");
	printf("%d", memcmp("ABC", "ABC", 3));
	printf("\n--------\n");
	printf("%d", ft_memcmp("ABC", "ABCD", 3));
	printf("\n");
	printf("%d", memcmp("ABC", "ABCD", 3));
	printf("\n--------\n");

	printf("%d", ft_memcmp("hello", "helLO WORLD", 3));
	printf("\n");
	printf("%d", memcmp("hello", "helLO WORLD", 3));
	printf("\n--------\n");
	printf("%d", ft_memcmp("hello", "helLO WORLD", 4));
	printf("\n");
	printf("%d", memcmp("hello", "helLO WORLD", 4));
	printf("\n--------\n");

	printf("%d", ft_memcmp("ABC", "ABCD", 4));
	printf("\n");
	printf("%d", memcmp("ABC", "ABCD", 4));
	printf("\n--------\n");
	printf("%d", ft_memcmp("ABc", "ABC", 3));
	printf("\n");
	printf("%d", memcmp("ABc", "ABC", 3));
	printf("\n--------\n");
	printf("%d", ft_memcmp("abcdef", "ABCDEF", 4));
	printf("\n");
	printf("%d", memcmp("abcdef", "ABCDEF", 4));
	printf("\n--------\n");

	printf("%d", ft_memcmp("ABCDEF", "abcdef", 4));
	printf("\n");
	printf("%d", memcmp("ABCDEF", "abcdef", 4));
	printf("\n--------\n");

	printf("%d", ft_memcmp("Aticleworld", "Atic", 3));
	printf("\n");
	printf("%d", memcmp("Aticleworld", "Atic", 3));
	printf("\n--------\n");
	printf("%d", ft_memcmp("Hello", "Aticleworld", 5));
	printf("\n");
	printf("%d", memcmp("Hello", "Aticleworld", 5));
	printf("\n--------\n");

	printf("%d", ft_memcmp("Aticleworld", "world", 3));
	printf("\n");
	printf("%d", memcmp("Aticleworld", "world", 3));
	printf("\n--------\n");

	printf("%d", ft_memcmp("world", "Aticleworld", 3));
	printf("\n");
	printf("%d", memcmp("world", "Aticleworld", 3));
	printf("\n--------\n");

	printf("%d", ft_memcmp("world", "Aticleworld", 3));
	printf("\n");
	printf("%d", memcmp("world", "Aticleworld", 3));
	printf("\n--------\n");

	printf("%d", ft_memcmp("ABCDE\0\0\0\0", "ABCDE\0\0\0\0", 7));
	printf("\n");
	printf("%d", memcmp("ABCDE\0\0\0\0", "ABCDE\0\0\0\0", 7));
	printf("\n--------\n");

	printf("%d", ft_memcmp("ABCDE\0\0\0\0", "ABCDE\0abc", 5));
	printf("\n");
	printf("%d", memcmp("ABCDE\0\0\0\0", "ABCDE\0abc", 5));
	printf("\n--------\n");

	printf("%d", ft_memcmp("ABCDE\0\0\0\0", "ABCDEFGH", 8));
	printf("\n");
	printf("%d", memcmp("ABCDE\0\0\0\0", "ABCDEFGH", 8));
	printf("\n--------\n");

	  printf("%d", ft_memcmp("ABCDE\0GH", "ABCDEFGH", 8));
	printf("\n");
	printf("%d", memcmp("ABCDE\0GH", "ABCDEFGH", 8));
	printf("\n--------\n");

	printf("%d", ft_memcmp("ABCDE\0GH", "ABCDE\0GH", 8));
	printf("\n");
	printf("%d", memcmp("ABCDE\0GH", "ABCDE\0GH", 8));
	printf("\n--------\n");

	printf("%d", ft_memcmp("ABCDE\0II", "ABCDE\0GH", 8));
	printf("\n");
	printf("%d", memcmp("ABCDE\0II", "ABCDE\0GH", 8));
	printf("\n--------\n");

	printf("%d", ft_memcmp("ABCDEIII", "ABCDE\0GH", 8));
	printf("\n");
	printf("%d", memcmp("ABCDEIII", "ABCDE\0GH", 8));
	printf("\n--------\n");
}
