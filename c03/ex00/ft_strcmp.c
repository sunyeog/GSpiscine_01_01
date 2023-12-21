/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:10:41 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/02 21:53:56 by sunhnoh          ###   ########.fr       */
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
	while ((*a == *b) && *a && *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}
/*
#include <stdio.h>

int main(void)
{
    char *a = "abcd";
    char *b = "abcd";
    ft_strcmp(a, b);
    printf("%d", ft_strcmp(a, b));
}*/
