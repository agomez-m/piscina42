/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_visible.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:12:55 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 14:16:35 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info_visible.h"

int	get_visible_num(short int solu_grid[][4], int vpts_ind)
{
	int	ret_val;

	ret_val = -1;
	if (vpts_ind >= 0 && vpts_ind <= 3)
		ret_val = get_visible_col(solu_grid, vpts_ind, 1);
	else if (vpts_ind >= 4 && vpts_ind <= 7)
		ret_val = get_visible_col(solu_grid, vpts_ind, -1);
	else if (vpts_ind >= 8 && vpts_ind <= 11)
		ret_val = get_visible_row(solu_grid, vpts_ind, 1);
	else if (vpts_ind >= 12 && vpts_ind <= 15)
		ret_val = get_visible_row(solu_grid, vpts_ind, -1);
	return (ret_val);
}

/*
get_visible_num() : Esta función devuelve el número de celdas visibles en la columna
 o fila que contiene la celda especificada por el parámetro vpts_ind.
Si la celda especificada por el parámetro vpts_ind está en una columna, 
la función llama a la función get_visible_col().
Si la celda especificada por el parámetro vpts_ind está en una fila, 
la función llama a la función get_visible_row().
*/

int	get_visible_col(short int solu_grid[][4], int vpts_ind, int dir)
{
	int	row_ind;
	int	col_ind;
	int	cur_max_height;
	int	num_visible;

	if (dir > 0)
		row_ind = 0;
	else
		row_ind = 3;
	col_ind = vpts_ind % 4;
	cur_max_height = 0;
	num_visible = 0;
	while (row_ind >= 0 && row_ind <= 3)
	{
		if (solu_grid[row_ind][col_ind] > cur_max_height)
		{
			num_visible++;
			cur_max_height = solu_grid[row_ind][col_ind];
		}
		row_ind += dir;
	}
	return (num_visible);
}

/*
get_visible_col() : Esta función devuelve el número de celdas visibles en la columna 
que contiene la celda especificada por el parámetro vpts_ind.
La función recorre toda la columna, comenzando en la fila superior y terminando en la fila inferior.
Cuenta el número de celdas que tienen un valor mayor que la altura de la celda especificada por el parámetro vpts_ind.
*/

int	get_visible_row(short int solu_grid[][4], int vpts_ind, int dir)
{
	int	row_ind;
	int	col_ind;
	int	cur_max_height;
	int	num_visible;

	if (dir > 0)
		col_ind = 0;
	else
		col_ind = 3;
	row_ind = vpts_ind % 4;
	cur_max_height = 0;
	num_visible = 0;
	while (col_ind >= 0 && col_ind <= 3)
	{
		if (solu_grid[row_ind][col_ind] > cur_max_height)
		{
			num_visible++;
			cur_max_height = solu_grid[row_ind][col_ind];
		}
		col_ind += dir;
	}
	return (num_visible);
}

/*
get_visible_row() : Esta función devuelve el número de celdas visibles en la fila que contiene 
la celda especificada por el parámetro vpts_ind.
La función recorre toda la fila, comenzando en la columna más a la izquierda 
y terminando en la columna más a la derecha.
Cuenta el número de celdas que tienen un valor mayor que la altura de la celda
 especificada por el parámetro vpts_ind.
*/