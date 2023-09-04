/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printlarguestsquare.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:52:01 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 18:49:33 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	print_largest_square(t_map map, t_square square)
{
	int		x;
	int		y;

	x = square.x_start;
	while (x <= square.x_end)
	{
		y = square.y_start;
		while (y <= square.y_end)
		{
			if (map.matrix[x][y] == map.full)
				map.matrix[x][y] = 'x';
			y++;
		}
		x++;
	}
}
