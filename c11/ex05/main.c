/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:04:31 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/20 20:04:34 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	extraction(long long int nb);
int		plus(int x, int y);
int		minus(int x, int y);
int		aster(int x, int y);
int		slash(int x, int y);
int		per(int x, int y);

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

void	ft_write(char *argv, int x, int y)
{
	if (*argv == '+')
		ft_putnbr(x + y);
	else if (*argv == '-')
		ft_putnbr(x - y);
	else if (*argv == '*')
		ft_putnbr(x * y);
	else if (*argv == '/')
	{
		if (y == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(x / y);
	}
	else if (*argv == '%')
	{
		if (y == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(x % y);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	(*fp[5])(int, int);
	int	x;
	int	y;

	fp[0] = plus;
	fp[1] = minus;
	fp[2] = aster;
	fp[3] = slash;
	fp[4] = per;
	if (argc == 4)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[3]);
		ft_write(argv[2], x, y);
	}
}
