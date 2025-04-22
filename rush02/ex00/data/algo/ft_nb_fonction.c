/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_fonction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:27:50 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/29 19:01:28 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algo.h"

int	len_mal(char *nbr)
{
	int	result;

	result = 0;
	if (ft_strlen(nbr) == 1)
		result = 1;
	if (ft_strlen(nbr) == 2)
		result = 2;
	if (ft_strlen(nbr) == 3)
		result = 4;
	if (ft_strlen(nbr) == 4)
		result = 6;
	if (ft_strlen(nbr) == 5)
		result = 7;
	if (ft_strlen(nbr) == 6)
		result = 9;
	if (ft_strlen(nbr) == 7)
		result = 11;
	if (ft_strlen(nbr) == 8)
		result = 12;
	if (ft_strlen(nbr) == 9)
		result = 14;
	if (ft_strlen(nbr) == 10)
		result = 16;
	return (result);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
