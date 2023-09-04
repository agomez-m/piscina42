/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpts_rules3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:36:17 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:56:32 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vpts_rules3.h"
#include "mask_funcs.h"

void	apply_vpts_rule3(short int possi_grid[][4], short int *vpts)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i >= 0 && i <= 3)
			possi_grid[0][i] = possi_grid[0][i]
				& get_mask_n_bit(4 - (vpts[i] - 1));
		else if (i >= 4 && i <= 7)
			possi_grid[3][i % 4] = possi_grid[3][i % 4]
				& get_mask_n_bit(4 - (vpts[i] - 1));
		else if (i >= 8 && i <= 11)
			possi_grid[i % 4][0] = possi_grid[i % 4][0]
				& get_mask_n_bit(4 - (vpts[i] - 1));
		else if (i >= 12 && i <= 15)
			possi_grid[i % 4][3] = possi_grid[i % 4][3]
				& get_mask_n_bit(4 - (vpts[i] - 1));
		i++;
	}
}
/*
apply_vpts_rule3() : Esta función aplica la regla de vpts 3 al sudoku. La regla de vpts 3 dice 
que si un valor solo aparece en dos celdas de una fila o columna, entonces ese valor debe aparecer 
en las otras dos celdas de esa fila o columna.
La función itera sobre todos los valores de vpts. Para cada valor, la función elimina el valor de vpts
 de las posibilidades de las celdas de la fila o columna, excepto el bit menos significativo.
*/