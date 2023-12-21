/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:25:48 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/03 13:10:17 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 0)
	{
		res = res * nb ;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(-3));
	return 0;
}*/
