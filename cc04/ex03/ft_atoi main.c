/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:56:15 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/17 19:23:42 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_signos(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	signo;
	int	resultado;
	int	i;

	resultado = 0;
	signo = ft_signos(str, &i);
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		resultado *= 10;
		resultado += str[i] - 48;
		i++;
	}
	resultado *= signo;
	return (resultado);
}

int main ()
{
	printf("%d", ft_atoi("   ----+--42342j432"));
	return (0);
}

/*
ft_signos devuelve el signo y cambia el valor de i 
1 WHILE: el bucle corre mientras sea un espacio en blanco o 
un espacio normal 32 
Tabulación (9) Línea nueva (10) Retorno de carro (13)
CON ESTE BUCLE IGNORAMOS ESPACIOS EN BLANCO INICIALES
2.WHILE corre mientras sea 43 = "+" o 45 = "-"
count = count * -1
*ptr_i = i; devolvemos al puntero el valor de i, para que
la funcion atoi conozca desde donde debe empezar a leer
ft_atoi 
result = construir el entero resultante 
sign = ft_signos(str, &i) espacios y signos iniciales y
asigna el valor de retorno COUNT a sign y cambia el valor de i
1.WHILE itera mientras str no acabe y sea un numero 
en cada iteracion multiplica resulto por 10 y luego suma
el valor numerico del digito actual, convertido de ascii 
restando 48 para construir el entero 
cambiamos el signo procedente
devolvemos el resultado
*/