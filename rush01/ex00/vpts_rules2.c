/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpts_rules2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:31:56 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:55:40 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vpts_rules2.h"
#include "mask_funcs.h"

void	apply_vpts_rule2(short int solu_grid[][4], short int possi_grid[][4],
			short int *vpts)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i >= 0 && i <= 3)
			apply_vpts_rule2_colup(solu_grid, possi_grid, i, vpts[i]);
		else if (i >= 4 && i <= 7)
			apply_vpts_rule2_coldown(solu_grid, possi_grid, i % 4, vpts[i]);
		else if (i >= 8 && i <= 11)
			apply_vpts_rule2_rowleft(solu_grid, possi_grid, i % 4, vpts[i]);
		else if (i >= 12 && i <= 15)
			apply_vpts_rule2_rowright(solu_grid, possi_grid, i % 4, vpts[i]);
		i++;
	}
}

/*
apply_vpts_rule2() : Esta función aplica la regla de vpts 2 al sudoku. La regla de vpts 2 dice que si un valor 
solo aparece en dos celdas de un cuadrado, entonces ese valor debe aparecer en las otras dos celdas de ese cuadrado.
La función itera sobre todos los valores de vpts. Para cada valor, la función llama a las funciones apply_vpts_rule2_colup(), 
apply_vpts_rule2_coldown(), apply_vpts_rule2_rowleft(), o apply_vpts_rule2_rowright(), dependiendo de la posición del valor en vpts.
*/

void	apply_vpts_rule2_colup(short int solu_grid[][4],
			short int possi_grid[][4], int col_ind, short int vpts)
{
	int			row_ind;
	short int	*ptr;
	short int	bitmask;
	short int	n_bit_shift;

	row_ind = vpts - 2;
	n_bit_shift = 0;
	if (solu_grid[vpts - 1][col_ind] == 4)
	{
		bitmask = get_mask_most_sig(possi_grid[row_ind][col_ind]);
		while (row_ind >= 0)
		{
			ptr = &possi_grid[row_ind][col_ind];
			*ptr = *ptr & (bitmask >> n_bit_shift);
			n_bit_shift++;
			row_ind--;
		}
	}
}
/*
apply_vpts_rule2_colup() : Esta función aplica la regla de vpts 2 a una columna.
La función itera sobre todas las celdas de la columna. Para cada celda, 
la función elimina el valor de vpts de las posibilidades de la celda, excepto el bit más significativo.
*/

void	apply_vpts_rule2_coldown(short int solu_grid[][4],
			short int possi_grid[][4], int col_ind, short int vpts)
{
	int			row_ind;
	short int	*ptr;
	short int	bitmask;
	short int	n_bit_shift;

	row_ind = 5 - vpts;
	n_bit_shift = 0;
	if (solu_grid[4 - vpts][col_ind] == 4)
	{
		bitmask = get_mask_most_sig(possi_grid[row_ind][col_ind]);
		while (row_ind < 4)
		{
			ptr = &possi_grid[row_ind][col_ind];
			*ptr = *ptr & (bitmask >> n_bit_shift);
			n_bit_shift++;
			row_ind++;
		}
	}
}
/*
apply_vpts_rule2_coldown() : Esta función es similar a apply_vpts_rule2_colup(), 
ero se aplica a las celdas de la columna en orden inverso.
*/
void	apply_vpts_rule2_rowleft(short int solu_grid[][4],
			short int possi_grid[][4], int row_ind, short int vpts)
{
	int			col_ind;
	short int	*ptr;
	short int	bitmask;
	short int	n_bit_shift;

	col_ind = vpts - 2;
	n_bit_shift = 0;
	if (solu_grid[row_ind][vpts - 1] == 4)
	{
		bitmask = get_mask_most_sig(possi_grid[row_ind][col_ind]);
		while (col_ind >= 0)
		{
			ptr = &possi_grid[row_ind][col_ind];
			*ptr = *ptr & (bitmask >> n_bit_shift);
			n_bit_shift++;
			col_ind--;
		}
	}
}
/*
apply_vpts_rule2_rowleft() : Esta función es similar a apply_vpts_rule2_colup(), 
pero se aplica a las celdas de la fila en orden horizontal.
*/

void	apply_vpts_rule2_rowright(short int solu_grid[][4],
			short int possi_grid[][4], int row_ind, short int vpts)
{
	int			col_ind;
	short int	*ptr;
	short int	bitmask;
	short int	n_bit_shift;

	col_ind = 5 - vpts;
	n_bit_shift = 0;
	if (solu_grid[row_ind][4 - vpts] == 4)
	{
		bitmask = get_mask_most_sig(possi_grid[row_ind][col_ind]);
		while (col_ind < 4)
		{
			ptr = &possi_grid[row_ind][col_ind];
			*ptr = *ptr & (bitmask >> n_bit_shift);
			n_bit_shift++;
			col_ind++;
		}
	}
}
/*
apply_vpts_rule2_rowright() : Esta función es similar a apply_vpts_rule2_colup(), 
pero se aplica a las celdas de la fila en orden inverso.
*/