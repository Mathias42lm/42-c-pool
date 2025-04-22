/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:33:23 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/29 20:24:08 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algo.h"

char	**ft_algo(char *dest)
{
	int		nb;
	int		i;
	int		j;
	char	**origin;

	i = 0;
	j = 0;
	origin = (char **)malloc(sizeof(char *) * len_mal(dest) + 1);
	nb = ft_atoi(dest);
	while (i != len_mal(dest) + 1)
	{
		origin[i] = (char *)malloc(sizeof(char) * 11);
		*origin[i] = '\0';
		i++;
	}
	i = 0;
	ft_billion(origin, nb, i, j);
	return (origin);
}

void	ui(int argc, char *argv[])
{
	char	**t;
	int		u;
	int		b;

	(void)argc;
	u = 0;
	b = 0;
	t = ft_algo(argv[1]);
	while (u != 7)
	{
		while (t[u][b] != '\0')
		{
			write(1, &t[u][b], 1);
			b++;
		}
		write(1, "\n", 1);
		u++;
		b = 0;
	}
	free(t);
}
