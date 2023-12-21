/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 01:05:57 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/11 02:11:53 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*temp;

	if (min >= max)
		return (0);
	range = max - min;
	temp = (int *)malloc(sizeof(int) * range);
	if (temp == 0)
		return (0);
	i = 0;
	while (i < range)
	{
		temp[i] = min + i;
		i++;
	}
	return (temp);
}
