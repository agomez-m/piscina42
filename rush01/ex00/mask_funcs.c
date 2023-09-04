/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mask_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:15:33 by tjien-ji          #+#    #+#             */
/*   Updated: 2023/08/19 13:41:04 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

short int	get_mask_most_sig(short int bin_num)
{
	if (bin_num & 0b1000)
		return (0b1111);
	else if (bin_num & 0b0100)
		return (0b0111);
	else if (bin_num & 0b0010)
		return (0b0011);
	else if (bin_num & 0b0001)
		return (0b0001);
	else
		return (0b0000);
}

/*
get_mask_most_sig() : Esta función obtiene la máscara de los bits
 más significativos de un número binario.
La función examina el bit más significativo del número binario y devuelve una máscara que tiene 
todos los bits más significativos establecidos en 1 y todos los bits menos significativos establecidos en 0.
*/

short int	get_mask_n_bit(int n)
{
	int			nbit;
	short int	bitmask;

	nbit = 0;
	bitmask = 0;
	if (n < 0)
		return (0);
	while (nbit < n)
	{
		bitmask = bitmask | (1 << nbit);
		nbit++;
	}
	return (bitmask);
}
 /*
 get_mask_n_bit() : Esta función obtiene una máscara de bits con n bits establecidos en 1.
La función crea una máscara de bits con todos los bits inicializados en 0. 
Luego, recorre los bits del 0 al n-1 y establece cada bit en 1.
 */