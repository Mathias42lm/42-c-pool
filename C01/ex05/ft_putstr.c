/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:41:11 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/15 12:10:43 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cmd;

	cmd = 0;
	while (str[cmd] != '\0')
	{
		write(1, &str[cmd], 1);
		cmd++;
	}
}
/*
int main(void)
{

	ft_putstr("Je ne dit ca je ne dit rien mais les Worms sont meilleurs !!");
	return (0);
}
*/
