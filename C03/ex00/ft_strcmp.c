/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:19:09 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/18 17:40:14 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s1[i] == s2[n])
	{
		if (s1[i] == '\0' && s2[n] == '\0')
		{
			return (0);
		}
		i++;
		n++;
	}
	return (s1[i] - s2[n]);
}
/*
int	main(void)
{
	char	s1[] = "AB";
	char	s2[] = "ABC";

	printf("%d\n", ft_strcmp(s1, s2));
}
*/
