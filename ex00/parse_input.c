/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:26:40 by amtan             #+#    #+#             */
/*   Updated: 2025/08/10 21:26:48 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	parse_input(int argc, char *argv[], char **dict_path, char **number_str)
{
	if (argc < 2 || argc > 3)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	else if (argc == 2)
	{
		*dict_path = "numbers.dict";
		*number_str = argv[1];
	}
	else if (argc == 3)
	{
		*dict_path = argv[1];
		*number_str = argv[2];
	}
	while (*number_str)
	{
		if (*number_str < '0' || *number_str > '9')
			return (0);
	}
	return (1);
}
