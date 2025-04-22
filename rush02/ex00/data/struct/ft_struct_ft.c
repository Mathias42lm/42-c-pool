/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:41:02 by antbonin          #+#    #+#             */
/*   Updated: 2024/09/29 20:21:38 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_structure.h"

// make sure that the end of the line is always null terminated
// if it's not null terminated will return NULL
// if it is it will return the string + 1 (character null)
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = s;
	unsigned char		uc;
	size_t				i;

	uc = c;
	i = 0;
	while (i < n)
	{
		if (p[i] == uc)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}

// copy the source into the dest for n char
char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i - 1 != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// check if there's an occurence of ':' if there's one we
// return the string else return null
char	*ft_strchr(const char *string, int searchedChar)
{
	while ((*string != '\0') && (*string != searchedChar))
	{
		string++;
	}
	if (*string == searchedChar)
	{
		return ((char *)string);
	}
	return (NULL);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
