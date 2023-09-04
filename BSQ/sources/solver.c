/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:52:49 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 18:40:58 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_map	ft_solver(t_map map)
{
	int			x;
	int			y;
	int			count;
	t_square	square;
	t_square	tmp;

	square.x_end = -1;
	square.x_start = 0;
	x = -1;
	count = 0;
	while (map.matrix[++x] != NULL)
	{
		y = -1;
		while (map.matrix[x][++y] != '\0')
		{
			tmp = find_square(map, square, x, y);
			if (tmp.x_start != -1 && square_size(tmp) > square_size(square))
			{
				count++;
				square = tmp;
			}
		}
	}
	print_largest_square(map, square);
	return (map);
}
