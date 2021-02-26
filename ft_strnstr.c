/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:40:12 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/26 17:57:58 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return (big);//&big[0]
	while (i < len && big[i]) //testar com um \0 no meio de big, com len maior
	{
		j = 0;
		while (j < ft_strlen(little))
		{
			if (big[i] == little[j])
				return (&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
