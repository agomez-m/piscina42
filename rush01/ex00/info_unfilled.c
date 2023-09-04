/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_unfilled.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:11:21 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:35:42 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info_unfilled.h"

int	get_unfilled_num(short int solu_grid[][4], int vpts_ind)
{
	if (vpts_ind >= 0 && vpts_ind <= 7)
		return (get_unfilled_num_col(solu_grid, vpts_ind));
	else if (vpts_ind >= 8 && vpts_ind <= 15)
		return (get_unfilled_num_col(solu_grid, vpts_ind));
	else
		return (-1);
}

/*
get_unfilled_num() : Esta función devuelve el número de celdas no llenas en la 
columna o fila que contiene la celda especificada por el parámetro vpts_ind.
Si la celda especificada por el parámetro vpts_ind está en una columna, 
la función llama a la función get_unfilled_num_col().
Si la celda especificada por el parámetro vpts_ind está en una fila, 
la función llama a la función get_unfilled_num_row().
*/

int	get_unfilled_num_col(short int solu_grid[][4], int vpts_ind)
{
	int	row_ind;
	int	col_ind;
	int	num_unfilled;

	row_ind = 0;
	col_ind = 0;
	num_unfilled = 0;
	col_ind = vpts_ind % 4;
	while (row_ind >= 0 && row_ind <= 3)
	{
		if (solu_grid[row_ind][col_ind] == 0)
			num_unfilled++;
		row_ind++;
	}
	return (num_unfilled);
}

/*
get_unfilled_num_col() : Esta función devuelve el número de celdas no llenas 
en la columna que contiene la celda especificada por el parámetro vpts_ind.
La función recorre toda la columna, comenzando en la fila superior y terminando en la fila inferior.
Cuenta el número de celdas que están vacías.
Devuelve el número de celdas no llenas.
*/

int	get_unfilled_num_row(short int solu_grid[][4], int vpts_ind)
{
	int	row_ind;
	int	col_ind;
	int	num_unfilled;

	row_ind = 0;
	col_ind = 0;
	num_unfilled = 0;
	row_ind = vpts_ind % 4;
	while (col_ind >= 0 && col_ind <= 3)
	{
		if (solu_grid[row_ind][col_ind] == 0)
			num_unfilled++;
		col_ind++;
	}
	return (num_unfilled);
}
/*
get_unfilled_num_row() : Esta función devuelve el número de celdas no llenas 
en la fila que contiene la celda especificada por el parámetro vpts_ind.
La función recorre toda la fila, comenzando en la columna más a la izquierda 
y terminando en la columna más a la derecha.
Cuenta el número de celdas que están vacías.
Devuelve el número de celdas no llenas.
*/