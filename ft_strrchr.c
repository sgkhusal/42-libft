/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:40:18 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/26 17:57:56 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	i = ft_strlen(s);
	while (i--) // testar \0 final e um caracter que so tem na posicao 0
	{
		if (s[i] == ch)
			return (&s[i]);
	}
	return (NULL);
}
