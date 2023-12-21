/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:03:54 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/20 16:43:05 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 0;
	max = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			max++;
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			min++;
		i++;
	}
	if (max == i || min == i)
		return (1);
	else
		return (0);
}
