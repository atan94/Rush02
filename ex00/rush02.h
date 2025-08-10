/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelumala <oelumala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:13:01 by amtan             #+#    #+#             */
/*   Updated: 2025/08/10 20:13:45 by oelumala         ###   ########.fr       */
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

// Reads entire file into a malloc'ed string
// Returns NULL on error
char			*read_file_to_string(char *filename);

// Splits dictionary string into t_dict_entry array
// Returns number of entries via *size, NULL on error
t_dict_entry	*parse_dict(char *dict_str, int *size);

// Frees all memory allocated for dictionary
void			free_dict(t_dict_entry *dict, int size);

// Trims spaces at start & end of a string (modifies in place)
char			*trim_spaces(char *str);

// Returns 1 if str is a valid numeric string, 0 otherwise
int				is_valid_number_str(int argc, char *argv[]);

/*z
** =======================
**  Number Conversion
** =======================
*/

// Finds the word for num_str in dict
// Returns pointer or NULL
char			*find_in_dict(char *num_str, t_dict_entry *dict, int size);

// Prints the number in words using dict
void			print_number_words(long num, t_dict_entry *dict, int size);

// Converts string to long (no overflow handling needed)
long			ft_atol(char *str);

/*
** =======================
**  Utilities
** =======================
*/

// Writes string to stdout
void			ft_putstr(char *str);

#endif
