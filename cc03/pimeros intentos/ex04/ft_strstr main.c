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

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 0;
	x = 0;
	if (to_find[j] == '\0')
		return (str);
	while (to_find[x] != '\0')
		x++;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		if (to_find [j] == '\0')
			return (&str[i - x +1]);
		i++;
	}
	return (NULL);
}

int	main (void)
{
	char	cad[] = "holmuna mundo!";
	char	cad1[] = "und";

	printf("%s\n", ft_strstr(cad, cad1));
	return (0);
}


