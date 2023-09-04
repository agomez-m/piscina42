/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpts_rules5.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:41:58 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:59:10 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vpts_rules5.h"
#include "info_hidden.h"
#include "info_first_filled.h"
#include "bit_funcs.h"
#include "possi_grid.h"

void	apply_vpts_rule5(short int solu_grid[][4], short int possi_grid[][4],
			short int *vpts)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i >= 0 && i <= 3)
			apply_vpts_rule5_colup(solu_grid, possi_grid, vpts, i);
		else if (i >= 4 && i <= 7)
			apply_vpts_rule5_coldown(solu_grid, possi_grid, vpts, i);
		else if (i >= 8 && i <= 11)
			apply_vpts_rule5_rowleft(solu_grid, possi_grid, vpts, i);
		else if (i >= 12 && i <= 15)
			apply_vpts_rule5_rowright(solu_grid, possi_grid, vpts, i);
		i++;
	}
}

/*
apply_vpts_rule5_colup() : Esta función aplica la regla de vpts 5 a una columna.

La función itera sobre todas las celdas de la columna. Para cada celda, la función establece 
el valor en la celda si es el valor más significativo de las posibilidades de la celda.
La función solo se aplica si la celda está vacía y si hay menos de 4 valores posibles para la celda.
*/

void	apply_vpts_rule5_colup(short int solu_grid[][4],
			short int possi_grid[][4], short int *vpts, short int vpts_ind)
{
	int			row_ind;
	int			col_ind;
	short int	sol_val;
	int			num_hidden;

	row_ind = 0;
	col_ind = vpts_ind % 4;
	num_hidden = get_hidden_num(solu_grid, vpts_ind);
	if ((get_index_first_filled(solu_grid, vpts_ind)
			== (4 - vpts[vpts_ind] - num_hidden + 1))
		&& num_hidden != (4 - vpts[vpts_ind]))
	{
		sol_val = get_ind_most_sig(possi_grid[row_ind][col_ind]) + 1;
		solu_grid[row_ind][col_ind] = sol_val;
		update_possi_grid(solu_grid, possi_grid);
	}
}
/*
apply_vpts_rule5_colup() : Esta función aplica la regla de vpts 5 a una columna.
La función itera sobre todas las celdas de la columna. Para cada celda, la función establece el valor 
en la celda si es el valor más significativo de las posibilidades de la celda y si hay menos de 4 valores posibles para la celda.
*/

void	apply_vpts_rule5_coldown(short int solu_grid[][4],
			short int possi_grid[][4], short int *vpts, short int vpts_ind)
{
	int			row_ind;
	int			col_ind;
	short int	sol_val;
	int			num_hidden;

	row_ind = 3;
	col_ind = vpts_ind % 4;
	num_hidden = get_hidden_num(solu_grid, vpts_ind);
	if ((get_index_first_filled(solu_grid, vpts_ind)
			== (4 - vpts[vpts_ind] - num_hidden + 1))
		&& num_hidden != (4 - vpts[vpts_ind]))
	{
		sol_val = get_ind_most_sig(possi_grid[row_ind][col_ind]) + 1;
		solu_grid[row_ind][col_ind] = sol_val;
		update_possi_grid(solu_grid, possi_grid);
	}
}
/*
apply_vpts_rule5_coldown() : Esta función es similar a apply_vpts_rule5_colup(),
 pero se aplica a las celdas de la columna en orden inverso.
*/

void	apply_vpts_rule5_rowleft(short int solu_grid[][4],
			short int possi_grid[][4], short int *vpts, short int vpts_ind)
{
	int			row_ind;
	int			col_ind;
	short int	sol_val;
	int			num_hidden;

	row_ind = vpts_ind % 4;
	col_ind = 0;
	num_hidden = get_hidden_num(solu_grid, vpts_ind);
	if ((get_index_first_filled(solu_grid, vpts_ind)
			== (4 - vpts[vpts_ind] - num_hidden + 1))
		&& num_hidden != (4 - vpts[vpts_ind]))
	{
		sol_val = get_ind_most_sig(possi_grid[row_ind][col_ind]) + 1;
		solu_grid[row_ind][col_ind] = sol_val;
		update_possi_grid(solu_grid, possi_grid);
	}
}
/*
apply_vpts_rule5_rowleft() : Esta función es similar a apply_vpts_rule5_colup(),
 pero se aplica a las celdas de la fila en orden horizontal.
*/

void	apply_vpts_rule5_rowright(short int solu_grid[][4],
			short int possi_grid[][4], short int *vpts, short int vpts_ind)
{
	int			row_ind;
	int			col_ind;
	short int	sol_val;
	int			num_hidden;

	row_ind = vpts_ind % 4;
	col_ind = 3;
	num_hidden = get_hidden_num(solu_grid, vpts_ind);
	if ((get_index_first_filled(solu_grid, vpts_ind)
			== (4 - vpts[vpts_ind] - num_hidden + 1))
		&& num_hidden != (4 - vpts[vpts_ind]))
	{
		sol_val = get_ind_most_sig(possi_grid[row_ind][col_ind]) + 1;
		solu_grid[row_ind][col_ind] = sol_val;
		update_possi_grid(solu_grid, possi_grid);
	}
}

/*
apply_vpts_rule5_rowright() : Esta función es similar a apply_vpts_rule5_colup(),
 pero se aplica a las celdas de la fila en orden inverso.
*/