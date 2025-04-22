/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:03:25 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/22 19:23:02 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		check_not_possible_case(char *str);
int		check_not_possible_in_line(char *str);
int		check_conditions(char *cond);
int		check_not_possible_case(char *str);
void	rush(char *str, int a, int b, int c);

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	if (argc == 1 || argc > 2)
	{
		ft_putstr("Error, you must have 1 argument.");
		return (1);
	}
	else if (check_conditions(argv[1]) == 1)
		ft_putstr("Error, check your argument. (Invalide Character or length)");
	else if (check_not_possible_in_line(argv[1]) == 1)
		ft_putstr("Error, check your argument.");
	else if (check_not_possible_case(argv[1]) == 1)
		ft_putstr("Error, check your argument.");
	else
		rush(argv[1], a, b, c);
	return (0);
}
