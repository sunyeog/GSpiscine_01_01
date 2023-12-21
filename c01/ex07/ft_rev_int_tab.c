/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:56:48 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/11/29 13:28:10 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int main(void)
{
	int	tab[3] = { 5,4,3};
	ft_rev_int_tab(tab, 3);
	int	i = 0;
	while(i < 3)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
