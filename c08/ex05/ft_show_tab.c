/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 01:33:03 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/18 04:21:47 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	extraction(long long int nb)
{
	long long int	x;
	long long int	y;
	long long int	z;

	x = 1;
	while (x <= nb)
	{
		x *= 10;
		y = x / 10;
	}
	while (x > 1)
	{
		z = nb % x;
		z = z / y;
		ft_putchar(z + '0');
		x /= 10;
		y = x / 10;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
		extraction(nb);
	}
	else if (nb > 0)
	{
		extraction(nb);
	}
	else
	{
		ft_putchar(0 + '0');
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
