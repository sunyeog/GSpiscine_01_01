/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:03:19 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/15 13:44:18 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sep_test(char a, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (a == charset[i])
			return (1);
		i++;
	}
	if (a == '\0')
		return (1);
	return (0);
}

int	count_strs(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (sep_test(str[i + 1], charset) == 1
			&& sep_test(str[i], charset) == 0)
			cnt++;
		i++;
	}
	return (cnt);
}

void	fill_malloc(char *str, char *charset, char *res)
{
	int	i;

	i = 0;
	while (sep_test(str[i], charset) == 0)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
}

void	save_malloc(char *str, char *charset, char **res)
{
	int	i;
	int	j;
	int	cnt;

	cnt = 0;
	i = 0;
	while (str[i])
	{
		if (sep_test(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (sep_test(str[i + j], charset) == 0)
				j++;
			res[cnt] = (char *)malloc(sizeof(char) * (j + 1));
			fill_malloc(str + i, charset, res[cnt]);
			i = i + j;
			cnt++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	int		cnt;
	char	**res;

	cnt = count_strs(str, charset);
	res = (char **)malloc(sizeof(char *) * (cnt + 1));
	res[cnt] = 0;
	save_malloc(str, charset, res);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*a;
	char	*b;
	char	**grid;
	int		i;
	a = "hell!@#$o my n!am#e i$s k@!you, alw#ays $!love y$$a, hehe#!ehee";
	b = "!@#$";
	grid = ft_split(a , b);
	i = 0;
	printf("원래문자열 :%s \n 구분자 : %s \n", a, b);
	while (grid[i])
	{
		printf("%d번째! %s \n", i, grid[i]);
		i++;
	}
	return (0);
}*/
