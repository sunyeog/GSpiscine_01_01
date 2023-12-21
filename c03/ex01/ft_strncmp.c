/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:47:24 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/02 19:48:37 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((*a == *b) && *a && *b && (i + 1 < n))
	{
		a++;
		b++;
		i++;
	}
	return (*a - *b);
}
/*
#include <stdio.h>

int main(void)
{
    char *a = "abhrw";
    char *b = "abhrw";
    printf("%d", ft_strncmp(a, b, 6));
}*/
