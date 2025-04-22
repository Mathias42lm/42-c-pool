/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antbonin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:36:56 by antbonin          #+#    #+#             */
/*   Updated: 2024/09/29 20:38:02 by antbonin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main/ft_library.h"
#include "ft_structure.h"

/*
Process_line ; this function process only 1 line of the dictionnary ,
it separate the number and the char with atoi ton an in,
copie the word in the struct with colon

process_buffer : this function treat a buffer
wich contains MAX_ENTRY of ligns in the dictionnary
she read it line by line,
identify the separator ( \n and ':')
if a ligne is valid -> call process line

read_dict_file : this function read the file dictionary
buffer , so line by line then proceed to call
process_buffer for every line read without error
until the MAX_ENTRY is reached with count

find_and_print_number : this functon just check at the index i
if there's a number equal to it then return
the word at the same index

ft_struct : the main function , it open the dictionarry ,
call read_dict_file , to read and write in the struct
then call find_and_print_number to search the
result and print it
*/
void	process_line(struct s_DictEntry *dict, int *count, char *line_start,
		char *colon)
{
	*colon = '\0';
	dict[*count].number = ft_atoi(line_start);
	ft_strncpy(dict[*count].word, colon + 2, MAX_WORD_LENGTH - 1);
	dict[*count].word[MAX_WORD_LENGTH - 1] = '\0';
	(*count)++;
}

int	process_buffer(struct s_DictEntry *dict, int *count, char *buffer,
		ssize_t bytes_read)
{
	char	*line_start;
	char	*line_end;
	char	*colon;

	line_start = buffer;
	while (*count < MAX_ENTRIES)
	{
		line_end = ft_memchr(line_start, '\n', bytes_read - (line_start
					- buffer));
		if (line_end == NULL)
			break ;
		*line_end = '\0';
		colon = ft_strchr(line_start, ':');
		if (colon)
			process_line(dict, count, line_start, colon);
		line_start = line_end + 1;
	}
	if (bytes_read > (line_start - buffer) && *count < MAX_ENTRIES)
	{
		buffer[bytes_read] = '\0';
		colon = ft_strchr(line_start, ':');
		if (colon)
			process_line(dict, count, line_start, colon);
	}
	return (0);
}

int	read_dict_file(int fd, struct s_DictEntry *dict)
{
	char	buffer[BUFFER_SIZE];
	int		count;
	ssize_t	bytes_read;

	count = 0;
	while (count < MAX_ENTRIES)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		process_buffer(dict, &count, buffer, bytes_read);
	}
	return (count);
}

void	find_and_print_number(struct s_DictEntry *dict, char *str, int count)
{
	int	i;
	int	j;

	i = 0;
	j = ft_atoi(str);
	while (i < count)
	{
		if (dict[i].number == j)
		{
			ft_putstr(dict[i].word);
			break ;
		}
		i++;
	}
}

int	ft_struct(char **str, char *dico, char *argv)
{
	int					fd;
	struct s_DictEntry	dict[MAX_ENTRIES];
	int					count;
	char				*t;
	int					i;

	i = 0;
	t = dico;
	fd = open(t, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 12);
		return (-1);
	}
	count = read_dict_file(fd, dict);
	close(fd);
	while (i != len_mal(argv))
	{
		find_and_print_number(dict, str[i], count);
		if (ft_strcmp(str[i + 1], "0") == 0 || ft_strcmp(str[i + 1], "\0") == 0)
			break ;
		write(1, " ", 1);
		i++;
	}
	return (0);
}
