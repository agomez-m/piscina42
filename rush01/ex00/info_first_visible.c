/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_first_visible.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:06:42 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:19:05 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info_first_visible.h"

int	get_first_visible_height(short int solu_grid[][4], int vpts_ind)
{
	if (vpts_ind >= 0 && vpts_ind <= 7)
		return (get_first_visible_height_col(solu_grid, vpts_ind));
	else if (vpts_ind >= 8 && vpts_ind <= 15)
		return (get_first_visible_height_row(solu_grid, vpts_ind));
	else
		return (-1);
}

/*
get_first_visible_height() : Esta función devuelve la altura de la primera celda 
visible en la columna o fila que contiene la celda especificada por el parámetro vpts_ind.
Si la celda especificada por el parámetro vpts_ind está en una columna, 
la función llama a la función get_first_visible_height_col().
Si la celda especificada por el parámetro vpts_ind está en una fila, 
la función llama a la función get_first_visible_height_row()
*/

int	get_first_visible_height_col(short int solu_grid[][4], int vpts_ind)
{
	int	row_ind;
	int	col_ind;
	int	dir;

	col_ind = vpts_ind % 4;
	if (vpts_ind <= 3)
		dir = 1;
	else
		dir = -1;
	if (dir > 0)
		row_ind = 0;
	else
		row_ind = 3;
	while (row_ind >= 0 && row_ind <= 3)
	{
		if (solu_grid[row_ind][col_ind] != 0)
			return (solu_grid[row_ind][col_ind]);
		row_ind += dir;
	}
	return (-1);
}

/*
get_first_visible_height_col() : Esta función devuelve la altura de la primera celda 
visible en la columna que contiene la celda especificada por el parámetro vpts_ind.
La función comienza en la fila superior de la columna y se mueve hacia abajo, una fila a la vez.
Si encuentra una celda que no está vacía, devuelve el valor de esa celda.
Si llega al final de la columna sin encontrar una celda que no esté vacía, devuelve -1.
*/

int	get_first_visible_height_row(short int solu_grid[][4], int vpts_ind)
{
	int	row_ind;
	int	col_ind;
	int	dir;

	row_ind = vpts_ind % 4;
	if (vpts_ind <= 11)
		dir = 1;
	else
		dir = -1;
	if (dir > 0)
		col_ind = 0;
	else
		col_ind = 3;
	while (col_ind >= 0 && col_ind <= 3)
	{
		if (solu_grid[row_ind][col_ind] != 0)
			return (solu_grid[row_ind][col_ind]);
		col_ind += dir;
	}
	return (-1);
}

/*
get_first_visible_height_row() : Esta función devuelve la altura de la primera celda 
visible en la fila que contiene la celda especificada por el parámetro vpts_ind.
La función comienza en la columna más a la izquierda de la fila y se mueve hacia la derecha,
 una columna a la vez.
Si encuentra una celda que no está vacía, devuelve el valor de esa celda.
Si llega al final de la fila sin encontrar una celda que no esté vacía, devuelve -1.
*/
