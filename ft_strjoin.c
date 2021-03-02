/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 02:53:53 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/02 03:11:11 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	i;
	size_t	j;
	char	*join;

	if (!s1 && !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(join = (char *)malloc(size * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (i + j < size - 1)
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
