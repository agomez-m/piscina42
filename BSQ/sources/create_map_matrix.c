/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javperez <javperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:08:37 by agomez-m          #+#    #+#             */
/*   Updated: 2023/08/30 13:28:05 by javperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

char	**create_map_matrix(char *rows[])
{
	int		num_rows;
	int		i;
	int		row_size;
	char	**matrix;

	num_rows = 0;
	while (rows[num_rows] != NULL)
		num_rows++;
	matrix = (char **)malloc((num_rows + 1) * sizeof(char *));
	i = 0;
	while (i < num_rows)
	{
		row_size = y_size(rows[i]);
		matrix[i] = (char *)malloc((row_size + 1) * sizeof(char));
		ft_strcpy(matrix[i], rows[i]);
		i++;
	}
	matrix[num_rows] = NULL;
	return (matrix);
}
