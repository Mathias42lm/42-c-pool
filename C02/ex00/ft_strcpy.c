/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:57:42 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/16 16:51:12 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	numb;

	numb = 0;
	while (src[numb] != '\0')
	{
		dest[numb] = src[numb];
		numb++;
	}
	dest[numb] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	x[] = "tesstststs";
	char	v[] = "ndbnbnnn";
	
	printf("%s",ft_strcpy(x, v));
	return (0);
}
*/
