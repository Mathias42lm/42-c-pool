/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_library_main.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 10:39:58 by mmellier          #+#    #+#             */
/*   Updated: 2024/09/29 20:21:46 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBRARY_MAIN_H
#define FT_LIBRARY_MAIN_H

#include <unistd.h>

void	ft_putstr(char *str);
int	    check_args(int argc, char **argv);
int     check_conditions(char *cond);
char	**ft_algo(char *dest);

int	ft_struct(char **str, char *dico, char *argv);

#endif
