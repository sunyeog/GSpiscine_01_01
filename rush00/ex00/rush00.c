/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 05:05:15 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/03 06:42:06 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	wid;
	int	hit;

	hit = 1;
	while (hit <= y && (x > 0 && y > 0))
	{
		wid = 1;
		while (wid <= x)
		{
			if ((wid == 1 && hit == 1) || (wid == 1 && hit == y)
				|| (wid == x && hit == 1) || (wid == x && hit == y))
				ft_putchar('o');
			else if (wid > 1 && hit > 1 && wid < x && hit < y)
				ft_putchar(' ');
			else if ((wid == 1 && hit > 1 && hit < y)
				|| (wid == x && hit > 1 && hit < y))
				ft_putchar('|');
			else if ((hit == 1 && wid > 1 && wid < x)
				|| (hit == y && wid > 1 && wid < x))
				ft_putchar('-');
			wid++;
		}
		ft_putchar('\n');
		hit++;
	}
}
