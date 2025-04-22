/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:07:28 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/15 18:06:33 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	printf("%d",ft_str_is_printable(""));
}
*/
