/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:58:32 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/21 02:20:13 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *destination; //
	char *source; //

	i = 0;
	destination = (char *)dest; //
	source = (char *)src; //
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
