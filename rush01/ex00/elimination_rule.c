/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elimination_rule.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:02:31 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:52:19 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "elimination_rule.h"
#include "possi_grid.h"

void	apply_elimination_rule(short int solu_grid[][4],
			short int possi_grid[][4])
{
	int	ind;

	ind = 0;
	while (ind < 4)
	{
		apply_exclusivity_row(solu_grid, possi_grid, ind);
		ind++;
	}
	ind = 0;
	while (ind < 4)
	{
		apply_exclusivity_col(solu_grid, possi_grid, ind);
		ind++;
	}
	update_possi_grid(solu_grid, possi_grid);
}

/*
La función apply_elimination_rule() aplica la regla de eliminación al sudoku. 
La regla de eliminación dice que si un valor no puede estar en ninguna celda de una fila o columna,
 entonces ese valor debe ser eliminado de las posibilidades de todas las celdas de esa fila o columna.

La función apply_elimination_rule() funciona de la siguiente manera:

Itera sobre todas las filas y columnas.
Para cada fila y columna, itera sobre todos los bits.
Si el bit no está establecido en ninguna celda de la fila o columna,
 la función elimina el bit de las posibilidades de todas las celdas de la fila o columna.
*/



void	apply_exclusivity_row(short int solu_grid[][4],
			short int possi_grid[][4], int row_ind)
{
	int	col_ind;
	int	sum_bit;
	int	bit_ind;

	col_ind = 0;
	sum_bit = 0;
	bit_ind = 0;
	while (bit_ind < 4)
	{
		while (col_ind < 4)
		{
			sum_bit += ((possi_grid[row_ind][col_ind] & (1 << bit_ind)) > 0);
			col_ind++;
		}
		if (sum_bit == 1)
			apply_exclusivity_row_bit(solu_grid, possi_grid, row_ind, bit_ind);
		col_ind = 0;
		sum_bit = 0;
		bit_ind++;
	}
}

/*
pply_exclusivity_row() : Esta función aplica la regla de exclusividad a una fila.
La función itera sobre todos los bits. Para cada bit, la función cuenta el número de celdas 
en la fila que tienen ese bit establecido en su matriz de posibilidades.
Si solo hay una celda en la fila que tiene ese bit establecido, la función establece 
el valor de esa celda en el bit correspondiente en la matriz de solución.
*/

void	apply_exclusivity_row_bit(short int solu_grid[][4],
			short int possi_grid[][4], int row_ind, int bit_ind)
{
	int	col_ind;

	col_ind = 0;
	while (col_ind < 4)
	{
		if (possi_grid[row_ind][col_ind] & (1 << bit_ind))
			solu_grid[row_ind][col_ind] = bit_ind + 1;
		col_ind++;
	}
}

/*
apply_exclusivity_row_bit() : Esta función es una versión auxiliar de apply_exclusivity_row() 
que solo se llama cuando solo hay una celda en la fila que tiene el bit establecido en su matriz de posibilidades.
La función simplemente establece el valor de esa celda en el bit correspondiente en la matriz de solución.
*/

void	apply_exclusivity_col(short int solu_grid[][4],
			short int possi_grid[][4], int col_ind)
{
	int	row_ind;
	int	sum_bit;
	int	bit_ind;

	row_ind = 0;
	sum_bit = 0;
	bit_ind = 0;
	while (bit_ind < 4)
	{
		while (row_ind < 4)
		{
			sum_bit += ((possi_grid[row_ind][col_ind] & (1 << bit_ind)) > 0);
			row_ind++;
		}
		if (sum_bit == 1)
			apply_exclusivity_col_bit(solu_grid, possi_grid, col_ind, bit_ind);
		row_ind = 0;
		sum_bit = 0;
		bit_ind++;
	}
}

/*
apply_exclusivity_col() : Esta función es similar a apply_exclusivity_row(), 
pero se aplica a una columna en lugar de una fila.
*/

void	apply_exclusivity_col_bit(short int solu_grid[][4],
			short int possi_grid[][4], int col_ind, int bit_ind)
{
	int	row_ind;

	row_ind = 0;
	while (row_ind < 4)
	{
		if (possi_grid[row_ind][col_ind] & (1 << bit_ind))
			solu_grid[row_ind][col_ind] = bit_ind + 1;
		row_ind++;
	}
}

/*
apply_exclusivity_col_bit() : Esta función es similar a apply_exclusivity_row_bit(), 
pero se aplica a una columna en lugar de una fila.
*/
