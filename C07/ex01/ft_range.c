/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:39:02 by mmellier          #+#    #+#             */
/*   Updated: 2024/10/01 13:08:24 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min + 1));
	if (tab == NULL)
		return (0);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*lst;
	int	j;

	min = 0;
	max = 16;
	j = 0;
	lst = ft_range(min, max);
	while (lst[j] != '\0')
	{
		printf("%d, ", lst[j]);
		j++;
	}
	free(lst);
	return (0);
}
*/