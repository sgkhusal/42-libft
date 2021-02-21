/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 01:44:49 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/16 02:04:26 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
int		ft_isdigit(int c); // tirar
int		ft_isalpha(int c); // tirar

int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
