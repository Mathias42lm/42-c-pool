/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_not_possible.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:53:12 by spunyapr          #+#    #+#             */
/*   Updated: 2024/09/22 19:22:48 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_limit_four_one(int start_index, int end_index, char *str)
{
	int	i;
	int	count_four;
	int	count_one;

	count_four = 0;
	count_one = 0;
	i = start_index;
	while (i >= start_index && i <= end_index)
	{
		if (str[i] == '4')
			count_four++;
		if (str[i] == '1')
			count_one++;
		if (count_four > 1 || count_one > 1)
			return (1);
		i += 2;
	}
	return (0);
}

int	check_not_possible_in_line(char *str)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (check_limit_four_one(0, 6, str) == 1)
			return (1);
		if (check_limit_four_one(8, 14, str) == 1)
			return (1);
		if (check_limit_four_one(16, 22, str) == 1)
			return (1);
		if (check_limit_four_one(24, 30, str) == 1)
			return (1);
		i += 2;
	}
	return (0);
}

int	check_not_possible_case(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 8;
	while (str[i])
	{
		if ((str[i] == '1' && str[j] == '1') || (str[i] == '2' && str[j] == '4')
			|| (str[i] == '3' && str[j] == '3') || (str[i] == '3'
				&& str[j] == '4') || (str[i] == '4' && str[j] == '2')
			|| (str[i] == '4' && str[j] == '3') || (str[i] == '4'
				&& str[j] == '4'))
			return (1);
		if (i == 6)
		{
			i += 8;
			j += 8;
		}
		i += 2;
		j += 2;
	}
	return (0);
}

int	check_conditions(char *cond)
{
	int	i;

	i = 0;
	while (cond[i])
	{
		if ((cond[i] >= '1' && cond[i] <= '4') || cond[i] == ' ')
			i++;
		else
			return (1);
	}
	if (i != 31)
	{
		return (1);
	}
	return (0);
}
