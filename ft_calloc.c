/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 02:28:52 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/04 01:27:44 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *buffer;

	if (!(buffer = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(buffer, nmemb * size);
	return (buffer);
}
