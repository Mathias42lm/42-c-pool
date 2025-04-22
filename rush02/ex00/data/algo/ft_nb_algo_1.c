/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_algo_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:21:55 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/29 18:22:50 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algo.h"

char	**ft_one_to_ten(char **origin, int nb, int i, int j)
{
	char	n;

	if (nb >= 10)
	{
		n = nb / 10 + '0';
		ft_strcat(origin[i], &n);
		n = nb % 10 + '0';
		ft_strcat(origin[i], &n);
		ft_strcat(origin[i], "\0");
		i++;
		nb = nb / 100;
	}
	if (nb >= 0)
	{
		origin[i][j] = nb + '0';
		ft_strcat(origin[i], "\0");
		i++;
	}
	*origin[i] = '\0';
	return (origin);
}

char	**ft_undred(char **origin, int nb, int i, int j)
{
	if (nb >= 100)
	{
		origin[i][j] = nb / 100 + '0';
		i++;
		ft_strcat(origin[i], "100\0");
		i++;
		nb = nb % 100;
	}
	if (nb >= 20)
	{
		origin[i][j] = nb / 10 + '0';
		ft_strcat(origin[i], "0\0");
		i++;
		nb = nb % 10;
	}
	ft_one_to_ten(origin, nb, i, j);
	return (origin);
}

char	**ft_thousand(char **origin, int nb, int i, int j)
{
	char	n;

	if (nb >= 10000)
	{
		n = nb / 10000 + '0';
		ft_strcat(origin[i], &n);
		nb = nb % 10000;
		n = nb / 1000 + '0';
		ft_strcat(origin[i], &n);
		ft_strcat(origin[i], "\0");
		i++;
		nb = nb % 1000;
		ft_strcat(origin[i], "1000\0");
		i++;
	}
	if (nb >= 1000)
	{
		origin[i][j] = nb / 1000 + '0';
		i++;
		ft_strcat(origin[i], "1000\0");
		i++;
		nb = nb % 1000;
	}
	ft_undred(origin, nb, i, j);
	return (origin);
}

char	**ft_thousand_up(char **origin, int nb, int i, int j)
{
	if (nb >= 20000)
	{
		origin[i][j] = nb / 10000 + '0';
		ft_strcat(origin[i], "0\0");
		i++;
		nb = nb % 10000;
		if (nb <= 1000)
		{
			ft_strcat(origin[i], "1000\0");
			i++;
		}
	}
	ft_thousand(origin, nb, i, j);
	return (origin);
}

char	**ft_million(char **origin, int nb, int i, int j)
{
	if (nb >= 1000000)
	{
		origin[i][j] = nb / 1000000 + '0';
		i++;
		ft_strcat(origin[i], "1000000\0");
		i++;
		nb = nb % 1000000;
	}
	if (nb >= 100000)
	{
		origin[i][j] = nb / 100000 + '0';
		i++;
		ft_strcat(origin[i], "100\0");
		i++;
		nb = nb % 100000;
		if (nb <= 1000)
		{
			ft_strcat(origin[i], "1000\0");
			i++;
		}
	}
	ft_thousand_up(origin, nb, i, j);
	return (origin);
}
