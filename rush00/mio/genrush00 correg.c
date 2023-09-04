/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   genrush00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:32:30 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/12 15:21:37 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int cantidad) //imprime un caracter especificado c cierta cantidad de veces
{
	char	buffer[cantidad];
	char	*ptr; //administrar el buffer (el buffer contiene el carcater repetido)
	int	i;

	*ptr = buffer;
	i = 0;
	while (i < cantidad)
	{
		*ptr++ = c;
		i++;
	}
	write(1, &buffer, cantidad); //imprime el contenido del buffer en el flujo estandar 1
}

void	rush(int filas, int columnas)
{
	if (filas <= 0 || columnas <= 0) //verifica si las dimesiones son validas
	{
		write(1, "Dimensiones inválidas.\n", 23);
		return;
	}
	char	nuevalinea = '\n';
	char	diagonal = '/';
	char	asterisco = '*';
	char	espacio = ' ';
	char	contradiagonal = '\\';
	int	i;

	i = 0;
	while (i < filas) //Construiremos por filas, de una en una. se ejecuta "filas" veces 
	{
		if (i == 0 || i == filas - 1) //verifica si la fila es la primera o la ultima
		{
			write(1, &diagonal, 1);//principio (1,1)
			if (columnas > 1) //si hay mas de 1 columna usamos ft_putchar para imprimir *
			{
				ft_putchar(asterisco, columnas - 2); //borde exterior
				write(1, &contradiagonal, 1); //final esquina			}
		}
		else
		{
			write(1, &asterisco, 1);
			if (columnas > 1) // si hay mas de 1 columna usamos ft_putchar para imprimir los espacios 
			{
				ft_putchar(espacio, columnas - 2); //relleno interior 
				write(1, &asterisco, 1);
			}
		}
		write(1, &nuevalinea, 1); //termina la construccion de fila y pasamos a la siguiente 
		i++;
	}
}

int	main(void)
{
	rush(5, 3);
	write(1, "\n", 1);
	rush(5, 1);
	write(1, "\n", 1);
	rush(1, 1);
	write(1, "\n", 1);
	rush(1, 5);
	write(1, "\n", 1);
	rush(4, 4);
	write(1, "\n", 1);
	return (0);
}
