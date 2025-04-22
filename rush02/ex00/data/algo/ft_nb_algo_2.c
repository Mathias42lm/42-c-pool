/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_algo_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 11:47:17 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/29 20:37:37 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algo.h"

char	**ft_ten_million(char **origin, int nb, int i, int j)
{
	char	n;

	if (nb >= 20000000)
	{
		origin[i][j] = nb / 10000000 + '0';
		ft_strcat(origin[i], "0\0");
		i++;
		nb = nb % 10000000;
		if (nb <= 1000000)
			ft_strcat(origin[i++], "1000000\0");
	}
	if (nb >= 10000000)
	{
		n = nb / 10000000 + '0';
		ft_strcat(origin[i], &n);
		nb = nb % 10000000;
		n = nb / 1000000 + '0';
		ft_strcat(origin[i], &n);
		ft_strcat(origin[i], "\0");
		nb = nb % 1000000;
		i++;
		ft_strcat(origin[i++], "1000000\0");
	}
	ft_million(origin, nb, i, j);
	return (origin);
}

char	**ft_billion(char **origin, int nb, int i, int j)
{
	if (nb >= 1000000000)
	{
		origin[i][j] = nb / 1000000000 + '0';
		i++;
		ft_strcat(origin[i], "1000000000\0");
		i++;
		nb = nb % 1000000000;
	}
	if (nb >= 100000000)
	{
		origin[i][j] = nb / 100000000 + '0';
		i++;
		ft_strcat(origin[i], "100\0");
		i++;
		nb = nb % 100000000;
		if (nb <= 1000000)
		{
			ft_strcat(origin[i], "1000000\0");
			i++;
		}
	}
	ft_ten_million(origin, nb, i, j);
	return (origin);
}
