/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_put_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 15:44:19 by sguilher          #+#    #+#             */
/*   Updated: 2021/02/26 16:37:53 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

void	test_ft_put_fd(void)
{
	printf("\n\n\n*****************************ft_putchar_fd function*****************************\n");

	printf("\ntest 1: printable char\n");
	ft_putchar_fd('1', 1);
	write(1, "\n", 1);
	ft_putchar_fd('k', 1);
	ft_putchar_fd('\n', 1);
	printf("\ntest 2: no printable char - null\n");
	ft_putchar_fd('\0', 1);

	printf("\n\n\n*****************************ft_putstr_fd function*****************************\n");

	ft_putstr_fd("Hello World\0", 1);
	write(1, "\n", 1);
	ft_putstr_fd("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\0", 1);
	write(1, "\n", 1);
	ft_putstr_fd("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\0AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\0", 1);

	printf("\n\n\n*****************************ft_putendl_fd function*****************************\n");

	ft_putendl_fd("Hello World\0", 1);
	write(1, "\n", 1);
	ft_putendl_fd("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\0", 1);
	write(1, "\n", 1);
	ft_putendl_fd("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\0AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\0", 1);

	printf("\n\n\n*****************************ft_putnbr_fd function*****************************\n");
	printf("\ntest 1: highest int positive number\n");
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	printf("\ntest 1: smallest int negative number\n");
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
}
