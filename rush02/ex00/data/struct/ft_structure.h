/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 10:35:40 by antbonin          #+#    #+#             */
/*   Updated: 2024/09/29 20:20:02 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCTURE_H
# define FT_STRUCTURE_H

# include "../main/ft_library.h"
# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>

# define MAX_WORD_LENGTH 20
# define MAX_ENTRIES 41
# define BUFFER_SIZE 1024

void		*ft_memchr(const void *s, int c, size_t n);
char		*ft_strncpy(char *dest, char *src, int n);
char		*ft_strchr(const char *string, int searchedChar);
int			ft_struct(char **str, char *dico, char *argv);
int			ft_strcmp(char *s1, char *s2);

struct		s_DictEntry
{
	int		number;
	char	word[MAX_WORD_LENGTH];
};

#endif