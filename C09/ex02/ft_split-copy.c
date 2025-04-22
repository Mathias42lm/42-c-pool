/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:05:25 by mmellier          #+#    #+#             */
/*   Updated: 2024/10/02 14:04:55 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_a_sep(char str, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int	is_a_world(char str, char str_before, char *sep)
{
	return (!is_a_sep(str, sep) && is_a_sep(str_before, sep));
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**result;
}

#include <stdio.h>

int	main(void)
{
	char **test;
	int i;
	int j;

	i = 0;
	j = 0;
	test = ft_split("test|test", "|");
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	i = 0;
	free(test);
	while (test[i])
	{
		free(test[i]);
		i++;
	}

	return (0);
}