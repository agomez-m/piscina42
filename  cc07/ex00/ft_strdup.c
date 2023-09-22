/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:51:26 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/22 12:12:40 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*nueva;
	int		i;
	int		j;

	i = 0;
	while (src[i] != '\0')
	{
		i ++;
	}
	nueva = (char *)malloc(i);
	if (nueva == NULL)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		nueva[j] = src[j];
		j++;
	}
	nueva[j] = '\0';

	return (nueva);
}

int	main(void)
{
	char	*str;
	char	*allocated;

	str = "malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = ft_strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
	free(allocated);
	return (0);
}
