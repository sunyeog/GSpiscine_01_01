/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:55:19 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/20 21:39:01 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	while ((a[i] == b[i]) && (a[i] && b[i]))
	{
		i++;
	}
	return (a[i] - b[i]);
}

int	count_arr(char **tab)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (tab[i] != 0)
	{
		cnt++;
		i++;
	}
	return (cnt);
}

void	ft_sort_string_tab(char **tab)
{
	char	*temp;
	int		i;
	int		j;
	int		cnt;

	cnt = count_arr(tab);
	j = 0;
	while (j < cnt - 1)
	{
		i = 0;
		while (i < cnt - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}
