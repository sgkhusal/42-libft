/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:56:43 by sguilher          #+#    #+#             */
/*   Updated: 2021/03/02 22:21:44 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	initial_trim(char const *s1, char const *set);
static int	final_trim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		end;
	char	*trim;

	if (!s1)
		return (NULL);
	if (!set || ft_strlen(set) == 0)
		return ((char *)s1); // ou retorna NULL para o !set?
	i = initial_trim(s1, set);
	if (i == 0)
		return ("\0");
	end = final_trim(s1, set);
	if (!(trim = (char *)malloc((end - i + 2) * sizeof(char))))
		return (NULL);
	j = 0;
	while (i <= end)
	{
		trim[j] = s1[i];
		i++;
		j++;
	}
	trim[j] = '\0';
	return (trim);
}

static int	initial_trim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		initial;

	i = 0;
	while (s1[i])
	{
		j = 0;
		initial = 1;
		while (set[j])
		{
			if (s1[i] == set[j])
				initial = 0;
			j++;
		}
		if (initial == 1)
			return (i);
		i++;
	}
	return (0);
}

static int	final_trim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	final;

	i = (int)ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		final = 1;
		while (set[j])
		{
			if (s1[i] == set[j])
				final = 0;
			j++;
		}
		if (final == 1)
			return (i);
		i--;
	}
	return (0);
}
