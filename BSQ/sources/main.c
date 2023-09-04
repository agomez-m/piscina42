/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:53:25 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/30 13:47:44 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	main(void)
{
	t_map	map;
	int		j;
	char	**rows;

	map = initialize_map();
	rows = (char *[])
	{
		"....o.o..",
		".o..oooo..",
		"....oooo..",
		"....oooooo",
		NULL
	};
	map.matrix = create_map_matrix(rows);
	map = ft_solver(map);
	print_map(map);
	j = 0;
	while (map.matrix[j] != NULL)
	{
		free(map.matrix[j]);
		j++;
	}
	free(map.matrix);
	return (0);
}
