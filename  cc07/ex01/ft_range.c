/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 12:42:50 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/23 10:16:18 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	if (min >= max)
		return (0);
	res = malloc(max - min);
	if (!(res))
		return (0);
	while ((min + i) < max)
	{
		res[i] = min + i;
		i ++;
	}
	return (res);
}

int	main(void)
{
	int	i;
	int	*tab;

	i = 0;
	tab = ft_range(5, 16);
	while (i < (16 - 5))
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
