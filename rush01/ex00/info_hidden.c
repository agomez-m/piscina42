/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_hidden.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:08:04 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:21:21 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info_hidden.h"
#include "info_first_visible.h"

int	get_hidden_num(short int solu_grid[][4], int vpts_ind)
{
	int	ret_val;

	ret_val = -1;
	if (vpts_ind >= 0 && vpts_ind <= 3)
		ret_val = get_hidden_num_col(solu_grid, vpts_ind, 1);
	else if (vpts_ind >= 4 && vpts_ind <= 7)
		ret_val = get_hidden_num_col(solu_grid, vpts_ind, -1);
	else if (vpts_ind >= 8 && vpts_ind <= 11)
		ret_val = get_hidden_num_row(solu_grid, vpts_ind, 1);
	else if (vpts_ind >= 12 && vpts_ind <= 15)
		ret_val = get_hidden_num_row(solu_grid, vpts_ind, -1);
	return (ret_val);
}

/*
get_hidden_num() : Esta función devuelve el número de celdas ocultas en la columna 
o fila que contiene la celda especificada por el parámetro vpts_ind.
Si la celda especificada por el parámetro vpts_ind está en una columna, 
la función llama a la función get_hidden_num_col().
Si la celda especificada por el parámetro vpts_ind está en una fila, 
la función llama a la función get_hidden_num_row().
*/

int	get_hidden_num_col(short int solu_grid[][4], int vpts_ind, int dir)
{
	int	row_ind;
	int	col_ind;
	int	cur_max_height;
	int	num_hidden;

	if (dir > 0)
		row_ind = 0;
	else
		row_ind = 3;
	col_ind = vpts_ind % 4;
	cur_max_height = get_first_visible_height(solu_grid, vpts_ind);
	num_hidden = 0;
	while (solu_grid[row_ind][col_ind] == 0)
			row_ind += dir;
	while (row_ind >= 0 && row_ind <= 3)
	{
		if (solu_grid[row_ind][col_ind] < cur_max_height)
			num_hidden++;
		else
			cur_max_height = solu_grid[row_ind][col_ind];
		row_ind += dir;
	}
	return (num_hidden);
}

/*
get_hidden_num_col() : Esta función devuelve el número de celdas ocultas 
en la columna que contiene la celda especificada por el parámetro vpts_ind.
La función comienza en la fila superior de la columna y se mueve hacia abajo, una fila a la vez.
Cuenta el número de celdas que están vacías o tienen una altura menor 
que la altura de la primera celda visible.
Devuelve el número de celdas ocultas.
*/

int	get_hidden_num_row(short int solu_grid[][4], int vpts_ind, int dir)
{
	int	row_ind;
	int	col_ind;
	int	cur_max_height;
	int	num_hidden;

	if (dir > 0)
		col_ind = 0;
	else
		col_ind = 3;
	row_ind = vpts_ind % 4;
	cur_max_height = get_first_visible_height(solu_grid, vpts_ind);
	num_hidden = 0;
	while (solu_grid[row_ind][col_ind] == 0)
			col_ind += dir;
	while (col_ind >= 0 && col_ind <= 3)
	{
		if (solu_grid[row_ind][col_ind] < cur_max_height)
			num_hidden++;
		else
			cur_max_height = solu_grid[row_ind][col_ind];
		col_ind += dir;
	}
	return (num_hidden);
}

/*
get_hidden_num_row() : Esta función devuelve el número de celdas ocultas en la fila 
que contiene la celda especificada por el parámetro vpts_ind.
La función comienza en la columna más a la izquierda de la fila y se mueve
 hacia la derecha, una columna a la vez.
Cuenta el número de celdas que están vacías o tienen una altura menor 
que la altura de la primera celda visible.
Devuelve el número de celdas ocultas.
*/