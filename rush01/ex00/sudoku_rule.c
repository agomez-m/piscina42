/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_rule.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:25:12 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:49:12 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_rule.h"
#include "possi_grid.h"
#include "bit_funcs.h"

static void	sudoku_rule_state_init(short int *row_has_num,
				short int *col_has_num, short int *row_ind, short int *col_ind);

/*
sudoku_rule_state_init() : Esta función inicializa el estado de la regla de sudoku.
La función establece los valores de las variables row_has_num, col_has_num, row_ind, y col_ind a 0, -1, respectivamente.
*/

void	apply_sudoku_rule(short int solu_grid[][4], short int possi_grid[][4])
{
	short int	val;

	val = 0;
	while (++val <= 4)
	{
		apply_sudoku_rule_val(solu_grid, val);
	}
	update_possi_grid(solu_grid, possi_grid);
}

/*
apply_sudoku_rule() : Esta función aplica la regla de sudoku al sudoku.
La función itera sobre todos los valores de 1 a 4. Para cada valor, la función llama a la función apply_sudoku_rule_val().
*/

void	apply_sudoku_rule_val(short int solu_grid[][4], short int val)
{
	short int	row_has_num;
	short int	col_has_num;
	short int	row_ind;
	short int	col_ind;

	sudoku_rule_state_init(&row_has_num, &col_has_num, &row_ind, &col_ind);
	while (++val <= 4)
	{
		while (++row_ind < 4)
		{
			while (++col_ind < 4)
			{
				if (solu_grid[row_ind][col_ind] == val)
				{
					row_has_num = row_has_num | (1 << row_ind);
					col_has_num = col_has_num | (1 << col_ind);
				}
			}
			col_ind = -1;
		}
		write_sudoku_change(solu_grid, val, row_has_num, col_has_num);
		sudoku_rule_state_init(&row_has_num, &col_has_num, &row_ind, &col_ind);
	}
}

/*
apply_sudoku_rule_val() : Esta función aplica la regla de sudoku para un valor específico.
La función itera sobre todas las filas y columnas. Para cada fila y columna, la función establece 
el bit correspondiente en la variable row_has_num o col_has_num si el valor se encuentra en esa fila o columna.
Al final de la iteración, la función llama a la función write_sudoku_change()
*/


void	write_sudoku_change(short int solu_grid[][4], short int val
			, short int row_has_num, short int col_has_num)
{
	short int	row_num;
	short int	col_num;
	short int	*ptr;

	row_num = (~row_has_num) & 0b1111;
	col_num = (~col_has_num) & 0b1111;
	if ((count_bits(row_num) == 1) && (count_bits(col_num) == 1))
	{
		ptr = &solu_grid[get_ind_most_sig(row_num)][get_ind_most_sig(col_num)];
		*ptr = val;
	}
}

/*
write_sudoku_change() : Esta función escribe un cambio en la matriz de solución.
La función calcula los números de fila y columna que solo tienen un bit establecido 
en las variables row_has_num y col_has_num respectivamente.
La función luego escribe el valor dado en la celda de la matriz de solución
 en la intersección de la fila y columna calculadas.
*/

static void	sudoku_rule_state_init(short int *row_has_num,
				short int *col_has_num, short int *row_ind, short int *col_ind)
{
	*row_has_num = 0;
	*col_has_num = 0;
	*row_ind = -1;
	*col_ind = -1;
}

/*
sudoku_rule_state_init() : Esta función inicializa el estado de la regla de sudoku.
La función establece los valores de las variables row_has_num, col_has_num, row_ind,
 y col_ind a 0, -1, respectivamente.
En resumen, esta función inicializa el estado de la regla de sudoku para que pueda 
comenzar a aplicar la regla a la matriz de solución.
*/