/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_if_not_possible.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:45:27 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/29 15:17:19 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_conditions(char *cond)
{
	int	i;

	i = 0;
	while (cond[i])
	{
		if ((cond[i] >= '0' && cond[i] <= '9'))
			i++;
		else
			return (1);
	}
	if (cond[0] == '\0')
		return (1);
	else
		return (0);
}
