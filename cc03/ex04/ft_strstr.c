/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:25:40 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/16 13:07:14 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

/*
comprueba si esta vacio
recorre str
compara eñ caracter en i de str con el caracter en j de to find 
si son iguales incrementa 
si el caracter en j de tofind es nulo se devuelve un puntero a la cadena str+i
si no son iguales los caracteres reinicia j
si i alcanza el final de str 
*/