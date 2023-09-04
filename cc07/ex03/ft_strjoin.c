/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:19:21 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/23 17:23:59 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_tamtotal(char **strs, int size, char *sep)
{
	int	i;
	int	tam;

	i = 0;
	tam = 0;
	while (i < size)
	{
		tam = tam + ft_len(strs[i]);
		if (!(i == size - 1))
			tam = tam + ft_len(sep);
		i++;
	}
	tam = tam - ft_len(sep);
	return (tam);
}

char	*ft_copy(char *dest, char *tocopy)
{
	int	i;

	i = 0;
	while (tocopy[i] != '\0')
	{
		dest[i] = tocopy[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		tam;
	int		i;
	char	*strings;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	tam = ft_tamtotal(strs, size, sep);
	strings = (char *)malloc((tam + 1) * sizeof(char));
	d = strings;
	if (!(d))
		return (0);
	i = 0;
	while (i < size)
	{
		ft_copy (d, strs[i]);
		d = d + ft_len(strs[i]);
		if (!(i == size - 1))
		{
			ft_copy (d, sep);
			d = d + ft_len(sep);
		}
		i ++;
	}
	*d = '\0';
	return (strings);
}

int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * (ft_len("Hola!") + 1));
	strs[0] = "Hola!";
	strs[1] = (char *)malloc(sizeof(char) * (ft_len("joven") + 1));
	strs[1] = "joven";
	strs[2] = (char *)malloc(sizeof(char) * (ft_len("padawan") + 1));
	strs[2] = "padawan";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
	free(strs);
}

/*
ft_copy (d, strs[i]);
d = d + ft_len(strs[i]); Después de la copia, d avanzará para apuntar 
al final de la cadena recién copiada
if (!(i == size - 1))
con esta linea ejecutamos el codigo hasta llegar a la linea penultima

*d
usamos este puntero adicional para no perder en strings la direccion
al incio de la cadena, si devolvieramos d, est epodria estar apuntando 
a otra direccion que no sea el inicio de strings

*/