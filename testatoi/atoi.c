/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:44:10 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/07 15:18:26 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int	i;
	int	flag;
	int	res;
	int	n;

	i = 0;
	flag = 0;
	res = 0;
	n = 1;
	while (str[i] && !(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
			i++;
		else if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				n *= -1;
			if ((str[i] == '-' || str[i] == '+') && (str[i + 1] >= 9 && str[i + 1] <= 13 || str[i + 1] == 32))
				return (0);
			flag++;
			if (flag == 2)
				return (0);
			i++;
		}
		else
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res  = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * n);
}

int main()
{
	char *str = "235";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	return 0;	
}
