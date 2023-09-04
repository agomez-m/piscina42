/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpts_rules1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:27:17 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:54:04 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vpts_rules1.h"

void	apply_vpts_rule1(short int possi_grid[][4], short int *vpts)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i >= 0 && i <= 3)
			apply_vpts_rule1_colup(possi_grid, i, vpts[i]);
		else if (i >= 4 && i <= 7)
			apply_vpts_rule1_coldown(possi_grid, i % 4, vpts[i]);
		else if (i >= 8 && i <= 11)
			apply_vpts_rule1_rowleft(possi_grid, i % 4, vpts[i]);
		else if (i >= 12 && i <= 15)
			apply_vpts_rule1_rowright(possi_grid, i % 4, vpts[i]);
		i++;
	}
}

/*
apply_vpts_rule1() : Esta función aplica la regla de vpts 1 al sudoku. 
La regla de vpts 1 dice que si un valor solo aparece en dos celdas de una fila o columna, 
entonces ese valor debe aparecer en las otras dos celdas de esa fila o columna.
La función itera sobre todos los valores de vpts. Para cada valor, la función llama 
a las funciones apply_vpts_rule1_colup(), apply_vpts_rule1_coldown(), apply_vpts_rule1_rowleft(), 
o apply_vpts_rule1_rowright(), dependiendo de la posición del valor en vpts.
*/

void	apply_vpts_rule1_colup(short int possi_grid[][4], int col_ind,
			short int vpts)
{
	int			row_ind;
	short int	*ptr;

	row_ind = 0;
	while (row_ind < (vpts - 1))
	{
		ptr = &possi_grid[row_ind][col_ind];
		*ptr = *ptr & 0b0111;
		row_ind++;
	}
}

/*
apply_vpts_rule1_colup() : Esta función aplica la regla de vpts 1 a una columna.
La función itera sobre todas las celdas de la columna. Para cada celda, 
la función elimina el valor de vpts de las posibilidades de la celda.
*/

void	apply_vpts_rule1_coldown(short int possi_grid[][4], int col_ind,
			short int vpts)
{
	int			row_ind;
	int			num_change;
	short int	*ptr;

	row_ind = 3;
	num_change = 0;
	while (num_change < (vpts - 1))
	{
		ptr = &possi_grid[row_ind][col_ind];
		*ptr = *ptr & 0b0111;
		num_change++;
		row_ind--;
	}
}
/*
apply_vpts_rule1_coldown() : Esta función es similar a apply_vpts_rule1_colup(), 
pero se aplica a las celdas de la columna en orden inverso.
*/

void	apply_vpts_rule1_rowleft(short int possi_grid[][4], int row_ind,
			short int vpts)
{
	int			col_ind;
	short int	*ptr;

	col_ind = 0;
	while (col_ind < (vpts - 1))
	{
		ptr = &possi_grid[row_ind][col_ind];
		*ptr = *ptr & 0b0111;
		col_ind++;
	}
}
/*
apply_vpts_rule1_rowleft() : Esta función es similar a apply_vpts_rule1_colup(), 
pero se aplica a las celdas de la fila en orden horizontal.
*/

void	apply_vpts_rule1_rowright(short int possi_grid[][4], int row_ind,
			short int vpts)
{
	int			col_ind;
	int			num_change;
	short int	*ptr;

	col_ind = 3;
	num_change = 0;
	while (num_change < (vpts - 1))
	{
		ptr = &possi_grid[row_ind][col_ind];
		*ptr = *ptr & 0b0111;
		num_change++;
		col_ind--;
	}
}
/*
apply_vpts_rule1_rowright() : Esta función es similar a apply_vpts_rule1_colup(), 
pero se aplica a las celdas de la fila en orden inverso.
*/