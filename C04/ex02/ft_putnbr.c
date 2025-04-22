/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:15:58 by mmellier          #+#    #+#             */
/*   Updated: 2024/10/01 08:32:50 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_putnbr(nb / 10);
			ft_putchar('8');
		}
		else
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
	}
	else if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}
/*
int	main(void)
{
	ft_putnbr(8);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(12345678);
	ft_putchar('\n');
	ft_putnbr(-21478);
	ft_putchar('\n');
	ft_putnbr(0);
}
*/