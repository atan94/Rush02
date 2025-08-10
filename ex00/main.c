/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzaho <suzaho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:07:16 by suzaho            #+#    #+#             */
/*   Updated: 2025/08/10 20:02:36 by suzaho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <rush02.h>

int main(int argc, char *argv[]) 
   {
	char *dict_path;
    char *number_str;
	
    if (argc == 2) {
        dict_path = "numbers.dict";
        number_str = argv[1];
    } else if (argc == 3) {
        dict_path = argv[1];
        number_str = argv[2];
    } else {
        write(1, "Error\n", 6);
        return 1;
    }
    // Validate number string
    if (!is_valid_number_str(int argc, char *argv[])) 
	{
        write(1, "Error\n", 6);
        return 1;
    }
    // Read and parse dictionary
    char *content = read_file_to_string(dict_path);
    if (!content) {
        write(1, "Dict Error\n", 11);
        return 1;
    }
    // allocate and parse lines into dict entries...
    // (use parsing code from section 3)
    if (parse_error_occurred) 
	{
        free(content);
        // free any partially allocated entries
        write(1, "Dict Error\n", 11);
        return 1;
    }
    free(content);
    // Free dictionary entries
    for (int i = 0; i < dict_size; ++i) 
	{
        free(dict[i].num_str);
        free(dict[i].word);
    }
    free(dict);
    return 0;
}
