/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 03:14:53 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/12 21:06:21 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char	*mallen(int size, char **strs, char *sep)
{
	char	*temp;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (strs[i])
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		len += ft_strlen(sep);
		i++;
	}
	temp = (char *)malloc(sizeof(char) * len);
	if (size == 0)
		temp = (char *)malloc(1);
	return (temp);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		i;
	int		j;
	int		x;

	x = 0;
	i = -1;
	temp = mallen(size, strs, sep);
	if (size == 0)
		return (temp);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			temp[x++] = strs[i][j++];
		j = 0;
		while (sep[j] && (i < size - 1))
			temp[x++] = sep[j++];
	}
	temp[x] = '\0';
	return (temp);
}
