/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:44:03 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/02 19:25:09 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idest;
	unsigned int	isrc;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	isrc = 0;
	idest = destlen;
	while (src[isrc] && (destlen + isrc + 1 < size))
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	if (destlen < size)
		return (srclen + destlen);
	else
		return (srclen + size);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	s1[] = "sifdfdfdfdfdf";
	char	s2[] = "hello";
	printf("%d\n", ft_strlcat(s1,s2,10));
	//printf("%d", strlcat(s1,s2,10));
	return 0;
}*/
