/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suzaho <suzaho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:23:53 by suzaho            #+#    #+#             */
/*   Updated: 2025/08/06 11:48:50 by suzaho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function that prints a string of characters to the standard output
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	write(1, str, n);
}

/* int	main(void)
{
	char	str1[] = "Hi,";
	char	str2[] = "World!";

	ft_putstr(str1);
	write(1, "\n", 1);
	ft_putstr(str2);
	return (0);
} */