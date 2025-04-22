/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:21:08 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/30 15:14:49 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	size = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (to_find[size])
		size++;
	while (str[i])
	{
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (j == size)
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello| World";
	char	to_find[] = "|";

	printf("%s\n", ft_strstr(str, to_find));
}
*/