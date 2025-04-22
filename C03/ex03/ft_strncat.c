/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:08:53 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/18 17:52:21 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	len;

	len = 0;
	index = 0;
	while (dest[len])
	{
		len++;
	}
	while (src[index] && index < nb)
	{
		dest[len + index] = src[index];
		index++;
	}
	dest[len + index] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "World";
	char	dest[] = "Hello ";

	printf("%s", ft_strncat(dest, src, 2));
}

