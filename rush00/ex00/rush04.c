/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:26:50 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/15 15:33:54 by elautier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	display(int x, int y, int i, int j)
{
	if (((i == 1) && (j == 1)) || ((i == x) && (j == y) && (y > 1) && (x > 1)))
	{
		ft_putchar('A');
	}
	else if (((i == 1) && (j == y)) || ((i == x) && (j == 1)))
	{
		ft_putchar('C');
	}
	else if ((i > 1) && (i < x) && (j > 1) && (j < y))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
	if (i == x)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if ((x <= 0) || (y <= 0))
	{
		write(1, &("Erreur, vous devez avoir x et y superieur a 0"), 45);
		return ;
	}
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			display(x, y, i, j);
			i++;
		}
		j++;
	}
}
