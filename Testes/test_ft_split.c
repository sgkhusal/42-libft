/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 02:54:31 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/03 16:31:14 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

void	result_split(char const *s, char c);

void	test_ft_split(void)
{
	printf("\n\n\n*****************************ft_split function*****************************\n");

	printf("\ntest 1:\n");
	char const s1[40] = "palavra1***palavra2_palavra3*palavra4**";
	char const *p;
	p = &s1[0];
	result_split(p, '*');

	printf("\ntest 2:\n");
	char const s2[] = "----palavra1-----palavra2-palavra3----";
	result_split(&s2[0], '-');

	printf("\ntest 3:\n");
	char const s3[] = "----palavra1-----palavra2-palavra3";
	result_split(&s3[0], '-');

	printf("\ntest 4: c = \\0\n");
	char const s4[] = "----palavra1-----palavra2\0palavra3";
	result_split(&s4[0], '\0');

	printf("\ntest 5: s = \\0\n");
	char const s5[] = "\0palavras";
	result_split(&s5[0], 'a');

	printf("\ntest 6: s = NULL\n");
	char const *p6 = NULL;
	result_split(p6, 'a');

	printf("\ntest 7:\n");
	char const s7[] = "O rato roeu a roupa do rei de Roma";
	result_split(&s7[0], ' ');

	printf("\ntest 8:\n");
	result_split(&s7[0], 'r');

	printf("\ntest 9: separador = \\n\n");
	char const s9[] = "O rato\nroeu\na roupa\ndo rei\nde Roma";
	result_split(&s9[0], '\n');

	printf("\ntest 10: separador = \\t\n");
	char const s10[] = "O rato\troeu\ta roupa\tdo rei\tde Roma";
	result_split(&s10[0], '\t');

	printf("\ntest 11: the ultimate test");
	char const s11[] = "'Welcome to the Knight Bus, emergency transport for the stranded witch or wizard. Just stick out your wand hand, step on board and we can take you anywhere you want to go.'\n\nWhen the Knight Bus crashes through the darkness and screeches to a halt in front of him, it's the start of another far from ordinary year at Hogwarts for Harry Potter. Sirius Black, escaped mass-murderer and follower of Lord Voldemort, is on the run - and they say he is coming after Harry. In his first ever Divination class, Professor Trelawney sees an omen of death in Harry's tea leaves... But perhaps most terrifying of all are the Dementors patrolling the school grounds, with their soul-sucking kiss...";
	result_split(&s11[0], ' ');
}

void	result_split(char const *s, char c)
{
	printf("s = %s\n", s);
	printf("separador = %c\n", c);
	char **p = ft_split(s, c);
	printf("Result:\n");
	int i = 0;
	if (p == NULL)
		printf("NULL\n");
	else if (p[0] == NULL)
		printf("NULL\n");
	else
	{
		while (p[i] != NULL)
		{
			puts(p[i]);
			i++;
		}
	}
}
