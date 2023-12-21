/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:44:39 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/05 10:54:20 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	wid;
	int	hit;

	hit = 1;
	while ((hit <= y) && (x > 0) && (y > 0))
	{
		wid = 1;
		while (wid <= x)
		{
			if ((wid == x && hit == y && wid != 1
					&& hit != 1) || (wid == 1 && hit == 1))
				ft_putchar('A');
			else if ((wid == x && hit == 1) || (wid == 1 && hit == y))
				ft_putchar('C');
			else if ((wid > 1) && (wid < x) && (hit > 1) && (hit < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			wid++;
		}
		ft_putchar('\n');
		hit++;
	}
}
