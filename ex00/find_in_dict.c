/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_in_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:19:42 by amtan             #+#    #+#             */
/*   Updated: 2025/08/10 18:26:50 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

char	*find_in_dict(char *num_str, t_dict_entry *dict, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strcmp(dict[i].key, num_str) == 0)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
