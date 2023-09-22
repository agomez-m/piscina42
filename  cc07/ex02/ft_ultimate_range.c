/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agomez-m <agomez-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:03:48 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/23 18:06:42 by agomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*almac;

	if ((max - min) <= 0)
	{
		*range = NULL;
		return (0);
	}
	almac = malloc((max - min) * sizeof(int));
	if (!(almac))
		return (-1);
	*range = almac;
	i = 0;
	while (i < (max - min))
	{
		almac[i] = i + min;
		i++;
	}
	return (max - min);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max =20;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
