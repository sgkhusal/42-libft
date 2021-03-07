/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 03:31:09 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/05 15:40:19 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;
	size_t			buffer;

	if (!s)
		return (NULL);
	if (ft_strlen((char *)s) < len)
		buffer = ft_strlen((char *)s);
	else
		buffer = len;
	if (!(substring = (char *)malloc((buffer + 1) * sizeof(char))))
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
