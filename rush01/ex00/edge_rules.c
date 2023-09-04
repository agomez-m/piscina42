/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edge_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:56:04 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:14:15 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "edge_rules.h"

void	apply_edge_rules(short int solu_grid[][4], short int *vpts)
{
	apply_edge_rules1(solu_grid, vpts);
	apply_edge_rules4(solu_grid, vpts);
}

/*
apply_edge_rules() aplica las reglas de los bordes a la cuadrícula de solución
*/

void	apply_edge_rules1(short int solu_grid[][4], short int *vpts)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (vpts[i] == 1)
		{
			if (i >= 0 && i <= 3)
				solu_grid[0][i] = 4;
			else if (i >= 4 && i <= 7)
				solu_grid[3][i % 4] = 4;
			else if (i >= 8 && i <= 11)
				solu_grid[i % 4][0] = 4;
			else if (i >= 12 && i <= 15)
				solu_grid[i % 4][3] = 4;
		}
		i++;
	}
}

/*
apply_edge_rules1() para aplicar las reglas de los bordes a las celdas
n los bordes EXTERIORES de la cuadrícula
La función hace esto configurando el valor de la celda en 4 si la celda 
está en el borde de la cuadrícula y el valor de la celda es 1.
*/

void	apply_edge_rules4(short int solu_grid[][4], short int *vpts)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (vpts[i] == 4)
		{
			if (i >= 0 && i <= 3)
				change_col_rules4(solu_grid, i, 1);
			else if (i >= 4 && i <= 7)
				change_col_rules4(solu_grid, i % 4, -1);
			else if (i >= 8 && i <= 11)
				change_row_rules4(solu_grid, i % 4, 1);
			else if (i >= 12 && i <= 15)
				change_row_rules4(solu_grid, i % 4, -1);
		}
		i++;
	}
}

/*
apply_edge_rules4() para aplicar las reglas de los bordes a las celdas 
en los bordes INTERIORES de la cuadrícula.
La función hace esto cambiando los valores de las celdas en la fila o columna 
que contiene la celda, según el valor del parámetro de modo.
Si el parámetro de modo es 1, entonces los valores de las celdas en la fila 
o columna se incrementan en 1.
Si el parámetro de modo es -1, entonces los valores de las celdas en la fila 
o columna se decrementan en 1.

*/

void	change_col_rules4(short int solu_grid[][4], int col_num, int mode)
{
	int	ind;

	ind = 0;
	while (ind < 4)
	{
		if (mode == 1)
			solu_grid[ind][col_num] = ind + 1;
		else
			solu_grid[3 - ind][col_num] = ind + 1;
		ind++;
	}
}

/*
change_col_rules4() : Esta función cambia los valores de las celdas en 
una columna de la cuadrícula de solución, según el valor del parámetro de modo.
Si el parámetro de modo es 1, entonces los valores de las celdas en la columna 
se incrementan en 1.
Si el parámetro de modo es -1, entonces los valores de las celdas en la columna 
se decrementan en 1.
*/

void	change_row_rules4(short int solu_grid[][4], int row_num, int mode)
{
	int	ind;

	ind = 0;
	while (ind < 4)
	{
		if (mode == 1)
			solu_grid[row_num][ind] = ind + 1;
		else
			solu_grid[row_num][3 - ind] = ind + 1;
		ind++;
	}
}

/*
change_row_rules4() : Esta función cambia los valores de las celdas en una fila 
de la cuadrícula de solución, según el valor del parámetro de modo.
Si el parámetro de modo es 1, entonces los valores de las celdas en la fila 
se incrementan en 1.
Si el parámetro de modo es -1, entonces los valores de las celdas en la fila 
se decrementan en 1.
*/
