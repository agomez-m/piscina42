/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lquehec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:13:15 by lquehec           #+#    #+#             */
/*   Updated: 2023/08/20 15:22:40 by lquehec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_free_map(t_map map)
{
	int	i;

	i = 0;
	while (map.matrix[i])
	{
		free(map.matrix[i]);
		i++;
	}
	free(map.matrix);
}

void	ft_free(char **array_map)
{
	int	i;

	i = 0;
	while (array_map[i])
	{
		free(array_map[i]);
		i++;
	}
	free(array_map);
}

char	**ft_copy(char **array_map)
{
	char	**new_array;
	int		i;
	int		array_len;

	i = 0;
	array_len = 0;
	while (array_map[array_len])
		array_len++;
	new_array = malloc(sizeof(char *) * (array_len + 1));
	while (array_map[i])
	{
		new_array[i] = ft_strdup(array_map[i]);
		i++;
	}
	new_array[array_len] = 0;
	return (new_array);
}
