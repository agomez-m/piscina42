/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillsquare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:48:49 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 18:55:09 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_map	fill_square(t_map map, t_square square)
{
	int		x;
	int		y;

	x = square.x_start;
	while (x <= square.x_end)
	{
		y = square.y_start;
		while (y <= square.y_end)
		{
			map.matrix[x][y] = map.full;
			y++;
		}
		x++;
	}
	return (map);
}
