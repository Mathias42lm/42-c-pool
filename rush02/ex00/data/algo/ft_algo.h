/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:39:58 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/29 19:34:37 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ALGO_H
# define FT_ALGO_H

# include "../main/ft_library.h"
# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		len_mal(char *nbr);
int		ft_atoi(char *str);
char	**ft_billion(char **origin, int nb, int i, int j);
int		ft_len_mal(char *nbr);
char	*ft_strcat(char *dest, char *src);
char	**ft_million(char **origin, int nb, int i, int j);
int		len_mal(char *nbr);

#endif
