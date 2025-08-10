/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelumala <oelumala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 16:07:16 by suzaho            #+#    #+#             */
/*   Updated: 2025/08/10 21:44:16 by oelumala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <rush02.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char			*dict_path;
	char			*number_str;
	t_dict_entry	*dict;
	int				*size;

	if (!parse_input(argc, argv, dict_path, number_str))
		return (1);
	*size = parse_dict(dict_path, dict, size);
	if (!*size)
		return (1);

	// get length of number_str
	// split into 3
	// convert xxx into text
	// convert placevalue into text



	//free_dict(dict, *size);
	return (0);
}
