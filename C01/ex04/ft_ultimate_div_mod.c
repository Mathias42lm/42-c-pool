/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:54:04 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/13 11:42:51 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	u;

	c = *a / *b;
	u = *a % *b;
	*a = c;
	*b = u;
}
/*
int main(void)
{

	int te = 150;
	int th = 130;

	int *gh = &te;
	int *gd = &th;

	ft_ultimate_div_mod(gh, gd);

	printf("%d %d", te, th);


}
*/
