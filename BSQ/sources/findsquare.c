/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findsquare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:50:57 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 18:53:50 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

t_square	find_square(t_map map, t_square square, int x_start, int y_start)
{
	t_square	newsquare;

	newsquare.x_start = x_start;
	newsquare.y_start = y_start;
	newsquare.x_end = x_start + square_size(square);
	newsquare.y_end = y_start + square_size(square);
	if (!check_square(map, newsquare))
	{
		newsquare.x_start = -1;
		return (newsquare);
	}
	while (check_square(map, newsquare))
	{
		newsquare.x_end++;
		newsquare.y_end++;
	}
	newsquare.x_end--;
	newsquare.y_end--;
	return (newsquare);
}
