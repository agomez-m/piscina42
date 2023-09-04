/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:18:33 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/27 14:29:33 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_espacio(char c)
{
	if (c == ':' || c == '\t' || c == '\v' || c == '\f'
		|| c == '\n' || c == ' ' || c == '\r')
		return (1);
	return (0);
}

/*
 '\t': Representa un tabulador (tab).
'\v': Representa un espacio vertical (vertical tab).
'\f': Representa un salto de página (form feed).
'\n': Representa un salto de línea (newline).
' ': Representa un espacio en blanco normal (espacio).
'\r': Representa un retorno de carro (carriage return).
 */

int	ft_numero(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar (*str);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
