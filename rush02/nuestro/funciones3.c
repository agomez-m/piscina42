/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:52:27 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/26 19:48:35 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_digit_num(int n)
{
	int	i;

	i = 1;
	while (n / 10 > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

/*
 i representa la cantidad total de dígitos en el número original n.
 */

void	ft_motor_itoa(char *str, int n)
{
	if (n / 10 > 0)
		ft_motor_itoa(str - 1, n / 10);
	*str = (n % 10) + 48;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digitos;

	digitos = ft_digit_num(n);
	str = (char *)malloc(sizeof(char) * digitos + 1);
	if (!(str))
		return (NULL);
	str[digitos] = '\0';
	ft_motor_itoa(str + digitos - 1, n);
	return (str);
}
/*
las funciones ft_motor_itoa y ft_itoa trabajan juntas para convertir un número 
entero n en una cadena de caracteres (string) que representa ese número en 
formato de texto.
ft_motor_itoa procesa digitos de dcha a izda y es recursiva, 
Comienza comprobando si n es mayor que o igual a 10 (n / 10 > 0). 
Si es así, se llama a si misma de nuevo con str desplazado a la izquierda 
(restando 1 al puntero) y n dividido por 10
dentro de itoa La función ft_motor_itoa se llama para llenar la cadena str 
con los dígitos de n. Comienza desde el final de la cadena (str + length - 1) 
y trabaja hacia atrás.
*/
