/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:58:41 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/28 12:45:25 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizesrc;

	i = 0;
	sizesrc = ft_len(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (sizesrc);
}


int main ()
{
	char dest[] = "asdas";
	char src[] = "hola0123456789012";
	ft_strlcpy(dest,  src, 7);
	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%d\n", ft_len(src));
	printf("%d\n", ft_len(dest));
	return (0);
}
