/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:10:05 by mmellier          #+#    #+#             */
/*   Updated: 2024/10/01 11:37:48 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;

	i = 0;
	temp = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (src == 0)
		return (0);
	if (temp == NULL)
		return (NULL);
	while (src[i])
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*org;
	char	*copy;

	org = "Les worms sont meilleurs !!!!!";
	copy = ft_strdup(org);
	printf( "%s\n", copy );
	free(copy);
	return (0);
}
*/