/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_solve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:08:50 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:33:45 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bit_funcs.h"
#include "info_visible.h"

int	is_solved(short int solu_grid[][4])
{
	int	row_ind;
	int	col_ind;

	row_ind = 0;
	col_ind = 0;
	while (row_ind < 4)
	{
		while (col_ind < 4)
		{
			if (solu_grid[row_ind][col_ind] == 0)
				return (0);
			col_ind++;
		}
		col_ind = 0;
		row_ind++;
	}
	return (1);
}

/*
is_solved() : Esta función devuelve 1 si la cuadrícula de solución está llena, y 0 si no.
La función recorre toda la cuadrícula de solución y verifica si hay celdas vacías.
Si hay celdas vacías, la función devuelve 0.
Si no hay celdas vacías, la función devuelve 1.
*/

int	is_unsolvable(short int possi_grid[][4])
{
	int	row_ind;
	int	col_ind;

	row_ind = 0;
	col_ind = 0;
	while (row_ind < 4)
	{
		while (col_ind < 4)
		{
			if (count_bits(possi_grid[row_ind][col_ind]) == 0)
				return (1);
			col_ind++;
		}
		col_ind = 0;
		row_ind++;
	}
	return (0);
}

/*
is_unsolvable() : Esta función devuelve 1 si la cuadrícula de posibilidades es inviable, y 0 si no.
La función recorre toda la cuadrícula de posibilidades y verifica si hay celdas que no tienen ningún bit encendido.
Si hay celdas que no tienen ningún bit encendido, la función devuelve 1.
Si no hay celdas que no tienen ningún bit encendido, la función devuelve 0.
*/

int	is_solution_valid(short int solu_grid[][4], short int *vpts)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (vpts[i] != get_visible_num(solu_grid, i))
			return (0);
		i++;
	}
	return (1);
}

/*
is_solution_valid() : Esta función devuelve 1 si la solución es válida, y 0 si no.
La función recorre toda la solución y verifica si el número de celdas visibles en cada celda es igual al valor de la celda.
Si el número de celdas visibles en una celda no es igual al valor de la celda, la función devuelve 0.
Si el número de celdas visibles en todas las celdas es igual al valor de las celdas, la función devuelve 1.
*/
