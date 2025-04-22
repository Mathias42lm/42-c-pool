/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 19:12:08 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/22 19:55:07 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_possibilities(int left, int right, char *row);
int		ft_atoi(char *str);
void	ft_putchar(char str);
void	up_left_one(int right, char *possibility);
void	up_left_three(int right, char *possibility);
void	up_left_four(int right, char *possibility);
void	up_left_two(int right, char *possibility);

void	print_number(char *row)
{
	int	i;

	i = 0;
	while (row[i] && i < 4)
	{
		ft_putchar(row[i]);
		if (i < 3)
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush(char *str, int a, int b, int c)
{
	char	row1[31];
	char	row2[31];
	char	row3[31];
	char	row4[31];
	int		d;

	ft_possibilities(ft_atoi(&str[16]), ft_atoi(&str[24]), row1);
	ft_possibilities(ft_atoi(&str[18]), ft_atoi(&str[26]), row2);
	ft_possibilities(ft_atoi(&str[20]), ft_atoi(&str[28]), row3);
	ft_possibilities(ft_atoi(&str[22]), ft_atoi(&str[30]), row4);
	while (row1[a])
	{
		while (row2[b])
		{
			while (row3[c])
			{
				while (row4[d])
				{
					if ((row1[a] + row2[b] + row3[c] + row4[d] == 202)
						&& (row1[a + 1] + row2[b + 1] + row3[c + 1]
							+ row4[d + 1] == 202) && (row1[a + 2] + row2[b + 2]
							+ row3[c + 2] + row4[d + 2] == 202) && (row1[a + 3]
							+ row2[b + 3] + row3[c + 3] + row4[d + 3] == 202))
					{
						print_number(&row1[a]);
						print_number(&row2[b]);
						print_number(&row3[c]);
						print_number(&row4[d]);
					}
					else
						d += 5;
				}
				c += 5;
				d = 0;
			}
			b += 5;
			c = 0;
		}
		a += 5;
		b = 0;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_possibilities(int left, int right, char *row)
{
	if (left == 1)
		up_left_one(right, row);
	if (left == 2)
		up_left_two(right, row);
	if (left == 3)
		up_left_three(right, row);
	if (left == 4)
		up_left_four(right, row);
}
