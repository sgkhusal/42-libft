/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 04:04:14 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/23 05:10:01 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>//

void	*ft_memcpy(void *dest, const void *src, size_t n);//

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	/*size_t	i;*/
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	/*if (d > s)*/
	if (d < s)
		ft_memcpy(dest, src, n);
	else
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}/*
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}*/
	return (dest);
}
