/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpts_rules4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:38:03 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:57:09 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vpts_rules4.h"
#include "possi_grid.h"

void	apply_vpts_rule4(short int solu_grid[][4], short int possi_grid[][4],
			short int *vpts)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i >= 0 && i <= 3)
		{
			if (vpts[i] == 1 && vpts[i + 4] == 2)
				solu_grid[3][i] = 3;
			else if (vpts[i] == 2 && vpts[i + 4] == 1)
				solu_grid[0][i] = 3;
		}
		if (i >= 8 && i <= 11)
		{
			if (vpts[i] == 1 && vpts[i + 4] == 2)
				solu_grid[i % 4][3] = 3;
			else if (vpts[i] == 2 && vpts[i + 4] == 1)
				solu_grid[i % 4][0] = 3;
		}
		i++;
	}
	update_possi_grid(solu_grid, possi_grid);
}

/*
apply_vpts_rule4() : Esta función aplica la regla de vpts 4 al sudoku. La regla de vpts 4 dice 
que si un valor solo aparece en dos celdas de una fila o columna, y los otros dos valores son iguales, 
entonces el valor debe aparecer en las otras dos celdas de esa fila o columna.
La función itera sobre todos los valores de vpts. Para cada valor, la función establece el valor en la celda 
correspondiente de la solución si los otros dos valores de vpts son iguales.
La función luego llama a la función update_possi_grid() para actualizar las posibilidades de las celdas.
*/