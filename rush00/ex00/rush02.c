/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 05:09:37 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/03 05:09:50 by sunhnoh          ###   ########.fr       */
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
			if ((wid == 1 && hit == 1) || (wid == x && hit == 1))
				ft_putchar('A');
			else if ((wid == 1 || wid == x) && (hit == y))
				ft_putchar('C');
			else if (((1 < wid < x) && (hit == y || hit == 1))
				|| ((1 < hit < y) && (wid == x || wid == 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			wid++;
		}
		ft_putchar('\n');
		hit++;
	}
}
