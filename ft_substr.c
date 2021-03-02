/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 03:31:09 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/02 02:06:29 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (!(substring = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < len && ((start + i) < ft_strlen((char *)s)))
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
