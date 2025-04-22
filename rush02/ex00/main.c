/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 09:27:31 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/29 20:24:30 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data/main/ft_library_main.h"
#include <stdio.h>

//#include "data/algo/ft_algo.h"

int	main(int argc, char *argv[])
{
	char	**tab;

	if (argc == 1 || argc > 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	if (argc == 2 && check_conditions(argv[1]) != 1)
	{
		tab = ft_algo(argv[1]);
		ft_struct(tab, "./data/numbers.dict", argv[1]);
		ft_putstr("\n");
		return (0);
	}
	else if (argc == 3 && check_conditions(argv[2]) != 1)
	{
		tab = ft_algo(argv[2]);
		ft_struct(tab, argv[1], argv[2]);
		ft_putstr("\n");
		return (0);
	}
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
