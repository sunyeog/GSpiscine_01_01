/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 05:08:56 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/03 16:19:23 by sunhnoh          ###   ########.fr       */
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
				ft_putchar('/');
			else if ((wid == x && hit == 1) || (wid == 1 && hit == y))
				ft_putchar('\\');
			else if ((wid > 1) && (wid < x) && (hit > 1) && (hit < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			wid++;
		}
		ft_putchar('\n');
		hit++;
	}
}
