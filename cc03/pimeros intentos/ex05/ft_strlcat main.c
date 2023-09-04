/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:40:45 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/16 13:59:39 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	x;
	int	k;

	i = 0;
	k = 0;
	x = 0;
	j = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[x] != '\0')
	{
		x++;
	}
	if (size == 0 || size <= k)
		return (x + size);
	while (src[j] != '\0' && j <= (size - 1 - k))
	{
		dest[i + k] = src[j];
		i++;
		j++;
	}
	dest[i + k] = '\0';
	return (k + x );
}

int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "1337 42";
    printf("%i \n", ft_strlcat(dest, src, 2));
    printf("%s \n", dest);
}	

