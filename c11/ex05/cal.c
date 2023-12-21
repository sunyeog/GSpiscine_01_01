/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cal.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:03:38 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/20 20:03:40 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	plus(int x, int y)
{
	int	res;

	res = x + y;
	return (res);
}

int	minus(int x, int y)
{
	int	res;

	res = x - y;
	return (res);
}

int	aster(int x, int y)
{
	int	res;

	res = x * y;
	return (res);
}

int	slash(int x, int y)
{
	int	res;

	res = x / y;
	return (res);
}

int	per(int x, int y)
{
	int	res;

	res = x % y;
	return (res);
}
