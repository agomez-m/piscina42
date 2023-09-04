/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io_funcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:14:53 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:39:41 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "io_funcs.h"

int	is_input_valid(char *args)
{
	int	args_ind;
	int	args_len;

	args_ind = 0;
	args_len = 0;
	while (args[args_len] != '\0')
		args_len++;
	if (args_len != 31)
		return (0);
	while (args_ind < args_len)
	{
		if ((args_ind % 2) == 0 && !(args[args_ind] >= '1'
				&& args[args_ind] <= '4'))
			return (0);
		if ((args_ind % 2) == 1 && !(args[args_ind] == ' '))
			return (0);
		args_ind++;
	}
	return (1);
}

/*
is_input_valid() : Esta función comprueba si la entrada del usuario es válida.
La función comprueba que la entrada tiene 31 caracteres, que cada número está entre 1 y 4, 
y que hay un espacio entre cada número.
*/

void	write_sol_to_stdout(short int solu_grid[][4])
{
	int		row_ind;
	int		col_ind;
	char	out_str[3];

	row_ind = 0;
	col_ind = 0;
	out_str[1] = ' ';
	while (row_ind < 4)
	{
		while (col_ind < 4)
		{
			out_str[0] = solu_grid[row_ind][col_ind] + '0';
			write(1, out_str, 1);
			if (col_ind < 3)
				write(1, out_str + 1, 1);
			col_ind++;
		}
		write(1, "\n", 1);
		col_ind = 0;
		row_ind++;
	}
}

/*
write_sol_to_stdout() : Esta función escribe la solución en la salida estándar.
La función recorre la matriz de solución y escribe cada número en la salida estándar, seguido de un espacio.
*/

void	str_split_to_int(short int *vpts, char *args)
{
	int	vpts_ind;
	int	args_ind;

	vpts_ind = 0;
	args_ind = 0;
	while (args_ind <= 31)
	{
		if (args[args_ind] >= '0' && args[args_ind] <= '9'
			&& (args[args_ind + 1] == ' ' || args[args_ind + 1] == '\0')
			&& vpts_ind < 16)
		{
			vpts[vpts_ind] = args[args_ind] - '0';
			vpts_ind += 1;
		}
		args_ind += 2;
	}
}

/*
str_split_to_int() : Esta función divide la cadena de entrada en números enteros.
La función recorre la cadena de entrada y, si el carácter actual es un número entre 0 y 9, 
lo convierte en un número entero y lo almacena en el array de números enteros.
*/
