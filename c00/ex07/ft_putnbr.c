/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:57:24 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/07 14:16:56 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	extraction(int nb)
{
	long long int	x;
	int				y;
	int				res;

	x = 1;
	while (x <= nb)
	{
		x *= 10;
	}
	while (x >= 10)
	{
		y = x / 10;
		res = nb % x;
		res = res / y;
		ft_putchar(res + '0');
		x /= 10;
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
		ft_putchar('-');
		extraction(nb);
	}
	else if (nb > 0)
	{
		extraction(nb);
	}
	else
	{
		ft_putchar('0');
	}
}
