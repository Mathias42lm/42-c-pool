/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:22:17 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/24 12:47:47 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	isprime;

	i = 1;
	isprime = 0;
	if (nb == 4)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			isprime++;
		}
		i++;
	}
	if (isprime == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	temp;

	temp = nb;
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		while (ft_is_prime(temp) != 1)
			temp++;
	return (temp);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char const *argv[])
{
	(void) argc;
	printf("%d", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/