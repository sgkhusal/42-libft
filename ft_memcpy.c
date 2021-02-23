/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:58:32 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/23 14:13:34 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	/*int i;*/
	unsigned char *d; //
	unsigned char *s; //

	d = (unsigned char *)dest; //
	s = (unsigned char *)src; //
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	/*i = (int)n -1;
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}*/
	return (dest);
}
