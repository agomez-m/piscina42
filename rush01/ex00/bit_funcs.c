/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bit_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:55:25 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:19:42 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_bits(short int bin_num)
{
	short int	num_bits;

	num_bits = 0;
	num_bits += ((bin_num & 0b1000) > 0);
	num_bits += ((bin_num & 0b0100) > 0);
	num_bits += ((bin_num & 0b0010) > 0);
	num_bits += ((bin_num & 0b0001) > 0);
	return (num_bits);
}

/*
La función count_bits() cuenta el número de bits que están encendidos 
en un número binario. La función toma un número binario como argumento 
y devuelve el número de bits que están encendidos.
si el número binario es 1010, entonces la función count_bits() devolverá 2, 
ya que hay 2 bits encendidos (el bit 1 y el bit 3).
*/

int	get_ind_most_sig(short int bin_num)
{
	if (bin_num & 0b1000)
		return (3);
	else if (bin_num & 0b0100)
		return (2);
	else if (bin_num & 0b0010)
		return (1);
	else if (bin_num & 0b0001)
		return (0);
	else
		return (-1);
}

/*
La función get_ind_most_sig() encuentra el índice del bit más significativo (MSB)
de un número binario. La función toma un número binario como argumento 
y devuelve el índice del MSB.
*/

int	get_ind_least_sig(short int bin_num)
{
	if (bin_num & 0b0001)
		return (0);
	else if (bin_num & 0b0010)
		return (1);
	else if (bin_num & 0b0100)
		return (2);
	else if (bin_num & 0b1000)
		return (3);
	else
		return (-1);
}

/*
La función get_ind_least_sig() encuentra el índice del bit menos significativo (LSB)
 de un número binario. La función toma un número binario como argumento 
 y devuelve el índice del LSB.
*/