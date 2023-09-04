/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possi_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:17:30 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:43:06 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "possi_grid.h"

void	update_possi_grid(short int solu_grid[][4], short int possi_grid[][4])
{
	int	row_ind;
	int	col_ind;

	row_ind = 0;
	col_ind = 0;
	while (row_ind < 4)
	{
		while (col_ind < 4)
		{
			if (solu_grid[row_ind][col_ind] != 0)
				write_change_to_possi_grid(possi_grid, row_ind, col_ind,
					solu_grid[row_ind][col_ind]);
			col_ind++;
		}
		col_ind = 0;
		row_ind++;
	}
}

/*
update_possi_grid() : Esta función actualiza la matriz de posibilidades a partir de la matriz de solución.
La función recorre la matriz de solución y, si un valor no es 0, llama a la función write_change_to_possi_grid() 
para actualizar la matriz de posibilidades.
*/

void	write_change_to_possi_grid(short int possi_grid[][4], int row_ind,
			int col_ind, short int val)
{
	short int	bitmask;
	int			ind;

	ind = 0;
	while (ind < 4)
	{
		bitmask = ~(1 << (val - 1)); 
		possi_grid[row_ind][ind] = possi_grid[row_ind][ind] & bitmask;
		possi_grid[ind][col_ind] = possi_grid[ind][col_ind] & bitmask;
		possi_grid[row_ind][col_ind] = ~bitmask;
		ind++;
	}
}
 /*
bitmask = ~(1 << (val - 1));  asigna el complemento a 1 del valor val - 1 
a la variable bitmask. Esto se hace para que la máscara bitmask pueda usarse 
para borrar el valor val de la matriz possi_grid.
write_change_to_possi_grid() : Esta función escribe un cambio en la matriz de posibilidades.
La función toma el valor del elemento de la matriz de solución, c
alcula la máscara de bits que representa los bits que no son 0 en el valor,
y luego establece los bits correspondientes en la matriz de posibilidades a 0.
*/
