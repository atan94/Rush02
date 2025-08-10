/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_number_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzaho <suzaho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:48:32 by suzaho            #+#    #+#             */
/*   Updated: 2025/08/10 19:50:36 by suzaho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <rush02.h>

int    is_valid_number_str(int argc, char *argv[]) //delete once checks done
{
	int i;
	char *arg;

	i = 0;
	if (argc < 2 || argc > 3)
	{
       write(1, "Error\n", 6);
       return (0);	//error if no. of arguments not correct
	}
	if (argc == 2)
		arg = argv[1];
	else if (argc == 3)
		arg = argv[2];
	while (arg[i])
	{
    	while (arg[i] == 32 || (arg[i] >= 9 && arg[i] <= 13))
        	i++;     //whitespace chars
    	if (!((arg[i] >= '0') && (arg[i] <= '9')))
		{
        	write(1, "Error\n", 6);	//error if not digit
			return (0);
		}
		i++;
	}
	return (1); //return 1 if string is digits only, ignoring whitespace
}
