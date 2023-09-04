/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:59:00 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/14 14:57:58 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char	origen[] = "62456345!";
	char	destino[] = "olaa5";
	char	origen1[] = "32423vamos!";
	char	destino1[] = "olaa";

	ft_strcpy(destino, origen);
	printf("origen: %s\n", origen);
	printf("destino: %s\n", destino);
	printf("%s\n", ft_strcpy(destino1, origen1));
	return (0);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
