/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numtonum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:41:04 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/27 19:05:15 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_diccion(char *s, char *dictionary);
int		ft_verificar(char *str);
int		ft_palabra(char *str);
void	ft_mostrar(char *s, int count);

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		ft_putstr("Error argumentos\n");
	if (argc == 2)
		if (!ft_diccion(argv[1], "numbers.dict"))
			ft_putstr("Error ft_diccion 0\n");
	if (argc == 3)
		if (!ft_diccion(argv[1], argv[2]))
			ft_putstr("Error con diccionario\n");
	return (0);
}

int	ft_diccion(char *s, char *dicc)
{
	char	*str;
	char	*tmp;
	char	buffer[10001];
	int		descarch;
	int		longitud;
	int		i;
	int		num;

	if (!ft_verificar (s))
		return (0);
	str = ft_strdup(ft_itoa(ft_atoi(s)));
	if (str == NULL)
		return (0);
	descarch = open(dicc, O_RDONLY);
	if (descarch == -1)
		return (0);
	if (read(descarch, buffer, 10000) == -1)
		return (0);
	buffer [10000] = '\0';
	longitud = ft_strlen(str);
	i = 0;
	num = ft_atoi(s);
	if (num >= 10 && num <= 19)
	{
		tmp = ft_strstr(buffer, str);
		if (tmp != NULL)
		{
			ft_mostrar(tmp + 2, 0);
			close(descarch);
			return (1);
		}
	}
	while (i < longitud)
	{
		int	digit;
		int power;
		int j;
		int	digitvalue;

		digit = str[i] - '0';
		if (str[2] != 1)
		{
			tmp = ft_strstr(buffer, ft_itoa(str[2]));
			if (tmp != NULL)
			{
				ft_mostrar(tmp + 2, 0);
			}
		}
		if (str[1] == 1)
		{
			
			
			break ;
		}
		if (i != 0 && digit == 0)
		{
			i++;
			break ;
		}
		power = 1;
		j = longitud - 1;
		while (j > i)
		{
			power = power *  10;
			j--;
		}
		digitvalue = digit * power;
		tmp = ft_strstr(buffer, ft_itoa(digitvalue));
		while (tmp != NULL)
		{
			if (ft_strstr(tmp, ":") == tmp + ft_strlen(ft_itoa(digitvalue)))
			{
				ft_mostrar(tmp + 2, 0);
				break ; 
			}
			tmp = ft_strstr(tmp + 1, ft_itoa(digitvalue));
		}
		write(1, " ", 1);
		i++;
	}
	close(descarch);
	return (1);
}
/*
 str = alamcena representacin de s sin espacios
 buffer = espacio para mas de 10000 caracteres + nulo, clonaremos dicc
 tmp = realiza busquedas en buffer
 descarch = Cuando abres un archivo en un programa, el sistema operativo
 asigna un número de descriptor de archivo a ese archivo abierto. Luego, 
 puedes usar este número para realizar operaciones de lectura, escritura 
 u otras operaciones relacionadas con ese archivo específico.
 O_RDONLY =  es una constante que indica que el archivo se abrirá en modo 
 de solo lectura, lo que significa que no se permitirán operaciones 
 de escritura en el archivo.
 si OPEN o READ falla devuelve -1
 */

int	ft_verificar(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (ft_espacio(str[i]))
		i++;
	while (str[i] && (str[i] != ' ' || num))
	{
		if (str[i] == '0')
			i++;
		else if (ft_numero(str[i]))
		{
			num++;
			i++;
		}
		else
			return (0);
	}
	while (ft_espacio(str[i]))
		i++;
	if (num == 0)
		return (0);
	return (1);
}
/*
Esta función verifica si la cadena de entrada str cumple ciertas 
condiciones.
Comienza ignorando los espacios en blanco al principio de la cadena.
Luego, verifica si la cadena comienza con '0' y contiene al menos un 
número
Finalmente, verifica que la cadena consista solo en espacios en blanco 
al final (después de los números)
Devuelve 1 si todas las condiciones se cumplen; de lo contrario, 
devuelve 0 cuando se incumpla alguna.
 */

int	ft_palabra(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
	{
		if (!ft_espacio(str[i]))
			return (1);
		i++;
	}
	return (0);
}

/*
devuelve 1 si encuentra una palabra dentro de str
 */

void	ft_mostrar(char *s, int contador)
{
	while (ft_espacio (*s))
			s++;
	while (!ft_espacio(*s) && *s != '\n')
	{
		ft_putchar(*s);
		s++;
		contador++;
	}
	if (ft_palabra(s))
	{
		ft_putchar(' ');
		return (ft_mostrar(s, contador + 1));
	}
	else
		return ;
}

/*
Esta función imprime palabras de la cadena s
omitiendo los espacios en blanco al principio.
La variable contador lleva un registro del número de caracteres impresos.
coloca un espacio (' ') entre las palabras.
Have una llamada recursiva para imprimir todas las palabras en la cadena.
*/
