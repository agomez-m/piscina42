/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:38:51 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/14 16:00:28 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char origen[] = "Hello, world!";
    char destino[20];

    ft_strncpy(destino, origen, 3);

    printf("origen: %s\n", origen);
    printf("destino: %s\n", destino);
    return (0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i <  n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;

	}
	while (i < n)
	{
		dest[i] =  '\0';
		i++;
	}
	return (dest);
}
