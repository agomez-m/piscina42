/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksquare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:50:19 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 19:01:33 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	check_square(t_map map, t_square square)
{
	int		x;
	int		y;

	x = square.x_start;
	while (x <= square.x_end)
	{
		y = square.y_start;
		while (y <= square.y_end)
		{
			if (x >= x_size(map.matrix) || y >= y_size(map.matrix[x])
				|| map.matrix[x][y] == map.obs)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}
