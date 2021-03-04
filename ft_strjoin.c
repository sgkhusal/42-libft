/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 02:53:53 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/04 14:54:22 by sguilher         ###   ########.fr       */
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
	if (!s1 || !s1[0])
		return (ft_strdup((s2)));
	if (!s2 || !s2[0])
		return (ft_strdup(s1));
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(join = (char *)malloc(size * sizeof(char))))
		return (NULL);
	i = 0;
	while (i++ <= ft_strlen(s1) && s1[i - 1])
		join[i - 1] = s1[i - 1];
	j = 0;
	while (i - 1 + j < size - 1)
	{
		join[i - 1 + j] = s2[j];
		j++;
	}
	join[i - 1 + j] = '\0';
	return (join);
}
