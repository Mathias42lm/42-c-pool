/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:40:36 by mmellier          #+#    #+#             */
/*   Updated: 2024/10/01 08:44:31 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_base_valid(char *base)
{
	int	size;
	int	index;
	int	isearch;

	size = ft_strlen(base);
	if (size <= 1)
		return (0);
	index = 0;
	while (index < size)
	{
		if (base[index] == '+' || base[index] == '-')
			return (0);
		isearch = 1;
		while (base[index + isearch])
		{
			if (base[index] == base[index + isearch])
				return (0);
			isearch++;
		}
		index++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	int		base_size;

	if (ft_base_valid(base))
	{
		nb = (int)nbr;
		base_size = ft_strlen(base);
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb <= base_size - 1)
			ft_putchar(base[nb]);
		else
		{
			ft_putnbr_base(nb / base_size, base);
			ft_putchar(base[nb % base_size]);
		}
	}
}
/*
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)argc;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
*/