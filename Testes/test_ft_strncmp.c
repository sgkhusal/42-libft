/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:12:00 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/24 21:40:33 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		test_ft_strncmp(void)
{
	//char string1[] = "Curso de C";
	//char string2[] = "Curso de Java";
	//unsigned int n = 5;
	//int  retorno;

	//retorno = strncmp(string1, string2, n);
	// 0 --> conteúdo é igual
	// < 0 --> conteúdo da string1 é menor do que o da string2 (tabela ASCII)
	// > 0 --> conteúdo da string1 é maior do que o da string2
	// retorna a diferença entre o valor da tabela ASCII da primeira diferença encontrada,
	// independentemente de ter outras diferenças posteriormente
	// se forem de tamanho diferente e essa for a única diferença, retorna o valor segundo a tabela ASCII
	// do primeiro caracter que torna o tamanho diferente.
	//retorno = ft_strncmp(&string1[0], &string2[0], n);
	//printf("Retorno = %d\n", retorno);

	printf("\n\n\n*****************************ft_strncmp function*****************************\n");

	printf("%d", ft_strncmp("ABC", "ABC", 3));
	printf("\n");
	printf("%d", strncmp("ABC", "ABC", 3));
	printf("\n--------\n");
	printf("%d", ft_strncmp("ABC", "ABCD", 3));
	printf("\n");
	printf("%d", strncmp("ABC", "ABCD", 3));
	printf("\n--------\n");

	printf("%d", ft_strncmp("hello", "helLO WORLD", 3));
	printf("\n");
	printf("%d", strncmp("hello", "helLO WORLD", 3));
	printf("\n--------\n");
	printf("%d", ft_strncmp("hello", "helLO WORLD", 4));
	printf("\n");
	printf("%d", strncmp("hello", "helLO WORLD", 4));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABC", "ABCD", 4));
	printf("\n");
	printf("%d", strncmp("ABC", "ABCD", 4));
	printf("\n--------\n");
	printf("%d", ft_strncmp("ABc", "ABC", 3));
	printf("\n");
	printf("%d", strncmp("ABc", "ABC", 3));
	printf("\n--------\n");
	printf("%d", ft_strncmp("abcdef", "ABCDEF", 4));
	printf("\n");
	printf("%d", strncmp("abcdef", "ABCDEF", 4));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABCDEF", "abcdef", 4));
	printf("\n");
	printf("%d", strncmp("ABCDEF", "abcdef", 4));
	printf("\n--------\n");

	printf("%d", ft_strncmp("Aticleworld", "Atic", 3));
	printf("\n");
	printf("%d", strncmp("Aticleworld", "Atic", 3));
	printf("\n--------\n");
	printf("%d", ft_strncmp("Hello", "Aticleworld", 5));
	printf("\n");
	printf("%d", strncmp("Hello", "Aticleworld", 5));
	printf("\n--------\n");

	printf("%d", ft_strncmp("Aticleworld", "world", 3));
	printf("\n");
	printf("%d", strncmp("Aticleworld", "world", 3));
	printf("\n--------\n");

	printf("%d", ft_strncmp("world", "Aticleworld", 3));
	printf("\n");
	printf("%d", strncmp("world", "Aticleworld", 3));
	printf("\n--------\n");

	printf("%d", ft_strncmp("world", "Aticleworld", 3));
	printf("\n");
	printf("%d", strncmp("world", "Aticleworld", 3));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABCDE\0\0\0\0", "ABCDE\0\0\0\0", 7));
	printf("\n");
	printf("%d", strncmp("ABCDE\0\0\0\0", "ABCDE\0\0\0\0", 7));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABCDE\0\0\0\0", "ABCDE\0abc", 5));
	printf("\n");
	printf("%d", strncmp("ABCDE\0\0\0\0", "ABCDE\0abc", 5));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABCDE\0\0\0\0", "ABCDEFGH", 8));
	printf("\n");
	printf("%d", strncmp("ABCDE\0\0\0\0", "ABCDEFGH", 8));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABCDE\0GH", "ABCDEFGH", 8));
	printf("\n");
	printf("%d", strncmp("ABCDE\0GH", "ABCDEFGH", 8));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABCDE\0GH", "ABCDE\0GH", 8));
	printf("\n");
	printf("%d", strncmp("ABCDE\0GH", "ABCDE\0GH", 8));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABCDE\0II", "ABCDE\0GH", 8));
	printf("\n");
	printf("%d", strncmp("ABCDE\0II", "ABCDE\0GH", 8));
	printf("\n--------\n");

	printf("%d", ft_strncmp("ABCDEIII", "ABCDE\0GH", 8));
	printf("\n");
	printf("%d", strncmp("ABCDEIII", "ABCDE\0GH", 8));
	printf("\n--------\n");

	return (0);
}
