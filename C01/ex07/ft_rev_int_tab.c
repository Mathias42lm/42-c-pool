/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:21:45 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/15 08:57:44 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	*a;
	int	*z;

	a = &tab[0];
	z = &tab[size - 1];
	while (a < z)
	{
		temp = *a;
		*a = *z;
		*z = temp;
		a++;
		z--;
	}
}
/*
int main(void)
{
	int u[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int cmd;
	
	ft_rev_int_tab(u, 10);

	cmd = 0;

	while (cmd != 10)
	{
		printf("%d", u[cmd]);
		cmd++;
	}
}
*/
