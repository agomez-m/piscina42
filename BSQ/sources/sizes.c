/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:47:41 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/29 18:44:12 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	x_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[size] != NULL)
		size++;
	return (size);
}

int	y_size(char *row)
{
	int	size;

	size = 0;
	while (row[size] != '\0')
		size++;
	return (size);
}
