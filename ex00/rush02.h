/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelumala <oelumala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:13:01 by amtan             #+#    #+#             */
/*   Updated: 2025/08/10 21:44:29 by oelumala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>  // for open
# include <stdlib.h> // for malloc, free
# include <unistd.h> // for read, close, write

/*
** =======================
**  Struct Definition
** =======================
*/

typedef struct s_dict_entry
{
	char *key;   // numeric string (e.g., "42")
	char *value; // word form (e.g., "forty two")
}				t_dict_entry;

/*
** =======================
**  Parsing
** =======================
*/

// Splits dictionary string into t_dict_entry array
// Returns number of entries via *size, NULL on error
t_dict_entry	*parse_dict(char *filename, char *dict_str, int *size);

// Frees all memory allocated for dictionary
void			free_dict(t_dict_entry *dict, int size);

// Trims spaces at start & end of a string (modifies in place)
char			*trim_spaces(char *str);

// Returns 1 if str is a valid numeric string, 0 otherwise
int				parse_input(int argc, char *argv[], char **dict_path,
					char **number_str);

/*z
** =======================
**  Dictionary search
** =======================
*/

// Finds the word for num_str in dict
// Returns pointer or NULL
char			*find_in_dict(char *num_str, t_dict_entry *dict, int size);

/*
** =======================
**  Utilities
** =======================
*/

// Writes string to stdout
void			ft_putstr(char *str);
int				strlen(char *str);

#endif
