/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:40:02 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/24 12:46:22 by mmellier         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char const *argv[])
{
	(void) argc;
	printf("%d",ft_is_prime(atoi(argv[1])));
	return (0);
}
*/