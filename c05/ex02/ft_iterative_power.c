/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:34:52 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/04 21:24:32 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_power(0,5));
	return 0;
}*/
