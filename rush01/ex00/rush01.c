/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:24:50 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:44:42 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "io_funcs.h"
#include "info_solve.h"
#include "edge_rules.h"
#include "sudoku_rule.h"
#include "elimination_rule.h"
#include "vpts_rules_main.h"

void	initialize_grids(short int solu_grid[][4], short int possi_grid[][4]);
void	apply_iterative_rules(short int solu_grid[][4],
			short int possi_grid[][4], short int *vpts);

int	main(int argc, char **argv)
{
	short int	solu_grid[4][4];
	short int	possi_grid[4][4];
	short int	vpts[16];

	if ((argc != 2) || !is_input_valid(argv[1]))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	str_split_to_int(vpts, argv[1]);
	initialize_grids(solu_grid, possi_grid);
	apply_edge_rules(solu_grid, vpts);
	while (!is_solved(solu_grid))
	{
		apply_iterative_rules(solu_grid, possi_grid, vpts);
		if (is_unsolvable(possi_grid))
			break ;
	}
	if (!is_solved(solu_grid) || !is_solution_valid(solu_grid, vpts))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	write_sol_to_stdout(solu_grid);
	return (0);
}

/*
main() : Esta es la función principal del programa.
Lee la entrada del usuario, inicializa las matrices de solución y posibilidades,
 aplica las reglas de los bordes, y luego aplica las reglas iterativas hasta que el sudoku esté resuelto o no se pueda resolver.
*/

void	initialize_grids(short int solu_grid[][4], short int possi_grid[][4])
{
	int	ind_row;
	int	ind_col;

	ind_row = 0;
	ind_col = 0;
	while (ind_row < 4)
	{
		while (ind_col < 4)
		{
			solu_grid[ind_row][ind_col] = 0;
			possi_grid[ind_row][ind_col] = 0b1111;
			ind_col++;
		}
		ind_col = 0;
		ind_row++;
	}
}

/*
initialize_grids() : Esta función inicializa las matrices de solución y posibilidades.
La función establece todos los valores de la matriz de solución a 0 y todos los valores
 de la matriz de posibilidades a 1111 (todos los bits están establecidos).
*/

void	apply_iterative_rules(short int solu_grid[][4],
			short int possi_grid[][4], short int *vpts)
{
	apply_sudoku_rule(solu_grid, possi_grid);
	apply_elimination_rule(solu_grid, possi_grid);
	apply_vpts_rules(solu_grid, possi_grid, vpts);
}

/*
apply_iterative_rules() : Esta función aplica las reglas iterativas al sudoku.
La función llama a las funciones apply_sudoku_rule(), apply_elimination_rule(), y apply_vpts_rules().
*/