/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:39:26 by sunhnoh           #+#    #+#             */
/*   Updated: 2023/12/02 23:55:32 by sunhnoh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == 0)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			while (*(str + i) == *(to_find + i))
			{
				i++;
				if (*(to_find + i) == 0)
					return (str);
			}
		}
		str++;
	}
	return (0);
}
