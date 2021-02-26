/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:40:06 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/26 17:59:34 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	char	*n;
	int		i;
	int		count;

	i = 0;
	count = -1;
	if (ft_isdigit(nptr[0]) || nptr[0] == '+' || nptr[0] == '-')
	{
		if (nptr[0] == '-')
		{
			count++;
			n[count] = nptr[0];
		}
		while (i < ft_strlen(nptr))
		{
			if (ft_isdigit(nptr[i]))
			{
				count++;
				n[count] = nptr[i];
			}
			else
				return (ft_chartoint(&n[0], count + 1)); // testar quando so tem - no comeco e nao tem nenhum numero depois
			i++;
		}
		return (ft_chartoint(&n[0], count + 1));
	}
	else
		return (0);
}

static int	ft_chartoint(char *nb, int size)
{
	int n;
	int i;

	i = 0;
	n = 1;
	if (size == 1 && nb[0] == '-')
		return (0);
	if (i == 0 && nb[0] == '-')
	{
		n = n * (-1);
		i++;
	}
	while (i < size)
	{
		n = n + ((pot10(size - 1 - i) * nb[i]));
		i--;
	}
	return (n);
}

static int	pot10(int pot)
{
	int n;

	n = 1;
	while (pot > 0)
	{
		n = n * 10;
		pot--;
	}
	return (n);
}
