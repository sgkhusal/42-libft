/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:53:38 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/03 19:56:55 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		topositive(int n)
{
	unsigned int	nb;

	if (n < 0)
		nb = (unsigned int)(n * (-1));
	else
		nb = (unsigned int)n;
	return (nb);
}

static int				nbsize(int n)
{
	unsigned int	nb;
	int				size;

	nb = topositive(n);
	size = 1;
	while (nb > 10)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char				*ft_itoa(int n)
{
	unsigned int	nb;
	char			*charnb;
	size_t			size;

	size = nbsize(n);
	if (n < 0)
		size++;
	if (!(charnb = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	charnb[size] = '\0';
	nb = topositive(n);
	while (size--)
	{
		charnb[size] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n < 0)
		charnb[0] = '-';
	return (charnb);
}
//testar input n'ao numero
