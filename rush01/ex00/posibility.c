/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   posibility.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmellier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 10:43:09 by spunyapr          #+#    #+#             */
/*   Updated: 2024/09/22 18:54:37 by mmellier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);

void	copy_possibility(char *str, char *possibility)
{
	int	i;
	int	len_str;

	len_str = ft_strlen(str);
	i = 0;
	while (i < len_str)
	{
		possibility[i] = str[i];
		i++;
	}
	possibility[i] = '\0';
}

void	up_left_one(int right, char *possibility)
{
	int		i;
	char	onetwo[10];
	char	onethree[10];
	char	onefour[5];

	ft_strcpy(onetwo, "4123,4213");
	ft_strcpy(onethree, "4312,4132");
	ft_strcpy(onefour, "4321");
	i = 0;
	if (right == 2)
		copy_possibility(onetwo, possibility);
	else if (right == 3)
		copy_possibility(onethree, possibility);
	else if (right == 4)
		copy_possibility(onefour, possibility);
}

void	up_left_two(int right, char *possibility)
{
	int		i;
	char	twoone[10];
	char	twotwo[31];
	char	twothree[10];

	ft_strcpy(twoone, "3214,3124");
	ft_strcpy(twotwo, "1423,2143,2413,3412,3142,3241");
	ft_strcpy(twothree, "1432,2431");
	i = 0;
	if (right == 1)
		copy_possibility(twoone, possibility);
	else if (right == 2)
		copy_possibility(twotwo, possibility);
	else if (right == 3)
		copy_possibility(twothree, possibility);
}

void	up_left_three(int right, char *possibility)
{
	int		i;
	char	threeone[16];
	char	threetwo[16];

	ft_strcpy(threeone, "1324,2134,2314");
	ft_strcpy(threetwo, "1243,1342,2341");
	i = 0;
	if (right == 1)
		copy_possibility(threeone, possibility);
	else if (right == 2)
		copy_possibility(threetwo, possibility);
}

void	up_left_four(int right, char *possibility)
{
	int		i;
	char	fourone[4];

	ft_strcpy(fourone, "1234");
	i = 0;
	if (right == 1)
		copy_possibility(fourone, possibility);
}
