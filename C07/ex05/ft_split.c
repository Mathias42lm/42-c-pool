/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:05:25 by mmellier          #+#    #+#             */
/*   Updated: 2024/10/02 14:26:19 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char src)
{
	int		i;
	char	*temp;

	i = 0;
	while (dest[i])
		i++;
	temp = malloc(sizeof(char) * (i + 1));
	if (!temp)
		return (NULL);
	i = 0;
	while (dest[i])
	{
		temp[i] = dest[i];
		i++;
	}
	temp[i] = src;
	return (temp);
}

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

int	count(char *str, char *sep)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (str[i])
	{
		if (is_a_sep(str[i], sep) == 1 && is_a_sep(str[i + 1], sep) == 0
			&& str[i + 1] != '\0')
			result++;
		i++;
	}
	return (result);
}

char	**listcreater(char *str, char *sep, char **save)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_a_sep(str[i], sep) == 0)
		{
			save[j] = ft_strcat(save[j], str[i]);
			i++;
		}
		else if (is_a_sep(str[i], sep) == 1 && is_a_sep(str[i + 1], sep) == 0
			&& str[i + 1] != '\0')
		{
			i++;
			j++;
		}
		else
			i++;
	}
	return (save);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**result;

	i = 0;
	result = malloc(sizeof(char *) * (count(str, charset)));
	if (!result)
		return (NULL);
	while (i < count(str, charset) + 1)
	{
		result[i] = malloc(sizeof(char) * (50 + 1));
		i++;
	}
	result = listcreater(str, charset, result);
	result[i-1] = "0";
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char **test;
	int i;

	i = 0;
	test = ft_split("abc0def1ghi23xyz000123salut", "0123");
	while (test[i])
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}