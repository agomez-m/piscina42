/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:00:34 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/26 19:38:54 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strdup(char *str)
{
	char	*destino;
	int		i;

	destino = (char *)malloc((sizeof(char) * ft_strlen(str)) + 1);
	if (!(destino))
		return (NULL);
	i = 0;
	while (str[i])
	{
		destino[i] = str[i];
		i++;
	}
	destino[i] = '\0';
	return (destino);
}
/*
Asignamos memoria a dest igual al tamaño de str
hay que ver donnde liberarla
 */

char	*ft_strstr(char *str, char *buscar)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (buscar[j] == str[i + j])
			j++;
		if (buscar[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

int	ft_atoi(char *s)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (ft_espacio(s[i]))
		i++;
	while (ft_numero(s[i]))
	{
		res = res * 10 + s[i] - 48;
		i++;
	}
	return (res);
}
